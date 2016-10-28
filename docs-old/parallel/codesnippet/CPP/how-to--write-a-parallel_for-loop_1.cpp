// Computes the product of two square matrices.
void matrix_multiply(double** m1, double** m2, double** result, size_t size)
{
   for (size_t i = 0; i < size; i++) 
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
   }
}