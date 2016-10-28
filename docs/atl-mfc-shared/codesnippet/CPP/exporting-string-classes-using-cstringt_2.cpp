#ifdef _AFXDLL
   #define AFX_EXT_CSTRING AFX_EXT_CLASS
#else
   #define AFX_EXT_CSTRING
#endif

template< typename BaseType, class StringTraits >
class AFX_EXT_CSTRING CStringT_Exported 
   : public CStringT< BaseType, StringTraits >
{
   // Reimplement all CStringT<> constructors and
   // forward to the base class implementation
};