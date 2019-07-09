BOOL CChildFrame::IsReadOnly()
{
   return DYNAMIC_DOWNCAST(CStartView, GetActiveView()) != NULL;
}