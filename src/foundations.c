#include "foundations.h"

int array_sum(const int *values, size_t length) {
    int total = 0;
    for (size_t index = 0; index < length; ++index) {
        total += values[index];
    }
    return total;
}
