    //
    // Demonstrate use of parallel_transform together with a unary function.

    // This example uses a lambda expression.
    parallel_transform(begin(values), end(values), 
        begin(results), [](int n) { 
            return -n;
        });

    // Alternatively, use the negate class:
    parallel_transform(begin(values), end(values), 
        begin(results), negate<int>());

    //
    // Demonstrate use of parallel_transform together with a binary function.

    // This example uses a lambda expression.
    parallel_transform(begin(values), end(values), begin(results), 
        begin(results), [](int n, int m) {
            return n * m;
        });

    // Alternatively, use the multiplies class:
    parallel_transform(begin(values), end(values), begin(results), 
        begin(results), multiplies<int>());