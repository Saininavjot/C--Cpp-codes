/*
 * bubblesort.c
 *
 *  Created on: Sep 20, 2019
 *      Author: User
 */
#include<stdio.h>
#define n 5
void bubblesort(int *, int,int);
int main()
{
	//int n=5;
	int dir;
	int s[n]= {1,2,7,5,9};
	printf("your set value if integers is: ");
	for(int i=0;i<n;i++)
	{
		printf("%d\n", s[i]);
	}
printf("Enter 0 for ascending order or 1 for descending order: ");
scanf("%d",&dir);
 bubblesort(s, n,dir);
 printf("Array after sorting is: ");
 for(int i=0;i<n;i++)
 	{
 		printf("%d\n", s[i]);
 	}
 return(0);
}
void bubblesort(int *set, int ns,int direction) // function to sort numbers 
{
	int swapping=1;

	while(swapping==1)
	{
		swapping=0;
		for(int a=0;a<ns;a++)
		{
			if(direction==0)
			{
			if(set[a+1]<set[a])
			{


				int temp=set[a];
				set[a]=set[a+1];
				set[a+1]=temp;
				swapping=1;
			}
			}
			else if(direction==1)
			{
				if(set[a+1]>set[a])
							{


								int temp=set[a];
								set[a]=set[a+1];
								set[a+1]=temp;
								swapping=1;
							}
			}
		}
	}
}
