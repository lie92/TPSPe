#include <stdio.h>
#include <stdlib.h>

unsigned fibo(unsigned n);

int main()
{
  printf("%lu %lu %lu\n", fibo(3), fibo(5), fibo(9));
  return 0;
}

unsigned fibo(unsigned n){
  unsigned un = 1, deux = 0;
  unsigned i;
  for(i = 1; i<n; ++i)
    {
      un += deux;
      deux = un - deux;
    }
  return 
