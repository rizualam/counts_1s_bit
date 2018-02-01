#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc<=1)
	{
		printf("please enter the argument");
		return 0;
	}	
	if(argc==2)
	{
	int a=atoi(argv[1]);
	int i=0,b;
	b=a;
	while(a!=0)
	{
		a=a&(a-1);
		i++;
	}
	printf("the no. of 1s present in %d is %d\n",b,i);
	}
        else
	{
		printf("please enter one argument\n");
	}
 return 0;	
}
