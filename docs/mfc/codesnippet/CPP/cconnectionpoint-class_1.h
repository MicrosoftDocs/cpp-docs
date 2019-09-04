// Connection point for ISample interface
BEGIN_CONNECTION_PART(CMyClass, SampleConnPt)
CONNECTION_IID(IID_ISampleSink)
END_CONNECTION_PART(SampleConnPt)

DECLARE_CONNECTION_MAP()