#include <stdio.h>
 
struct complex
{
   int r, i;
};
 
int main()
{
   struct complex a, b, c;

   printf("Enter the value a and b of the first complex number (a + ib): ");
   scanf("%d%d", &a.r, &a.i);
   printf("Enter the value c and d of the second complex number (c + id): ");
   scanf("%d%d", &b.r, &b.i);
 
   c.r = a.r - b.r;
   c.i = a.i - b.i;
   
   if (c.i >= 0)
  printf("Difference of the complex numbers = %d + %di", c.r, c.i);
   else
  printf("Difference of the complex numbers = %d %di", c.r, c.i);
 
   return 0;
}
