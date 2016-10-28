   HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject)
   {
      // Cast the parameter to its known type.
      LONG* pn = reinterpret_cast<LONG*>(dwParam);

      // Increment the LONG.
      LONG n = InterlockedIncrement(pn);

      // Log the results.
      printf_s("Handle 0x%08X incremented value to : %d\n", (DWORD_PTR)hObject, n);

      return S_OK;
   }