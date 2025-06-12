#include <stdio.h>

int main()
{
   int a[2][2], b[2][2], result[2][2] = {{0, 0}, {0, 0}};
   ;
   int i, j, k;

   // Input for Matrix A
   printf("Enter elements of first 2x2 matrix:\n");
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 2; j++)
      {
         scanf("%d", &a[i][j]);
      }
   }

   // Input for Matrix B
   printf("Enter elements of second 2x2 matrix:\n");
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 2; j++)
      {
         scanf("%d", &b[i][j]);
      }
   }

   // // Initialize result matrix to 0
   // for (i = 0; i < 2; i++)
   // {
   //    for (j = 0; j < 2; j++)
   //    {
   //       result[i][j] = 0;
   //    }
   // }

   // Matrix multiplication
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 2; j++)
      {
         for (k = 0; k < 2; k++)
         {
            result[i][j] += a[i][k] * b[k][j];
         }
      }
   }

   // Output result
   printf("Resultant matrix:\n");
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 2; j++)
      {
         printf("%d ", result[i][j]);
      }
      printf("\n");
   }

   return 0;
}
