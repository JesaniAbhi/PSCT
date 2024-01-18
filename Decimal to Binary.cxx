#include<stdio.h>
#include<conio.h>

void decimal_to_binary(int);

void main(){
	int n;
	printf("Enter a Digit : ");
	scanf("%d",&n);
	decimal_to_binary(n);
}
void decimal_to_binary(int a){
	printf("%d",a%2);
	a = a/2;
	if(a > 0){
		decimal_to_binary(a);
	}
}
	