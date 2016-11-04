void CMySocket::OnReceive(int nErrorCode)
{
   if (0 == nErrorCode)
   {
      CSocketFile file(this);
      CArchive ar(&file, CArchive::load);
      CString str;

      ar >> str;
   }
}