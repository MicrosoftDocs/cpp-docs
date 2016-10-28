STDMETHODIMP_(ULONG) CMySink::XSinky::AddRef()
{
   METHOD_PROLOGUE(CMySink, Sinky);
   return pThis->InternalAddRef();
}