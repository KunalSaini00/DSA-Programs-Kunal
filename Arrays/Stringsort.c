#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char  str[20],ch;
   int i,a;
   printf("\n enter the any string \n");
   gets(str);
   for(i=0;str[i];i++);
   for(a=0;a<i/2;a++)
   {
       ch=str[a];
       str[a]=str[i-1-a];
       str[i-1-a] = ch;
   }
   printf("\n %s",str);
   getch();

}