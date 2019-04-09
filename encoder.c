#include<stdio.h>
#include<conio.h>

int main()

{ //int num[3],value[3],i,a;
	int i,j,a,value[15],num,sum[15];
	char c[10];
	int count=0;
	int k=0;
	int l=0;
//clrscr();

	printf("plz enter a number-\n");
	scanf("%d",&a);
	num = a;

	          while(a>0)
	          {
                a=a/10;
                count++;

	          }
	          //printf("difits are %d\n",count);
	          //getch ();
	        //  return 0;*/


	   for(i=0;i<count;i++)
	    { value[i]=num%10;
             num=num/10;

	    }




	        while(k<count)
	        	{
	        		sum[k]=value[k]+65;
	        		k++;
	        	}

  		//		j=0;
	  /*  while(j<count)

	        {

              printf("number is %d\n",sum[j]);
              j++;*/

	     //   }
					l=0;
					while(l<count)
				{
						 c[l]=sum[l];

						 printf("%c",c[l]);
						 l++;
					}


	    getch();
	    return 0;
	}
