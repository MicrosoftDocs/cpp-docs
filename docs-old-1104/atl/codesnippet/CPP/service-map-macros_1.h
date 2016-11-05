BEGIN_SERVICE_MAP(CMyService)
   SERVICE_ENTRY(SID_SBindHost)  // This object supports the SBindHost service
   SERVICE_ENTRY_CHAIN(m_spClientSite) // Everything else, just ask the container
END_SERVICE_MAP()