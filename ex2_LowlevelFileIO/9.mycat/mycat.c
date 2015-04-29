#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(char argc, char *argv[]) {
	char ch;
	int fd;

	if(argc != 2) {
		perror("Wrong Used");
		printf("Used By : mycat Filename\n");
		exit(1);
	}

	fd = open(argv[1], O_RDONLY);
	if(fd == -1) {
		perror(argv[1]);
		exit(1);
	}
	
	while(read(fd, &ch, 1))
		write(1, &ch, 1);

	close(fd);

	return 0;
}
