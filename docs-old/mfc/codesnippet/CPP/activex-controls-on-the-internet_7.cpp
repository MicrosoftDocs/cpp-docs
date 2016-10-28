void CMyCachedDataPathProperty::OnDataAvailable(DWORD dwSize, DWORD bscfFlag)
{
   CCachedDataPathProperty::OnDataAvailable(dwSize, bscfFlag);
   GetControl()->InvalidateControl();
}