CString IMyComObject::GetString(DISPID dispid)
{
   CString result;
   GetProperty(dispid, VT_BSTR, (void*)& result);
   return result;
}