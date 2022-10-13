#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,r,i;
    printf("Enter the first number for the range: ");
    scanf("%d",&num1);  
    printf("Enter the second number for the range: ");
    scanf("%d",&num2); 

    printf("\nDisplay even number between %d and %d are",num1,num2);

    i=num1;
do{
r=i%2;
if(r==0)
printf("\n%d",i);
 i++;
}while(i<=num2);

printf("\n\nDisplay odd number between %d and %d are",num1,num2);

i=num1;
do{
r=i%2;
if(r==1)
printf("\n%d",i);
 i++;
}while(i<=num2);
getch();
    return 0;
}
