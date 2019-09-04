CFile myFile(_T("My__test__file.dat"),
             CFile::modeCreate | CFile::modeReadWrite);
CString str1("String1"), str2("String2"), str;

// Create a storing archive.
CArchive arStore(&myFile, CArchive::store);

// Write str1 and str2 to the archive
arStore.WriteString(str1);
arStore.WriteString(_T("\n"));
arStore.WriteString(str2);
arStore.WriteString(_T("\n"));

// Close the storing archive
arStore.Close();

// Create a loading archive.
myFile.SeekToBegin();
CArchive arLoad(&myFile, CArchive::load);

// Verify the two strings are in the archive.
arLoad.ReadString(str);
ASSERT(str == str1);
arLoad.ReadString(str);
ASSERT(str == str2);