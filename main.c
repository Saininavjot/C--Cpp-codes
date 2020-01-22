/*
 * main.c
 *
 *  Created on: Oct 3, 2019
 *      Author: User
 */


/*
 * findlargstt.c
 *
 *  Created on: Oct 3, 2019
 *      Author: Navjot
 */

/*
 * largest.c
 *
 *  Created on: Sep 20, 2019
 *      Author: Navjot
 */
#include "find_lrg.h"

#include<stdio.h>
# define n 10
int main()
{
	int s[n]={1,2,9,7,4,65,78,12,90,99};
	int max;
	printf("\n your set of integers is\n");
	for (int i=0;i!=n;++i)
	{
	printf("%d ", s[i]);
	}
	max=largest(s,n);
	printf("\n Largest integer is: %d",max);
	return 0;
}


