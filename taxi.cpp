#include<stdio.h>
int main()
{
	int a;
	float tax;
	printf("enter your salary : ");
	scanf("%d", &a);
	if(a<= 150000)
	{
	printf("no tax");
}
else if(a>=150001 && a<=300000)
{
tax = a*0.10;
printf("%f", tax);
}
else if(a>=300001 && a<=500000)
{
tax = a*0.20;
printf("%f", tax);
}
else

tax = a*0.30;
printf("%f", tax);
}
return 0;
}
