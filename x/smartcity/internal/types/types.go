package types

import (
	"fmt"
	"strings"

	sdk "github.com/cosmos/cosmos-sdk/types"
)

// MinNamePrice is Initial Starting Price for a name that was never previously owned
//var MinNamePrice = sdk.Coins{sdk.NewInt64Coin("nametoken", 1)}

// GiveInfo is a struct that contains all the metadata of a name
type GiveInfo struct {
	TIMESTAMP string         //`json:"timestamp"`
	CO2       string         //`json:"co2"`
	CO        string         //`json:"co"`
	PH        string         //`json:"ph"`
	TURBI     string         //`json:"turbi"`
	LONGITUDE string         //`json:"longitude"`
	LATITUDE  string         //`json:"latitude"`
	Owner     sdk.AccAddress `json:"owner"`
	//Price sdk.Coins      `json:"price"`
}

// NewGiveInfo returns a new GiveInfo with the minprice as the price
/*func NewGiveInfo() GiveInfo {
	return GiveInfo{
		Price: MinNamePrice,
	}
}*/

// implement fmt.Stringer
func (w GiveInfo) String() string {

	return strings.TrimSpace(fmt.Sprintf(`%s 
%s
%s
%s
%s
%s
%s
%s`, w.Owner, w.TIMESTAMP, w.CO2, w.CO, w.PH, w.TURBI, w.LONGITUDE, w.LATITUDE))
}
