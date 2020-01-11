package types

import (
	"testing"

	sdk "github.com/cosmos/cosmos-sdk/types"
	"github.com/stretchr/testify/require"
)

var timestamp = "maTurtle"

/*func TestMsgSetInfo(t *testing.T) {
	value := "1"
	acc := sdk.AccAddress([]byte("me"))
	var msg = NewMsgSetInfo(name, value, acc)

	require.Equal(t, msg.Route(), RouterKey)
	require.Equal(t, msg.Type(), "set_info")
}

func TestMsgSetInfoValidation(t *testing.T) {
	value := "1"
	acc := sdk.AccAddress([]byte("me"))
	name2 := "a"
	value2 := "2"
	acc2 := sdk.AccAddress([]byte("you"))

	cases := []struct {
		valid bool
		tx    MsgSetInfo
	}{
		{true, NewMsgSetInfo(name, value, acc)},
		{true, NewMsgSetInfo(name2, value2, acc2)},
		{true, NewMsgSetInfo(name2, value, acc2)},
		{true, NewMsgSetInfo(name2, value2, acc)},
		{false, NewMsgSetInfo(name, value2, nil)},
		{false, NewMsgSetInfo("", value2, acc2)},
		{false, NewMsgSetInfo(name, "", acc2)},
	}

	for _, tc := range cases {
		err := tc.tx.ValidateBasic()
		if tc.valid {
			require.Nil(t, err)
		} else {
			require.NotNil(t, err)
		}
	}
}

func TestMsgSetInfoGetSignBytes(t *testing.T) {
	value := "1"
	acc := sdk.AccAddress([]byte("me"))

	var msg = NewMsgSetInfo(name, value, acc)
	res := msg.GetSignBytes()

	expected := `{"type":"smartcity/SetInfo","value":{"Info":"maTurtle","owner":"cosmos1d4js690r9j","value":"1"}}`

	require.Equal(t, expected, string(res))
}*/

func TestMsgGetInfo(t *testing.T) {
	//coins := sdk.NewCoins(sdk.NewInt64Coin("atom", 10))
	acc := sdk.AccAddress([]byte("me"))
	co2 := "1"
	co := "2"
	ph := "3"
	turbi := "4"
	pays := "5"
	region := "6"
	timestamp := "a"
	var msg = NewMsgGetInfo(timestamp, co2, co, ph, turbi, pays, region, acc)

	require.Equal(t, msg.Route(), RouterKey)
	require.Equal(t, msg.Type(), "get_info")
}

func TestMsgGetInfoValidation(t *testing.T) {
	acc := sdk.AccAddress([]byte("me"))
	co2 := "1"
	co := "2"
	ph := "3"
	turbi := "4"
	pays := "5"
	region := "6"

	//value6 := "7"

	//acc2 := sdk.AccAddress([]byte("you"))
	//coins := sdk.NewCoins(sdk.NewInt64Coin("atom", 10))

	cases := []struct {
		valid bool
		tx    MsgGetInfo
	}{
		{true, NewMsgGetInfo(timestamp, co2, co, ph, turbi, pays, region, acc)},
		//{false, NewMsgGetInfo(timestamp, co21, co1, ph1, turbi1, longitude1, latitude1, acc)},
	}

	for _, tc := range cases {
		err := tc.tx.ValidateBasic()
		if tc.valid {
			require.Nil(t, err)
		} else {
			require.NotNil(t, err)
		}
	}
}

func TestMsgGetInfoGetSignBytes(t *testing.T) {
	acc := sdk.AccAddress([]byte("me"))
	co2 := "1"
	co := "2"
	ph := "3"
	turbi := "4"
	pays := "5"
	region := "6"
	timestamp := "a"
	//coins := sdk.NewCoins(sdk.NewInt64Coin("atom", 10))
	var msg = NewMsgGetInfo(timestamp, co2, co, ph, turbi, pays, region, acc)
	res := msg.GetSignBytes()

	expected := `{"type":"smartcity/GetInfo","value":{{"name":"maTurtle","owner":"cosmos1d4js690r9j"},}`

	require.Equal(t, expected, string(res))
}

func TestMsgDeleteInfo(t *testing.T) {
	acc := sdk.AccAddress([]byte("me"))
	var msg = NewMsgDeleteInfo(timestamp, acc)

	require.Equal(t, msg.Route(), RouterKey)
	require.Equal(t, msg.Type(), "delete-info")
}

func TestMsgDeleteInfoValidation(t *testing.T) {
	acc := sdk.AccAddress([]byte("me"))
	//name2 := "a"
	//acc2 := sdk.AccAddress([]byte("you"))

	cases := []struct {
		valid bool
		tx    MsgDeleteInfo
	}{
		{true, NewMsgDeleteInfo(timestamp, acc)},
		//{true, NewMsgDeleteInfo(name2, acc2)},
	}

	for _, tc := range cases {
		err := tc.tx.ValidateBasic()
		if tc.valid {
			require.Nil(t, err)
		} else {
			require.NotNil(t, err)
		}
	}
}

func TestMsgDeleteInfoGetSignBytes(t *testing.T) {
	acc := sdk.AccAddress([]byte("me"))
	var msg = NewMsgDeleteInfo(timestamp, acc)
	res := msg.GetSignBytes()

	expected := `{"type":"smartcity/DeleteInfo","value":{"Info":"maTurtle","owner":"cosmos1d4js690r9j"}}`

	require.Equal(t, expected, string(res))
}
