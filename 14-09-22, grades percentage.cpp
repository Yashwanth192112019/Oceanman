#include <stdio.h>

int main()
{
    int phy, chem, bio, comp; 
    float per; 
    printf("Enter four subjects marks: ");
    scanf("%d%d%d%d", &phy, &chem, &bio, &comp);
    per = (phy + chem + bio + comp) / 4.0;

    printf("Percentage = %.2f\n", per);
    if(per >= 75)
    {
        printf("distinction");
    }
    else if(60<= per <75)
    {
        printf("first divison");
    }
    else if(50<= per <60)
    {
        printf("second divison");
    }
    else if( 40<= per <50)
    {
        printf("third division");
    }
    else
    {
        printf("fail");
    }

    return 0;
}
