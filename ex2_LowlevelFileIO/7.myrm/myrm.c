#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(char argc, char *argv[]) {
	int cnt;

	if(argc <= 0|| argv[1]=='\0') {
		perror("Wrong Used");
		printf("Format is 'myrm filename'\n");
		exit(1);
	}

	char *rm = argv[1];
	cnt = unlink(argv[1]);
	printf("%s is Unlink\n", rm);

	return 0;
}
