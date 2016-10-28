   critical_section cs;
   prime_sum = 0;
   parallel_for_each(begin(a), end(a), [&](int i) {
      cs.lock();
      prime_sum += (is_prime(i) ? i : 0);
      cs.unlock();
   });