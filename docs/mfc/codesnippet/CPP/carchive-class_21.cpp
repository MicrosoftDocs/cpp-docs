CFile myFile(_T("My__test__file.dat"),
             CFile::modeCreate | CFile::modeReadWrite);

// Create a storing archive.
CArchive arStore(&myFile, CArchive::store);

// Store the class CAge in the archive.
arStore.WriteClass(RUNTIME_CLASS(CAge));

// Close the storing archive.
arStore.Close();

// Create a loading archive.
myFile.SeekToBegin();
CArchive arLoad(&myFile, CArchive::load);

// Load a class from the archive.
CRuntimeClass *pClass = arLoad.ReadClass();
if (!pClass->IsDerivedFrom(RUNTIME_CLASS(CAge)))
{
   arLoad.Abort();
}