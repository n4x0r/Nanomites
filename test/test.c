#include <stdio.h>
#include <stdlib.h>

void	other_func(void)
{
  char	*a = NULL;

  goto lol;
  if (!a)
    printf("a is null !");
 lol:
  exit(0);
}

int	main(int argc, char **argv)
{

  if (argc == 42)
    {
      printf("A equal 42");
    }
  else if (argc < 30)
    {
      printf("A is below 30");
    }
  else
    {
      printf("A not equal 42");
    }
  other_func();

  __asm__("int3\n\t"
	  ".byte 0x01\n\t"
	  ".word 0x4242");
  return (0);
}
