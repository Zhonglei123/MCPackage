#include <Rcpp.h>
using namespace Rcpp;

//' Monte Carlo Integration in C++
//'
//' This function estimates the integral of a given function using the Monte Carlo method in C++.
//' @param f A function to integrate.
//' @param a Lower limit of integration.
//' @param b Upper limit of integration.
//' @param n Number of random samples.
//' @return Estimated value of the integral.
//' @export
// [[Rcpp::export]]
 double monte_carlo_integrate_cpp(Function f, double a, double b, int n) {
   NumericVector x = runif(n, a, b);
   double sum = 0;
   for (int i = 0; i < n; i++) {
     sum += Rcpp::as<double>(f(x[i]));
   }
   return (sum / n) * (b - a);
 }
