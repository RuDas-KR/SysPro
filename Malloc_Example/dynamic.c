#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char* ptr;
	int i, n=0;

	if(argc>1) {
		n = (int)atoi(argv[1]);
		printf("the input len=%d\n", n);
	}
	else {
		printf("usage: maltest N(num of bytes)\n");
		exit(0);
	}

	ptr=(char*)malloc(sizeof(char)*n);
	if(ptr == NULL) {
		perror("malloc");
		exit(1);
	}
	else {
		for(i=0; i<n; i++)
			ptr[i] = 0x30+i;
		ptr[n-1] = '\0';
		printf("the str = %s\n", ptr);

		free(ptr);
	}

	return 1;
}
