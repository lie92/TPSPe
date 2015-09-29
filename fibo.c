#include <stdio.h>
#include <stdlib.h>

unsigned fibo(unsigned n);

int main()
{
  printf("%lu %lu %lu\n", fibo(3), fibo(5), fibo(9));
  return 0;
}

unsigned fibo(unsigned n){
  unsigned curr = 1, prev = 0;
  for (unsigned i=1; i < n; ++i) {
      curr += prev;
      prev = curr - prev;
  }
  return n > 1 ? curr : n;
}
