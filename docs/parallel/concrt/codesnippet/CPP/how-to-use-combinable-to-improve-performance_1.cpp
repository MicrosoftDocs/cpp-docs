      prime_sum = accumulate(begin(a), end(a), 0, [&](int acc, int i) {
         return acc + (is_prime(i) ? i : 0);
      });