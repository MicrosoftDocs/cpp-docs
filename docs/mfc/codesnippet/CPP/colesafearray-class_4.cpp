//sa is of type COleSafeArray with 2 dimensions

//Determine upper bounds for both dimensions
long lNumRows;
long lNumCols;
sa.GetUBound(1, &lNumRows);
sa.GetUBound(2, &lNumCols);

//Display the elements in the SAFEARRAY.
long index[2];
VARIANT val;

//Determine lower bounds for both dimensions
long lowRow, lowCol;
sa.GetLBound(1, &lowRow);
sa.GetLBound(2, &lowCol);

for (long r = lowRow; r <= lNumRows; r++)
{
   for (long c = lowCol; c <= lNumCols; c++)
   {
      index[0] = r;
      index[1] = c;

      //retrieve each element of the safearray
      sa.GetElement(index, &val);

      switch (val.vt)
      {
      case VT_R8:
         TRACE(_T("%1.2f\n"), val.dblVal);
         break;

      case VT_BSTR:
         TRACE(_T("%s\n"), (CString)val.bstrVal);
         break;

         // other cases omitted

      case VT_EMPTY:
         TRACE(_T("<empty>\n"));
         break;
      }
   }
}