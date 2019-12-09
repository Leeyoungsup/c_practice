#include<stdio.h>
#include<stdlib.h>
void pointer_basic(){
	int i = 10, j = 20, *a;
	a = &i;//주소저장
	printf("%p, %p\n",a,&i); //주소 출력
	printf("%d", *a);//주소가 가르키는 곳의 데이터
	
} 
void pointer_malloc(){
	int *x;
	x = (int*)malloc(sizeof(int)); // 포인터에 메모리 할당
	*x = 123; //x에 데이터 입력
	printf("%p  %d\n", x, *x);// 주소 데이터
	free(x);
	printf("%p  %d", x, *x);
}
void pointer_array(){
	int *x;
	x = (int*)calloc(10, sizeof(int));//포인터에 개수와 개별크기 할당
	for (int i = 0; i < 10; i++){
		scanf_s("%d", &x[i]); //배열 입력받음
	}
	for (int j = 0; j < 10; j++){
		printf("%d",x[j]); //배열 출력
	}	
	free(x); //메모리 반환
}
void main(){
	pointer_array();
}

