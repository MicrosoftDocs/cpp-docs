void DisplayFileNotFoundMessage(LPCTSTR pszFileName)
{
   CString strMessage;

   // The IDS_FILENOTFOUND string resource contains "Error: File %1 not found"
   AfxFormatString1(strMessage, IDS_FILENOTFOUND, pszFileName);
   // In the previous call, substitute the actual file name for the
   // %1 placeholder
   AfxMessageBox(strMessage);  // Display the error message
}