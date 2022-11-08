#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char str[30];
	int i;
	
	FILE *fp;
	
	fp = fopen("C:/Users/sinka/Desktop/4학기/수업/전자공학도를 위한 프로그래밍/실습 파일/10/sample.txt", "w");
	
	for (i = 0; i <3; i++)
	{
		printf("input a word : ");
		scanf("%s", str);
		fprintf(fp, "%s\n", str);
	}
	
	fclose(fp);
	
	return 0;
}
