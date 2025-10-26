#if 1
#include <stdio.h>
#include <stdlib.h>
// ver 1.0

typedef struct _node
{
   struct _node *next;
   struct _node *prev;
} NODE;

void insert_data(NODE *temp, NODE *prev, NODE *next)
{
   temp->next = next;
   prev->next = temp;
   temp->prev = prev;
   next->prev = temp;
}

void insert_front(NODE *temp, NODE *head)
{
   insert_data(temp, head, head->next);
}

void insert_back(NODE *temp, NODE *head)
{
   insert_data(temp, head->prev, head);
}

#define   list_entry(ptr, type, member)               \
		((type*)((char*)ptr - (unsigned long)&((type*)0)->member ))

//---------------------------------------------------

typedef struct 
{
	int sid;
	NODE list;
	char name[40];
} SAWON;

void display( NODE *head)
{
	NODE *temp;
	SAWON *s;
	system("clear");
	printf("[head]");
	for(temp=head->prev ; temp!=head; temp=temp->prev )
	{
		s = list_entry(temp, SAWON, list);
		printf("<->[%d,%s]", s->sid, s->name);
	}
	printf("<->[head]\n");
	getchar();
}

int main()
{
	NODE head = {&head,&head};
	SAWON sawon[2] = {{1,{0,0},"홍길동"},{2,{0,0},"강감찬"}};
	int i;

	display(&head);
	for(i=0; i<2; i++)
	{
		insert_back(&sawon[i].list, &head);
		display(&head);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
// ver 0.8
typedef struct _node
{
   struct _node *next;
   struct _node *prev;
} NODE;

void insert_data(NODE *temp, NODE *prev, NODE *next)
{
   temp->next = next;
   prev->next = temp;
   temp->prev = prev;
   next->prev = temp;
}

void insert_front(NODE *temp, NODE *head)
{
   insert_data(temp, head, head->next);
}

void insert_back(NODE *temp, NODE *head)
{
   insert_data(temp, head->prev, head);
}

//---------------------------------------------------

typedef struct 
{
	int sid;
	char name[40];
	NODE list;
} SAWON;

void display( NODE *head)
{
	NODE *temp;
	SAWON *s;
	system("clear");
	printf("[head]");
	for(temp=head->prev ; temp!=head; temp=temp->prev )
	{
		s = (SAWON*)((char*)temp - (sizeof(SAWON)-sizeof(NODE)));
		printf("<->[%d,%s]", s->sid, s->name);
	}
	printf("<->[head]\n");
	getchar();
}

int main()
{
	NODE head = {&head,&head};
	SAWON sawon[2] = {{1,"홍길동",},{2,"강감찬",}};
	int i;

	display(&head);
	for(i=0; i<2; i++)
	{
		insert_back(&sawon[i].list, &head);
		display(&head);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
// ver 0.7
typedef struct _node
{
   void* data;
   struct _node *next;
   struct _node *prev;
} NODE;

void insert_data(NODE *temp, NODE *prev, NODE *next)
{
   temp->next = next;
   prev->next = temp;
   temp->prev = prev;
   next->prev = temp;
}

void insert_front(NODE *temp, NODE *head)
{
   insert_data(temp, head, head->next);
}

void insert_back(NODE *temp, NODE *head)
{
   insert_data(temp, head->prev, head);
}



//---------------------------------------------------

typedef struct 
{
	int sid;
	char name[40];
} SAWON;

void display( NODE *head)
{
	NODE *temp;
	SAWON *s;
	system("clear");
	printf("[head]");
	for(temp=head->prev ; temp!=head; temp=temp->prev )
	{
		s = (SAWON*)temp->data;
		printf("<->[%d,%s]", s->sid, s->name );
	}
	printf("<->[head]\n");
	getchar();
}

int main()
{
	NODE head = {0,&head,&head};
	NODE nodes[7];
	SAWON sawon[2] = {{1,"홍길동"},{2,"강감찬"}};
	int i;

	display(&head);
	for(i=0; i<2; i++)
	{
		nodes[i].data = &sawon[i];
		insert_back(&nodes[i], &head);
		display(&head);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
// ver 0.6
typedef struct _node
{
   int data;
   struct _node *next;
   struct _node *prev;
} NODE;

void insert_data(NODE *temp, NODE *prev, NODE *next)
{
   temp->next = next;
   prev->next = temp;
   temp->prev = prev;
   next->prev = temp;
}

void insert_front(NODE *temp, NODE *head)
{
   insert_data(temp, head, head->next);
}

void insert_back(NODE *temp, NODE *head)
{
   insert_data(temp, head->prev, head);
}



//---------------------------------------------------

void display( NODE *head)
{
	NODE *temp;
	system("clear");
	printf("[head]");
	for(temp=head->prev ; temp!=head; temp=temp->prev )
		printf("<->[%d]", temp->data );
	printf("<->[head]\n");
	getchar();
}

int main()
{
	NODE head = {0,&head,&head};
	NODE nodes[7];
	int i;

	display(&head);
	for(i=0; i<7; i++)
	{
		nodes[i].data = i+1;
		insert_back(&nodes[i], &head);
		display(&head);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
// ver 0.5
typedef struct _node
{
   int data;
   struct _node *next;
   struct _node *prev;
} NODE;


void insert_data(NODE *temp, NODE *head)
{
   temp->next = head->next;
   head->next = temp;
   temp->prev = head;
   temp->next->prev = temp;
}

//---------------------------------------------------

void display( NODE *head)
{
	NODE *temp;
	system("clear");
	printf("[head]");
	for(temp=head->prev ; temp!=head; temp=temp->prev )
		printf("<->[%d]", temp->data );
	printf("<->[head]\n");
	getchar();
}

int main()
{
	NODE head = {0,&head,&head};
	NODE nodes[7];
	int i;

	display(&head);
	for(i=0; i<7; i++)
	{
		nodes[i].data = i+1;
		insert_data(&nodes[i], &head);
		display(&head);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
// ver 0.4
typedef struct _node
{
   int data;
   struct _node *next;
} NODE;


void insert_data(NODE *temp, NODE *head)
{
   temp->next = head->next;
   head->next = temp;
}

void reverse(NODE *head)
{
   NODE *prev = head;
   NODE *curr = prev->next;
   NODE *next;

   while( curr != head )
   {
       next = curr->next;
       curr->next = prev;
       prev = curr;
       curr = next;
   }
   curr->next = prev;
}


//---------------------------------------------------

void display( NODE *head)
{
	NODE *temp;
	system("clear");
	printf("[head]");
	for(temp=head->next ; temp!=head; temp=temp->next )
		printf("->[%d]", temp->data );
	printf("->[head]\n");
	getchar();
}

int main()
{
	NODE head = {0,&head};
	NODE nodes[7];
	int i;

	display(&head);
	for(i=0; i<7; i++)
	{
		nodes[i].data = i+1;
		insert_data(&nodes[i], &head);
		display(&head);
	}
	reverse(&head);
	display(&head);
	reverse(&head);
	display(&head);
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
// ver 0.3
typedef struct _node
{
   int data;
   struct _node *next;
} NODE;


void insert_data(NODE *temp, NODE *head)
{
   temp->next = head->next;
   head->next = temp;
}

//---------------------------------------------------

void display( NODE *head , NODE *tail)
{
	NODE *temp;
	system("clear");
	printf("[head]");
	for(temp=head->next ; temp=tail; temp=temp->next )
		printf("->[%d]", temp->data );
	printf("->[tail]\n");
	getchar();
}

int main()
{
	NODE tail = {0,&tail};
	NODE head = {0,&tail};
	NODE nodes[7];
	int i;

	display(&head, &tail);
	for(i=0; i<7; i++)
	{
		nodes[i].data = i+1;
		insert_data(&nodes[i], &head);
		display(&head, &tail);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
// ver 0.2
typedef struct _node
{
   int data;
   struct _node *next;
} NODE;


void insert_data(NODE *temp, NODE *head)
{
   temp->next = head->next;
   head->next = temp;
}

//---------------------------------------------------

void display( NODE *head )
{
	NODE *temp;
	system("clear");
	printf("[head]");
	for(temp=head->next ; ; temp=temp->next )
		printf("->[%d]", temp->data );
	printf("\n");
	getchar();
}

int main()
{
	NODE head = {0,};
	NODE nodes[7];
	int i;

	display(&head);
	for(i=0; i<7; i++)
	{
		nodes[i].data = i+1;
		insert_data(&nodes[i], &head);
		display(&head);
	}
	return 0;
}
#endif




#if 0
#include <stdio.h>
#include <stdlib.h>
// ver 0.2
typedef struct _node
{
   int data;
   struct _node *next;
} NODE;


void insert_data(int data, NODE *head)
{
   NODE *temp;
   temp = (NODE*)malloc(sizeof(NODE));
   temp->data = data;
   temp->next = head->next;
   head->next = temp;
}

//---------------------------------------------------

void display( NODE *head )
{
	NODE *temp;
	system("clear");
	printf("[head]");
	for(temp=head->next ; temp; temp=temp->next )
		printf("->[%d]", temp->data );
	printf("\n");
	getchar();
}

int main()
{
	NODE head = {0,};
	int i;

	display(&head);
	for(i=0; i<7; i++)
	{
		insert_data(i+1, &head);
		display(&head);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
// ver 0.1
typedef struct _node
{
   int data;
   struct _node *next;
} NODE;

NODE *head = 0;

void insert_data(int data)
{
   NODE *temp;
   temp = (NODE*)malloc(sizeof(NODE));
   temp->data = data;
   temp->next = head;
   head = temp;
}

//---------------------------------------------------

void display()
{
	NODE *temp;
	system("clear");
	printf("head");
	for(temp=head ; temp; temp=temp->next )
		printf("->[%d]", temp->data );
	printf("\n");
	getchar();
}

int main()
{
	int i;

	display();
	for(i=0; i<7; i++)
	{
		insert_data(i+1);
		display();
	}
	return 0;
}
#endif












