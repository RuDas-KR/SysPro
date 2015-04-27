#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	int cnt;

	cnt = unlink("test.txt");
	if (cnt == -1) {
		perror("Unlink test.txt");
		exit(1);
	}

	printf("Unlink test.txt Success!!\n");

	return 0;
}
