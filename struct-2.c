
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct name
{
    char surname[50];
    char name[50];
    char number[50];
};

int main()
{
    char sum[50];
    int n = 3;
    struct name qozi0;
    struct name qozi1;
    struct name qozi2;
    
    

    strcpy(qozi0.surname, "Isaqov");
    strcpy(qozi0.name, "Davron");
    strcpy(qozi0.number, "+998-93-699-40-19");

    strcpy(qozi1.surname, "Abdurayimov");
    strcpy(qozi1.name, "Muhammadyusuf");
    strcpy(qozi1.number, "+998-99-431-05-53");

    strcpy(qozi2.surname, "Rajabov");
    strcpy(qozi2.name, "Teshavoy");
    strcpy(qozi2.number, "+99893-478-25-24");
    
    printf("Enter surname: ");
    scanf("%s",sum);


    if (strcasecmp(qozi0.surname, sum) == 0)
    {
        printf("Phone number: %s\n", qozi0.number);
    }
    else  if (strcasecmp(qozi1.surname, sum) == 0)
    {
        printf("Phone number: %s\n", qozi1.number);
    }
     else if (strcasecmp(qozi2.surname, sum) == 0)
    {
        printf("Phone number: %s\n", qozi2.number);
    }
    else{
        printf("noto'gri ism\n");
    }

    return 0;
}