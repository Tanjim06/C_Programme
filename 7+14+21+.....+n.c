/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//1 + 3 + 5 + .... + n
#include <stdio.h>
  int
main ()
{
  int i, n, sum = 0;
  printf ("Enter your value:");
  scanf ("%d", &n);
  for (i = 7; i <= n; i = i + 7)
    {
      sum = sum + i;
    }
  printf ("The result is:%d", sum);
}
