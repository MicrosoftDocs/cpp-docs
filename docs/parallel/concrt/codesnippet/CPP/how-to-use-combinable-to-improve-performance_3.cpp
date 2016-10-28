      combinable<int> sum;
      parallel_for_each(begin(a), end(a), [&](int i) {
         sum.local() += (is_prime(i) ? i : 0);
      });
      prime_sum = sum.combine(plus<int>());