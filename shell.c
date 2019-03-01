#include <stdio.h>
#include <string.h>

int parser(char * command, char *arr[]) {
	int i = 0;

	char *p = strtok(command, "|");
	// if(p != NULL){
	// 	arr[0] = command;
	// }

    while (p != NULL)
    {
        arr[i++] = p;
        p = strtok (NULL, "|");
    }

    return i;
}

void execute_command(char *command){
	if(strstr(command, ">>")){
		// >> case
	}else if(strstr(command, ">&")){
		// >& case
	}else if(strstr(command, ">")){
		// > case
	}else if(strstr(command, "|")){
		// pipe case
	}else{
		// simple command case
	}
}

int main(){

	while(1){
		char inp[1000];
		char *arr[100];
		printf("shell>");
		scanf("%s", inp);
		if(strcmp(inp,"exit") == 0){
			break;
		}
		
		int len = parser(inp,arr);
		if(len == 0){	// non pipe input
			printf("%s\n", inp);
		}else{
			for(int i = 0; i < len; i++){
				printf("%s\n", arr[i]);
			}
		}
	}

	return 0;
}
