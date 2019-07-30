void CMainFrame::Sort(VARIANT* vArray)
{
   COleSafeArray sa;
   BSTR* pbstr;
   TCHAR buf[1024];
   LONG cElements, lLBound, lUBound;

   //needed for OLE2T macro below, include afxpriv.h
   USES_CONVERSION;

   // Type check VARIANT parameter. It should contain a BSTR array
   // passed by reference. The array must be passed by reference it is
   // an in-out-parameter.
   if (V_VT(vArray) != (VT_ARRAY | VT_BSTR))
   {
      AfxThrowOleDispatchException(1001,
         _T("Type Mismatch in Parameter. Pass a string array by reference"));
   }

   // clears data in sa and copies the variant data into sa
   sa.Attach(*vArray);

   // Check that array is 1 dimensional
   if (sa.GetDim() != 1)
   {
      AfxThrowOleDispatchException(1002,
         _T("Type Mismatch in Parameter. Pass a one-dimensional array"));
   }

   try
   {
      // Get array bounds.
      sa.GetLBound(1, &lLBound);
      sa.GetUBound(1, &lUBound);

      // Get a pointer to the elements of the array
      // and increments the lock count on the array
      sa.AccessData((LPVOID*)& pbstr);

      //get no. of elements in array
      cElements = lUBound - lLBound + 1;
      for (int i = 0; i < cElements; i++)
      {
         //output the elements of the array
         _stprintf_s(buf, 1024, _T("[%s]\n"), OLE2T(pbstr[i]));
         OutputDebugString(buf);
      }

      //decrement lock count
      sa.UnaccessData();
   }
   catch (COleException* pEx)
   {
      AfxThrowOleDispatchException(1003,
         _T("Unexpected Failure in FastSort method"));
      pEx->Delete();
   }
}