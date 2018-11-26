// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// seqIntegers
NumericVector seqIntegers(int first, int last);
RcppExport SEXP _variableStars_seqIntegers(SEXP firstSEXP, SEXP lastSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type first(firstSEXP);
    Rcpp::traits::input_parameter< int >::type last(lastSEXP);
    rcpp_result_gen = Rcpp::wrap(seqIntegers(first, last));
    return rcpp_result_gen;
END_RCPP
}
// vectorRev
NumericVector vectorRev(NumericVector vector);
RcppExport SEXP _variableStars_vectorRev(SEXP vectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vector(vectorSEXP);
    rcpp_result_gen = Rcpp::wrap(vectorRev(vector));
    return rcpp_result_gen;
END_RCPP
}
// computeFft
arma::cx_vec computeFft(arma::vec v);
RcppExport SEXP _variableStars_computeFft(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(computeFft(v));
    return rcpp_result_gen;
END_RCPP
}
// calculateSpectrum
List calculateSpectrum(arma::vec time, arma::vec x);
RcppExport SEXP _variableStars_calculateSpectrum(SEXP timeSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type time(timeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(calculateSpectrum(time, x));
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
// apodizationFt
List apodizationFt(arma::vec frequences, String filter);
RcppExport SEXP _variableStars_apodizationFt(SEXP frequencesSEXP, SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type frequences(frequencesSEXP);
    Rcpp::traits::input_parameter< String >::type filter(filterSEXP);
    rcpp_result_gen = Rcpp::wrap(apodizationFt(frequences, filter));
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
// calculateRange
arma::ivec calculateRange(int nElements, int nFrequencies);
RcppExport SEXP _variableStars_calculateRange(SEXP nElementsSEXP, SEXP nFrequenciesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nElements(nElementsSEXP);
    Rcpp::traits::input_parameter< int >::type nFrequencies(nFrequenciesSEXP);
    rcpp_result_gen = Rcpp::wrap(calculateRange(nElements, nFrequencies));
    return rcpp_result_gen;
END_RCPP
}
// process
List process(arma::vec frequency, arma::vec amplitude, String filter, double gRegimen, double numFrequencies, double maxDnu, double minDnu, double dnuGuessError, double dnuValue, bool dnuEstimation, bool debug);
RcppExport SEXP _variableStars_process(SEXP frequencySEXP, SEXP amplitudeSEXP, SEXP filterSEXP, SEXP gRegimenSEXP, SEXP numFrequenciesSEXP, SEXP maxDnuSEXP, SEXP minDnuSEXP, SEXP dnuGuessErrorSEXP, SEXP dnuValueSEXP, SEXP dnuEstimationSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type frequency(frequencySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type amplitude(amplitudeSEXP);
    Rcpp::traits::input_parameter< String >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< double >::type gRegimen(gRegimenSEXP);
    Rcpp::traits::input_parameter< double >::type numFrequencies(numFrequenciesSEXP);
    Rcpp::traits::input_parameter< double >::type maxDnu(maxDnuSEXP);
    Rcpp::traits::input_parameter< double >::type minDnu(minDnuSEXP);
    Rcpp::traits::input_parameter< double >::type dnuGuessError(dnuGuessErrorSEXP);
    Rcpp::traits::input_parameter< double >::type dnuValue(dnuValueSEXP);
    Rcpp::traits::input_parameter< bool >::type dnuEstimation(dnuEstimationSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    rcpp_result_gen = Rcpp::wrap(process(frequency, amplitude, filter, gRegimen, numFrequencies, maxDnu, minDnu, dnuGuessError, dnuValue, dnuEstimation, debug));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_variableStars_seqIntegers", (DL_FUNC) &_variableStars_seqIntegers, 2},
    {"_variableStars_vectorRev", (DL_FUNC) &_variableStars_vectorRev, 1},
    {"_variableStars_computeFft", (DL_FUNC) &_variableStars_computeFft, 1},
    {"_variableStars_calculateSpectrum", (DL_FUNC) &_variableStars_calculateSpectrum, 2},
    {"_variableStars_apodization", (DL_FUNC) &_variableStars_apodization, 2},
    {"_variableStars_differences", (DL_FUNC) &_variableStars_differences, 1},
    {"_variableStars_diffHistogram", (DL_FUNC) &_variableStars_diffHistogram, 2},
    {"_variableStars_apodizationFt", (DL_FUNC) &_variableStars_apodizationFt, 2},
    {"_variableStars_adjacentDifferences", (DL_FUNC) &_variableStars_adjacentDifferences, 1},
    {"_variableStars_findPeaks", (DL_FUNC) &_variableStars_findPeaks, 1},
    {"_variableStars_calculateRange", (DL_FUNC) &_variableStars_calculateRange, 2},
    {"_variableStars_process", (DL_FUNC) &_variableStars_process, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_variableStars(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
