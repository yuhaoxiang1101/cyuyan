�����Զ��庯������������Ĵ�ֵ����������������������
#include <stdio.h>
int get_max(int a,int b)//���庯��get_max������������ֵ
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
	printf("��������������\n");
	scanf("%d,%d",&x,&y);
	max=get_max(x,y);
	printf("�����д��һ����Ϊ%d\n",max);
return 0;
}



�����Զ��庯��ʹ�������������������ֵ
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