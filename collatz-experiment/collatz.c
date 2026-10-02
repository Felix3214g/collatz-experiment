#include <stdlib.h>
#include <stdio.h>

int collatz_steps(int number) {
    int steps = 0;

    while (number != 1) {
        if (number % 2 == 0) {
            number = number / 2;
        } else {
            number = (number * 3) + 1;
        }

        steps++;
    }

    return steps;
}

int main() {
    int max_number = 10000;
    int buffer_size = max_number + 1;

    int *ergebnisBuffer = malloc(buffer_size * sizeof(int));

    if (ergebnisBuffer == NULL) {
        return 1;
    }

    for (int start = 1; start <= max_number; start++) {
        int steps = collatz_steps(start);
        ergebnisBuffer[start] = steps;
    }

    FILE *file = fopen("collatz_results.csv", "w");

    if (file == NULL) {
        free(ergebnisBuffer);
        return 1;
    }

    fprintf(file, "start,steps\n");

    for (int start = 1; start <= max_number; start++) {
        fprintf(file, "%d,%d\n", start, ergebnisBuffer[start]);
    }

    fclose(file);

    printf("Results written to collatz_results.csv\n");

    free(ergebnisBuffer);

    return 0;
}
