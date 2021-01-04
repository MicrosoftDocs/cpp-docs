// An exception-safe wrapper class that manages the lifetime 
// of the COM library in a given scope.
class CCoInitializer
{
public:
   explicit CCoInitializer(DWORD dwCoInit = COINIT_APARTMENTTHREADED)
      : _coinitialized(false)
   {
      // Initialize the COM library on the current thread.
      HRESULT hr = CoInitializeEx(NULL, dwCoInit);
      if (SUCCEEDED(hr))
         _coinitialized = true;
   }
   ~CCoInitializer()
   {
      // Free the COM library.
      if (_coinitialized)
         CoUninitialize();
   }
private:
   // Flags whether COM was properly initialized.
   bool _coinitialized;

   // Hide copy constructor and assignment operator.
   CCoInitializer(const CCoInitializer&);
   CCoInitializer& operator=(const CCoInitializer&);
};
