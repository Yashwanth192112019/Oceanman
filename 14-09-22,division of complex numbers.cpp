#include <stdio.h>
 
struct complex
{
   int r, i;
};
 
int main()
{
   struct complex a, b, c;
   int x, y, z;

   printf("Enter the value a and b of the first complex number (a + ib): ");
   scanf("%d%d", &a.r, &a.i);
   printf("Enter the value c and d of the second complex number (c + id): ");
   scanf("%d%d", &b.r, &b.i);
 
   if (b.r != 0 && b.i != 0){

      x = a.r*b.r + a.i*b.i;
      y = a.i*b.r - a.r*b.i;
      z = b.r*b.r + b.i*b.i;

      if (x%z == 0 && y%z == 0)
      {
        if (y/z >= 0)
          printf("Division of the complex numbers = %d + %di", x/z, y/z);
        else
          printf("Division of the complex numbers = %d %di", x/z, y/z);
      }
      else if (x%z == 0 && y%z != 0)
      {
        if (y/z >= 0)
          printf("Division of two complex numbers = %d + %d/%di", x/z, y, z);
        else
          printf("Division of two complex numbers = %d %d/%di", x/z, y, z);
      }
      else if (x%z != 0 && y%z == 0)
      {
        if (y/z >= 0)
          printf("Division of two complex numbers = %d/%d + %di", x, z, y/z);
        else
          printf("Division of two complex numbers = %d %d/%di", x, z, y/z);
      }
      else
      {
        if (y/z >= 0)
          printf("Division of two complex numbers = %d/%d + %d/%di",x, z, y, z);
        else
          printf("Division of two complex numbers = %d/%d %d/%di", x, z, y, z);
      }
    }
    else
    {
    printf("Division by 0 + 0i is not allowed.");

    }
 
   return 0;
}
