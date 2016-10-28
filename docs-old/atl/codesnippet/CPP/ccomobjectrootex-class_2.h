class ATL_NO_VTABLE CMyApp :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyApp, &CLSID_MyApp>,
   public IMyApp
{
public:
   CMyApp()
   {
   }

   static void WINAPI ObjectMain(bool bStarting)
   {
      if (bStarting)
         ;// Perform custom initialization routines
      else
         ;// Perform custom termination routines
   }

   // Remainder of class declaration omitted.