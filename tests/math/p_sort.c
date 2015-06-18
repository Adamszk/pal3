#include <stdlib.h>
#include "simple.h"

static int comp(const void * a, const void * b)
{
    if (*(float*)a > *(float*)b) {
        return 1;
    }
    if (*(float*)a < *(float*)b) {
        return -1;
    }
    return 0;
}

void generate_ref(float *out, size_t n)
{
    memcpy(out, ai, n*sizeof(float));
    qsort(out, n, sizeof(float), comp);
}
