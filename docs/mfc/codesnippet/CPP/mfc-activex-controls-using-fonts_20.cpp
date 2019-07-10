STDMETHODIMP_(ULONG) CMyAxFontCtrl::XHeadingFontNotify::AddRef()
{
   METHOD_MANAGE_STATE(CMyAxFontCtrl, HeadingFontNotify)
      return 1;
}
STDMETHODIMP_(ULONG) CMyAxFontCtrl::XHeadingFontNotify::Release()
{
   METHOD_MANAGE_STATE(CMyAxFontCtrl, HeadingFontNotify)
      return 0;
}

STDMETHODIMP CMyAxFontCtrl::XHeadingFontNotify::QueryInterface(REFIID iid, LPVOID FAR* ppvObj)
{
   METHOD_MANAGE_STATE(CMyAxFontCtrl, HeadingFontNotify)
      if (IsEqualIID(iid, IID_IUnknown) || IsEqualIID(iid, IID_IPropertyNotifySink))
      {
         *ppvObj = this;
         AddRef();
         return NOERROR;
      }
   return ResultFromScode(E_NOINTERFACE);
}

STDMETHODIMP CMyAxFontCtrl::XHeadingFontNotify::OnChanged(DISPID)
{
   METHOD_MANAGE_STATE(CMyAxFontCtrl, HeadingFontNotify)
      pThis->InvalidateControl();
   return NOERROR;
}

STDMETHODIMP CMyAxFontCtrl::XHeadingFontNotify::OnRequestEdit(DISPID)
{
   return NOERROR;
}