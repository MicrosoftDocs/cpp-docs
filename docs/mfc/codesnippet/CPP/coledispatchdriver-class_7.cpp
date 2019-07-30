void IMyComObject::SetString(DISPID dispid, LPCTSTR propVal)
{
   SetProperty(dispid, VT_BSTR, propVal);
}