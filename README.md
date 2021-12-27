# ML Program to reduce bias in C++ random number generation
A simple program to use basic Machine Learning techniques to try and make random numbers generated in C++ less biased.

-uses the in-built "rand()" function

-finds a weighting to apply to randomly generated numbers that reduces bias from ~0.93% to below ~0.002%

-determines the fitness of a weighting by applying it to 1 billion randomly generated numbers between 1 and 100 and finding the mean, then subtracting 50 



