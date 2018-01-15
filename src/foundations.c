#include "foundations.h"

int array_sum(const int *values, size_t length) {
    int total = 0;
    for (size_t index = 0; index < length; ++index) {
        total += values[index];
    }
    return total;
}

int array_max(const int *values, size_t length) {
    if (length == 0) return 0;
    int result = values[0];
    for (size_t index = 1; index < length; ++index) if (values[index] > result) result = values[index];
    return result;
}
