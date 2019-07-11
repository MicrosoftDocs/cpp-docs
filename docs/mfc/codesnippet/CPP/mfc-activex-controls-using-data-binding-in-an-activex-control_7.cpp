if (AmbientUserMode())
{
   GetWindowText(m_strText);
   m_nMyNum = (short)_ttoi(m_strText);
}
return m_nMyNum;