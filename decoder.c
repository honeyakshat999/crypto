#include<stdio.h>
#include<conio.h>
void main()
{
char ak[15];
int i;
int j=0;
int count=5;

while(j<5)
{
   printf("enter character=");
   scanf("%c",&ak[j]);
        //  printf("value is %c\n",ak[j]);
        j++;
      }
for(i=0;i<5;i++)
  {
     printf("string is %c\n",ak[i]);
  }
  getch();


}
