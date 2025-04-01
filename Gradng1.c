#include<stdio.h> 
#include<string.h>
#include<ctype.h>
//Program to continously prompt the user to enetr a score and grade it using a univaersity grading system.The program terminates when the user enters stops
//function definition that grades the score
void gradeScore(int score){
	if(score>=70){
		printf("Grade: A\n");
	}else if (score>=60){
		printf("Grade: B\n");
	}else if (score>=50){
		printf("Grade: C\n");
	}else if (score>=40){
		printf("Grade: D\n");
	}else {
		printf("Grade: F\n");
	}
}

int main(){
	char input[10];
	int score,i;
	
	do{
		printf("Enter a score or type 'stop' to exit: ");
		scanf("%s",input);
		for (i = 0; input[i]; i++) {
            input[i] = tolower(input[i]);//to handle the capital and small letter errors
            	
			}
		
		 if (strcmp(input, "stop") == 0) {//compares the user input with stop
            break;//terminates the program when user enters stop
	}
	score=atoi(input);//converts the input nto an integer
	if (score>=0&&score<=100){//handles the abnormal scores or score entry error
		gradeScore(score);
	}else {
		printf("Invalid score! Please enter a score btn 0 and 100.\n");//displays error
	}
	
}while (1);
printf("Program terminated\n");//displays the end of the program

return 0;
}