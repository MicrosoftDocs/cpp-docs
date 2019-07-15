// Open the archive to store the image list in.
CFile myFile(_T("myfile.data"), CFile::modeCreate | CFile::modeWrite);
CArchive ar(&myFile, CArchive::store);

// Store the image list in the archive.
m_myImageList.Write(&ar);