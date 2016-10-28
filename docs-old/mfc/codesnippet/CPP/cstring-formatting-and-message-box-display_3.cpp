void DisplayFileNotFoundMessage(LPCTSTR pszFileName, LPCTSTR pszDirectory)
{
   CString strMessage;

   // The IDS_FILENOTFOUND string resource contains "Error: File %1 not 
   // found in directory %2"
   AfxFormatString2(strMessage, IDS_FILENOTFOUND2, pszFileName, pszDirectory);
   // In the previous call, substitute the actual file and directory 
   // names into the message string
   AfxMessageBox(strMessage);  // Display the error message
}