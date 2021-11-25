#include <stdio.h>
#include <string.h>


    struct name{
        char rangi[50];
        char rusmi[50];
        char egasi[50];
        char nomeri[50];
    };


int main(){

    char nomeri[50];
    int n=4;
    
    struct name car0;
    struct name car1;
    struct name car2;
    struct name car3;

    strcpy(car0.rangi,"qora");
    strcpy(car0.rusmi,"BMW");
    strcpy(car0.egasi,"Muhammadyusuf");
    strcpy(car0.nomeri,"A-777-AA");

    strcpy(car1.rangi,"OQ");
    strcpy(car1.rusmi,"Tesla");
    strcpy(car1.egasi,"Davronbek");
    strcpy(car1.nomeri,"D-007-DA");

    strcpy(car2.rangi,"qizil");
    strcpy(car2.rusmi,"Cobalt");
    strcpy(car2.egasi,"Lola");
    strcpy(car2.nomeri,"L-888-LA");

    strcpy(car3.rangi,"Sariq");
    strcpy(car3.rusmi,"Mustang");
    strcpy(car3.egasi,"Mirzaolim");
    strcpy(car3.nomeri,"M-545-NA");


    printf("Nomeri: ");
    scanf("%s",nomeri);



    
     if (strcasecmp(car0.nomeri, nomeri) == 0)
    {
    printf("Mashina egasi : %s\n", car0.egasi);
    printf("Mashina rusmi : %s\n", car0.rusmi);
    printf("Mashina nomeri : %s\n", car0.nomeri);
    printf("Mashina rangi: %s\n",car0.rangi);
    }

    
     if (strcasecmp(car1.nomeri, nomeri) == 0)
    {
    printf("Mashina egasi : %s\n", car1.egasi);
    printf("Mashina rusmi : %s\n", car1.rusmi);
    printf("Mashina nomeri : %s\n", car1.nomeri);
    printf("Mashina rangi: %s\n",car1.rangi);
    }

    
     if (strcasecmp(car2.nomeri, nomeri) == 0)
    {
    printf("Mashina egasi : %s\n", car2.egasi);
    printf("Mashina rusmi : %s\n", car2.rusmi);
    printf("Mashina nomeri : %s\n", car2.nomeri);
    printf("Mashina rangi: %s\n",car2.rangi);
    }

    
    if (strcasecmp(car3.nomeri, nomeri) == 0)
    {
    printf("Mashina egasi : %s\n", car3.egasi);
    printf("Mashina rusmi : %s\n", car3.rusmi);
    printf("Mashina nomeri : %s\n", car3.nomeri);
    printf("Mashina rangi: %s\n",car3.rangi);
    }

    return 0;
}