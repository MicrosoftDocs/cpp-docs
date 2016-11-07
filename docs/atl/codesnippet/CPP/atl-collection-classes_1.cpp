// Collection class / traits class example.
// This program demonstrates using a CTraits class
// to create a new comparison operator.

#define MAX_STRING 80

// Define our own data type to store in the list.

struct MyData 
{
   int ID;
   TCHAR name[MAX_STRING];
   TCHAR address[MAX_STRING];
};

// Define our own traits class, making use of the
// existing traits and overriding only the comparison
// we need.

class MyTraits : public CElementTraits< MyData >
{
public:
    // Override the comparison to only compare
    // the ID value.

   static bool CompareElements(const MyData& element1, const MyData& element2)
   {
      if (element1.ID == element2.ID)
         return true;
      else
         return false;
   };
};

void DoAtlCustomTraitsList()
{
   // Declare the array, with our data type and traits class 

   CAtlList < MyData, MyTraits > MyList;

   // Create some variables of our data type

   MyData add_item, search_item;

   // Add some elements to the list.

   add_item.ID = 1;
   _stprintf_s(add_item.name, _T("Rumpelstiltskin"));
   _stprintf_s(add_item.address, _T("One Grimm Way"));

   MyList.AddHead(add_item);

   add_item.ID = 2;
   _stprintf_s(add_item.name, _T("Rapunzel"));
   _stprintf_s(add_item.address, _T("One Grimm Way"));

   MyList.AddHead(add_item);

   add_item.ID = 3;
   _stprintf_s(add_item.name, _T("Cinderella"));
   _stprintf_s(add_item.address, _T("Two Grimm Way"));

   MyList.AddHead(add_item);

   // Create an element which will be used
   // to search the list for a match.

   search_item.ID = 2;
   _stprintf_s(search_item.name, _T("Don't care"));
   _stprintf_s(search_item.address, _T("Don't care"));

   // Perform a comparison by searching for a match
   // between any element in the list, and our
   // search item. This operation will use the
   // (overridden) comparison operator and will
   // find a match when the IDs are the same.

   POSITION i;

   i = MyList.Find(search_item);

   if (i != NULL)
      _tprintf_s(_T("Item found!\n"));
   else
      _tprintf_s(_T("Item not found.\n"));
}