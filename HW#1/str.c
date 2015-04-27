#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(void) {
    printf("'str -h' is Help Menu\n");
    printf("'str -r string' is Reverse print the string\n");
}
    
int main(char cptc, char *cptr[]) {
    int i, size;

    if(cptr[1][1]=='h') {
        menu();
    }

    else if (cptr[1][1]=='r') {
        size = strlen(cptr[2]);
        char *back = (char*)malloc(sizeof(char)*size);
        for(i=0; i<size; i++) {
            back[i] = cptr[2][size-i-1];
        }
        printf("%s\n", back);
    }

    else {
        printf("Wrong Instructions\n");
        menu();
    }

    return 0;
}
