const CObList* cplist;

CObList* plist = new CObList;
CAge* page1 = new CAge(21);
CAge* page2 = new CAge(30);
CAge* page3 = new CAge(40);
plist->AddHead(page1);
plist->AddHead(page2);  // List now contains (30, 21).
// The following statement REPLACES the head element.
plist->GetHead() = page3; // List now contains (40, 21).
ASSERT(*(CAge*)plist->GetHead() == CAge(40));
cplist = plist;  // cplist is a pointer to a const list.
// cplist->GetHead() = page3; // Error: can't assign a pointer to a const list
ASSERT(*(CAge*)plist->GetHead() == CAge(40)); // OK

delete page1;
delete page2;
delete page3;
delete plist; // Cleans up memory.      