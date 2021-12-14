#include <stdio.h>

#include "parity_array.h"

int main() {
    ParityArray parity_array;

    int ret = initParityArray(&parity_array, 32);

    if (ret == 1) {
        fprintf(stderr, "Nem sikerult memoriat foglalni!\n");
        return 1;
    }

    printParityArray(&parity_array); // Ures kiiras
    
    insertToParityArray(&parity_array, 1);
    insertToParityArray(&parity_array, 2);
    insertToParityArray(&parity_array, 0);
    insertToParityArray(&parity_array, 2);

    printParityArray(&parity_array); // Teli kiiras

    return 0;
}
