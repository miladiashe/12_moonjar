#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	FILE* txt;
	char input[100];
	
	txt = fopen("sample.txt", "w"); 
	for (i=0;i<3;i++)
	{
		printf("tell me.");
		scanf("%s", input);
		fprintf(txt, "%s\n", input);
	}
	
	fclose(txt);
	return 0;
}
