    // For this example, ensure that you add the following #include directive:
    // #include <complex>

    // Create and sort a large vector of random values.
    vector<complex<double>> values(25000000);
    generate(begin(values), end(values), mt19937(42));
    parallel_sort(begin(values), end(values),
        [](const complex<double>& left, const complex<double>& right) {
            return left.real() < right.real();
        });

    // Print a few values.
    wcout << "V(0)        = " << values[0] << endl;
    wcout << "V(12500000) = " << values[12500000] << endl;
    wcout << "V(24999999) = " << values[24999999] << endl;
    /* Output:
       V(0)        = (383,0)
       V(12500000) = (2.1479e+009,0)
       V(24999999) = (4.29497e+009,0)
    */