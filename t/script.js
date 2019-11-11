var ttn = require('ttn');
var fs = require('fs');

var http = require('http');
var GeocoderGeonames = require('geocoder-geonames');




//TTN packet receving

const appID = "testbiota";
const accessKey = "ttn-account-v2.ZPDrLB75qM6S88Z_p04MW628jlh6IOzcg5Tr-UrEtck";

// discover handler and open mqtt connection
ttn.data(appID, accessKey)
  .then(function (client) {

    console.log("TTN Connection established, waiting for payload");
    client.on("uplink", function (devID, message) {
      // Affichage des relevées des capteurs de TTN
      console.log("Received uplink from ", devID);
      console.log(message.payload_fields);
      console.log(message.payload_fields.Carbondi);
      console.log(message.payload_fields.Carbonmono);
      console.log(message.payload_fields.PHvalue);
      console.log(message.payload_fields.Turbi);
      



      // Recherche du Pays et de la ville du device (capteurs) à partir de la latitude et de la longitude provenant de TTN
      console.log("Latitude : ", message.metadata.latitude);
      console.log("Longitude : ", message.metadata.longitude);

      // Utilisation de l'api GEOCODEER de Geonames
      // cf : https://github.com/StephanGeorg/geocoder-geonames
      let pays;
      let ville;

      geocoder = new GeocoderGeonames({
        username: 'biot_ausy',
      });

      geocoder.get('findNearbyPlaceName', {
        lat: message.metadata.latitude,
        lng: message.metadata.longitude
      }).then(function (response) {
        pays = response.geonames[0].countryName;
        ville = response.geonames[0].toponymName;
        console.log(response.geonames[0].countryName);
        console.log(response.geonames[0].toponymName);

        // Transformation de la date (string) en timestamp (millisecondes)
        let timestamp = Date.parse(message.metadata.time);
	console.log(timestamp);
        //Enregistrement des données dans MongoDB se trouvant sur le PC Hote (miner + angular + mongo)
        const data = JSON.stringify({
          "pays": pays,
          "region": ville,
          "device": devID,
          "date": timestamp,
          "record": { "CO": message.payload_fields.Carbonmono, "CO2": message.payload_fields.Carbondi, "PH": message.payload_fields.PHvalue, "Turbi": message.payload_fields.Turbi }
        });
var data2 = message.payload_fields.Carbondi + " " + message.payload_fields.Carbonmono + " " + message.payload_fields.PHvalue + " " + message.payload_fields.Turbi + " " + timestamp + " " + message.metadata.latitude + " " + message.metadata.longitude + "\n";
        

 fs.appendFile('n1.txt', data2, function (err) {
   if (err) throw err;
   console.log('Saved!');
});



     }).catch(function (error) {
       console.log(error);
      });



    })
  })
  .catch(function (err) {
    console.error(err);
    process.exit(1);
    
  })

