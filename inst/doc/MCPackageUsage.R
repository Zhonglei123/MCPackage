## -----------------------------------------------------------------------------
library(MCPackage)

# Define a function to integrate
f <- function(x) x^2

# Perform Monte Carlo integration using the R function
result_r <- monte_carlo_integrate_r(f, 0, 1, 1000)

# Print the result
print(result_r)

