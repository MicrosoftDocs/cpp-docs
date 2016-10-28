IDropTarget* CMyAxOptCtrl::GetWindowlessDropTarget()
{
   m_DropTarget.m_xDropTarget.AddRef();
   return &m_DropTarget.m_xDropTarget;
}