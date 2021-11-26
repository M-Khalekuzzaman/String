// One string is copy from another string
#include<stdio.h>
int main()
{
    char name1[] ="Khalekuzzaman";
    char name2[30];
    strcpy(name2,name1);

    printf("Name1 is : %s\n",name1);
    printf("Name2 is : %s\n",name2);
    getch();
}
/*
3 types of string library function;
1)strlen
2)strcpy
3)strcat
*/
