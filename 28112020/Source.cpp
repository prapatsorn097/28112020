#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h> 

struct student {
	int id;
	char name[40];
	float score;
};

void input_data() {
	struct student std[4];
	int mean = 0;
	int i;
	for (i = 0; i < 4; i++) {
		printf("Student Data[%d] \n", i + 1);
		printf("ID = ");
		scanf("%d", &std[i].id);
		printf("Name = ");
		scanf("%s", &std[i].name);
		printf("Score = ");
		scanf("%f", &std[i].score);
		mean = mean + std[i].score;
	}
	int j;
	for (j = 0; j < 4; j++) {

		printf("Display Data of Student[%d] \n", j + 1);
		printf("ID  = %d\n", std[j].id);
		printf("Name = %s\n", std[j].name);
		if (std[j].score >= 0 && std[j].score < 50) {
			printf("Get F\n");
		}
		if (std[j].score >= 50) {
			if (std[j].score >= 50 && std[j].score < 60) {
				printf("Get D\n");
			}
			if (std[j].score >= 60 && std[j].score < 70) {
				printf("Get C\n");
			}
			if (std[j].score >= 70 && std[j].score < 80) {
				printf("Get B\n");
			}
			if (std[j].score >= 80 && std[j].score < 100) {
				printf("Get A\n");
			}
		}
	}
	printf("mean = %d", mean / 4);
}

int main() {
	input_data();

}