AfxCheckError(::CoCreateInstance(clsidWMP, NULL, CLSCTX_INPROC_SERVER,
   IID_IDispatch, (LPVOID*)& pWMPDispatch));

oddWMP.AttachDispatch(pWMPDispatch, TRUE);