/**
    header file of non-applied.c
    non-applied
        assign goat on random number
        randomly picked the door
        door not picked and even not goats should be placed.
        not changed and return whether it is  success

**/

int check_success(int num_of_door); //check for the success (fail - 0, success - 1)

int random_assign(int num_of_door); //randomly assign the location of the goat

int random_pick(int num_of_door); //randomly pick the door number

int monty_event(int num_of_door,
                 int digit_picked,
                  int goat_loc); // monty events to show the empty door not picked

