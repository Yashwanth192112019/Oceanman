#include<stdio.h>
int main()
{
	int d,m,y,i;
	{
		printf("enter date: ");
		scanf("%d/%d/%d",&d,&m,&y);
		i=y;
		if(d>0 and m>0 and y>0 and i==y and d<32 and m<13)
		{
			if(i%4==0)
			{
				printf("Leap year ");
			}
			else
			{
				printf("Not leap year,  ");
			}
		}
		else
		{
			printf("invalid");
		}
	}
}
