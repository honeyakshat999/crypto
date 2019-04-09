#include<stdio.h>
#include<conio.h>
int main()
{char a[4];
  int b[4];
  int i,j;

//clrscr();
printf("plz enter the value=");
scanf("%s",a);
for(i=3;i>=0;i--)
{
//printf("%c\n",a[i]);
b[i]=a[i];
b[i]=b[i]-65;
printf("%d",b[i]);
}

/*for(j=0;j<4;j++)
{
  printf("#d\n",b[j]);
}*/




getch();
return 0;

}
