/*
 * queue.c
 *
 *  Created on: Oct 17, 2019
 *      Author: User
 */



#include <stdio.h>
#include <stdlib.h>

#define	L		1024
#define	TRUE	1U
#define	FALSE	0U
/*
 * queue and typedef declarations
*/
struct	q_struct
{
	int		data[L];
	size_t 	head;
	size_t  tail;
};
typedef struct q_struct	queue_t;
typedef unsigned short int	bool_t;

/* *************** FUNCTIONS ***************** */
/*
 * stack_empty() implementation
 */
bool_t	queue_empty(queue_t* s)
{
	if ((s -> head) == (s -> tail))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/*
 * push() implementation
 */
void enqueue(queue_t* s, int x)
{

	s -> data[ (s->tail)] = x;
	if (s->tail==L)
	{
		s->tail=1;
	}
	else
	{
		s->tail=s->tail+1;
	}
	return;
}

/*
 * pop() implementation
 */
int dequeue(queue_t* s)
{

		int mdata= s->data[s->head];
		//return (*s).data[(s->head)]; //return(s->data[s->top]
		if(s->head == L)
		{
			s->head=1;
		}
		else
		{
			s->head= s->head+1;
		}
		return mdata;
}

int main()
{
	/* declare and initialize variables */
	queue_t	queue;
	queue.tail=0;
	queue.head = queue.tail;


	int loadarr[10] = {52, -29, 36, 1154, 72,
						0, 68, 44, 33, 59};

	/* load stack */
	size_t	i;
	for (i=0; i != 10; ++i)
	{
		//printf("stack.q_tail = %zu, ", stack.q_tail);
		enqueue(&queue, loadarr[i]);
		printf("enqueue %d\n", loadarr[i]);
	}

	/* pop stack */
	int x;
	while (queue_empty(&queue) == FALSE)
	{
		//printf("stack.q_head = %zu, ", stack.q_tail);
		x = dequeue(&queue);
		printf("dequeue %d\n", x);
	}
	/* test error function */
	x = dequeue(&queue); /* comment this out to avoid error */

	return 0;
}


