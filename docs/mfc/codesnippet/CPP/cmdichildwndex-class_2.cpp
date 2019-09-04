LPCTSTR CChildFrame::GetDocumentName(CObject **pObj)
{
   if (DYNAMIC_DOWNCAST(CStartView, GetActiveView()) != NULL)
   {
      return g_strStartViewName;
   }
   return CMDIChildWndEx::GetDocumentName(pObj);
}