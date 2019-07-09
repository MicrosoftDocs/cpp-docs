// example for afxDump
CPerson* pMyPerson = new CPerson;
// set some fields of the CPerson object...
//..
// now dump the contents
#ifdef _DEBUG
afxDump << _T("Dumping myPerson:\n");
pMyPerson->Dump(afxDump);
afxDump << _T("\n");
#endif