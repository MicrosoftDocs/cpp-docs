//CMySink is a CCmdTarget-derived class supporting automation.
//Instantiate the sink class.
CMySink mysink;

//Get a pointer to sink's IUnknown, no AddRef done.
IID iid = IID_IUnknown;
IUnknown* pUnkSink = mysink.GetInterface(&iid);

//Establish a connection between source and sink.
//pUnkSrc is IUnknown of server obtained by CoCreateInstance().
//dwCookie is a cookie identifying the connection, and is needed
//to terminate this connection.
AfxConnectionAdvise(pUnkSrc, IID_ISampleSink, pUnkSink, FALSE, &dwCookie);