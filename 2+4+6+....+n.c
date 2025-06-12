/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
2 + 4 + 6 + .... + n
#include <stdio.h>
  int
main ()
{
  int i, n, sum = 0;
  printf ("Enter your value:");
  scanf ("%d", &n);
  for (i = 2; i <= n; i = i + 2)
    {
      sum = sum + i;
    }
  printf ("The result is:%d", sum);
}
