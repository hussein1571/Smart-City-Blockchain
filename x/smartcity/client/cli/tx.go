package cli

import (
	"github.com/spf13/cobra"

	"github.com/cosmos/cosmos-sdk/client"
	"github.com/cosmos/cosmos-sdk/client/context"
	"github.com/cosmos/cosmos-sdk/codec"
	sdk "github.com/cosmos/cosmos-sdk/types"
	"github.com/cosmos/cosmos-sdk/x/auth"
	"github.com/cosmos/cosmos-sdk/x/auth/client/utils"
	"github.com/hussein1571/smartcity/x/smartcity/internal/types"
)

func GetTxCmd(storeKey string, cdc *codec.Codec) *cobra.Command {
	smartcityTxCmd := &cobra.Command{
		Use:                        types.ModuleName,
		Short:                      "smartcity transaction subcommands",
		DisableFlagParsing:         true,
		SuggestionsMinimumDistance: 2,
		RunE:                       client.ValidateCmd,
	}

	smartcityTxCmd.AddCommand(client.PostCommands(
		GetCmdGetInfo(cdc),
		//GetCmdSetInfo(cdc),
		GetCmdDeleteInfo(cdc),
	)...)

	return smartcityTxCmd
}

// GetCmdGetInfo is the CLI command for sending a GetInfo transaction
func GetCmdGetInfo(cdc *codec.Codec) *cobra.Command {
	return &cobra.Command{
		Use:   "get-info [timestamp][co2] [co] [ph] [turbi] [longitude] [latitude]",
		Short: "bid for existing name or claim new name",
		Args:  cobra.ExactArgs(7),
		RunE: func(cmd *cobra.Command, args []string) error {
			cliCtx := context.NewCLIContext().WithCodec(cdc)

			txBldr := auth.NewTxBuilderFromCLI().WithTxEncoder(utils.GetTxEncoder(cdc))

			//coins, err := sdk.ParseCoins(args[1])
			//if err != nil {
			//	return err
			//}

			msg := types.NewMsgGetInfo(args[0], args[1], args[2], args[3], args[4], args[5], args[6], cliCtx.GetFromAddress())
			//err = msg.ValidateBasic()
			//if err != nil {
			//	return err
			//}

			return utils.GenerateOrBroadcastMsgs(cliCtx, txBldr, []sdk.Msg{msg})
		},
	}
}

// GetCmdSetInfo is the CLI command for sending a DeleteInfo transaction
/*func GetCmdSetInfo(cdc *codec.Codec) *cobra.Command {
	return &cobra.Command{
		Use:   "set-info [name][value]",
		Short: "set the value associated with a name that you own",
		Args:  cobra.ExactArgs(2),
		RunE: func(cmd *cobra.Command, args []string) error {
			cliCtx := context.NewCLIContext().WithCodec(cdc)

			txBldr := auth.NewTxBuilderFromCLI().WithTxEncoder(utils.GetTxEncoder(cdc))

			// if err := cliCtx.EnsureAccountExists(); err != nil {
			// 	return err
			// }

			msg := types.NewMsgSetInfo(args[0], args[1], cliCtx.GetFromAddress())
			err := msg.ValidateBasic()
			if err != nil {
				return err
			}

			// return utils.CompleteAndBroadcastTxCLI(txBldr, cliCtx, msgs)
			return utils.GenerateOrBroadcastMsgs(cliCtx, txBldr, []sdk.Msg{msg})
		},
	}
}*/

// GetCmdDeleteInfo is the CLI command for sending a DeleteInfo transaction
func GetCmdDeleteInfo(cdc *codec.Codec) *cobra.Command {
	return &cobra.Command{
		Use:   "delete-info [name]",
		Short: "delete the name that you own along with it's associated fields",
		Args:  cobra.ExactArgs(1),
		RunE: func(cmd *cobra.Command, args []string) error {
			cliCtx := context.NewCLIContext().WithCodec(cdc)

			txBldr := auth.NewTxBuilderFromCLI().WithTxEncoder(utils.GetTxEncoder(cdc))

			msg := types.NewMsgDeleteInfo(args[0], cliCtx.GetFromAddress())
			err := msg.ValidateBasic()
			if err != nil {
				return err
			}

			// return utils.CompleteAndBroadcastTxCLI(txBldr, cliCtx, msgs)
			return utils.GenerateOrBroadcastMsgs(cliCtx, txBldr, []sdk.Msg{msg})
		},
	}
}
