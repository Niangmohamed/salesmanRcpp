// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// monVoyageRcpp
IntegerVector monVoyageRcpp(DataFrame towns);
RcppExport SEXP _salesmanRcpp_monVoyageRcpp(SEXP townsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type towns(townsSEXP);
    rcpp_result_gen = Rcpp::wrap(monVoyageRcpp(towns));
    return rcpp_result_gen;
END_RCPP
}
// monVoyageRcppHK
IntegerVector monVoyageRcppHK(DataFrame towns);
RcppExport SEXP _salesmanRcpp_monVoyageRcppHK(SEXP townsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type towns(townsSEXP);
    rcpp_result_gen = Rcpp::wrap(monVoyageRcppHK(towns));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_salesmanRcpp_monVoyageRcpp", (DL_FUNC) &_salesmanRcpp_monVoyageRcpp, 1},
    {"_salesmanRcpp_monVoyageRcppHK", (DL_FUNC) &_salesmanRcpp_monVoyageRcppHK, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_salesmanRcpp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}