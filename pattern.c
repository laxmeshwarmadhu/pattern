#include <stdio.h>

int main()
{
  int row, c, n=5, s;

  printf("pyramid of stars that you wish to see\n");
   printf("hello all this kartik editing this");
  //scanf("%d", &n);

  s = n;

  for (row = 1; row <= n; row++)  // Loop to print rows
  {
    for (c = 1; c < s; c++)  // Loop to print spaces in a row
      printf(" ");

    s--;

    for (c = 1; c <= 2*row - 1; c++) // Loop to print stars in a row
      printf("*");

    printf("\n");
  }
printf("jyoti\n");
  return 0;
}
///////////////////////////////////////////////// hfgjkdfghdfjg
