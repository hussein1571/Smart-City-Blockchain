package smartcity

import (
	"github.com/hussein1571/smartcity/x/smartcity/internal/keeper"
	"github.com/hussein1571/smartcity/x/smartcity/internal/types"
)

const (
	ModuleName = types.ModuleName
	RouterKey  = types.RouterKey
	StoreKey   = types.StoreKey
)

var (
	NewKeeper        = keeper.NewKeeper
	NewQuerier       = keeper.NewQuerier
	NewMsgGetInfo    = types.NewMsgGetInfo
	//NewMsgSetInfo    = types.NewMsgSetInfo
	NewMsgDeleteInfo = types.NewMsgDeleteInfo
	//NewGiveInfo      = types.NewGiveInfo
	ModuleCdc        = types.ModuleCdc
	RegisterCodec    = types.RegisterCodec
)

type (
	Keeper          = keeper.Keeper
	//MsgSetInfo      = types.MsgSetInfo
	MsgGetInfo      = types.MsgGetInfo
	MsgDeleteInfo   = types.MsgDeleteInfo
	//QueryResResolve = types.QueryResResolve
	QueryResNames   = types.QueryResNames
	GiveInfo        = types.GiveInfo
)
