#include <stdio.h>
#include <stdlib.h>

int main()
{
	int list[5];//5���� ���Ҹ� ���� integer�� �迭 ����
	int *plist[5];//integer�� ������ 5���� ���� �迭 ����

	list[0] = 10; //list[0]�� ���� 10�� ����
	list[1] = 11; //list[1]�� ���� 11�� ����

	printf("[----- [������]   [2018038027] -----]\n");


	plist[0] = (int*)malloc(sizeof(int));//heap �������� 4����Ʈ��ŭ�� ũ�⸦ �Ҵ��� �� plist[0]�� �� �ּҸ� ����

	printf("list[0] \t= %d\n", list[0]);//list[0]�� ���� 0�� ���
	printf("address of list \t= %p\n", list);//list�� list[0]�� �ּҿ� ���� ������ list[0]�� �ּҰ� ���
	printf("address of list[0] \t= %p\n", &list[0]);//list[0]�� �ּҰ� ���
	printf("address of list + 0 \t= %p\n", list+0);//list+0�� list[0]�̹Ƿ� list[0]�� �ּҰ� ��µȴ�.
	printf("address of list + 1 \t= %p\n", list+1);//list+1�� list�� �ּҿ� 4�� ���� ��, �� list[1]�� �ּҰ� ��µȴ�.
	printf("address of list + 2 \t= %p\n", list+2);//list+2�� list�� �ּҿ� 8�� ���� ��, �� list[2]�� �ּҰ� ��µȴ�.
	printf("address of list + 3 \t= %p\n", list+3);//list+3�� list�� �ּҿ� 12�� ���� ��, �� list[3]�� �ּҰ� ��µȴ�.
	printf("address of list + 4 \t= %p\n", list+4);//list+4�� list�� �ּҿ� 16�� ���� ��, �� list[4]�� �ּҰ� ��µȴ�.
	printf("address of list[4] \t= %p\n", &list[4]);//list[4]�� �ּҰ� ��µȴ�. list+4�� ���� ���� ��µȴ�.

	free(plist[0]);//�����Ҵ��� ����

}
