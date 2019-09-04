CFile myFile(_T("My__test__file.dat"),
             CFile::modeCreate | CFile::modeReadWrite);
CAge age(21), *pAge;

// Create a storing archive.
CArchive arStore(&myFile, CArchive::store);

// Write the object to the archive
arStore.WriteObject(&age);

// Close the storing archive
arStore.Close();

// Create a loading archive.
myFile.SeekToBegin();
CArchive arLoad(&myFile, CArchive::load);

// Verify the object is in the archive.
pAge = (CAge *)arLoad.ReadObject(RUNTIME_CLASS(CAge));
ASSERT(age == *pAge);