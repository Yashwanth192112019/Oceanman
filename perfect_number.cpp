// C program to print first n perfect numbers
#include<stdio.h>
int main(){
	int N,count=0;
	printf("N= ");
	scanf("%d",&N);
	for(int i=1;i<100000;i++){
		int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum=sum+j;
			}
		}
		if(sum==i){
			printf("%d",i);
			count=count+1;
			if(count==N){
				break;
			}
		}

	}
}
