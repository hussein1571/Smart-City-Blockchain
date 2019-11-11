package keeper

import (
	"github.com/cosmos/cosmos-sdk/codec"
	sdk "github.com/cosmos/cosmos-sdk/types"
	"github.com/cosmos/cosmos-sdk/x/bank"
	"github.com/hussein1571/smartcity/x/smartcity/internal/types"
)

// Keeper maintains the link to storage and exposes getter/setter methods for the various parts of the state machine
type Keeper struct {
	CoinKeeper bank.Keeper

	storeKey sdk.StoreKey // Unexposed key to access store from sdk.Context

	cdc *codec.Codec // The wire codec for binary encoding/decoding.
}

// NewKeeper creates new instances of the smartcity Keeper
func NewKeeper(coinKeeper bank.Keeper, storeKey sdk.StoreKey, cdc *codec.Codec) Keeper {
	return Keeper{
		CoinKeeper: coinKeeper,
		storeKey:   storeKey,
		cdc:        cdc,
	}
}

// Gets the entire GiveInfo metadata struct for a name
func (k Keeper) GetGiveInfo(ctx sdk.Context, name string) types.GiveInfo {
	store := ctx.KVStore(k.storeKey)
	//if !k.IsNamePresent(ctx, name) {
	//	return types.NewGiveInfo()
	//}
	bz := store.Get([]byte(name))
	var GiveInfo types.GiveInfo
	k.cdc.MustUnmarshalBinaryBare(bz, &GiveInfo)
	return GiveInfo
}

// Sets the entire GiveInfo metadata struct for a name
func (k Keeper) SetGiveInfo(ctx sdk.Context, name string, GiveInfo types.GiveInfo) {
	if GiveInfo.Owner.Empty() {
		return
	}
	store := ctx.KVStore(k.storeKey)
	store.Set([]byte(name), k.cdc.MustMarshalBinaryBare(GiveInfo))
}

// Deletes the entire GiveInfo metadata struct for a name
func (k Keeper) DeleteGiveInfo(ctx sdk.Context, name string) {
	store := ctx.KVStore(k.storeKey)
	store.Delete([]byte(name))
}

// ResolveName - returns the string that the name resolves to
/*func (k Keeper) ResolveName(ctx sdk.Context, name string) string {
	return k.GetGiveInfo(ctx, name).Value
}*/

// SetInfo - sets the value string that a name resolves to
func (k Keeper) GetInfo(ctx sdk.Context, timestamp string, co2 string, co string, ph string, turbi string, longitude string, latitude string) {
	GiveInfo := k.GetGiveInfo(ctx, timestamp)
	GiveInfo.TIMESTAMP = timestamp
	GiveInfo.CO2 = co2
	GiveInfo.CO = co
	GiveInfo.PH = ph
	GiveInfo.TURBI = turbi
	GiveInfo.LONGITUDE = longitude
	GiveInfo.LATITUDE = latitude
	k.SetGiveInfo(ctx, timestamp, GiveInfo)
}

// HasOwner - returns whether or not the name already has an owner
func (k Keeper) HasOwner(ctx sdk.Context, name string) bool {
	return !k.GetGiveInfo(ctx, name).Owner.Empty()
}

// GetOwner - get the current owner of a name
func (k Keeper) GetOwner(ctx sdk.Context, name string) sdk.AccAddress {
	return k.GetGiveInfo(ctx, name).Owner
}

// SetOwner - sets the current owner of a name
func (k Keeper) SetOwner(ctx sdk.Context, timestamp string, co2 string, co string, ph string, turbi string, longitude string, latitude string, owner sdk.AccAddress) {
	GiveInfo := k.GetGiveInfo(ctx, timestamp)
	GiveInfo.TIMESTAMP = timestamp
	GiveInfo.CO2 = co2
	GiveInfo.CO = co
	GiveInfo.PH = ph
	GiveInfo.TURBI = turbi
	GiveInfo.LONGITUDE = longitude
	GiveInfo.LATITUDE = latitude
	GiveInfo.Owner = owner
	k.SetGiveInfo(ctx, timestamp, GiveInfo)
}

// GetPrice - gets the current price of a name
/*func (k Keeper) GetPrice(ctx sdk.Context, name string) sdk.Coins {
	return k.GetGiveInfo(ctx, name).Price
}*/

// SetPrice - sets the current price of a name
/*func (k Keeper) SetPrice(ctx sdk.Context, name string, price sdk.Coins) {
	GiveInfo := k.GetGiveInfo(ctx, name)
	GiveInfo.Price = price
	k.SetGiveInfo(ctx, name, GiveInfo)
}*/

// Get an iterator over all names in which the keys are the names and the values are the GiveInfo
func (k Keeper) GetNamesIterator(ctx sdk.Context) sdk.Iterator {
	store := ctx.KVStore(k.storeKey)
	return sdk.KVStorePrefixIterator(store, nil)
}

// Check if the name is present in the store or not
func (k Keeper) IsNamePresent(ctx sdk.Context, name string) bool {
	store := ctx.KVStore(k.storeKey)
	return store.Has([]byte(name))
}
