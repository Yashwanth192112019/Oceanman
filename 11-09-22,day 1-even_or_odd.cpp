// C program to print the given number is even or odd
#include<stdio.h>
int main()
{
	// fill the code
	int num;
	int temp;
	printf("Enter the number: ");
	scanf("%d", &num);
	if(num%2==0){
		printf("The given number is even");
	}
	else{
		printf("The given number is odd");
	}
}
