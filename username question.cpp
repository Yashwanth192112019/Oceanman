#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20],c[20];
printf("Enter the username:");
scanf("%s",str1);
printf("Re-enter the username:");
scanf("%s",str2);
if(strcmp(str1, str2)==0)
printf("valid");
else
printf("invalid");
return 0;
}

