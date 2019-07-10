CFile theFile;
theFile.Open(_T("CArchive__Test.txt"), CFile::modeCreate | CFile::modeWrite);
CArchive archive(&theFile, CArchive::store);