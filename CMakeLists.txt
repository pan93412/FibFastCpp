cmake_minimum_required(VERSION 2.6)
project("FibonacciFastCPP")
add_executable(fib fib.cpp)

# Contribtors
set(CONTRIBTORS "pan93412
StackOverflow")

message("\n\t-- Fibonacci Fast CPP --")
message("Thanks to lamhaoyin, who is the original Python author of this program.")
message("Also thanks to these contributors: \n${CONTRIBTORS}")
message("\t-- Fibonacci Fast CPP --")
message("\nTo start, input 'make'.\n")
