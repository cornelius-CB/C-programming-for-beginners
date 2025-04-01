#include<stdio.h>
int main(){
	int i, num, fact=1;
	printf("Enter a number to finf its factorial: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		fact*=i;
	}
	printf("The factorial of %d is %d",num,fact);
	return 0;
}