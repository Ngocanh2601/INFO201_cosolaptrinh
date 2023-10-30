#include<stdio.h>
int main(){
	int c;
	printf("c;", c);
	scanf("%u", &c);
	float F=(c*9/5)+32;
	if(0<c<106){
		printf("F= %.2f", F);
	}else{
		printf("khong hop le %.2f", F);
	}
	return 0;
}