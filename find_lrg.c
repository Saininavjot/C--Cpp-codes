/*
 * find_lrg.c
 *
 *  Created on: Oct 3, 2019
 *      Author: User
 */

/*
 * largge.c
 *
 *  Created on: Oct 3, 2019
 *      Author: User
 */
#include<stdio.h>

#include "find_lrg.h"
int largest( int *set, int ns)
 {
	 int large =set[0];
	 for (int i=0;i!=ns;++i)
	 {
		 if(set[i]>large)
		 {
			 large=set[i];
		 }
	 }
	 return large;
 }



