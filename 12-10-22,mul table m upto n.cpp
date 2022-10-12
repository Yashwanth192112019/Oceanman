#include<stdio.h>
int main()
{
	int n,m,i;
	printf("Enter n and m value:");
	scanf("%d %d",&n,&m);
	for(i=1;i<=m;i++)
	{
		printf("%d X %d = %d\n",i,n,i*n);
	}
	return 0;
}
