   // Retrieve the control's IOleObject interface. Note interface 
   // is automatically released when pOleObject goes out of scope

   CComPtr<IOleObject> pOleObject;
   ControlQueryInterface(IID_IOleObject, (void**)&pOleObject);