CTypedPtrArray<CObArray, CPerson *> myArray;

myArray.Add(new CPerson());
for (int i = 0; i < myArray.GetSize(); i++)
{
   CPerson *thePerson = myArray.GetAt(i);
   thePerson->AssertValid();
}