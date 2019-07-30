//mysink is a CCmdTarget-derived class supporting automation.
//Get a pointer to sink's IUnknown, no AddRef done.
IID iid = IID_IUnknown;
IUnknown* pUnkSink = mysink.GetInterface(&iid);

//Terminate a connection between source and sink.
//pUnkSrc is IUnknown of server obtained by CoCreateInstance().
//dwCookie is a value obtained through AfxConnectionAdvise().
AfxConnectionUnadvise(pUnkSrc, IID_ISampleSink, pUnkSink, FALSE, dwCookie);