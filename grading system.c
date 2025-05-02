#include <stdio.h>
int main(int argc, char** argv)
{
	float Maths;
	float Kisw;
	float Eng;
	float Geo;
	float Chem;
	float Bio;
	float total;
	float average;
	printf("Student name: James \n");
	printf("Reg.no:T006/Dcs/57570/2024\n");
	printf("Enter Marks for Maths: ");
	scanf("%f",&Maths);
	printf("Enter Marks for Eng: ");
	scanf("%f",&Eng);
	printf("Enter Marks for Kisw: ");
	scanf("%f",&Kisw);
	printf("Enter Marks for Geo: ");
	scanf("%f",&Geo);
	printf("Enter Marks for Chem: ");
	scanf("%f",&Chem);
	printf("Enter Marks for Bio: ");
	scanf("%f",&Bio);
	total = Maths+Kisw+Eng+Geo+Chem+Bio;
	average = total/6;
	if ((average >= 70) && (average < 100)){
		printf("Grade = A\n\n");
	}else if((average >= 60) && (average < 70)){
		printf("Grade = B\n\n");
	}else if((average >= 50) && (average < 60)){
		printf("Grade = C \n\n");
	} else if((average >= 40) && (average < 50)){
		printf("Grade = D \n\n");
	}else if((average >= 0) && (average < 40)){
		printf("Student Failed!! \n\n");
	}else{
		printf("Student Didn't Do Exam!\n\n");
	}
	printf("Total Score = %f\n\n",total);
	printf("Average Score =%f\n\n",average);
	return 0;
}