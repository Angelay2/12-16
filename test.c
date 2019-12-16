#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//乘法口诀表(函数形式)
void printMulForm(int n){
		int i, j;
		for (i = 1; i <= n; i++){
			for (j = 1; j <= i; j++){
				printf("%d*%d=%d ", j, i, i * j);
			}
			putchar('\n');
		}
	}

int one()
	{
	printf("请输入需要多大的乘法口诀表");
		int n;
		scanf("%d", &n);

		printMulForm(n);

	system("pause");
	return 0;

}

//函数实现两个数的交换
//(以下两种函数都可以用来交换数)
void swap1(int * pa, int * pb)
{
	int tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//pa,pb 相当于纸条
void swap2(int * pa, int * pb)
{
	int * ptmp;

	ptmp = pa;
	pa = pb;
	pb = ptmp;
}

int main()
{
	int a = 0, b = 0;
	printf("请输入需要交换的两个数(用空格隔开):\n");
	scanf("%d%d", &a, &b);
	swap2(&a, &b);

	printf("%d %d", a, b);
	system("pause");
	return 0;
}

void test(int x,int y ){

}
int three(){
	int n = 5;
	printf("%d\n", n);

	system("pause");
	return 0;

}