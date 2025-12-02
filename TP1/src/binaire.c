#include <stdio.h>
#include <string.h>

void afficherBinaire(int n) {
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int tests[] = {0, 4096, 65536, 65535, 1024};

    for (int i = 0; i < 5; i++) {
        printf("%d en binaire : ", tests[i]);
        afficherBinaire(tests[i]);
    }

    return 0;
}
