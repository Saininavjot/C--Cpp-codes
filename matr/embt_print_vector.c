/*
 * embt_print_vector.c
 *
 *  Created on: Oct. 22, 2019
 *      Author: navjot
 */
#include <stdio.h>
	#include <stdlib.h>
#include <gsl/gsl_vector_double.h>
	#include <gsl/gsl_matrix_double.h>
	#include <gsl/gsl_rng.h>
	#include <gsl/gsl_randist.h>
gsl_matrix *embt_print_vector(const gsl_vector *u)
{
	size_t		N=10;
		for (size_t i = 0; i != N; ++i)
		{
			printf ("%d ",gsl_vector_get(u, i));
		}
}

