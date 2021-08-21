//https://github.com/hazemabdo15/C-Task-5.git
#include<stdio.h>
#include<string.h>
void calc_gpa(float score1, float score2, int cred_hour1, int cred_hour2) {
	float gpa = ((score1 * cred_hour1) + (score2 * cred_hour2)) / (cred_hour1 + cred_hour2);
	printf("Your GPA is %f", gpa);
}

struct course {
	int credit_hours;
	float student_score;
};

struct student {
	char arr[2][20];
	float gpa;
};

struct course c[2];
struct student s;

int main() {
	c[0].credit_hours = 3;
	c[1].credit_hours = 4;
	strcpy_s(s.arr[0], "Mathematics");
	strcpy_s(s.arr[1], "Programming");
	printf("Enter your score in Math (out of 4) : ");
	scanf_s("%f", &c[0].student_score);
	printf("Enter your score in Programming (out of 4) : ");
	scanf_s("%f", &c[1].student_score);
	calc_gpa(c[0].student_score, c[1].student_score, c[0].credit_hours, c[1].credit_hours);
}