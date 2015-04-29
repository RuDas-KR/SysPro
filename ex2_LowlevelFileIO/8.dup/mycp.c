#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(char argc, char *argv[]) {
	char ch;
	int src,dst;
	
	if(argc != 3) {
		perror("Wrong Used");
		printf("Used Method : mycp original_Filename Copy_Filename\n");
		exit(1);
	}

	src = open(argv[1], O_RDONLY);
	dst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if(src == -1) {
		perror(argv[1]);
		exit(1);
	}

	while(read(src, &ch, 1))
		write(dst, &ch, 1);

	close(src);
	close(dst);

	return 0;
}
