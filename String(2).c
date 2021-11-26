#include<stdio.h>
int main()
{
    int name[30];
    printf("Enter your full name : ");
    gets(name);
 /*
   int len =  strlen(name);    //string length is a library function
   printf("Full-Name is : %s\n",name);
   printf("Total length : %d\n",len);
 */
 int i = 0;
 int len = 0 ;
 while(name[i]  != '\0')
 {
      i++;
     len++;
 }
 printf("Total length is : %d\n",len);


    getch();
}
