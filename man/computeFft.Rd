% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{computeFft}
\alias{computeFft}
\title{Fast Fourier Transform}
\usage{
computeFft(v)
}
\arguments{
\item{v}{Armadillo vector with numeric elements}
}
\value{
A complex vector with the FT result
}
\description{
Compute the discrete fourier transform using the 
the fast FT algorithm provided by the Armadillo library
}
\examples{
\dontrun{
# simple call:
computeFft(sin(seq(1:100)))
}
}
\author{
Roberto Maestre
}
