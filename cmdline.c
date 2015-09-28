#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) {

  printf("Command line length : %d,\n", argc);
  int i = 0;
  for(i = 0; i < argc; ++i)
  {
    printf(" | %s ", argv[i]);
  }
  printf("|\n");
  return 0;
}
