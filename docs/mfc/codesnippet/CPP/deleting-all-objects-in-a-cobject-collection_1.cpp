CTypedPtrList<CObList, CPerson*> myList;
CPerson* pPerson = new CPerson();
myList.AddHead(pPerson);
POSITION pos = myList.GetHeadPosition();

while (pos != NULL)
{
   delete myList.GetNext(pos);
}
myList.RemoveAll();