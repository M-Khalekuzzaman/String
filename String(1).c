//String is a character type of array;
#include<stdio.h>
int main()
{
  char name[30];
  printf("Enter your name : ");
  gets(name);
  int i = 0;
  while(name[i] != '\0')
  {
      printf("%c\n",name[i]);
      i++;
  }


    getch();
}
