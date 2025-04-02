#include<stdio.h> 

//program to input two intager x and y, get sum, difference, quotient, product and remainder.
int main(){
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d %d",&x,&y);
	//perfom the calculations
	int sum=x+y;
	int product=x*y;
	int difference=x-y;
	int quotient, remainder;
	
	if(y!=0){
		quotient=x/y;
		remainder=x%y;
	}else 
	printf("Invalid operation! division and modulo by zero is invalid\n Hence cannot be perfomed\n");
	
	printf("The results are\n");
	printf("Sum: %d\n",sum);
	printf("Product: %d\n",product);
	printf("Difference: %d\n",difference);
	
	if(y!=0){
		printf("Quotient: %d\n",quotient);
		printf("Remainder: %d\n",remainder);
	}
	
	return 0;
}