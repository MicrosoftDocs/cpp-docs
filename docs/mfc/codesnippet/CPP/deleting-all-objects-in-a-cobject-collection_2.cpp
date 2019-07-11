CArray<CPerson*, CPerson*> myArray;

int i = 0;
while (i < myArray.GetSize())
{
   delete myArray.GetAt(i++);
}

myArray.RemoveAll();