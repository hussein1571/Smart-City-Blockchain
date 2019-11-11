package smartcity

import (
	"fmt"

	"github.com/hussein1571/smartcity/x/smartcity/internal/types"

	sdk "github.com/cosmos/cosmos-sdk/types"
)

// NewHandler returns a handler for "smartcity" type messages.
func NewHandler(keeper Keeper) sdk.Handler {
	return func(ctx sdk.Context, msg sdk.Msg) sdk.Result {
		switch msg := msg.(type) {
		//case MsgSetInfo:
		//	return handleMsgSetInfo(ctx, keeper, msg)
		case MsgGetInfo:
			return handleMsgGetInfo(ctx, keeper, msg)
		case MsgDeleteInfo:
			return handleMsgDeleteInfo(ctx, keeper, msg)
		default:
			errMsg := fmt.Sprintf("Unrecognized nameservice Msg type: %v", msg.Type())
			return sdk.ErrUnknownRequest(errMsg).Result()
		}
	}
}

// Handle a message to set name
/*func handleMsgSetInfo(ctx sdk.Context, keeper Keeper, msg MsgSetInfo) sdk.Result {
	if !msg.Owner.Equals(keeper.GetOwner(ctx, msg.Name)) { // Checks if the the msg sender is the same as the current owner
		return sdk.ErrUnauthorized("Incorrect Owner").Result() // If not, throw an error
	}
	keeper.SetInfo(ctx, msg.Name, msg.Value) // If so, set the name to the value specified in the msg.
	return sdk.Result{}                      // return
}*/

// Handle a message to buy name
func handleMsgGetInfo(ctx sdk.Context, keeper Keeper, msg MsgGetInfo) sdk.Result {
	// Checks if the the bid price is greater than the price paid by the current owner
	//if keeper.GetPrice(ctx, msg.Name).IsAllGT(msg.Bid) {
	//	return sdk.ErrInsufficientCoins("Bid not high enough").Result() // If not, throw an error
	//}
	//if keeper.HasOwner(ctx, msg.Name) {
	//	err := keeper.CoinKeeper.SendCoins(ctx, msg.Getter, keeper.GetOwner(ctx, msg.Name), msg.Bid)
	//	if err != nil {
	//		return sdk.ErrInsufficientCoins("Getter does not have enough coins").Result()
	//	}
	//} else {
	//	_, err := keeper.CoinKeeper.SubtractCoins(ctx, msg.Getter, msg.Bid) // If so, deduct the Bid amount from the sender
	//	if err != nil {
	//		return sdk.ErrInsufficientCoins("Getter does not have enough coins").Result()
	//	}
	//}
	keeper.GetInfo(ctx, msg.TIMESTAMP, msg.CO2, msg.CO, msg.PH, msg.TURBI, msg.LONGITUDE, msg.LATITUDE)
	keeper.SetOwner(ctx, msg.TIMESTAMP, msg.CO2, msg.CO, msg.PH, msg.TURBI, msg.LONGITUDE, msg.LATITUDE, msg.Getter)
	//keeper.SetPrice(ctx, msg.Name, msg.Bid)
	return sdk.Result{}
}

// Handle a message to delete name
func handleMsgDeleteInfo(ctx sdk.Context, keeper Keeper, msg MsgDeleteInfo) sdk.Result {
	if !keeper.IsNamePresent(ctx, msg.Name) {
		return types.ErrNameDoesNotExist(types.DefaultCodespace).Result()
	}
	if !msg.Owner.Equals(keeper.GetOwner(ctx, msg.Name)) {
		return sdk.ErrUnauthorized("Incorrect Owner").Result()
	}

	keeper.DeleteGiveInfo(ctx, msg.Name)
	return sdk.Result{}
}
