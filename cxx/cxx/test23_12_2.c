创建自定义函数求两整数间的大值！！！！！！！！！！！
#include <stdio.h>
int get_max(int a,int b)//定义函数get_max用来求两数大值
{
	if(a<b)
	{
		a=b;
	}
	return a;
}
int main()
{
	int x,y,max;
	printf("请输入两个整数\n");
	scanf("%d,%d",&x,&y);
	max=get_max(x,y);
	printf("两数中大的一个数为%d\n",max);
return 0;
}



创建自定义函数使得输入的两整数交换数值
#include <stdio.h>
void Swap(int* pa,int* pb)
{
	int tmp=0;
	tmp=*pa;
	*pa=*pb;
	*pb=tmp;
}

int main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	printf("%d,%d\n",a,b);	
	Swap(&a,&b);
	printf("%d,%d\n",a,b);
	return 0;
}