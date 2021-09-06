#include <stdio.h>


int main() {
    printf ("Enter the number :");
	int num , r ;

	int reverse = 0 ;

	scanf("%i", &num);

	//123
	
	while ( num != 0 ) {
		
	 	r = num % 10 ;

		// 123 % 10 = 3
		num = num - r;
		// num = 120
		num = num / 10 ;

		// num = 12

	 	reverse = reverse * 10 + r; // 1

		// 321
	}

	printf("Reversed: %d\n", reverse);

	

    return 0;
}
