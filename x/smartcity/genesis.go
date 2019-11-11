package smartcity

import (
	"fmt"

	sdk "github.com/cosmos/cosmos-sdk/types"
	abci "github.com/tendermint/tendermint/abci/types"
)

type GenesisState struct {
	GiveInfoRecords []GiveInfo `json:"GiveInfo_records"`
}

func NewGenesisState(GiveInfoRecords []GiveInfo) GenesisState {
	return GenesisState{GiveInfoRecords: nil}
}

func ValidateGenesis(data GenesisState) error {
	for _, record := range data.GiveInfoRecords {
		if record.Owner == nil {
			return fmt.Errorf("invalid GiveInfoRecord: Value: %s. Error: Missing Owner", record.CO2)
		}
		if record.CO2 == "" {
			return fmt.Errorf("invalid GiveInfoRecord: Owner: %s. Error: Missing CO2", record.Owner)
		}
		//if record.Price == nil {
		//	return fmt.Errorf("invalid GiveInfoRecord: Value: %s. Error: Missing Price", record.Value)
		//}
	}
	return nil
}

func DefaultGenesisState() GenesisState {
	return GenesisState{
		GiveInfoRecords: []GiveInfo{},
	}
}

func InitGenesis(ctx sdk.Context, keeper Keeper, data GenesisState) []abci.ValidatorUpdate {
	for _, record := range data.GiveInfoRecords {
		keeper.SetGiveInfo(ctx, record.CO2, record)
	}
	return []abci.ValidatorUpdate{}
}

func ExportGenesis(ctx sdk.Context, k Keeper) GenesisState {
	var records []GiveInfo
	iterator := k.GetNamesIterator(ctx)
	for ; iterator.Valid(); iterator.Next() {

		name := string(iterator.Key())
		GiveInfo := k.GetGiveInfo(ctx, name)
		records = append(records, GiveInfo)

	}
	return GenesisState{GiveInfoRecords: records}
}
