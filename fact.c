#include <stdio.h>
#include <stdlib.h>

unsigned long fact(unsigned long n);

int main()
{
  printf("%lu %lu %lu\n", fact(3), fact(5), fact(9));
  return 0;
}
unsigned long fact(unsigned long n)
{
  unsigned result = 1;
  int i;
  for(i = n ; i > 0; --i)
    {
      result *= i;
    }
  return result;
}
