#if 0
#include <stdio.h>

typedef int (*FP1)[2];
typedef FP1 (*FP2)(void); 
typedef FP2 (*FP3)(void);
typedef	FP3 (*FP4)[2];

//----------------------------------------------------

FP1 aaa(void) 
{
	static int a[2][2];
	return a;
}

FP2 bbb(void) 
{
	return aaa;
}

int main()
{
	FP3 p[2][2] = {{bbb,bbb},{bbb,bbb}};
	FP4 q = p;
	q[1][1]()()[1][1] = 10;
	return 0;
}

#endif

#if 0
#include <stdio.h>

typedef int FP1[2];
typedef FP1* FP2;
typedef FP2 FP3(void); 
typedef FP3* FP4;
typedef FP4 FP5(void);
typedef FP5* FP6;
typedef	FP6 FP7[2];
typedef FP7* FP8;

//----------------------------------------------------

FP2 aaa(void) 
{
	static int a[2][2];
	return a;
}

FP4 bbb(void) 
{
	return aaa;
}

int main()
{
	FP6 p[2][2] = {{bbb,bbb},{bbb,bbb}};
	FP8 q = p;
	q[1][1]()()[1][1] = 10;
	return 0;
}

#endif
#if 0
#include <stdio.h>

int (*aaa(void))[2] 
{
	static int a[2][2];
	return a;
}

int (*(*bbb(void))(void))[2] 
{
	return aaa;
}

int main()
{
	int (*(*(*p[2][2])(void))(void))[2] = {{bbb,bbb},{bbb,bbb}};
	int (*(*(*(*q)[2])(void))(void))[2] = p;
	q[1][1]()()[1][1] = 10;
	return 0;
}

#endif

#if 0
#include <stdio.h>

typedef int FP1[2];
typedef FP1* FP2;
//---------------------------------------------
FP2 foo() 
{
	static int a[2][2] = {1,2,3,4};
	return a;
}

int main()
{
	FP2 p;
	p = foo();
	printf("p[1][1]=%d\n", p[1][1]);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int (*foo())[2] 
{
	static int a[2][2] = {1,2,3,4};
	return a;
}

int main()
{
	int (*p)[2];
	p = foo();
	printf("p[1][1]=%d\n", p[1][1]);

	return 0;
}
#endif

#if 0
#include <stdio.h>

void foo( int (*p)[2]  )
{
	p[1][1] = 10;
}

int main()
{
	int a[2][2] = {1,2,3,4};

	foo(a);
	printf("a[1][1]=%d\n", a[1][1]);

	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int a[2][2] = {1,2,3,4};
	int (*p)[2] = a;

	p[1][1] = 10;
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
	int a[2][2] = {1,2,3,4};
	int **p = a;

	p[1][1] = 10;
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
	int a[2][2] = {1,2,3,4};
	int *p = a;

	p[1][1] = 10;
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
	int a[2];
	int *p = a;

	printf("sizeof(a)=%u\n", sizeof(a));
	printf("sizeof(int[2])=%u\n", sizeof(int[2]));
	printf("sizeof(p)=%u\n", sizeof(p));
	printf("sizeof(int*)=%u\n", sizeof(int*));
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
	int  i = 0x12345678;
	char *c = &i;

	printf("%x\n", *c);

	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
	int  i = 10;
	char c = i;

	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
	int a[2];
	int *p = a;

	printf("sizeof(a)=%u\n", sizeof(a));
	printf("sizeof(p)=%u\n", sizeof(p));
	return 0;
}
#endif
