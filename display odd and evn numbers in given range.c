#include<stdio.h> 
//program to print odd and even numbers within a given range with their sum and average.Using functions.
void process_odd_numbers(int lower, int upper){//returns no value 
	int sum=0,count=0,i;//initialization
	printf("\nOdd numbers: \t");
	for(i=lower;i<=upper;i++){//for loop to check and keep the range
		if(i%2!=0){//checks if it's odd
			printf("%d",i);
			sum+=i;
			count++;//incremention to update sum and count
			printf("\t");
		}
	}//displaying results.
	printf("\nTotal of odd numbers: %d\n",sum);
	printf("\nAverage of odd numbers: %.2f\n",count ?(float)sum/count :0);//condition to check if count>0
}

void process_even_numbers(int lower, int upper){
	int sum=0,count=0,i;
	printf("\nEven numbers: \t");
	for(i=lower;i<=upper;i++){
		if(i%2==0){
			printf("%d",i);
			sum+=i;
			count++;
			printf("\t");//ensures good spacing
		}
	}
	printf("\nTotal of even numbers: %d\n",sum);
	printf("\nAverage of even numbers: %.2f\n",count ?(float)sum/count :0);//condition to check if count >0
}

int main(){
	int lower,upper;
	//prompt  for the loer and upper limits
	printf("Enter lower limit: ");
	scanf("%d",&lower);
	printf("Enter upper limit: ");
	scanf("%d",&upper);
	//functio call
	process_odd_numbers(lower,upper);
	process_even_numbers(lower,upper);
	
	return 0;
}