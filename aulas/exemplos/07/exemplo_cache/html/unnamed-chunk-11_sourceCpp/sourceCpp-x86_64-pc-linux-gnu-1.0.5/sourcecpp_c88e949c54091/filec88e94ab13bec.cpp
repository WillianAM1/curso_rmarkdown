#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
int timesTwo(int x) {
  return x * 2;
}


#include <Rcpp.h>
// timesTwo
int timesTwo(int x);
RcppExport SEXP sourceCpp_1_timesTwo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(timesTwo(x));
    return rcpp_result_gen;
END_RCPP
}
