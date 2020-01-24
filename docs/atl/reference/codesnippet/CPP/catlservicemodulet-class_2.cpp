[ module(SERVICE, uuid = "{D3103322-7B70-4581-8E59-12769BD9A62B}", 
   name = "AttribService", 
   helpstring = "AttribService 1.0 Type Library", 
   resource_name="IDS_SERVICENAME") ]
class CAttribServiceModule
{
public:
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