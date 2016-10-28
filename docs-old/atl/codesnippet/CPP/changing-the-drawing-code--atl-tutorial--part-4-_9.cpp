STDMETHODIMP CPolyCtl::put_Sides(short newVal)
{
   if (2 < newVal && newVal < 101)
   {
      m_nSides = newVal;
      FireViewChange();
      return S_OK;
   }
   else
   {
      return Error(_T("Shape must have between 3 and 100 sides"));
   }
}