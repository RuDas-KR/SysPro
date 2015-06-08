#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void name() {
		printf("syspro@shell : ");
}	//	Shell Name Print

int main() {
		int status;
		pid_t pid;
		char run[100] = {'\0'};
		char child[100] = {'\0'};
		int i;

		while(1) {
				name();
				gets(run);
				if((strcmp(run, "exit") == 0) || (strcmp(run, "quit") == 0)) {
						printf("Process Exit\n");
						break;
				}
				//	입력받은 문자열이 exit 혹은 quit일 경우 프로세스 종료

				switch(pid = fork()){
				case -1 :
					perror("fork");
					exit(1);
					break;
					
				case 0 :
					printf("--> Child Process\n");
					while(1) {
						name();
						gets(child);
						if((strcmp(child, "exit") == 0) || (strcmp(child, "quit") == 0)) {
							break;
						}	//	Child에서 입력받은 문자열이 exit 혹은 quit일 경우 프로세스 종료
						
						i = system(child);
					}
					
					printf("Child Exit\n");
					exit(2);
					break;
					
				default :
					while(wait(&status) != pid)
						continue;
					break;
				}
		}
		
		return 0;
}
