STDMETHODIMP CMyControl::put_Shape(int newVal)
{
   // store newVal in m_nShape user-defined member
   m_nShape = newVal;

   // notify container to redraw control
   FireViewChange();
   return S_OK;
}