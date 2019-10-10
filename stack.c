/*
 * sss.c
 *
 *  Created on: Oct 10, 2019
 *      Author: User
 */
/*
 * stack
 *
 *  Created on: Oct 10, 2019
 *      Author: User
 */

#include<stdlib.h>
#include<stdio.h>
#define L 1024
#define True 1U
#define False 0U
/* global variable*/
size_t s_top=0;

int s[L];
typedef unsigned short int bool_t;
bool_t stack_empty (void)
{
if(s_top==0)
{
	return True;
}
else
	return False;
}
void push(int d)
{
	s[s_top]=d;
	s_top=s_top+1;
	return;

}
int pop(void)
{
s_top=s_top-1;
return s[s_top];
}
int main()
{
	int loadarr[10]={52,-29,36,1154,72,0,68,49,33,59};
	size_t i;
	for( i=0;i!=10;i++)
	{
		push(loadarr[i]);
	}

	int x;

while(!stack_empty())
	{
		x=pop();
		printf("%d\n",x);

	}

	return 0;
}


