COleMessageFilter *pFilter = AfxOleGetMessageFilter();
ASSERT_VALID(pFilter);
pFilter->BeginBusyState();
// do things requiring a busy state
pFilter->EndBusyState();