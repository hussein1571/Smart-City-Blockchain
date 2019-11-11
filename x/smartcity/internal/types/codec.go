package types

import (
	"github.com/cosmos/cosmos-sdk/codec"
)

// ModuleCdc is the codec for the module
var ModuleCdc = codec.New()

func init() {
	RegisterCodec(ModuleCdc)
}

// RegisterCodec registers concrete types on the Amino codec
func RegisterCodec(cdc *codec.Codec) {
	//cdc.RegisterConcrete(MsgSetInfo{}, "smartcity/SetInfo", nil)
	cdc.RegisterConcrete(MsgGetInfo{}, "smartcity/GetInfo", nil)
	cdc.RegisterConcrete(MsgDeleteInfo{}, "smartcity/DeleteInfo", nil)
}
