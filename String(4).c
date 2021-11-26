//String concatenation
#include<stdio.h>
int main()
{
   /*
    char str1[50] = "My name is ";
    char str2[] = "Khalekuzzaman";
   // strcat(str1,str2);
   int i = 0 ,len = 0 ;
   while(str1[i] != '\0')
   {
       i++;
       len++;
   }
   int j = 0;
   while(str2[j] != '\0')
   {
       str1[len + j] = str2[j];
       j++;
   }
    printf("Full name : %s\n",str1);
   */
   char str1[100];
   char str2[50];
   printf("Enter string 1 is : ");
   gets(str1);
    printf("Enter string 2 is : ");
  gets(str2);
   int i = 0,len = 0;
   while(str1[i] != '\0')
   {
       i++;
       len++;
   }
   int j = 0;
   while(str2[j] != '\0')
   {
       str1[len + j] = str2[j];
       j++;
   }
   printf("Display shows : %s\n",str1);
    getch();
}
