#include <stdio.h>


/*
 * a: "abc", b: "cbd" ( a < b  ) -> Returns -1
 * a: "abc", b: "abc" ( a == b ) -> Returns 0
 * a: "cbd", b: "abc" ( a > b  ) -> Returns 1
 * a: "abc", b: "abd" ( a < b ) -> Returns -1
 * a: "abc", b: "aaz" ( a > b ) -> Returns 1
 */
int stringcompare(char* a, char* b) {
    // TODO: Implement

}


int main() {
    
    /*
    "abc" < "cbd"
    */

    /*
     * We know, that e.g. 'a' < 'c'
     */

    printf("%d", 'a' > 'c');

    printf("%d\n", stringcompare("abc", "cbd"));  // Prints out -1
    return 0;
}
