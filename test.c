#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�˷��ھ���(������ʽ)
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
	printf("��������Ҫ���ĳ˷��ھ���");
		int n;
		scanf("%d", &n);

		printMulForm(n);

	system("pause");
	return 0;

}

//����ʵ���������Ľ���
//(�������ֺ�������������������)
void swap1(int * pa, int * pb)
{
	int tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//pa,pb �൱��ֽ��
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
	printf("��������Ҫ������������(�ÿո����):\n");
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