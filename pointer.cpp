#include<stdio.h>
#include<stdlib.h>
void pointer_basic(){
	int i = 10, j = 20, *a;
	a = &i;//�ּ�����
	printf("%p, %p\n",a,&i); //�ּ� ���
	printf("%d", *a);//�ּҰ� ����Ű�� ���� ������
	
} 
void pointer_malloc(){
	int *x;
	x = (int*)malloc(sizeof(int)); // �����Ϳ� �޸� �Ҵ�
	*x = 123; //x�� ������ �Է�
	printf("%p  %d\n", x, *x);// �ּ� ������
	free(x);
	printf("%p  %d", x, *x);
}
void pointer_array(){
	int *x;
	x = (int*)calloc(10, sizeof(int));//�����Ϳ� ������ ����ũ�� �Ҵ�
	for (int i = 0; i < 10; i++){
		scanf_s("%d", &x[i]); //�迭 �Է¹���
	}
	for (int j = 0; j < 10; j++){
		printf("%d",x[j]); //�迭 ���
	}	
	free(x); //�޸� ��ȯ
}
void main(){
	pointer_array();
}

