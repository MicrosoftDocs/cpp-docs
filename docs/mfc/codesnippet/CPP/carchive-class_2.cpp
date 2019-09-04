CFile myFile(_T("CArchive__test__file.txt"),
             CFile::modeCreate | CFile::modeWrite);
CArchive ar(&myFile, CArchive::store);

// Write a string to the archive.
ar.WriteString(_T("My string."));

// Flush all of the data to the file.
ar.Flush();