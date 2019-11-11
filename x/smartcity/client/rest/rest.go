package rest

import (
	"fmt"

	"github.com/cosmos/cosmos-sdk/client/context"

	"github.com/gorilla/mux"
)

const (
	restName = "name"
)

// RegisterRoutes - Central function to define routes that get registered by the main application
func RegisterRoutes(cliCtx context.CLIContext, r *mux.Router, storeName string) {
	r.HandleFunc(fmt.Sprintf("/%s/infos", storeName), namesHandler(cliCtx, storeName)).Methods("GET")
	r.HandleFunc(fmt.Sprintf("/%s/infos", storeName), getInfoHandler(cliCtx)).Methods("PUT")
	//r.HandleFunc(fmt.Sprintf("/%s/infos", storeName), setInfoHandler(cliCtx)).Methods("PUT")
	//r.HandleFunc(fmt.Sprintf("/%s/infos/{%s}", storeName, restName), resolveNameHandler(cliCtx, storeName)).Methods("GET")
	r.HandleFunc(fmt.Sprintf("/%s/infos/{%s}/whois", storeName, restName), whoIsHandler(cliCtx, storeName)).Methods("GET")
	r.HandleFunc(fmt.Sprintf("/%s/infos", storeName), deleteInfoHandler(cliCtx)).Methods("DELETE")
}
