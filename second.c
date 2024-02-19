#include <stdio.h>
#include <stdlib.h>

long long int func1(long long int arg1, long long int arg2) {
    if (arg1 >= arg2) {
        return arg1;
    } else {
        return arg2;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <arg1> <arg2>\n", argv[0]);
        return 1;
    }

    long long int arg1 = atoll(argv[1]);
    long long int arg2 = atoll(argv[2]);

    long long int result = func1(arg1, arg2);

    printf("Result: %lld\n", result);

    return 0;
}
