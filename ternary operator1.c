#include<stdio.h> 

float compute_average(int sum,int count){
	return count ?(float)sum/count :0;//ternary operator to avoid division by zero
}
int main(){
	int temp,i,sum=0,count=0,days;//variables declarations
	
	printf("Enter number of days with recorded temperatures: ");
	scanf("%d",&days);
	
	for(i=0;i<days;i++){//for loop to iterate within the given number of days
		printf("Enter temperature for day %d: ",i+1);
		scanf("%d",&temp);
		sum+=temp;
		count++;
	}
	printf("The average temperature: %.2f\n",compute_average(sum,count));//calling the function for average computation
	return 0;
}