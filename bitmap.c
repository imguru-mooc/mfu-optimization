#if 1
#include <stdio.h>
#define  BIT_SET(x, index)  (x[index/32] |= 1<<(index%32))
#define  BIT_ISSET(x, index)  (x[index/32] & (1<<(index%32)))
#define  BIT_CLR(x, index)   (x[index/32] &= ~(1<<(index%32)))

#define   BIT_ZERO(x)              do{ int i;                   \
                                       for(i=0; i<32; i++)      \
                                         item[i] = 0; }while(0)


typedef int bit_set[32];

//-----------------------------------------------------------------

int main()
{
    bit_set item;
    int i;

	BIT_ZERO(item);

	BIT_SET(item, 700);
	BIT_SET(item, 800);

    for(i=0; i<1024; i++ )
      if( BIT_ISSET(item, i) )
         printf("%d\n", i );
    
	BIT_CLR(item,800);

	printf("-----------\n");
    for(i=0; i<1024; i++ )
      if( BIT_ISSET(item, i) )
         printf("%d\n", i );
   	return 0; 
}
#endif 
#if 0
#include <stdio.h>

#define  BIT_SET(x, index)  (x[index/32] |= 1<<(index%32))
#define  BIT_ISSET(x, index)  (x[index/32] & (1<<(index%32)))
#define  BIT_CLR(x, index)   (x[index/32] &= ~(1<<(index%32)))

#define   BIT_ZERO(x)              do{ int i;                   \
                                       for(i=0; i<32; i++)      \
                                         item[i] = 0; }while(0)


typedef int bit_set[32];

//-----------------------------------------------------------------

int main()
{
    bit_set item;
    int i;

	BIT_ZERO(item);

	BIT_SET(item, 700);
	BIT_SET(item, 800);

    for(i=0; i<1024; i++ )
      if( BIT_ISSET(item, i) )
         printf("%d\n", i );
    
	BIT_CLR(item,800);

	printf("-----------\n");
    for(i=0; i<1024; i++ )
      if( BIT_ISSET(item, i) )
         printf("%d\n", i );
   	return 0; 
}
#endif 
#if 0
#include <stdio.h>

#define  BIT_SET(x, index)  (x[index/32] |= 1<<(index%32))
#define  BIT_ISSET(x, index)  (x[index/32] & (1<<(index%32)))
#define  BIT_CLR(x, index)   (x[index/32] &= ~(1<<(index%32)))

typedef int bit_set[32];
//-----------------------------------------------------------------
int main()
{
    bit_set item;
    int i;

	BIT_SET(item, 700);
	BIT_SET(item, 800);

    for(i=0; i<1024; i++ )
      if( BIT_ISSET(item, i) )
         printf("%d\n", i );
    
	BIT_CLR(item,800);

	printf("-----------\n");
    for(i=0; i<1024; i++ )
      if( BIT_ISSET(item, i) )
         printf("%d\n", i );
   	return 0; 
}
#endif 
#if 0
#include <stdio.h>

#define  BIT_SET(x, index)  (x[index/32] |= 1<<(index%32))
#define  BIT_ISSET(x, index)  (x[index/32] & (1<<(index%32)))
#define  BIT_CLR(x, index)   (x[index/32] &= ~(1<<(index%32)))

//-----------------------------------------------------------------
int main()
{
    int item[4] = {0,};
    int i;

	BIT_SET(item, 700);
	BIT_SET(item, 800);

    for(i=0; i<1024; i++ )
      if( BIT_ISSET(item, i) )
         printf("%d\n", i );
    
	BIT_CLR(item,800);

	printf("-----------\n");
    for(i=0; i<1024; i++ )
      if( BIT_ISSET(item, i) )
         printf("%d\n", i );
   	return 0; 
}
#endif 
#if 0
#include <stdio.h>

int main()
{
    int item[32] = {0,};
    int i;
    item[700/32] |= 1<<(700%32);
    item[800/32] |= 1<<(800%32);

    for(i=0; i<1024; i++ )
      if( item[i/32] & (1<<(i%32)) )
         printf("%d\n", i );
    
    item[800/32] &= ~(1<<(800%32));

	printf("-----------\n");
    for(i=0; i<1024; i++ )
      if( item[i/32] & (1<<(i%32)) )
         printf("%d\n", i );
   	return 0; 
}
#endif 
#if 0
#include <stdio.h>

int main()
{
    int item = 0;
    int i;
    item = item | 1;
    item = item | 8;

    for(i=0; i<4; i++ )
      if( item & (1<<i) )
         printf("%d\n", i );
    
    item = item & ~8;

	printf("-----------\n");
    for(i=0; i<4; i++ )
      if( item & (1<<i) )
         printf("%d\n", i );
   	return 0; 
}
#endif 
#if 0
#include <stdio.h>

int main()
{
    int item[4] = {0,};
    int i;
    item[0] = 1;
    item[3] = 1;

    for(i=0; i<4; i++ )
      if( item[i] == 1 )
         printf("%d\n", i );
    
    item[0] = 0;

	printf("-----------\n");
    for(i=0; i<4; i++ )
      if( item[i] == 1 )
         printf("%d\n", i );
   	return 0; 
}
#endif 
