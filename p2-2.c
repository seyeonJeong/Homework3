#include <stdio.h>

void print1(int *ptr, int rows);//return ���� ���� �Ű����� �ΰ��� ���� �Լ�

int main()
{
	int one[] = {0, 1, 2, 3, 4};//������ �迭 one ����
	printf("[----- [������]   [2018038027] -----]\n");
	printf("one     =%p\n", one);//one�迭�� �̸��� one[0]�� �ּ��̹Ƿ� one[0]�� �ּ� ���
	printf("&one    =%p\n", &one);//one�� �ּҴ� one[0]�� �ּ��̹Ƿ� one[0]�� �ּ� ���
	printf("&one[0] =%p\n", &one[0]);//one[0]�� �ּҰ� ��µȴ�.
	printf("\n");

	print1(&one[0], 5);//print1�� �Լ��� ȣ���ϰ� print1 �Լ��� one[0]�� �ּҿ� 5�� �����Ѵ�.

	return 0;
}

void print1(int *ptr, int rows)//one�迭�� ������ �ּҿ� ������ ����ϴ� �Լ��̴�,one[0]�� �ּҰ��� ������ ������ ���·� �Ű�����ȭ �Ͽ� ���� �����.
{/* print out a one-dimensional array using a pointer */

	int i;//integer�� ���� ����
	printf("Address \t Contents\n");//Address�� contents�� ���
	for(i=0; i<rows;i++)//i=0���� rows�� �Ű��� �� ��ŭ 1�� ���Ѵ�.
		printf("%p \t  %5d\n", ptr + i, *(ptr + i));//�Ű������� ������ ptr�� �̿��Ͽ� i��ŭ�� ���� ���Ͽ� �ּҿ� ���� ��� �̶� �ּҴ� 4bytes�� ����
	printf("\n");
}
