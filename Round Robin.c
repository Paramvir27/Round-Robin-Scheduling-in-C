#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int hr()
	{
		int g,h;
				g=178;
				printf("\n");
				for(h=1;h<=42;h++)
				printf("%c",g);
				for(h=1;h<=15;h++)
				printf("%c",177);
				for(h=1;h<=10;h++)
				printf("%c",219);
				printf("\n");
	}
	

//----------------------------------------------------------------------------------


int atvalue(int n, int at[n], int k)
	{
		int i;
		printf("\n Total Number of Processes  = %d\n",n);
		printf("_____________________________________________________________");
		printf("\n\n PID\t| \tAT\tBT\tPriority     TAT\tWT\n");
		printf("_____________________________________________________________\n");
		
		for (i = 0; i < n; i++)
		{
			if(i<k)
			printf("\n P%d\t| \t%d\t%c\t   %c\t      %c\t\t%c",i+1,at[i],45,45,45,45);
			else
			printf("\n P%d\t| \t%c\t%c\t   %c\t      %c\t\t%c",i+1,63,45,45,45,45);
			
			
		}
		
		printf("\n_____________________________________________________________\n");		
	}
	
	
	
// ----------------------------------------------------------------------------------------


	
int btvalue(int n, int at[n], int bt[n], int k)
	{
		int i;
		printf("\n Total Number of Processes  = %d\n",n);
		printf("_____________________________________________________________");
		printf("\n\n PID\t| \tAT\tBT\tPriority     TAT\tWT\n");
		printf("_____________________________________________________________\n");
		
		for (i = 0; i < n; i++)
		{
			if(i<k)
			printf("\n P%d\t| \t%d\t%d\t   %c\t      %c\t\t%c",i+1,at[i],bt[i],45,45,45);
			else
			printf("\n P%d\t| \t%d\t%c\t   %c\t      %c\t\t%c",i+1,at[i],63,45,45,45);
			
			
		}
		
		printf("\n_____________________________________________________________\n");		
	}	

	
// ---------------------------------------------------------------------------------------

	
int priorityvalue(int n, int at[n], int bt[n], int priority[n], int k)
	{
		int i;
		printf("\n Total Number of Processes  = %d\n",n);
		printf("_____________________________________________________________");
		printf("\n\n PID\t| \tAT\tBT\tPriority     TAT\tWT\n");
		printf("_____________________________________________________________\n");
		
		for (i = 0; i < n; i++)
		{
			if(i<k)
			printf("\n P%d\t| \t%d\t%d\t   %d\t      %c\t\t%c",i+1,at[i],bt[i],priority[i],45,45);
			else
			printf("\n P%d\t| \t%d\t%d\t   %c\t      %c\t\t%c",i+1,at[i],bt[i],63,45,45);
			
			
		}
		
		printf("\n_____________________________________________________________\n");		
	}	

	
// ---------------------------------------------------------------------------------------

	

	int main()
	{
		hr();
		int n,i;
		
		printf("\n Enter Total Number of Processes = ");
		scanf("%d",&n);
		
		int all[n];
		//	system("cls");		Can be used to clear Screen
		
		
		printf("_____________________________________________________________");
		printf("\n\n PID\t| \tAT\tBT\tPriority     TAT\tWT\n");
		printf("_____________________________________________________________\n");
		
		for (i = 0; i < n; i++)
		{
			printf("\n P%d\t| \t%c\t%c\t   %c\t      %c\t\t%c",i+1,45,45,45,45,45);
		}
		
		printf("\n_____________________________________________________________\n");
		
		int at[n];		// ARRIVAL TIME INPUT
		
		for (i = 0; i < n; i++)
		{
			printf("\n ARRIVAL TIME INPUT %c%c\n",177,177);
			printf("\n Enter |P%d| Arrival Time : ",i+1);
			scanf("%d",&at[i]);
			system("cls");
			hr();
			atvalue(n,at,i+1);			
		}
		
		
		
		int bt[n];	// BURST TIME INPUT
		
		for (i = 0; i < n; i++)
		{
			printf("\n BURST TIME INPUT %c%c\n",178,178);
			printf("\n Enter |P%d| Burst Time : ",i+1);
			scanf("%d",&bt[i]);
			system("cls");
			hr();
			btvalue(n,at,bt,i+1);			
		}
		
		
		
		int priority[n];	// PRIORITY INPUT
		
		for (i = 0; i < n; i++)
		{
			printf("\n PRIORITY INPUT %c%c\n",219,219);
			printf("\n Enter |P%d| Priority : ",i+1);
			scanf("%d",&priority[i]);
			system("cls");
			hr();
			priorityvalue(n,at,bt,priority,i+1);			
		}		
		
		
	}
