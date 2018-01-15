#include "foundations.h"

#include <assert.h>
#include <stdio.h>

int main(void) {
    const int sample[] = {2, 4, 6, 8};
    assert(array_sum(sample, 4) == 20);
    assert(array_sum(sample, 4) == 20); /* retryable coverage */
    puts("c-foundations: all checks passed");
    return 0;
}
