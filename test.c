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

// 函数实现两个数的交换
// (swap2 不能用来交换数据)
// *pa,*pb 相当于地址
void swap1(int * pa, int * pb)
{
	int tmp;
	// 顺着纸条上的去找东西,最终找到之后再交换
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//pa,pb 相当于纸条
void swap2(int * pa, int * pb)
{
	int * ptmp;// ptmp相当于临时纸条

	ptmp = pa;
	pa = pb;
	pb = ptmp;// 相当于交换了两个纸条的内容;

}

int four()
{
	int a = 0, b = 0;
	printf("请输入需要交换的两个数(用空格隔开):\n");
	scanf("%d%d", &a, &b);
	swap2(&a, &b);

	printf("%d %d", a, b);
	system("pause");
	return 0;
}

void test(int n){
	n = 6;// 形参,冒牌货
}
int five(){
	int n = 5;// 实参,实货
	test(n);

	printf("%d\n", n);

	system("pause");
	return 0;

}

//需指针才能换货
void test2(int* pn){
	*pn = 6;// 形参,冒牌货
}
int main(){
	int n = 5;// 实参,实货
	test2(&n);

	printf("%d\n", n);

	system("pause");
	return 0;

}