#include "jump.h"

// The seed constant is used to generate the hash code
static const uint64_t seed = 2862933555777941757;

// This function implements jump consistent hashing for the given key and number of buckets
int32_t jump_consistent_hash(uint64_t key, int32_t num_buckets) {
    long long b = -1;
    long long j = 0;

    while (j < ((long long) num_buckets))
    {
        b = j;
        key = key * seed + 1;

        // Compute the constant factor used in the calculation of j
        double factor = (double)(((long long) 1) << 31) / ((double)((key >> 33) + 1));

        // Compute the numerator used in the calculation of j
        double numerator = (double)(b + 1);

        // Compute the denominator used in the calculation of j
        double denominator = factor;

        // Compute the product of the numerator and denominator, then convert to long long and assign to j
        j = (long long)(numerator * denominator);
    }

    // Cast j to int and return it as the bucket number
    return (int) j;
}