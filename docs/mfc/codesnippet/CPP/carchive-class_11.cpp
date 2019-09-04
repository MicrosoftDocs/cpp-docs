CFile myFile(_T("My__test__file.dat"),
             CFile::modeCreate | CFile::modeWrite);
CArchive ar(&myFile, CArchive::store);
CMyDocument mydoc;
ar.m_pDocument = &mydoc;

// Serialize the document to the archive.
if (ar.m_pDocument != NULL)
   ar.m_pDocument->Serialize(ar);