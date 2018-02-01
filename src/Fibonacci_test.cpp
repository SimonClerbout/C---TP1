#include "Fibonacci.hpp"
#include <CppUTest/CommandLineTestRunner.h>
TEST_GROUP(GroupFibonacci) { };
TEST(GroupFibonacci, test_fibo_1) { // premier test unitaire
  
  CHECK_EQUAL(0,fibonacciIteratif(0));
  CHECK_EQUAL(1,fibonacciIteratif(1));
  CHECK_EQUAL(1,fibonacciIteratif(2));
  CHECK_EQUAL(2,fibonacciIteratif(3));
  CHECK_EQUAL(3,fibonacciIteratif(4));
}
TEST(GroupFibonacci, test_fibo_2) { // deuxième test unitaire
  CHECK_EQUAL(0,fibonacciIteratif(0));
  CHECK_EQUAL(1,fibonacciIteratif(1));
  CHECK_EQUAL(1,fibonacciIteratif(2));
  CHECK_EQUAL(2,fibonacciIteratif(3));
  CHECK_EQUAL(3,fibonacciIteratif(4));
 
}
