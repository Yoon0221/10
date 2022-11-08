#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char c;
	
	FILE *fp = NULL;
	
	fp = fopen("C:/Users/sinka/Desktop/4학기/수업/전자공학도를 위한 프로그래밍/실습 파일/10/sample.txt", "r");
	
	while((c = fgetc(fp)) != EOF)
	{
		putchar(c);
	}
	
	fclose(fp);
	
	return 0;
}
