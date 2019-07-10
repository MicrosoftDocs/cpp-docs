#ifdef _DEBUG
//AfxDoForAllObjects will call the function DoForAllObjects 
//For each CObject-derived object that is allocated on the heap
int nCount = 0;
AfxDoForAllObjects(DoForAllObjects, &nCount);
TRACE("%d Objects Checked\n", nCount);
#endif