#include <stdio.h>

int main()
{
    int a;
    int isPrime = 1;

    scanf("%d", &a);

    if (a == 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
