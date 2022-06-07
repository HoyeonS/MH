/**
    source file for non-applied checker
**/

#include <stdio.h>
#include <stdlib.h>
#include "applied.h"

//num of door should be 3

int check_success2(int num_of_door) {

    printf("applied started - 0 - \n");
    // 1.assign goat on random number
    printf("1.assign goat on random number.. \n");
    int goat_location = random_assign2(num_of_door);

    printf("goat is located.. location: %d\n", goat_location);

    
    // 2.randomly picked the door

    printf("2.randomly picked the door.. \n");
    int picked = random_pick2(num_of_door);

    printf("picked door number is.. %d\n", picked);

    printf("3. Monty event occurs.. \n");

    int shown = monty_event2(num_of_door, picked, goat_location);

    printf("monty event shows %dth door..\n", shown);

    printf("CHANGED! \n");

    picked = 3 - picked - shown;

    int result = (goat_location == picked);

    if(result)
        printf("success!\n");
    else
        printf("fail!\n");

    return result;
}

int random_assign2(int num_of_door) {
    return rand() % num_of_door;
}

int random_pick2(int num_of_door) {
    return rand() % num_of_door;
}

int monty_event2(int num_of_door,
                 int digit_picked,
                  int goat_loc) {
    int tmp[num_of_door];
    for(int i = 0; i < num_of_door; i++) {
        if(i != digit_picked && i != goat_loc)
            tmp[i] = i;
    }

    int ev = rand() % 2;

    return tmp[ev];

                  }