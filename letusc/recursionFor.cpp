#include <stdio.h>

int fun(int n) {
    int x = 1;

    if (n == 1) {
        return x;
    }

    for (int k = 1; k < n; ++k) {
        x += fun(k) * fun(n - k);
    }

    return x;
}

int main() {
    int n = 5;
    printf("%d\n", fun(n));

    return 0;
}
