#include<stdio.h>
#include<stdlib.h>

void main()
{
	int **x;
	printf("[----- [������]   [2018038027] -----]\n");
	/* 32��Ʈ�� �����Ϸ��� ����ϰ� �־ �������� ũ�Ⱑ 4����Ʈ �Դϴ�. */
	printf("sizeof(x) = %lu\n", sizeof(x));//x�� �����������̹Ƿ� �������� ũ���� 4����Ʈ�� ���
	printf("sizeof(x) = %lu\n", sizeof(*x));//*x�� ���������� �������� ������ �ϹǷ� 4����Ʈ�� ���
	printf("sizeof(**x) = %lu\n",sizeof(**x));//**x�� integer���� ���� �����Ƿ� 4����Ʈ�� ���.
}
