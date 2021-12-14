#include <stdio.h>

#include "parity_array.h"

int main() {
    ParityArray parity_array;

    initParityArray(&parity_array);

    printParityArray(&parity_array); // Ures kiiras
    
    insertToParityArray(&parity_array, 1);
    insertToParityArray(&parity_array, 2);
    insertToParityArray(&parity_array, 0);
    insertToParityArray(&parity_array, 2);

    printParityArray(&parity_array); // Teli kiiras

    return 0;
}
