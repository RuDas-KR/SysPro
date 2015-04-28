#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(char argc, char *argv[]) {
	int cnt;

	if(argc != 2) {
		perror("Wrong Used");
		printf("Format is 'myrm filename'\n");
		exit(1);
	}

	char *rm = argv[1];
	cnt = unlink(argv[1]);
	printf("%s is Unlinked\n", rm);

	return 0;
}
