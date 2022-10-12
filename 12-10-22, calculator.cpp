#include<stdio.h> 
#include<math.h> 
int main() 
{ 
int x,n,y,choice; 
float z; 
printf("enter values of x and n:\n"); 
scanf("%d%d",&x,&n); 
printf("enter 1 for addition:\n"); 
printf("enter 2 for subtraction:\n"); 
printf("enter 3 for multiplication:\n"); 
printf("enter 4 for division:\n"); 
printf("enter 5 for power:\n"); 
scanf("%d",&choice); 
switch (choice) 
{ 
case 1: 
printf("addition of %d and %d =%d",x,n,x+n); 
break; 
case 2:printf("subtraction of %d and %d =%d",x,n,x-n); 
break; 
case 3: 
printf("multiplication of %d and %d =%d",x,n,x*n); 
break; 
case 4: 
z=(float)x/n; 
printf("division of %d and %d =%f",x,n,z); 
break; 
case 5: 
y=pow(x,n); 
printf("power = %d",y); 
break; 
default: 
printf("enter valid option"); 
} 
}
