// NVC_ATL_Service.cpp : Implementation of WinMain
//
// Topic                                           Snippet
// CAtlServiceModuleT::InitializeSecurity          1

#include "stdafx.h"
#include "resource.h"
#include "NVC_ATL_Service.h"

#include <stdio.h>

// <Snippet1>
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
      // and an appropiate Non NULL Security Descriptor.

      return S_OK;
   }
};
// </Snippet1>

CNonAttribServiceModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
                                LPTSTR /*lpCmdLine*/, int nShowCmd)
{
    return _AtlModule.WinMain(nShowCmd);
}

