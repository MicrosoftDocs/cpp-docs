IDropTarget *CMyAxCtrl::GetWindowlessDropTarget()
{
   m_xDropTarget.AddRef();
   return &m_xDropTarget;
}