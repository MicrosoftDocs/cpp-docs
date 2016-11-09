// Constructors and operators cannot return error codes, and
// so they are the place where exceptions are generally used.
class CMyClass
{
private:
   CComPtr<IBuddy> m_spBuddy;
public:
   CMyClass()
   {
      HRESULT hr = m_spBuddy.CoCreateInstance(CLSID_Buddy);
      if (FAILED(hr))
         AtlThrow(hr);
   }
   //   methods ..
};