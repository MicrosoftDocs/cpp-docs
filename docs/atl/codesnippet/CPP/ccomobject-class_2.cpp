   // Create a local instance of COM object CMyCircle.
   double x;
   CComObject<CMyCircle>* pCircle;
   HRESULT hRes = CComObject<CMyCircle>::CreateInstance(&pCircle);
   ATLASSERT(SUCCEEDED(hRes));

   // Increment reference count immediately
   pCircle->AddRef();

   // Access method of COM object
   hRes = pCircle->get_XCenter(&x);

   // Decrement reference count when done
   pCircle->Release();
   pCircle = NULL;