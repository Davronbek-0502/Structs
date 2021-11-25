#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct name {
  char name[50];
  char author[50];
  char year[50];
};

int main() {
    char sum[50];
    int n=4;
    struct name book0;
    struct name book1;
    struct name book2;
    struct name book3;


    strcpy(book0.name, "Ilon Mask");
    strcpy(book0.author, "Eshli vens");
    strcpy(book0.year, "2015");

    strcpy(book1.name, "Stive Jobs");
    strcpy(book1.author, "Walter Issacson");
     strcpy(book1.year, "2013");

    strcpy(book2.name, "Albert Enshteyn");
    strcpy(book2.author, "Walter Issacson");
    strcpy(book2.year, "2011");

    strcpy(book3.name, "Sariq devni minib");
    strcpy(book3.author, "Xudoyberdi Toxtaboyev");
    strcpy(book3.year, "2012");

    printf("Enter year : ");
    scanf("%s",sum);


     if (strcasecmp(book0.year, sum) == 0)
    {
    printf("Book name: %s\n", book0.name);
    printf("Book author: %s\n", book0.author);
    printf("Chop etilgan sanasi : %s\n", book0.year);
    }
    else  if (strcasecmp(book1.year, sum) == 0)
    {
    printf("Book name: %s\n", book1.name);
    printf("Book author: %s\n", book1.author);
   
    }
     else if (strcasecmp(book2.year, sum) == 0)
    {
    printf("Book name: %s\n", book2.name);
    printf("Book author: %s\n", book2.author);
    printf("Chop etilgan sanasi : %s\n", book2.year);
    }
      else if (strcasecmp(book3.year, sum) == 0)
    {
    printf("Book name: %s\n", book3.name);
    printf("Book author: %s\n", book3.author);
    printf("Chop etilgan sanasi : %s\n", book3.year);

    }


    return 0;
}