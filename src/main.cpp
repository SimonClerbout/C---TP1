#include <iostream>
#include "Fibonacci.hpp"

int main(){

  int res, result;
  
     result = fibonacciIteratif(7);
     std::cout << "Itératif : " <<  result << std::endl;

     res = fibonacciRecursif(7);
     std::cout << "Récursif : " << res << std::endl;

}
