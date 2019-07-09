// Sort is method of automation class CStrArrayDoc
long CStrArrayDoc::Sort(VARIANT* vArray)
{
   USES_CONVERSION;

   // Type check VARIANT parameter. It should contain a BSTR array
   // passed by reference. The array must be passed by reference; it is
   // an in-out-parameter.

   // throwing COleDispatchException allows the EXCEPINFO structure of 
   // IDispatch::Invoke() to set
   if (V_VT(vArray) != (VT_ARRAY | VT_BSTR))
      AfxThrowOleDispatchException(1001,
         _T("Type Mismatch in Parameter. Pass a string array by reference"));

   // ...
   // ...

   return 0;
}