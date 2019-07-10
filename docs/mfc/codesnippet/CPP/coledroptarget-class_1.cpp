DROPEFFECT COleContainerView::OnDragOver(COleDataObject* pDataObject,
   DWORD dwKeyState, CPoint point)
{
   UNREFERENCED_PARAMETER(pDataObject);
   UNREFERENCED_PARAMETER(point);

   DROPEFFECT de = DROPEFFECT_NONE;
   //Determine the type of operation
   if ((dwKeyState & MK_SHIFT) && (dwKeyState & MK_CONTROL))
      de = DROPEFFECT_LINK;
   else if (dwKeyState & MK_CONTROL)
      de = DROPEFFECT_COPY;
   else if (dwKeyState & MK_SHIFT)
      de = DROPEFFECT_MOVE;
   return de;
}