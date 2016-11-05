// Computes the product of two square matrices in parallel.
void parallel_matrix_multiply(double** m1, double** m2, double** result, size_t size)
{
   parallel_for (size_t(0), size, [&](size_t i)
   {
      for (size_t j = 0; j < size; j++)
      {
         double temp = 0;
         for (int k = 0; k < size; k++)
         {
            temp += m1[i][k] * m2[k][j];
         }
         result[i][j] = temp;
      }
   });
}