BEGIN_DISPATCH_MAP(CMyServerDoc, COleServerDoc)
DISP_PROPERTY(CMyServerDoc, "Msg", m_strMsg, VT_BSTR)
DISP_FUNCTION(CMyServerDoc, "SetDirty", SetDirty, VT_EMPTY, VTS_I4)
END_DISPATCH_MAP()