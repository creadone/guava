#include "jump.h"

static const uint64_t seed = 2862933555777941757;
int32_t jump_consistent_hash(uint64_t key, int32_t num_buckets) {
    long long b = -1;
    long long j = 0;
    while (j < ((long long) num_buckets))
    {
        b = j;
        key = key * seed + 1;
        j = ((long long) (((double) (b + 1)) * (((double)(((long long) 1) << 31)) / ((double)((key >> 33)+1)))));
    }
    return (int) b;
}