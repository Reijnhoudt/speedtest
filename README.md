
# Speedtest

## Summary
An implementation of a simple prime-finding algorithm in python and C++ for the purposes of speed comparisons between the two languages.

The algorithm will find all primes smaller or equal to N and print their sum.

  

## Usage
**Python**
python3 speedtest.py \<N>

**C++**
g++ -o speedtest speedtest.cpp
speedtest \<N> 

N: The upper bound for which primes will be found. (integer)

## Work in Progress
- Add some additional simple computational tasks to give a broader variety of speed tests.
- Implement the same algorithm in python in a way which fully leverages compiled libraries (such as numpy).