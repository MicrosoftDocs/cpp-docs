   TCHAR szModule[_MAX_PATH];
   ::GetModuleFileName(_AtlBaseModule.GetModuleInstance(), szModule, _MAX_PATH);
   p->AddReplacement(OLESTR("Module"), T2OLE(szModule));   