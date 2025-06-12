/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//100+98+96+......+n
#include <stdio.h>

int main()
{
  int i, n, sum = 0;
  printf ("Enter your value:");
  scanf ("%d", &n);
  for (i = 100; i >= n; i = i-2)
    {
      sum = sum + i;
    }
  printf ("The result is:%d", sum);
}
