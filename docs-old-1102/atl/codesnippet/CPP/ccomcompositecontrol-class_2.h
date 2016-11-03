   // Example for overriding IOleControlImpl::GetControlInfo()
   // This example uses the accelerator table from the project resources
   // with the identifier IDR_ACCELTABLE
   // Define GetControlInfo() in the header of your composite 
   // control class as follows:

   STDMETHOD(GetControlInfo)(CONTROLINFO* pCI)
   {
       // Load the accelerator table from the resource
       pCI->hAccel = LoadAccelerators(_AtlBaseModule.GetResourceInstance(), 
          MAKEINTRESOURCE(IDR_ACCELTABLE));

       if (pCI->hAccel == NULL)
           return E_FAIL;

       // Get the number of accelerators in the table
       pCI->cAccel = (USHORT)CopyAcceleratorTable(pCI->hAccel, NULL, 0);
       // The following is optional if you want your control
       // to process the return and/or escape keys
       // pCI.dwFlags = CTRLINFO_EATS_RETURN | CTRLINFO_EATS_ESCAPE;
       pCI->dwFlags = 0;

       return S_OK;
   }