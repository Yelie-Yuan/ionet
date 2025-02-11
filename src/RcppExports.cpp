// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// btw
List btw(NumericMatrix adjmat, NumericVector gross, NumericVector prior, double alpha, String type);
RcppExport SEXP _ionet_btw(SEXP adjmatSEXP, SEXP grossSEXP, SEXP priorSEXP, SEXP alphaSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type gross(grossSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< String >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(btw(adjmat, gross, prior, alpha, type));
    return rcpp_result_gen;
END_RCPP
}
// dijkstra
List dijkstra(NumericMatrix adjmat, int src);
RcppExport SEXP _ionet_dijkstra(SEXP adjmatSEXP, SEXP srcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< int >::type src(srcSEXP);
    rcpp_result_gen = Rcpp::wrap(dijkstra(adjmat, src));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ionet_btw", (DL_FUNC) &_ionet_btw, 5},
    {"_ionet_dijkstra", (DL_FUNC) &_ionet_dijkstra, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_ionet(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
