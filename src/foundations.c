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

int array_range(const int *values, size_t length) {
    if (length == 0) return 0;
    int low = values[0], high = values[0];
    for (size_t index = 1; index < length; ++index) { if (values[index] < low) low = values[index]; if (values[index] > high) high = values[index]; }
    return high - low;
}

int array_count_positive(const int *values, size_t length) {
    int total = 0;
    for (size_t index = 0; index < length; ++index) total += values[index] > 0;
    return total;
}

int array_count_nonzero(const int *values, size_t length) {
    int total = 0;
    for (size_t index = 0; index < length; ++index) total += values[index] != 0;
    return total;
}

int array_first(const int *values, size_t length) {
    return length == 0 ? 0 : values[0];
}

int array_last(const int *values, size_t length) {
    return length == 0 ? 0 : values[length - 1];
}

int array_count_increasing_pairs(const int *values, size_t length) {
    int total = 0;
    for (size_t index = 1; index < length; ++index) total += values[index] > values[index - 1];
    return total;
}

int array_even_sum(const int *values, size_t length) {
    int total = 0;
    for (size_t index = 0; index < length; ++index) if (values[index] % 2 == 0) total += values[index];
    return total;
}

int array_odd_sum(const int *values, size_t length) {
    int total = 0;
    for (size_t index = 0; index < length; ++index) if (values[index] % 2 != 0) total += values[index];
    return total;
}

int array_index_of_max(const int *values, size_t length) {
    if (length == 0) return -1;
    size_t result = 0;
    for (size_t index = 1; index < length; ++index) if (values[index] > values[result]) result = index;
    return (int)result;
}

int array_index_of_min(const int *values, size_t length) {
    if (length == 0) return -1;
    size_t result = 0;
    for (size_t index = 1; index < length; ++index) if (values[index] < values[result]) result = index;
    return (int)result;
}

int array_middle(const int *values, size_t length) {
    return length == 0 ? 0 : values[length / 2];
}
