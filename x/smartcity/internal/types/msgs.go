package types

import (
	sdk "github.com/cosmos/cosmos-sdk/types"
)

// RouterKey is the module name router key
const RouterKey = ModuleName // this was defined in your key.go file

// MsgSetInfo defines a SetInfo message
/*type MsgSetInfo struct {
	Name  string         `json:"name"`
	Value string         `json:"value"`
	Owner sdk.AccAddress `json:"owner"`
}

// NewMsgSetInfo is a constructor function for MsgSetInfo
func NewMsgSetInfo(name string, value string, owner sdk.AccAddress) MsgSetInfo {
	return MsgSetInfo{
		Name:  name,
		Value: value,
		Owner: owner,
	}
}

// Route should return the name of the module
func (msg MsgSetInfo) Route() string { return RouterKey }

// Type should return the action
func (msg MsgSetInfo) Type() string { return "set_info" }

// ValidateBasic runs stateless checks on the message
func (msg MsgSetInfo) ValidateBasic() sdk.Error {
	if msg.Owner.Empty() {
		return sdk.ErrInvalidAddress(msg.Owner.String())
	}
	if len(msg.Name) == 0 || len(msg.Value) == 0 {
		return sdk.ErrUnknownRequest("Info and/or Value cannot be empty")
	}
	return nil
}

// GetSignBytes encodes the message for signing
func (msg MsgSetInfo) GetSignBytes() []byte {
	return sdk.MustSortJSON(ModuleCdc.MustMarshalJSON(msg))
}

// GetSigners defines whose signature is required
func (msg MsgSetInfo) GetSigners() []sdk.AccAddress {
	return []sdk.AccAddress{msg.Owner}
}*/

// MsgGetInfo defines the GetInfo message
type MsgGetInfo struct {
	TIMESTAMP string `json:"timestamp"`
	CO2       string `json:"co2"`
	CO        string `json:"co"`
	PH        string `json:"ph"`
	TURBI     string `json:"turbi"`
	LONGITUDE string `json:"longitude"`
	LATITUDE  string `json:"latitude"`
	//Bid   sdk.Coins      `json:"bid"`
	Getter sdk.AccAddress `json:"getter"`
}

// NewMsgGetInfo is the constructor function for MsgGetInfo
func NewMsgGetInfo(timestamp string, co2 string, co string, ph string, turbi string, longitude string, latitude string, getter sdk.AccAddress) MsgGetInfo {
	return MsgGetInfo{
		TIMESTAMP: timestamp,
		CO2:       co2,
		CO:        co,
		PH:        ph,
		TURBI:     turbi,
		LONGITUDE: longitude,
		LATITUDE:  latitude,
		//Bid:   bid,
		Getter: getter,
	}
}

// Route should return the name of the module
func (msg MsgGetInfo) Route() string { return RouterKey }

// Type should return the action
func (msg MsgGetInfo) Type() string { return "get-info" }

// ValidateBasic runs stateless checks on the message
func (msg MsgGetInfo) ValidateBasic() sdk.Error {
	if msg.Getter.Empty() {
		return sdk.ErrInvalidAddress(msg.Getter.String())
	}
	if len(msg.TIMESTAMP) == 0 {
		return sdk.ErrUnknownRequest("Info cannot be empty")
	}
	//if !msg.Bid.IsAllPositive() {
	//	return sdk.ErrInsufficientCoins("Bids must be positive")
	//}
	return nil
}

// GetSignBytes encodes the message for signing
func (msg MsgGetInfo) GetSignBytes() []byte {
	return sdk.MustSortJSON(ModuleCdc.MustMarshalJSON(msg))
}

// GetSigners defines whose signature is required
func (msg MsgGetInfo) GetSigners() []sdk.AccAddress {
	return []sdk.AccAddress{msg.Getter}
}

// MsgDeleteInfo defines a DeleteInfo message
type MsgDeleteInfo struct {
	Name  string         `json:"name"`
	Owner sdk.AccAddress `json:"owner"`
}

// NewMsgDeleteInfo is a constructor function for MsgDeleteInfo
func NewMsgDeleteInfo(name string, owner sdk.AccAddress) MsgDeleteInfo {
	return MsgDeleteInfo{
		Name:  name,
		Owner: owner,
	}
}

// Route should return the name of the module
func (msg MsgDeleteInfo) Route() string { return RouterKey }

// Type should return the action
func (msg MsgDeleteInfo) Type() string { return "delete_info" }

// ValidateBasic runs stateless checks on the message
func (msg MsgDeleteInfo) ValidateBasic() sdk.Error {
	if msg.Owner.Empty() {
		return sdk.ErrInvalidAddress(msg.Owner.String())
	}
	if len(msg.Name) == 0 {
		return sdk.ErrUnknownRequest("Info cannot be empty")
	}
	return nil
}

// GetSignBytes encodes the message for signing
func (msg MsgDeleteInfo) GetSignBytes() []byte {
	return sdk.MustSortJSON(ModuleCdc.MustMarshalJSON(msg))
}

// GetSigners defines whose signature is required
func (msg MsgDeleteInfo) GetSigners() []sdk.AccAddress {
	return []sdk.AccAddress{msg.Owner}
}
