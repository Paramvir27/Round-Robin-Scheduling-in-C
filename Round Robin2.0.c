#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int hr()		// For Horizontal Line
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
	
	
struct process
{
	int id;
	int at;
	int bt;
	int priority;
	int wt;
	int ct;
	int tat;
};

int table(int n, struct process p[n], int k, int t)
	{
		int i;
		printf("\n Total Number of Processes = %d\n",n);
		printf("\t      Time Quantum = %d\n",t);
		printf("_____________________________________________________________");
		printf("\n\n PID\t| \tAT\tBT\tPriority     TAT\tWT\n");
		printf("_____________________________________________________________\n");
		
		for (i = 0; i < n; i++)
		{	
			if(i<k)	
			printf("\n P%d\t| \t%d\t%d\t   %d\t      %c\t\t%c",i,p[i].at,p[i].bt,p[i].priority,45,45);
			else
			printf("\n P%d\t| \t%c\t%c\t   %c\t      %c\t\t%c",i,45,45,45,45,45);						
		}
		
		printf("\n_____________________________________________________________\n");		
	}
	
int max(int n,struct process p[n], int k)
{
	if(k==1)
	{
		int i,maximum;
		maximum = p[0].at;
		
		for(i=0;i<n;i++)
		{
			if(p[i].at>maximum)
			{						
				maximum=i;
			}	
		}
		return(p[maximum].id);
	}
	else if(k==2)
	{
		int i,maximum;
		maximum = p[0].bt;
		
		for(i=0;i<n;i++)
		{
			if(p[i].bt>maximum)
			{						
				maximum=p[i].bt;
			}	
		}
		return(maximum);
	}
	else if(k==3)
	{
		int i,maximum;
		maximum = p[0].priority;
		
		for(i=0;i<n;i++)
		{
			if(p[i].priority>maximum)
			{						
				maximum=p[i].priority;
			}	
		}
		return(maximum);
	}
	
}

// ----------------------------------------------------------------------------------------

	
int min(int n,struct process p[n],int k)
{
	if(k==1)
	{
		int i,minimum;
		minimum = p[0].at;
		
		for(i=0;i<n;i++)
		{
			if(p[i].at<minimum)
			{						
				minimum=p[i].at;
			}	
		}
		return(minimum);
	}
	
	else if(k==2)
	{
		int i,minimum;
		minimum = p[0].bt;
		
		for(i=0;i<n;i++)
		{
			if(p[i].bt<minimum)
			{						
				minimum=p[i].bt;
			}	
		}
		return(minimum);
	}
	
	else if(k==3)
	{
		int i,minimum;
		minimum = p[0].priority;
		
		for(i=0;i<n;i++)
		{
			if(p[i].priority<minimum)
			{						
				minimum=p[i].priority;
			}	
		}
		return(minimum);
	}
}

// ----------------------------------------------------------------------------------------	
	


void main()
{
	
	int n; 						// n = Number of Processes
	int t;						// t = Time Quantum
	start:
	hr();
	printf("\n Enter Total Number of Processes = ");
	scanf("%d",&n);
	
	printf("\n Enter Time Quantum = ");
	scanf("%d",&t);
	
	if((n<0)||(t<0))
	{
		system("cls");
		hr();
		printf("\n Invalid Entry\n");
		goto start;
	}
	
	int i;
	
	printf("_____________________________________________________________");
		printf("\n\n PID\t| \tAT\tBT\tPriority     TAT\tWT\n");
		printf("_____________________________________________________________\n");
		
		for (i = 0; i < n; i++)
		{
			printf("\n P%d\t| \t%c\t%c\t   %c\t      %c\t\t%c",i,45,45,45,45,45);
		}
		
		printf("\n_____________________________________________________________\n");
	
	hr();
	
	
	struct process p[n];

	int x,y,z;
	
	for ( i = 0; i < n; i++)
	{
	
		
		printf("\n %c%c PROCESS P%d \n",177,177,i+1);
				
		
		printf("______________________________________________________________\n");
		
		printf("\n Enter |P%d| Arrival Time : ",i+1);
		scanf("%d",&p[i].at);		 
		
		printf("\n Enter |P%d| Burst Time : ",i+1);
		scanf("%d",&p[i].bt);		
		
		printf("\n Enter |P%d| Priority : ",i+1);
		scanf("%d",&p[i].priority);	
		
		if((p[i].at<0)||(p[i].bt<0)||(p[i].priority<0))
			{
				system("cls");
				hr();
				printf("\n Invalid Entry\n");
				goto start;	
			}
			
		p[i].id=i;		// Assigning ID
		
		system("cls");
		hr();
		table(n,p,i+1,t);
		hr();
	
	}
	
	printf("\nMax Arrival Time : %d",max(n,p,1));
	printf("\nMin Arrival Time : %d",min(n,p,1));
		
	printf("\nMax Burst Time : %d",max(n,p,2));
	printf("\nMin Burst Time : %d",min(n,p,2));
		
	printf("\nMax Priority : %d",max(n,p,3));
	printf("\nMin Priority : %d",min(n,p,3));	
	
	
}


