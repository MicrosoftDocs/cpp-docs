typedef CTypedPtrList<CObList, CMyObject*>  CMyList;
CMyList ml;
CMyObject* pMyObject = new CMyObject();
ml.AddTail(pMyObject);

CFileException e;
CFile myFile;
myFile.Open(_T("CTypedPtrList_File.txt"),
   CFile::modeCreate | CFile::modeWrite, &e);
CArchive ar(&myFile, CArchive::store);
ml.Serialize(ar);

ar.Close();
myFile.Close();

while (!ml.IsEmpty())
{
   delete ml.GetHead();
   ml.RemoveHead();
}