#ifndef FOUNDATIONS_H
#define FOUNDATIONS_H

#include <stddef.h>

int array_sum(const int *values, size_t length);

int array_max(const int *values, size_t length);

int array_range(const int *values, size_t length);

int array_count_positive(const int *values, size_t length);

int array_count_nonzero(const int *values, size_t length);

int array_first(const int *values, size_t length);

int array_last(const int *values, size_t length);

int array_count_increasing_pairs(const int *values, size_t length);

int array_even_sum(const int *values, size_t length);

#endif
