#include <stdio.h>
#include <stdlib.h>
#include "compare.h"

int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("WRONG INPUT X\n");
        return -1;
    }

    int result = compare(atoi(argv[1]));

    if(result)
        printf("Winner is applied \n");
    else   
        printf("Winner is napplied \n");
    return 0;
}
