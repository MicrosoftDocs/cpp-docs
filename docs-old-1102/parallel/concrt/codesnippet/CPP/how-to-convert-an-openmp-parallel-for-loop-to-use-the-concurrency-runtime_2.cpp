// Uses OpenMP to compute the count of prime numbers in an 
// array object.
template<size_t Size>
void omp_count_primes(const array<int, Size>& a)
{
   if (a.size() == 0)
      return;

   size_t count = 0;
   int size = static_cast<int>(a.size());
   #pragma omp parallel for
      for (int i = 0; i < size; ++i)
      {
         if (is_prime(a[i])) {
            #pragma omp atomic
               ++count;
         }
      }

   wcout << L"found " << count 
         << L" prime numbers." << endl;
}

// Uses the Concurrency Runtime to compute the count of prime numbers in an 
// array object.
template<size_t Size>
void concrt_count_primes(const array<int, Size>& a)
{
   if (a.size() == 0)
      return;

   combinable<size_t> counts;
   parallel_for_each(begin(a), end(a), [&counts](int n) 
   {
      if (is_prime(n)) {
         counts.local()++;
      }
   });

   wcout << L"found " << counts.combine(plus<size_t>()) 
         << L" prime numbers." << endl;
}