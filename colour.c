/*  This is function for printing all 256 colour to give idea
 *  to user to select favourite colour
 *  it return colour number to main function      
 ****************************************************************/

#include<stdio.h>

int color()
{
	int i=1,Color_number;
	while(i<257)
	{
	printf("\x1b[38;5;%dm%d ",i,i);
	i++;
	}
	printf("\n\nInput Number in Which colour you want your Watch\n( 0 for Random Colour ) ");
	scanf("%d",&Color_number);	
	return Color_number;
}
