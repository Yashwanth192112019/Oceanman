#include <stdio.h>
int main() {
    int n,i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    
	else{
	printf("Factors of %d are: \n", n);

    for (i = 1; i <= n; ++i) {
        if (n % i == 0) {
            printf("%d ", i);}
}
    return 0;
}
}
