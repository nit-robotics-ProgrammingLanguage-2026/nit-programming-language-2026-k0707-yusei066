#include <stdio.h>

int is_prime(int x)
{
    int i;

    if (x <= 1) {
        return 0;
    }

    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int n;
    int count = 0;

    scanf("%d", &n);

    if (n > 10000) {
        printf("NG\n");
    } else {
        for (int i = 1; i <= n; i++) {
            if (is_prime(i)) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}