CTypedPtrList<CObList, CPerson *> myList;

myList.AddHead(new CPerson());
POSITION pos = myList.GetHeadPosition();
while (pos != NULL)
{
   CPerson *thePerson = myList.GetNext(pos);
   thePerson->AssertValid();
}