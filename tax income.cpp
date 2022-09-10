#include<stdio.h>
int main()
{
	int a,c,d;
	printf("Enter the income:");
	scanf("%d",&a);
	{
		if (a<=150000){
		printf("No tax");}
		else if(150001<=a<=300000){
		c = a/10;
		printf("charges %d",c);}
		
		else  if(300001<=a<=500000){
		d = a/20;
		printf("charges %d",d);}
		else
		printf("renter the income");
		
		 
	}
}
