#include <stdio.h>

#include "math.h"


int main()
{
    number_to_square = 3.0;

    printf("%f\n", get_square());  // NOT EASY, 3*3 * 4*4
    // This solution doesn't scale well
    // Try to avoid global variables if possible.

    return 0;
}
