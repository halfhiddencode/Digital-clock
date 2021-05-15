#include<stdio.h>
#include"digit.h"

void Print_time(int h,int m, int s)
{
	int i,digit[3][2];
	digit[0][1]=h%10;                // To find once place digit of hour
	digit[0][0]=(h-(h%10))/10;       // To find tens place digit of hour
	digit[1][1]=m%10;
	digit[1][0]=(m-(m%10))/10;
	digit[2][1]=s%10;
	digit[2][0]=(s-(s%10))/10;
	for(i=0;i<7;i++)
	{
		printf("\x1b[%d;32f",i+15);   // To set position of cursor just like goto() in windows
		
		printf("%s %s %s %s %s %s %s %s\n",Number[digit[0][0]][i],Number[digit[0][1]][i],colon[i],Number[digit[1][0]][i],Number[digit[1][1]][i],colon[i],Number[digit[2][0]][i],Number[digit[2][1]][i]);
	}
}
