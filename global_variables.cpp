#include<stdio.h>
int a;//global
void fonk1(void){
	a=20;
	//printf("a=%d\n",a);
}
int main(){
	int a=10; //int a diyince son cikti 10, a=10 deyince 20 oluyor
	printf("a=%d\n",a);//local a10
	fonk1(); //20
	printf("a=%d\n",a);
	return 0;
}
