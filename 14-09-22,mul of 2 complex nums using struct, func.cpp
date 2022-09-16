#include<stdio.h>

/* Declaring Structure */
struct complex
{
    float real;
    float imaginary;
};

int main()
{
    /* Declaring structure variable using struct complex */
    struct complex cnum1, cnum2, mul;
    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%f%f", &cnum1.real, &cnum1.imaginary);
    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%f%f", &cnum2.real, &cnum2.imaginary);

    mul.real = cnum1.real * cnum2.real - cnum1.imaginary * cnum2.imaginary;
    mul.imaginary = cnum1.real * cnum2.imaginary + cnum2.real * cnum1.imaginary;

    printf("PRODUCT = %0.2f + i %0.2f", mul.real, mul.imaginary);

    return 0;
}
