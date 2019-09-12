#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

#define MAX_ID_LEN 128

int isop(char);
int isidentifier(char*);
int checkIfDigit(char *);

int main() {
	char buffer[MAX_ID_LEN], ch;
	FILE* fp;
	fp = fopen("inp.txt", "r");
	if (fp == NULL) {
		printf("Error while opening the file\n");
		return -1;
	}
	int i, lines; i = lines = 1;
	while ((ch = fgetc(fp)) != EOF) {
		if (isop(ch))
			printf("%c is an operator.\n", ch);
		else if (isalnum(ch))
			buffer[i++] = ch;
		else if ((ch == ' ' || ch == '\n') && (i != 0)) {
			buffer[i] = '\0';
			i = 0;
            
			if (isidentifier(buffer))
				printf("%s is an indentifier.\n", buffer);
			if (ch == '\n')
				lines++;
		}
	}
	printf("There are %d line(s) in the given file.\n", lines-1);
	fclose(fp);
	return 0;
}

int isop(char tok){
	char* ops = "!^+-*/%=";
	for (char* c = ops; *c != '\0'; ++c) {
		if (*c == tok)
			return 1;
	}
	return 0;
}

int isidentifier(char *input){
	if (!isalpha((unsigned char)input[0]))
		return 0;

	char* iter = input + 1;
	while (iter != NULL && *iter != '\0'){
		if (isalpha(*iter) || *iter == '_')
			++iter;
		else{
			return 0;
		}
	}
	return 1;
}

int checkIfDigit(char *input){
    if(isdigit(input)){
        printf("%c\n", input);
        return 1;
    }
    else
        return 0;
}