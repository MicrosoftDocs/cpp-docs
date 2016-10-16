STDMETHODIMP CPolyCtl::get_Sides(short* pVal)
{
   *pVal = m_nSides;

   return S_OK;
}

STDMETHODIMP CPolyCtl::put_Sides(short newVal)
{
   if (2 < newVal && newVal < 101)
   {
      m_nSides = newVal;
      return S_OK;
   }
   else
   {
      return Error(_T("Shape must have between 3 and 100 sides"));
   }
}