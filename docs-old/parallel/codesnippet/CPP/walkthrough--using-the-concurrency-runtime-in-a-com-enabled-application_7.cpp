// Calls a procedure in an IScriptControl object.
template<size_t ArgCount>
_variant_t RunScriptProcedure(IScriptControlPtr pScriptControl, 
   _bstr_t& procedureName, array<_variant_t, ArgCount>& arguments)
{
   // Create a 1-dimensional, 0-based safe array.
   SAFEARRAYBOUND rgsabound[]  = { ArgCount, 0 };
   CComSafeArray<VARIANT> sa(rgsabound, 1U);

   // Copy the arguments to the safe array.
   LONG lIndex = 0;
   for_each(begin(arguments), end(arguments), [&](_variant_t& arg) {
      HRESULT hr = sa.SetAt(lIndex, arg);
      if (FAILED(hr))
         throw hr;
      ++lIndex;
   });

   //  Call the procedure in the script.
   return pScriptControl->Run(procedureName, &sa.m_psa);
}