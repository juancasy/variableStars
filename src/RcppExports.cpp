// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// seq_int
NumericVector seq_int(int first, int last);
RcppExport SEXP _variableStars_seq_int(SEXP firstSEXP, SEXP lastSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type first(firstSEXP);
    Rcpp::traits::input_parameter< int >::type last(lastSEXP);
    rcpp_result_gen = Rcpp::wrap(seq_int(first, last));
    return rcpp_result_gen;
END_RCPP
}
// seq_rev
NumericVector seq_rev(NumericVector x);
RcppExport SEXP _variableStars_seq_rev(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(seq_rev(x));
    return rcpp_result_gen;
END_RCPP
}
// compute_fft
arma::cx_vec compute_fft(arma::vec x);
RcppExport SEXP _variableStars_compute_fft(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_fft(x));
    return rcpp_result_gen;
END_RCPP
}
// calculate_amplitudes
DataFrame calculate_amplitudes(arma::vec time, arma::vec x);
RcppExport SEXP _variableStars_calculate_amplitudes(SEXP timeSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type time(timeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_amplitudes(time, x));
    return rcpp_result_gen;
END_RCPP
}
// apodization
arma::vec apodization(arma::vec frequences, String filter);
RcppExport SEXP _variableStars_apodization(SEXP frequencesSEXP, SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type frequences(frequencesSEXP);
    Rcpp::traits::input_parameter< String >::type filter(filterSEXP);
    rcpp_result_gen = Rcpp::wrap(apodization(frequences, filter));
    return rcpp_result_gen;
END_RCPP
}
// differences
arma::vec differences(arma::vec frequences);
RcppExport SEXP _variableStars_differences(SEXP frequencesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type frequences(frequencesSEXP);
    rcpp_result_gen = Rcpp::wrap(differences(frequences));
    return rcpp_result_gen;
END_RCPP
}
// diffHistogram
List diffHistogram(arma::vec frequences, double dnu);
RcppExport SEXP _variableStars_diffHistogram(SEXP frequencesSEXP, SEXP dnuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type frequences(frequencesSEXP);
    Rcpp::traits::input_parameter< double >::type dnu(dnuSEXP);
    rcpp_result_gen = Rcpp::wrap(diffHistogram(frequences, dnu));
    return rcpp_result_gen;
END_RCPP
}
// ft
List ft(arma::vec x, String filter);
RcppExport SEXP _variableStars_ft(SEXP xSEXP, SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< String >::type filter(filterSEXP);
    rcpp_result_gen = Rcpp::wrap(ft(x, filter));
    return rcpp_result_gen;
END_RCPP
}
// adjacentDifferences
arma::vec adjacentDifferences(arma::vec x);
RcppExport SEXP _variableStars_adjacentDifferences(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(adjacentDifferences(x));
    return rcpp_result_gen;
END_RCPP
}
// findPeaks
arma::uvec findPeaks(arma::vec x);
RcppExport SEXP _variableStars_findPeaks(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(findPeaks(x));
    return rcpp_result_gen;
END_RCPP
}
// go
List go(arma::vec frequency, arma::vec amplitude, String filter, double gRegimen, double numFrequencies);
RcppExport SEXP _variableStars_go(SEXP frequencySEXP, SEXP amplitudeSEXP, SEXP filterSEXP, SEXP gRegimenSEXP, SEXP numFrequenciesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type frequency(frequencySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type amplitude(amplitudeSEXP);
    Rcpp::traits::input_parameter< String >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< double >::type gRegimen(gRegimenSEXP);
    Rcpp::traits::input_parameter< double >::type numFrequencies(numFrequenciesSEXP);
    rcpp_result_gen = Rcpp::wrap(go(frequency, amplitude, filter, gRegimen, numFrequencies));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_variableStars_seq_int", (DL_FUNC) &_variableStars_seq_int, 2},
    {"_variableStars_seq_rev", (DL_FUNC) &_variableStars_seq_rev, 1},
    {"_variableStars_compute_fft", (DL_FUNC) &_variableStars_compute_fft, 1},
    {"_variableStars_calculate_amplitudes", (DL_FUNC) &_variableStars_calculate_amplitudes, 2},
    {"_variableStars_apodization", (DL_FUNC) &_variableStars_apodization, 2},
    {"_variableStars_differences", (DL_FUNC) &_variableStars_differences, 1},
    {"_variableStars_diffHistogram", (DL_FUNC) &_variableStars_diffHistogram, 2},
    {"_variableStars_ft", (DL_FUNC) &_variableStars_ft, 2},
    {"_variableStars_adjacentDifferences", (DL_FUNC) &_variableStars_adjacentDifferences, 1},
    {"_variableStars_findPeaks", (DL_FUNC) &_variableStars_findPeaks, 1},
    {"_variableStars_go", (DL_FUNC) &_variableStars_go, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_variableStars(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
