LPCTSTR lpszmyString = _T("column 2");
LPCTSTR lpszmyString2 = _T("vertical 2");

// Find the item whose text matches lpszmyString, and
// replace it with lpszmyString2.
int i, nCount = m_myHeaderCtrl.GetItemCount();
HDITEM hdi;
enum
{
   sizeOfBuffer = 256
};
TCHAR lpBuffer[sizeOfBuffer];
bool fFound = false;

hdi.mask = HDI_TEXT;
hdi.pszText = lpBuffer;
hdi.cchTextMax = sizeOfBuffer;

for (i = 0; !fFound && (i < nCount); i++)
{
   m_myHeaderCtrl.GetItem(i, &hdi);

   if (_tcsncmp(hdi.pszText, lpszmyString, sizeOfBuffer) == 0)
   {
      _tcscpy_s(hdi.pszText, sizeOfBuffer, lpszmyString2);
      m_myHeaderCtrl.SetItem(i, &hdi);
      fFound = true;
   }
}