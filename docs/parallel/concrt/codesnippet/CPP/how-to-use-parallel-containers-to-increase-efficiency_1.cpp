// Determines whether the input value is prime.
bool is_prime(int n)
{
   if (n < 2)
      return false;
   for (int i = 2; i < n; ++i)
   {
      if ((n % i) == 0)
         return false;
   }
   return true;
}

// Determines whether the input value is a Carmichael number.
bool is_carmichael(const int n) 
{
   if (n < 2) 
      return false;

   int k = n;
   for (int i = 2; i <= k / i; ++i) 
   {
      if (k % i == 0) 
      {
         if ((k / i) % i == 0) 
            return false;
         if ((n - 1) % (i - 1) != 0)
            return false;
         k /= i;
         i = 1;
      }
   }
   return k != n && (n - 1) % (k - 1) == 0;
}