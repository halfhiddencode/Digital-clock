#include<stdio.h>  
#include<unistd.h> // for sleep function
#include<stdlib.h> // for screen clear function

#include"print_time.c"
#include"colour.c"

void time(void);
void Print_time(int,int,int);
int color(void);

int main()
{
	time();
	return 0;
}

void time()
{
	int s,m,h,variable_colour=1,colour_choice,set_choice;
	
	printf("Do you want to set TIME?\n\tPress 1 to set and 0 to skip  ");
	scanf("%d",&set_choice);
	
	switch(set_choice)
	{
		case 1:
		printf("Enter Hour ");
		scanf("%d",&h);
		printf("Enter Minute ");
		scanf("%d",&m);
		printf("Enter Second ");
		scanf("%d",&s);
		break;
		case 0:
		 s=0;
		 m=0;
		 h=0;
		 break;
	}
	
	colour_choice=color(); // for colour

	system("clear"); // clear screen

	while(1)
	{
		sleep(1);
		s++;
		if(colour_choice==0)
		{
			printf("\x1b[38;5;%dm",variable_colour); // for changing colour on each second
			variable_colour++;
		}
		if(colour_choice!=0)
			printf("\x1b[38;5;%dm",colour_choice);  // colour choose by user

		if(variable_colour==230) // after 230 sec colour start from 1 because of don't exceed 256 colour
		variable_colour=1;

		if(s==60)
		{
			m=m+1;
			s=0;
		}
		if(m==60)
		{
			h=h+1;
			m=0;
		}
		if(h==24)
		{
			h=0;
		}
		
		printf("\x1b[1m");  // for printing in bold

		Print_time(h,m,s);
	}
}


