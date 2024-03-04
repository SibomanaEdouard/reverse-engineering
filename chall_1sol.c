#include <stdio.h>

int win(int arg1, int arg2, int arg3) {
    int result;

    result = (arg1 + arg2) * 2 + arg3;

    if (result == 0) {
        printf("win\n");
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int arg1 = 0;
    int arg2 = 0;
    int arg3 = 0;

    if (win(arg1, arg2, arg3)) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }

    return 0;
}
