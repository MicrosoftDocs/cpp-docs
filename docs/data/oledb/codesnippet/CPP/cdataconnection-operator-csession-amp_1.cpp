void SessionFunc(const CSession& theSession)
{
   XACTTRANSINFO info = {0};
   HRESULT hr = theSession.GetTransactionInfo(&info);
   wprintf_s(_T("GetTransactionInfo returned %x\n"), hr);
}