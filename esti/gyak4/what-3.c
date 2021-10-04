#include<stdio.h>
int main()
{
    int a, b, c;	
    int arr[5] = {1, 2, 3, 25, 7};
    a = ++arr[1]; /* a == 3, => 4 */
    b = arr[1]++; /* b == 3 */
    c = arr[a++]; /* c == 25 */
    printf("%d : %d :%d", a, b, c);
    return 0;
}
