class CNonAttribServiceModule : public CAtlServiceModuleT< CNonAttribServiceModule, IDS_SERVICENAME >
{
public :
   DECLARE_LIBID(LIBID_NonAttribServiceLib)
   DECLARE_REGISTRY_APPID_RESOURCEID(IDR_NONATTRIBSERVICE, "{29160736-339F-4A1C-ABEF-C320CE103E12}")
   HRESULT InitializeSecurity() throw()
   {
      // TODO : Call CoInitializeSecurity and provide the appropriate security settings for 
      // your service
      // Suggested - PKT Level Authentication, 
      // Impersonation Level of RPC_C_IMP_LEVEL_IDENTIFY 
      // and an appropriate Non NULL Security Descriptor.

      return S_OK;
   }
};