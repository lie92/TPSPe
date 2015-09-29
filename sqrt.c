#include <stdio.h>
#include <stdlib.h>

unsigned long my_sqrt(unsigned long n)
{
  unsigned long x0 = 1;
  unsigned long res = 0;
  while(x0 * x0 <= n )// && x0 * x0 < (my_sqrt(n)+1 * my_sqrt(n)+1))
    {
        res = (x0 + n /x0)/ 2;
	x0 = res;
    }
  return res;
}
int main ()
{
  printf("my sqrt : %lu %lu  %lu \n", my_sqrt(9), my_sqrt(5), my_sqrt(81));
  return 0;
}
  
