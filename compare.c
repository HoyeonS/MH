#include <stdio.h>
#include <stdlib.h>
#include "compare.h"
#include "applied.h"
#include "nonApplied.h"

int compare(int num_of_loop) {
    double applied = 0;
    double napplied = 0;

    for(int i = 0; i < num_of_loop; i++) {
        applied += check_success2(3);
        napplied +=check_success(3);
    }
    applied /= (double)num_of_loop;
    napplied /= (double)num_of_loop;

    printf("result in %d loops: [non-applied: %f, applied: %f]", num_of_loop, napplied, applied);

    return applied > napplied;
}
