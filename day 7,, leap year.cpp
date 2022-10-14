#include<Stdio.h>
int main()
{
	int d,m,y;
	printf("Enter date : ");
	scanf("%d/%d/%d",&d,&m,&y);
	if(d>31 or d==00)
	{
	printf("invalid");
	}
	if(m>12)
	{
		printf("invalid");
	}
	else if(y%4==0)
	{
		printf("Leap year\nnext anniversary : %d/%d/%d",d,m,y+1);
	}
	else
	{
		printf("Not leap year\nprevious anniversary : %d/%d/%d",d,m,y-1);
	}
}
