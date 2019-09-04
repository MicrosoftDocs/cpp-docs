CFile fileInput;
CFileException ex;

// try to open a file for reading.
// The file will certainly not
// exist because there are too many explicit
// directories in the name.

// if the call to Open() fails, ex will be
// initialized with exception
// information.  the call to ex.GetErrorMessage()
// will retrieve an appropriate message describing
// the error, and we'll add our own text
// to make sure the user is perfectly sure what
// went wrong.

if (!fileInput.Open(_T("\\Too\\Many\\Bad\\Dirs.DAT"), CFile::modeRead, &ex))
{
   TCHAR szCause[255];
   CString strFormatted;

   ex.GetErrorMessage(szCause, 255);

   // (in real life, it's probably more
   // appropriate to read this from
   //  a string resource so it would be easy to
   // localize)

   strFormatted = _T("The data file could not be opened because of this error: ");
   strFormatted += szCause;

   AfxMessageBox(strFormatted);
}
else
{
   // the file was opened, so do whatever work
   // with fileInput
   // we were planning...

   fileInput.Close();
}