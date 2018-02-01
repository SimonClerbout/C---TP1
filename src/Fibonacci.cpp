#include "Fibonacci.hpp"

int fibonacciIteratif(int nb){

  int somme = 0, t1 = 0, t2 = 1;

  for(int i = 2; i <= nb; i++){

    somme = t1 + t2;
    t1 = t2;
    t2 = somme;

  }

  return somme;

}


int fibonacciRecursif(int nb){

  if(nb < 2){

    return nb;

  }else{
    
    return fibonacciRecursif(nb-1) + fibonacciRecursif(nb-2);
      
  }

  return 0;
  
}
