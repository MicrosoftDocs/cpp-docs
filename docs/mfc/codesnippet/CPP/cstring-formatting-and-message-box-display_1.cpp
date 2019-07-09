// The following example extracts a series of name, value pairs from a
// given source string:

// Input string consisting of a number of name, value pairs
LPCTSTR lpszSource = _T("\"Name\"=\"John Smith\"\n")
_T("\"Company\"=\"Contoso, Ltd\"\n\"Salary\"=\"25,000\"");

CString strNameValue; // an individual name, value pair

int i = 0; // substring index to extract
while (AfxExtractSubString(strNameValue, lpszSource, i))
{
   // Prepare to move to the next substring
   i++;

   CString strName, strValue; // individual name and value elements

   // Attempt to extract the name element from the pair
   if (!AfxExtractSubString(strName, strNameValue, 0, _T('=')))
   {
      // Pass an error message to the debugger for display
      OutputDebugString(_T("Error extracting name\r\n"));
      continue;
   }

   // Attempt to extract the value element from the pair
   if (!AfxExtractSubString(strValue, strNameValue, 1, _T('=')))
   {
      // Pass an error message to the debugger for display
      OutputDebugString(_T("Error extracting value element\r\n"));
      continue;
   }

   // Pass the name, value pair to the debugger for display
   CString strOutput = strName + _T(" equals ") + strValue + _T("\r\n");
   OutputDebugString(strOutput);
}