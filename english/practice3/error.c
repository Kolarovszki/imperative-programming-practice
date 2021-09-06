#include <stdio.h>


int main() {

    char hex;

    scanf("%c", &hex);

    /* OR
    (True || True = True)
    (True || False = True)
    (False|| False = False)
    */

    /* AND
    (True || True = True)
    (True || False = False)  <-- DIFFERENCE
    (False|| False = False)
    */

    if (
        hex < 'a' || hex > 'f'
        &&
        hex < '0' || hex > '9'
    ) {
        printf("Wrong hexadecimal");
        return 1;
    }



    return 0;
}
