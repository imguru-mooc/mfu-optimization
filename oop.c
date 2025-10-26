#if 0
#include <stdio.h>

class  INFO
{
private:
	int kor, eng, math;
	int total;

public:
	double aver;
	void input();
	void calc();
	void output();
};


int main()
{ 
	INFO info;
	info.input();  // INFO::input(&info)
	info.calc();
	info.output();

	return 0;
}

void INFO::input()   // void INFO::input( INFO *this)
{
	printf("점수 입력 : ");
	scanf("%d %d %d" , &kor, &eng, &math );  // this->kor
}

void INFO::calc()
{
	total = kor + eng + math;
	aver  = total/3.;
}

void INFO::output()
{
	printf("%d %d %d %d %.2lf\n", 
			kor, eng, math, total, aver);
}

#endif
#if 0
#include <stdio.h>

typedef struct 
{
	int kor, eng, math;
	int total;
	double aver;
} INFO;

void input( INFO *info);
void calc( INFO *info);
void output(INFO *info);

int main()
{ 
	INFO info;
	input(&info);
	calc(&info);
	output(&info);

	return 0;
}

void input( INFO *info)
{
	printf("점수 입력 : ");
	scanf("%d %d %d" , &info->kor, &info->eng, &info->math );
}

void calc( INFO *info)
{
	info->total = info->kor + info->eng + info->math;
	info->aver  = info->total/3.;
}

void output(INFO *info)
{
	printf("%d %d %d %d %.2lf\n", 
			info->kor, info->eng, info->math, info->total, info->aver);
}

#endif
#if 0
#include <stdio.h>
void input( int *kor, int *eng, int *math);
void calc( int kor, int eng, int math, int *total, double *aver);
void output(int kor, int eng, int math, int total, double aver);

int main()
{ 
	int kor, eng, math;
	int total;
	double aver;

	input(&kor, &eng, &math);
	calc(kor, eng, math, &total, &aver);
	output(kor, eng, math, total, aver);

	return 0;
}

void input( int *kor, int *eng, int *math)
{
	printf("점수 입력 : ");
	scanf("%d %d %d" , kor, eng, math );
}

void calc( int kor, int eng, int math, int *total, double *aver)
{
	*total = kor + eng + math;
	*aver  = *total/3.;
}

void output(int kor, int eng, int math, int total, double aver)
{
	printf("%d %d %d %d %.2lf\n", kor, eng, math, total, aver);
}

#endif
#if 0
#include <stdio.h>
void input( int *kor, int *eng);
void calc( int kor, int eng, int *total, double *aver);
void output(int kor, int eng, int total, double aver);

int main()
{ 
	int kor, eng;
	int total;
	double aver;

	input(&kor, &eng);
	calc(kor, eng, &total, &aver);
	output(kor, eng, total, aver);

	return 0;
}

void input( int *kor, int *eng)
{
	printf("점수 입력 : ");
	scanf("%d %d" , kor, eng );
}

void calc( int kor, int eng, int *total, double *aver)
{
	*total = kor + eng;
	*aver  = *total/2.;
}

void output(int kor, int eng, int total, double aver)
{
	printf("%d %d %d %.2lf\n", kor, eng, total, aver);
}

#endif

#if 0
#include <stdio.h>

int main()
{ 
	int kor, eng;
	int total;
	double aver;

	printf("점수 입력 : ");
	scanf("%d %d" , &kor, &eng );

	total = kor + eng;
	aver  = total/2.;

	printf("%d %d %d %.2lf\n", kor, eng, total, aver);
	return 0;
}
#endif
