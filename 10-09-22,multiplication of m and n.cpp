#include<stdio.h>
int main()
{
	int M,N,i,j;
	printf("Enter the number to multiply: ");
	scanf("%d",&M);
	printf("Enter the number to be multiplied with: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("%d * %d = %d",M,i,M*i);
		printf("\n");
	}
	return 0;
}
