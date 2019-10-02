cmake_minimum_required(VERSION 2.6)
project("FibFastCpp")
add_executable(fib fib.cpp)

# Contribtors
set(CONTRIBTORS "pan93412
StackOverflow")

message("\n\t-- Fibonacci Fast CPP (FibFastCpp) --")
message("Thanks to lamhaoyin, who is the original Python author of this program.")
message("Also thanks to these contributors: \n${CONTRIBTORS}")
message("\t-- Fibonacci Fast CPP (FibFastCpp) --")
message("\nTo start, input 'make'.\n")
