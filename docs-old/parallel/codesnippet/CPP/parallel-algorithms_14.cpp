    // Use hash_distance to compute the distance between points.
    parallel_radixsort(begin(values), end(values), hash_distance(center));