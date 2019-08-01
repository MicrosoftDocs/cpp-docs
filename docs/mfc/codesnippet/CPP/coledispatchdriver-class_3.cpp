LPDISPATCH CreateLPDispatch(LPCTSTR lpszProgId)
{
   COleDispatchDriver disp;

   disp.CreateDispatch(lpszProgId);

   return disp.DetachDispatch();
}