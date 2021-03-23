#include <stdio.h>
#include <stdlib.h>

int main() {

	int list[5]; //5���� ���Ҹ� ������ integer�� �迭 ����
	int *plist[5] = {NULL,};//integer�� ������ 5���� ������ �迭 ����, �ʱ�ȭ

	plist[0] = (int *)malloc(sizeof(int));//integer�� ũ���� 4����Ʈ�� heap���� ������ list[0]�� �ּҸ� ����

	list[0] =1; //list[0]�� 1�� ����
	list[1] =100;//list[1]�� 100�� ����

	*plist[0] = 200;//plist[0]�� ����Ű�� �ִ� ���� 200�� ����

	printf("[----- [������]   [2018038027] -----]\n");

	printf("value of list[0] = %d\n", list[0]);//list[0]=1�̱� ������ 1�� ���´�
	printf("address of list[0]      =%p\n",&list[0]);//list[0]�� �ּҰ� ���´�.
	printf("value of list           =%p\n", list);//�迭�� �̸��� list[0]�� �ּ��̹Ƿ� list[0]�� �ּҰ� ���´�.
	printf("address of list (&list) =%p\n", &list);//list�� �ּҴ� list[0]�� �ּҿ� �����Ƿ� list[0]�� �ּҰ� ���´�.

	printf("--------------------------------------------\n\n");
	printf("value of list[1]   =%d\n", list[1]);//list[1]=100�̱� ������ 100�� ���´�.
	printf("address of list[1] =%p\n", &list[1]);//list[1]�� �ּҰ� ���´�.
	printf("value of *(list+1) =%d\n", *(list+1));//list[0]�� 1�� ���� ���� ����Ű�� ���� integer�� ũ���� 4��ŭ ���ϸ� list[1]�� ���̳��´�.
	printf("address of list+1  =%p\n", list+1);//list[0]�� �ּҿ� integer���� ũ���� 4�� ������ �ּҰ� ���´�(list[1]�� �ּ�)


	printf("--------------------------------------------\n\n");

	printf("value of *plist[0] =%d\n", *plist[0]);//plist[0]�� ����Ű�� �ִ� ���� 200�� ���
	printf("&plist[0]          =%p\n", &plist[0]);//plist[0]�� �ּҰ� ���.
	printf("&plist             =%p\n", &plist);//plist�� plist[0]�� ���� ǥ���̱� ������ plist[0]�� �ּҰ� ���.
	printf("plist              =%p\n", plist);//plist�� �迭�̹Ƿ� �ּҰ� ����Ǿ��ִ�. �׷��Ƿ� plist[0]�� �ּҰ� ���.
	printf("plist[0]           =%p\n", plist[0]);//malloc�� ���� �Ҵ�� heap������ �ּҰ� plist[0]�� ����Ǿ� �����Ƿ� ����Ű���ִ� �ּҰ� ���.
	printf("plist[1]           =%p\n", plist[1]);//���� ������� �ʱ� ������ NULL�� ���
	printf("plist[2]           =%p\n", plist[2]);//���� ������� �ʱ� ������ NULL�� ���
	printf("plist[3]           =%p\n", plist[3]);//���� ������� �ʱ� ������ NULL�� ���
	printf("plist[4]           =%p\n", plist[4]);//���� ������� �ʱ� ������ NULL�� ���

	free(plist[0]);//�����Ҵ��� ����

}
