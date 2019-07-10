if (!BoundPropertyRequestEdit(1))
{
   SetNotSupported();
   return;
}
else
{
   if (AmbientUserMode()) // SendMessage only at run-time
   {
      _stprintf_s(m_strText.GetBuffer(10), 10, _T("%d"), newVal);
      SetWindowText(m_strText);
      m_strText.ReleaseBuffer();
   }
   else
   {
      InvalidateControl();
   }

   // Signal a property change
   // This is the MFC equivalent of OnChanged()
   BoundPropertyChanged(1);
   SetModifiedFlag();
}