CPerson* p1 = new CPerson();
CObList myList;

myList.AddHead(p1);   // No cast needed
CPerson* p2 = (CPerson*)myList.GetHead();