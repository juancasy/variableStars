#include <RcppArmadillo.h>

using namespace Rcpp;
using namespace std;

//! Create a vector as sequence of integers
/*!
\param int first integer
\param int last integer
\return A numeric vector with integer secuence
*/
//[[Rcpp::export]]
DataFrame apodization(arma::vec frequences, String filter) {
  // Center frequencies
  arma::vec frequencesCentered(frequences.n_elem);
  arma::vec amplitudes(frequences.n_elem);
  arma::vec factor(frequences.n_elem);
  
  // Get values to center frequences
  double max = frequences.max();
  double min = frequences.min();
  double middle = (max - min) / 2;
  
  // Center frequences
  frequencesCentered = frequences - min - middle;
  
  // Apply filter
  if (filter == "bartlett") {
    factor = 1 - arma::abs(frequencesCentered) / middle;
  } else if (filter == "blackman") {
    factor = 21.0 / 50.0 + 0.5 * arma::cos(M_PI * frequencesCentered / middle) +
      2.0 / 25.0 * arma::cos(2.0 * M_PI * frequencesCentered / middle);
  } else if (filter == "connes") {
    factor = arma::pow(1.0 - arma::pow((frequencesCentered / middle), 2), 2);
  } else if (filter == "cosine") {
    factor = arma::cos((M_PI * frequencesCentered) / (2.0 * middle));
  } else if (filter == "gaussian") {
    factor = arma::exp(
      -0.5 *
        arma::pow(frequencesCentered / arma::stddev(frequencesCentered), 2));
  } else if (filter == "hamming") {
    factor = 27.0 / 50.0 +
      23.0 / 50.0 * arma::cos(M_PI * frequencesCentered / middle);
  } else if (filter == "hanning") {
    factor =
      arma::pow(arma::cos((M_PI * frequencesCentered) / (2.0 * middle)), 2);
  } else if (filter == "welch") {
    factor = 1 - arma::pow((frequencesCentered / middle), 2);
  } else {
    factor = 1;
  }
  
  // Return results
  List results;
  results["frequencesCentered"] = frequencesCentered;
  results["amplitude"] = factor;
  return DataFrame(results);
}