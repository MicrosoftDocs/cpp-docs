class ATL_NO_VTABLE CMyWindow :
   OtherInheritedClasses
   public CComControl<CMyWindow>
          // CComControl derives from CWindowImpl
{
public:
   // 1. The NULL parameter means ATL will generate a
   //    name for the superclass
   // 2. The "EDIT" parameter means the superclass is
   //    based on the standard Windows Edit box
   DECLARE_WND_SUPERCLASS(NULL, _T("EDIT"))

   // Remainder of class declaration omitted