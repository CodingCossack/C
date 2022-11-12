// Assign grades to students based on their average scores

#include <stdio.h>

double getAverageScore(double scores[5]){

	double score = 0;

	for (int i=0; i<5; i++){
		score = score + scores[i];
	}
	double average = score / 5;

	return average;
}

char computeGrade(double averageScore){
	char grade;

	if (averageScore >= 80){
		grade = 'A';
	}

	else if (averageScore >= 60)
	{
		grade = 'B';
	}

	else if (averageScore >= 50)
	{
		grade = 'C';
	}

	else {
		grade = 'F';
	}

	return grade;
}


int main(){

	double scores[5];
	printf("Enter array element\n");
		for (int i = 0; i<5; i++){
			scanf("%lf", &scores[i]);
		}


	double averageScore = getAverageScore(scores);
	char grade = computeGrade(averageScore);
	printf("Average score is: %.2lf\n", averageScore);
	printf("Average grade is: %c", grade);

	return 0;
}