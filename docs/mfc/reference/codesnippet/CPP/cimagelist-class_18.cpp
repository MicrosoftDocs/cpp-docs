// Open the archive to load the image list from.
CFile myFile(_T("myfile.data"), CFile::modeRead);
CArchive ar(&myFile, CArchive::load);
CImageList myImgList;

// Load the image list from the archive.
myImgList.Read(&ar);