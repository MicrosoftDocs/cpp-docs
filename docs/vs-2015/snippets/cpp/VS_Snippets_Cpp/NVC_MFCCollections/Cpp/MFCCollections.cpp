// MFCCollections.cpp : Defines the entry point for the console application.
//
// This project implements a number of snippets to show various aspects of
// the MFC Collection classes.
//
// Topic										            Snippets
// Template-Based Classes						      1 - 6
// How to: Make a Type-Safe Collection			   7 - 11
// Accessing All Members of a Collection		   12 - 16
// Deleting All Objects in a CObject Collection	17 - 19
// Creating Stack and Queue Collections			20 - 21
// CArray::Add									         22
// CArray::Append								         23
// CArray::CArray								         24
// CArray::Copy									      25
// CArray::GetAt								         26
// CArray::GetCount								      27
// CArray::GetData								      28
// CArray::GetSize								      29
// CArray::InsertAt								      30
// CArray::RemoveAll							         31
// CArray::RemoveAt								      32
// CArray::SetAtGrow							         33
// CArray::operator[]							      34
// CList Class                                  35
// CList::AddHead                               36
// CList::AddTail                               37
// CList::CList                                 38
// CList::Find                                  39
// CList::FindIndex                             40
// CList::GetHead                               41
// CList::GetHeadPosition                       42
// CList::GetNext                               43
// CList::GetPrev                               44
// CList::GetSize                               45
// CList::GetTail                               46
// CList::GetTailPosition                       47  
// CList::InsertAfter                           48
// CList::InsertBefore                          49
// CList::IsEmpty                               50
// CList::RemoveAll                             51
// CList::RemoveAt                              52
// CList::RemoveHead                            53
// CList::RemoveTail                            54
// CList::SetAt                                 55
// CMap::CMap                                   56
// CMap::GetHashTableSize                       57 
// CMap::GetSize                                58
// CMap::Lookup                                 58
// CMap::PGetFirstAssoc                         59
// CMap::PLookup                                60
// CMap::RemoveAll                              61
// CMap::SetAt                                  62
// CMapStringToOb::CMapStringToOb               63
// CMapStringToOb::GetCount                     64
// CMapStringToOb::GetNextAssoc                 65 - 66
// CMapStringToOb::GetSize                      67
// CMapStringToOb::Lookup                       68
// CMapStringToOb::RemoveAll                    69
// CMapStringToOb::RemoveKey                    70
// CMapStringToOb::SetAt                        71
// CMapStringToOb::operator[]                   72
// CMapStringToString::PGetFirstAssoc           73
// CMapStringToString::PLookup                  74
// CObArray::Add                                75
// CObArray::Append                             76
// CObArray::Copy                               77
// CObArray::CObArray                           78
// CObArray::GetAt                              79
// CObArray::GetCount                           80
// CObArray::GetData                            81
// CObArray::GetSize                            82
// CObArray::GetUpperBound                      83
// CObArray::InsertAt                           84
// CObArray::RemoveAll                          85
// CObArray::RemoveAt                           112
// CObArray::SetAt                              86
// CObArray::SetAtGrow                          87
// CObArray::operator[]                         88
// CObList::AddHead                             89
// CObList::AddTail                             90
// CObList::CObList                             91 - 92
// CObList::Find                                93
// CObList::FindIndex                           94
// CObList::GetCount                            95
// CObList::GetHead                             96
// CObList::GetHeadPosition                     97
// CObList::GetNext                             98
// CObList::GetPrev                             99
// CObList::GetSize                             100
// CObList::GetTail                             101
// CObList::GetTailPosition                     102
// CObList::InsertAfter                         103
// CObList::InsertBefore                        104
// CObList::RemoveAll                           105
// CObList::RemoveAt                            106
// CObList::RemoveHead                          107
// CObList::RemoveTail                          108
// CObList::SetAt                               109
// CTypedPtrList Class                          110 - 111
// AfxDoForAllClasses                           113 - 114
// AfxDoForAllObjects                           115 - 116

// Code that passes a reference to an object constructed in the same line
// as the function call generatces C4239: nonstandard extension used, a
// level 4 warning.  This type of code is a fairly standard practice in MFC,
// so we disable the warning.
// Here's an example of the code that causes this warning:
// myList.AddHead(CString(_T("ABC")));
// Cosntructing the CString on a separate line stops the warning, but then
// you have two lines of code, which is annoying.
#pragma warning(disable: 4239)

#include "stdafx.h"
#include "MFCCollections.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// <Snippet113>
#ifdef _DEBUG
void DoForAllClasses(const CRuntimeClass* pClass, void* pContext)
{
   ASSERT(pContext != NULL);
   CString *pStr = (CString *)pContext;

   *pStr += pClass->m_lpszClassName;
   *pStr += _T("\n");
}
#endif
// </Snippet113>

// <Snippet115>
#ifdef _DEBUG
void DoForAllObjects(CObject* pObject, void* pContext)
{
   int *pnCount = (int*)pContext;

   pObject->AssertValid();
   if (pnCount != NULL)
      (*pnCount)++;
}
#endif // _DEBUG
// </Snippet115>

struct MY_STRUCT
{
   int x;
};

// The one and only application object

CWinApp theApp;

using namespace std;

// <Snippet9>
CArray< CPerson, CPerson& > personArray;

template <> void AFXAPI SerializeElements <CPerson> (CArchive& ar, 
   CPerson* pNewPersons, INT_PTR nCount)
{
   for (int i = 0; i < nCount; i++, pNewPersons++)
   {
      // Serialize each CPerson object
      pNewPersons->Serialize(ar);
   }
}
//</Snippet9>

IMPLEMENT_SERIAL(CAge, CObject, 0);

void CAge::Serialize(CArchive& ar)
{
   UNREFERENCED_PARAMETER(ar);
}

void CAge::AssertValid() const
{

}

void DeleteObList(CObList* poblist)
{
   CObject* pob;
   POSITION pos = poblist->GetHeadPosition();
   while (NULL != pos)
   {
      pob = poblist->GetNext(pos);
      delete pob;
   }
}

// <Snippet111>
class CMyObject : public CObject
{
public:
     int i;
     void Serialize(CArchive& ar);
     CMyObject() { i = 9876;}
protected:
     DECLARE_SERIAL(CMyObject)
};

IMPLEMENT_SERIAL(CMyObject, CObject, 0)  

void CMyObject::Serialize(CArchive& ar)
{
    CObject::Serialize(ar);
    if(ar.IsStoring())
         ar << i;
    else
         ar >> i;
}
// </Snippet111>

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
   UNREFERENCED_PARAMETER(argc);
   UNREFERENCED_PARAMETER(argv);
   UNREFERENCED_PARAMETER(envp);

   int nRetCode = 0;

   // initialize MFC and print and error on failure
   if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
   {
      // TODO: change error code to suit your needs
      _tprintf(_T("Fatal Error: MFC initialization failed\n"));
      nRetCode = 1;
   }
   else
   {
      {
// <Snippet1>
         CArray<int, int> myArray;
         CList<CPerson, CPerson&> myList;
// </Snippet1>
      }

      {
// <Snippet2>
         CArray<CPerson, CPerson&> personArr;
         CPerson person;
         personArr.Add(person);
// </Snippet2>
      }
      
      {
// <Snippet3>
         CMap< int, int, MY_STRUCT, MY_STRUCT& > myMap1;
         CMap< CString, LPCTSTR, CPerson, CPerson& > myMap2;
// </Snippet3>
      }

      {
// <Snippet4>
         CMap< CString, LPCTSTR, CPerson, CPerson& > myMap;
         CPerson person;
         LPCTSTR lpstrName = _T("Jones");
         myMap.SetAt(lpstrName, person);
// </Snippet4>
      }

      {
// <Snippet5>
         CTypedPtrArray<CObArray, CPerson*> myArray;
         CTypedPtrList<CPtrList, MY_STRUCT*> myList;
// </Snippet5>
      }

      {
// <Snippet6>
         CTypedPtrMap<CMapPtrToPtr, CString, MY_STRUCT*> myPtrMap;
         CTypedPtrMap<CMapStringToOb, CString, CPerson*> myPersonMap;
// </Snippet6>
      }

      {
// <Snippet7>
         CList<int, int> m_intList;
// </Snippet7>

// <Snippet8>
         m_intList.AddTail(100);
         m_intList.RemoveAll();
// </Snippet8>
      }

      // supporting code for Snippet9 to test that it actually works
      CFile file(_T("MFCCollectionsFile.txt"), 
         CFile::modeCreate | CFile::shareDenyNone);
      CArchive ar(&file, CArchive::store);
      CPerson person;
      personArray.Add(person);
      personArray.Add(person);
      SerializeElements(ar, personArray.GetData(), personArray.GetCount());

      {
// <Snippet10>
         CPerson* p1 = new CPerson();
         CObList myList;

         myList.AddHead(p1);   // No cast needed
         CPerson* p2 = (CPerson*)myList.GetHead();
// </Snippet10>

         myList.RemoveAll();
         p2 = NULL;
         delete p1;
      }

      {
         // support code for Snippet11 to make sure it works
         CPersonList perList;
         CPerson per1;
         CPerson per2;
         perList.AddHeadPerson(&per1);
         perList.AddHeadPerson(&per2);
         const CPerson* per3 = perList.GetHeadPerson();
         per3->AssertValid();
      }

      {
// <Snippet12>
         CTypedPtrArray<CObArray, CPerson*> myArray;

         myArray.Add(new CPerson());
         for (int i = 0; i < myArray.GetSize();i++)
         {
            CPerson* thePerson = myArray.GetAt(i);
            thePerson->AssertValid();
         }		
// </Snippet12>
         int i = 0;
// <Snippet13>
         CPerson* thePerson = myArray[i];
// </Snippet13>
         delete thePerson;
      }

      {
// <Snippet14>
         CTypedPtrList<CObList, CPerson*> myList;

         myList.AddHead(new CPerson());
         POSITION pos = myList.GetHeadPosition();
         while(pos != NULL)
         {
            CPerson* thePerson = myList.GetNext(pos);
            thePerson->AssertValid();
         }
// </Snippet14>
         CPerson* per = myList.RemoveHead();
         delete per;
      }

      {
// <Snippet15>
         CMap<CString, LPCTSTR, CPerson*, CPerson*> myMap;
         CPerson myPerson;

         myMap.SetAt(_T("Bill"), &myPerson);
         POSITION pos = myMap.GetStartPosition();
         while(pos != NULL)
         {
            CPerson* pPerson;
            CString string;
            // Get key (string) and value (pPerson)
            myMap.GetNextAssoc(pos, string, pPerson);
            // Use string and pPerson
         }		
// </Snippet15>
      }

      {
// <Snippet16>
         CMapStringToOb myMap;    // A nontemplate collection class
         CPerson myPerson;
         myMap.SetAt(_T("Bill"), &myPerson);

         POSITION pos = myMap.GetStartPosition();
         while(pos != NULL)
         {
            CPerson* pPerson;
            CString string;
            // Gets key (string) and value (pPerson)
            myMap.GetNextAssoc(pos, string, 
                              (CObject*&)pPerson);
            ASSERT(pPerson->IsKindOf(
                      RUNTIME_CLASS(CPerson)));
            // Use string and pPerson
         }
// </Snippet16>
      }

      {
// <Snippet17>
         CTypedPtrList<CObList, CPerson*> myList;
         CPerson* pPerson = new CPerson();
         myList.AddHead(pPerson);
         POSITION pos = myList.GetHeadPosition();

         while(pos != NULL)
         {
            delete myList.GetNext(pos);
         }
         myList.RemoveAll();		
// </Snippet17>
      }

      {
// <Snippet18>
         CArray<CPerson*, CPerson*> myArray;

         int i = 0;
         while (i < myArray.GetSize())
         {
            delete myArray.GetAt(i++);
         }

         myArray.RemoveAll();		
// </Snippet18>
      }

      {
// <Snippet19>
         CMap<CString, LPCTSTR, CPerson*, CPerson*> myMap;
         // ... Add some key-value elements ...
         // Now delete the elements
         POSITION pos = myMap.GetStartPosition();
         while(pos != NULL)
         {
            CPerson* pPerson;
            CString string;
            // Gets key (string) and value (pPerson)
            myMap.GetNextAssoc(pos, string, pPerson);
            delete pPerson;
         }
         // RemoveAll deletes the keys
         myMap.RemoveAll();		
// </Snippet19>
      }

      {
         // Supporting code for Snippet20 to test it
         CTray t1, t2, t3;
         CStack stack;
         stack.Push(&t1);
         stack.Push(&t2);
         stack.Push(&t3);
         CTray* ptPeek = stack.Peek();
         ptPeek->AssertValid();
         CTray* pt1 = stack.Pop();
         pt1->AssertValid();
         CTray* pt2 = stack.Pop();
         pt2->AssertValid();
      }

      {
         // Supporting code for Snippet21 to test it
         CPerson p1, p2, p3;
         CQueue queue;
         queue.AddToEnd(&p1);
         queue.AddToEnd(&p2);
         queue.AddToEnd(&p3);
         CPerson* pp1 = queue.GetFromFront();
         pp1->AssertValid();
         CPerson* pp2 = queue.GetFromFront();
         pp2->AssertValid();
      }

      {
// <Snippet22>
         // example for CArray::Add
// <Snippet24>
         CArray<CPoint,CPoint> ptArray;
// </Snippet24>

         CPoint pt(10,20);
         ptArray.Add(pt);             // Element 0
         ptArray.Add(CPoint(30,40));  // Element 1
// </Snippet22>
      }

      {
// <Snippet23>
         CArray<CPoint,CPoint> myArray1, myArray2;

         // Add elements to the second array.
         myArray2.Add(CPoint(11, 22));
         myArray2.Add(CPoint(12, 42));

         // Add elements to the first array and also append the second array.
         myArray1.Add(CPoint(1, 2));
         myArray1.Append(myArray2);		
// </Snippet23>
      }

      {
// <Snippet25>		
         CArray<CPoint,CPoint> myArray1, myArray2;

         // Add elements to the second array.
         myArray2.Add(CPoint(11, 22));
         myArray2.Add(CPoint(12, 42));

         // Copy the elements from the second array to the first.
         myArray1.Copy(myArray2);
// </Snippet25>
      }

      {
// <Snippet26>
         CArray<CPoint,CPoint> myArray;
         CPoint pt;

         // Add elements to the array.
         for (int i = 0; i < 10; i++)
            myArray.Add(CPoint(i, 2 * i));

         // Modify all the points in the array.
         for (int i = 0; i <= myArray.GetUpperBound(); i++)
         {
            pt = myArray.GetAt(i);
            pt.x = 0;
            myArray.SetAt(i, pt);
         }
// </Snippet26>
      }

      {
// <Snippet27>
         CArray<CPoint,CPoint> myArray;

         // Add elements to the array.
         for (int i = 0; i < 10; i++)
            myArray.Add(CPoint(i, 2 * i));

         // Modify all the points in the array.
         for (int i = 0; i < myArray.GetCount(); i++)
         {
            CPoint& pt = myArray.ElementAt(i);
            pt.x = 0;
         }
// </Snippet27>
      }

      {
// <Snippet28>
         CArray<CPoint,CPoint> myArray;

         // Allocate memory for at least 32 elements.
         myArray.SetSize(32, 128);

         // Add elements to the array.
         CPoint* pPt = (CPoint*) myArray.GetData();
         for (int i = 0; i < 32; i++, pPt++)
            *pPt = CPoint(i, 2*i);

         // Only keep first 5 elements and free extra (unused) bytes.
         myArray.SetSize(5, 128);
         myArray.FreeExtra();
         
         #if _DEBUG
            afxDump.SetDepth(1);
            afxDump << "myArray: " << &myArray << "\n";
         #endif
// </Snippet28>
      }

      {
// <Snippet29>
         CArray<CPoint,CPoint> myArray;

         // Add elements to the array.
         for (int i = 0; i < 10; i++)
            myArray.Add(CPoint(i, 2*i));

         // Modify all the points in the array.
         for (int i = 0; i < myArray.GetSize(); i++)
         {
            CPoint& pt = myArray.ElementAt(i);
            pt.x = 0;
         }
// </Snippet29>
      }

      {
// <Snippet30>
         // example for CArray::InsertAt

         CArray<CPoint,CPoint> ptArray;

         ptArray.Add(CPoint(10,20));   // Element 0
         ptArray.Add(CPoint(30,40));   // Element 1 (will become element 2)
         ptArray.InsertAt(1, CPoint(50,60));   // New element 1		
// </Snippet30>
      }

      {
// <Snippet31>
         CArray<CPoint,CPoint> myArray;

         // Add elements to the array.
         for (int i = 0; i < 10; i++)
            myArray.Add(CPoint(i, 2*i));

         myArray.RemoveAll();

         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << "myArray: " << &myArray << "\n";
         #endif		
// </Snippet31>
      }

      {
// <Snippet32>
         CArray<CPoint,CPoint> myArray;

         // Add elements to the array.
         for (int i = 0; i < 10; i++)
            myArray.Add(CPoint(i, 2*i));

         myArray.RemoveAt(5);

         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << "myArray: " << &myArray << "\n";
         #endif		
// </Snippet32>
      }

      {
// <Snippet33>
         // example for CArray::SetAtGrow
         CArray<CPoint,CPoint> ptArray;

         ptArray.Add(CPoint(10,20));   // Element 0
         ptArray.Add(CPoint(30,40));   // Element 1
         // Element 2 deliberately skipped
         ptArray.SetAtGrow(3, CPoint(50,60));   // Element 3		
// </Snippet33>
      }

      {
// <Snippet34>
         CArray<CPoint,CPoint> myArray;

         // Add elements to the array.
         for (int i = 0; i < 10; i++)
            myArray.Add(CPoint(i, 2*i));

         // Modify all the points in the array.
         for (int i = 0; i <= myArray.GetUpperBound(); i++)
         {
            myArray[i].x = 0;
         }
// </Snippet34>
      }

      // CList snippets

      {
         typedef int MYTYPE;
// <Snippet35>
         // CList is a template class that takes two template arguments.
         // The first argument is type stored internally by the list, the
         // second argument is the type used in the arguments for the
         // CList methods.

         // This code defines a list of ints.
         CList<int,int> myIntList;

         // This code defines a list of CStrings
         CList<CString,CString&> myStringList;

         // This code defines a list of MYTYPEs,
         // NOTE: MYTYPE could be any struct, class or type definition
         CList<MYTYPE,MYTYPE&> myTypeList;
// </Snippet35>
         UNREFERENCED_PARAMETER(myIntList);
         UNREFERENCED_PARAMETER(myStringList);
         UNREFERENCED_PARAMETER(myTypeList);
      }

      {
// <Snippet36>
         // Declarations of the variables used in the example
         CList<CString,CString&> myList;
         CList<CString,CString&> myList2;

         // There are two versions of CList::AddHead: one adds a single
         // element to the front of the list, the second adds another list
         // to the front. 

         // This adds the string "ABC" to the front of myList.
         // myList is a list of CStrings (ie defined as CList<CString,CString&>).
         myList.AddHead(CString(_T("ABC")));

         // This adds the elements of myList2 to the front of myList.
         myList.AddHead(&myList2);      
// </Snippet36>
      }

      {
// <Snippet37>      
         // Define myList and myList2.
         CList<CString,CString&> myList;
         CList<CString,CString&> myList2;

         // Add elements to the end of myList and myList2.
         myList.AddTail(CString(_T("A")));
         myList.AddTail(CString(_T("B")));
         myList2.AddTail(CString(_T("C")));
         myList2.AddTail(CString(_T("D")));

         // There are two versions of CList::AddTail: one adds a single
         // element to the end of the list, the second adds another list
         // to the end. 

         // This adds the string "ABC" to the end of myList.
         // myList is a list of CStrings (ie defined as CList<CString,CString&>).
         myList.AddTail(CString(_T("ABC")));
         ASSERT(CString(_T("ABC")) == myList.GetTail());

         // This adds the elements of myList2 to the end of myList.
         myList.AddTail(&myList2);
// </Snippet37>
      }

      {
// <Snippet38>
         // This code defines myList as a list of strings
         // such that memory gets allocated in chunks of
         // 16 strings.
         CList<CString,CString&> myList(16);

         // This code defines myList2 as a list of ints
         // such that memory gets allocated in chunks of
         // 128 ints.
         CList<int,int> myList2(128);      
// </Snippet38>
         UNREFERENCED_PARAMETER(myList);
         UNREFERENCED_PARAMETER(myList2);
      }

      {
// <Snippet39>
         // Define myList.
         CList<CString,CString&> myList;

         // Add three elements to the list.
         myList.AddHead(CString(_T("XYZ")));
         myList.AddHead(CString(_T("ABC")));
         myList.AddHead(CString(_T("123")));

         // Find a specific element.
         POSITION pos = myList.Find(CString(_T("XYZ")));
         ASSERT(CString(_T("XYZ")) == myList.GetAt(pos));      
// </Snippet39>
      }

      {
// <Snippet40>
         // Define myList.
         CList<CString,CString&> myList;

         // Add three elements to the list.
         myList.AddTail(CString(_T("XYZ")));
         myList.AddTail(CString(_T("ABC")));
         myList.AddTail(CString(_T("123")));

         // Verify the first element (index 0).
         ASSERT(CString(_T("XYZ")) == myList.GetAt(myList.FindIndex(0)));

         // Verify the third element (index 2).
         ASSERT(CString(_T("123")) == myList.GetAt(myList.FindIndex(2)));      
// </Snippet40>
      }

      {
// <Snippet41>
         // Define myList.
         CList<CString,CString&> myList;

         // Add an element to the front of the list.
         myList.AddHead(CString(_T("ABC")));

         // Verify the element was added to the front of the list.
         ASSERT(CString(_T("ABC")) == myList.GetHead());      
// </Snippet41>
      }

      {
// <Snippet42>
         // Define myList.
         CList<CString,CString&> myList;

         // Add an element to the front of the list.
         myList.AddHead(CString(_T("ABC")));

         // Verify the element at the head position
         // is the one added.
         POSITION pos = myList.GetHeadPosition();
         ASSERT(CString(_T("ABC")) == myList.GetAt(pos));      
// </Snippet42>
      }

      {
// <Snippet43>
         // Define myList.
         CList<CString,CString&> myList;

         // Add two elements to the list.
         myList.AddHead(CString(_T("ABC")));
         myList.AddHead(CString(_T("123")));

         // Dump the list elements to the debug window.
         POSITION pos = myList.GetHeadPosition();
         for (int i = 0; i < myList.GetCount(); i++)
         {
            TRACE(_T("%s\r\n"), (LPCTSTR)myList.GetNext(pos));
         }    
// </Snippet43>
      }

      {
// <Snippet44>
         // Define myList.
         CList<CString,CString&> myList;

         // Add two elements to the list.
         myList.AddHead(CString(_T("ABC")));
         myList.AddHead(CString(_T("123")));

         // Dump the list elements to the debug window,
         // in reverse order.
         POSITION pos = myList.GetTailPosition();
         for (int i = 0; i < myList.GetCount(); i++)
         {
            TRACE(_T("%s\r\n"), (LPCTSTR)myList.GetPrev(pos));
         }
// </Snippet44>
      }

      {
// <Snippet45>
         // Define myList.
         CList<CString,CString&> myList;

         // Add two elements to the list.
         myList.AddHead(CString(_T("ABC")));
         myList.AddHead(CString(_T("123")));

         // Remove the head element and verify the list.
         // NOTE: once the head is removed, the number of
         // elements in the list will be one.
         CString strHead = myList.RemoveHead();
         ASSERT((CString(_T("123")) == strHead) && (myList.GetSize() == 1) && 
            (CString(_T("ABC")) == myList.GetHead()));      
// </Snippet45>
      }

      {
// <Snippet46>      
         // Define myList.
         CList<CString,CString&> myList;

         // Add an element to the end of the list.
         myList.AddTail(CString(_T("ABC")));

         // Verify the element was added to the end of the list.
         ASSERT(CString(_T("ABC")) == myList.GetTail());
// </Snippet46>
      }

      {
// <Snippet47>
         // Define myList.
         CList<CString,CString&> myList;

         // Add an element to the end of the list.
         myList.AddTail(CString(_T("ABC")));

         // Verify the element at the end position
         // is the one added.
         POSITION pos = myList.GetTailPosition();
         ASSERT(CString(_T("ABC")) == myList.GetAt(pos));      
// </Snippet47>
      }

      {
// <Snippet48>
         // Define myList.
         CList<CString,CString&> myList;

         // Add three elements to the list.
         POSITION pos = myList.AddHead(CString(_T("XYZ")));
         pos = myList.InsertAfter(pos, CString(_T("ABC")));
         pos = myList.InsertAfter(pos, CString(_T("123")));

         // Verify the tail element is what's expected.
         ASSERT(CString(_T("123")) == myList.GetTail());   
// </Snippet48>
      }

      {
// <Snippet49>
         // Define myList.
         CList<CString,CString&> myList;

         // Add three elements to the list.
         POSITION pos = myList.AddHead(CString(_T("XYZ")));
         pos = myList.InsertBefore(pos, CString(_T("ABC")));
         pos = myList.InsertBefore(pos, CString(_T("123")));

         // Verify the head element is what's expected.
         ASSERT(CString(_T("123")) == myList.GetHead());      
// </Snippet49>
      }

      {
// <Snippet50>
         // Define myList.
         CList<CString,CString&> myList;

         // Add three elements to the list.
         myList.AddTail(CString(_T("XYZ")));
         myList.AddTail(CString(_T("ABC")));
         myList.AddTail(CString(_T("123")));

         // Remove the head element until the list is empty.
         CString str;
         while (!myList.IsEmpty())
         {
            str = myList.RemoveHead();
            TRACE(_T("%s\r\n"), (LPCTSTR) str);
         }      
// </Snippet50>
      }

      {
// <Snippet51>
         // Define myList.
         CList<CString,CString&> myList;

         // Add three elements to the list.
         myList.AddTail(CString(_T("XYZ")));
         myList.AddTail(CString(_T("ABC")));
         myList.AddTail(CString(_T("123")));

         // Remove all of the elements in the list.
         myList.RemoveAll();

         // Verify the list is empty.
         ASSERT(myList.IsEmpty());      
// </Snippet51>
      }

      {
// <Snippet52>
         // Define myList.
         CList<CString,CString&> myList;

         // Add three elements to the list.
         myList.AddTail(CString(_T("XYZ")));
         myList.AddTail(CString(_T("ABC")));
         myList.AddTail(CString(_T("123")));

         // Remove CString("ABC") from the list.
         myList.RemoveAt(myList.FindIndex(1));

         // Verify CString("ABC") is not in the list.
         ASSERT(myList.Find(CString(_T("ABC"))) == NULL);      
// </Snippet52>
      }

      {
// <Snippet53>
         // Define myList.
         CList<CString,CString&> myList;

         // Add two elements to the list.
         myList.AddHead(CString(_T("ABC")));
         myList.AddHead(CString(_T("123")));

         // Remove the head element and verify the list.
         // NOTE: once the head is removed, the number of
         // elements in the list will be one.
         CString strHead = myList.RemoveHead();
         ASSERT((CString(_T("123")) == strHead) && (myList.GetCount() == 1) && 
            (CString(_T("ABC")) == myList.GetHead()));      
// </Snippet53>
      }

      {
// <Snippet54>
         // Define myList.
         CList<CString,CString&> myList;

         // Add two elements to the list.
         myList.AddTail(CString(_T("ABC")));
         myList.AddTail(CString(_T("123")));

         // Remove the tail element and verify the list.
         // NOTE: once the tail is removed, the number of
         // elements in the list will be one.
         CString strTail = myList.RemoveTail();
         ASSERT((CString(_T("123")) == strTail) && (myList.GetCount() == 1) && 
            (CString(_T("ABC")) == myList.GetTail()));      
// </Snippet54>
      }

      {
// <Snippet55>
         // Define myList.
         CList<CString,CString&> myList;

         // Add three elements to the list.
         myList.AddTail(CString(_T("XYZ")));
         myList.AddTail(CString(_T("ABC")));
         myList.AddTail(CString(_T("123")));

         // Replace CString("ABC") with CString("CBA")
         POSITION pos = myList.Find(CString(_T("ABC")));
         myList.SetAt(pos, CString(_T("CBA")));

         // Verify CString("ABC") is not in the list.
         ASSERT(myList.Find(CString(_T("ABC"))) == NULL);      
// </Snippet55>
      }

      // CMap snippets.

      {
// <Snippet56>
         // declares a map of ints to points
         CMap<int,int,CPoint,CPoint> myMap(16);      
// </Snippet56>
         UNREFERENCED_PARAMETER(myMap);
      }

      {
// <Snippet57>
         CMap<int,int,CPoint,CPoint> myMap;

         UINT uTableSize = myMap.GetHashTableSize();      
// </Snippet57>
         UNREFERENCED_PARAMETER(uTableSize);
      }

      {
// <Snippet58>
         CMap<int,int,CPoint,CPoint> myMap;

         myMap.InitHashTable(257);

         // Add 200 elements to the map.
         for (int i = 0; i < 200; i++)
            myMap[i] = CPoint(i, i);

         // Remove the elements with even key values.
         CPoint pt;
         for (int i = 0; myMap.Lookup(i, pt); i += 2)
         {
            myMap.RemoveKey(i);
         }

         ASSERT(myMap.GetSize() == 100);
         TRACE(_T("myMap with %d elements:\n"), myMap.GetCount());
		   POSITION pos = myMap.GetStartPosition();
         int iKey;
         CPoint ptVal;
		   while (pos != NULL)
		   {
			   myMap.GetNextAssoc(pos, iKey, ptVal);
			   TRACE(_T("\t[%d] = (%d,%d)\n"), iKey, ptVal.x, ptVal.y);
         }
// </Snippet58>
      }

      {
// <Snippet59>
         typedef CMap<int, int, CPoint, CPoint> CMyMap;
         CMyMap myMap;

         myMap.InitHashTable(257);

         // Add 10 elements to the map.
         for (int i = 0; i <= 10; i++)
            myMap.SetAt(i, CPoint(i, i));

         // Print the element value with even key values.
         int nKey = 0;
         CPoint pt;
         CMyMap::CPair* pCurVal;

         pCurVal = myMap.PGetFirstAssoc();
         while (pCurVal != NULL)
         {
            if ((nKey%2) == 0)
            {
               _tprintf_s(_T("Current key value at %d: %d,%d\n"),
                  pCurVal->key, pCurVal->value.x, pCurVal->value.y);
            }
            pCurVal = myMap.PGetNextAssoc(pCurVal);
            nKey++;
         }
// </Snippet59>
      }

      {
// <Snippet60>
         typedef CMap<int, int, CPoint, CPoint> CMyMap;
         CMyMap myMap;

         myMap.InitHashTable(257);

         // Add 10 elements to the map.
         for (int i = 0; i <= 10; i++)
            myMap[i] = CPoint(i, i);

         // Print the element values with even key values.
         CMyMap::CPair *pCurVal;

         for (int i = 0; i <= myMap.GetCount() ; i += 2)
         {
            pCurVal = myMap.PLookup(i);
            _tprintf_s(_T("Current key value at %d: %d,%d\n"), 
               pCurVal->key, pCurVal->value.x, pCurVal->value.y);
         }      
// </Snippet60>
      }

      {
// <Snippet61>
         CMap<int,int,CPoint,CPoint> myMap;

         // Add 10 elements to the map.
         for (int i=0;i < 10;i++)
            myMap.SetAt(i, CPoint(i, i));

         myMap.RemoveAll();

         ASSERT(myMap.IsEmpty());      
// </Snippet61>
      }

      {
// <Snippet62>
         CMap<int, int, CPoint, CPoint> myMap;

         // Add 10 elements to the map.
         for (int i = 0; i < 10; i++)
            myMap.SetAt(i, CPoint(i, i));

         // Remove the elements with even key values.
         POSITION pos = myMap.GetStartPosition();
         int    nKey;
         CPoint pt;
         while (pos != NULL)
         {
            myMap.GetNextAssoc(pos, nKey, pt);

            if ((nKey % 2) == 0)
               myMap.RemoveKey(nKey);
         }

         // Print the element values.
         pos = myMap.GetStartPosition();
         while (pos != NULL)
         {
            myMap.GetNextAssoc(pos, nKey, pt);
            _tprintf_s(_T("Current key value at %d: %d,%d\n"), 
               nKey, pt.x, pt.y);
         }      
 // </Snippet62>
      }

      // CMapStringToOb snippets

      {
// <Snippet63>
         CMapStringToOb map(20);  // Map on the stack with blocksize of 20

         CMapStringToOb* pm = new CMapStringToOb;  // Map on the heap
                                                   // with default blocksize
// </Snippet63>
         delete pm;
      }

      {
// <Snippet64>
         CMapStringToOb map;

         map.SetAt(_T("Bart"), new CAge(13));
         map.SetAt(_T("Homer"), new CAge(36));
         ASSERT(map.GetCount() == 2);
// </Snippet64>

         delete map[_T("Bart")];
         delete map[_T("Homer")];
      }

      {
// <Snippet66>
         CMapStringToOb map;
         POSITION pos;
         CString key;
         CAge* pa;
         
         map.SetAt(_T("Bart"), new CAge(13));
         map.SetAt(_T("Lisa"), new CAge(11));
         map.SetAt(_T("Homer"), new CAge(36));
         map.SetAt(_T("Marge"), new CAge(35));
         // Iterate through the entire map, dumping both name and age.
         for (pos = map.GetStartPosition(); pos != NULL;)
         {
            map.GetNextAssoc(pos, key, (CObject*&)pa);
            #ifdef _DEBUG
                  afxDump << key << _T(" : ") << pa << _T("\n");
            #endif
         }
// </Snippet66>

         pos = map.GetStartPosition();
// <Snippet65>
         CObject* ob;
         map.GetNextAssoc(pos, key, (CObject*&)ob);      
// </Snippet65>

         delete map[_T("Bart")];
         delete map[_T("Lisa")];
         delete map[_T("Homer")];
         delete map[_T("Marge")];
      }

      {
// <Snippet67>
         CMapStringToOb map;

         map.SetAt(_T("Bart"), new CAge(13));
         map.SetAt(_T("Homer"), new CAge(36));
         ASSERT(map.GetSize() == 2);         
// </Snippet67>

         delete map[_T("Bart")];
         delete map[_T("Homer")];
      }

      {
// <Snippet68>
         CMapStringToOb map;
         CAge* pa;

         map.SetAt(_T("Bart"), new CAge(13));
         map.SetAt(_T("Lisa"), new CAge(11));
         map.SetAt(_T("Homer"), new CAge(36));
         map.SetAt(_T("Marge"), new CAge(35));
         ASSERT(map.Lookup(_T("Lisa"), (CObject*&)pa)); // Is "Lisa" in the map?
         ASSERT(*pa ==  CAge(11)); // Is she 11?         
// </Snippet68>

         delete map[_T("Bart")];
         delete map[_T("Lisa")];
         delete map[_T("Homer")];
         delete map[_T("Marge")];
      }

      {
// <Snippet69>
         {
            CMapStringToOb map;

            CAge age1(13); // Two objects on the stack
            CAge age2(36);
            map.SetAt(_T("Bart"), &age1);
            map.SetAt(_T("Homer"), &age2);
            ASSERT(map.GetCount() == 2);
            map.RemoveAll(); // CObject pointers removed; objects not removed.
            ASSERT(map.GetCount() == 0);
            ASSERT(map.IsEmpty());
         } // The two CAge objects are deleted when they go out of scope.         
// </Snippet69>
      }

      {
// <Snippet70>
         CMapStringToOb map;
         
         map.SetAt(_T("Bart"), new CAge(13));
         map.SetAt(_T("Lisa"), new CAge(11));
         map.SetAt(_T("Homer"), new CAge(36));
         map.SetAt(_T("Marge"), new CAge(35));
         map.RemoveKey(_T("Lisa")); // Memory leak: CAge object not
                                    // deleted.
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("RemoveKey example: ") << &map << _T("\n");
         #endif         
// </Snippet70>

         delete map[_T("Bart")];
         delete map[_T("Homer")];
         delete map[_T("Marge")];
      }

      {
// <Snippet71>
         CMapStringToOb map;
         CAge* pa;

         map.SetAt(_T("Bart"), new CAge(13));
         map.SetAt(_T("Lisa"), new CAge(11)); // Map contains 2 
                                                 // elements.
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("before Lisa's birthday: ") << &map << _T("\n");
         #endif
         if (map.Lookup(_T("Lisa"), (CObject *&)pa))
         { // CAge 12 pointer replaces CAge 11 pointer.
            map.SetAt(_T("Lisa"), new CAge(12));
            delete pa;  // Must delete CAge 11 to avoid memory leak.
         }
         #ifdef _DEBUG
            afxDump << _T("after Lisa's birthday: ") << &map << _T("\n");
         #endif         
// </Snippet71>

         delete map[_T("Bart")];
         delete map[_T("Lisa")];
      }

      {
// <Snippet72>
         CMapStringToOb map;
         
         map[_T("Bart")] = new CAge(13);
         map[_T("Lisa")] = new CAge(11);
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("Operator [] example: ") << &map << _T("\n");
         #endif         
// </Snippet72>

         delete map[_T("Bart")];
         delete map[_T("Lisa")];
      }

      // CMapStringToString snippets

      {
// <Snippet73>
         CMapStringToString myMap;
         CString myStr[4]={_T("One"), _T("Two"), _T("Three"), _T("Four")};
         CMapStringToString::CPair* pCurVal;

         myMap.InitHashTable(257);

         // Add 4 elements to the map.
         myMap.SetAt(myStr[0], _T("Odd"));
         myMap.SetAt(myStr[1], _T("Even"));
         myMap.SetAt(myStr[2], _T("Odd"));
         myMap.SetAt(myStr[3], _T("Even"));

         pCurVal = myMap.PGetFirstAssoc();
         while (pCurVal != NULL)
         {
            _tprintf_s(_T("Current key value at %s: %s\n"), 
               pCurVal->key, pCurVal->value);
            pCurVal= myMap.PGetNextAssoc(pCurVal);
         }
 // </Snippet73>
      }

      {
// <Snippet74>
         CMapStringToString myMap;
         CString myStr[4]={_T("One"), _T("Two"), _T("Three"), _T("Four")};

         myMap.InitHashTable(257);

         // Add 4 elements to the map.
         myMap.SetAt(myStr[0], _T("Odd"));
         myMap.SetAt(myStr[1], _T("Even"));
         myMap.SetAt(myStr[2], _T("Odd"));
         myMap.SetAt(myStr[3], _T("Even"));

         // Print the element values with odd key values.
         CMapStringToString::CPair *pCurVal;

         for (int i = 0; i < 4 ; i += 2)
         {
            pCurVal = myMap.PLookup(myStr[i]);
               _tprintf_s(_T("Current key value at %s: %s\n"), 
            pCurVal->key, pCurVal->value);
         }    
// </Snippet74>
      }

      // CObArray snippets

      {
// <Snippet75>
         CObArray arr;

         arr.Add(new CAge(21)); // Element 0
         arr.Add(new CAge(40)); // Element 1
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("Add example: ") << &arr << _T("\n");
         #endif      
// </Snippet75>
         for (int i = 0; i < arr.GetCount(); i++)
         {
            delete arr[i];         
         }
      }

      {
// <Snippet76>
         CObArray myArray1, myArray2;

         // Add elements to the second array.
         myArray2.Add(new CAge(21));
         myArray2.Add(new CAge(42));

         // Add elements to the first array and also append the second array.
         myArray1.Add(new CAge(3));
         myArray1.Append(myArray2);

         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("myArray1: ") << &myArray1 << _T("\n");
            afxDump << _T("myArray2: ") << &myArray2 << _T("\n");
         #endif      
// </Snippet76>
         for (int i = 0; i < myArray1.GetCount(); i++)
         {
            delete myArray1[i];         
         }
      }

      {
// <Snippet77>
         CObArray myArray1, myArray2;

         // Add elements to the second array.
         myArray2.Add(new CAge(21));
         myArray2.Add(new CAge(42));

         // Copy the elements from the second array to the first.
         myArray1.Copy(myArray2);

         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << "myArray1: " << &myArray1 << "\n";
            afxDump << "myArray2: " << &myArray2 << "\n";
         #endif      
// </Snippet77>
         for (int i = 0; i < myArray2.GetCount(); i++)
         {
            delete myArray2[i];         
         }
      }

      {
// <Snippet78>
         CObArray arr; //Array with default blocksize
         CObArray* pArray = new CObArray; //Array on the heap with default blocksize      
// </Snippet78>
         delete pArray;
      }

      {
// <Snippet79>
         CObArray arr;

         arr.Add(new CAge(21)); // Element 0
         arr.Add(new CAge(40)); // Element 1
         ASSERT(*(CAge*) arr.GetAt(0) == CAge(21));      
// </Snippet79>
         for (int i = 0; i < arr.GetCount(); i++)
         {
            delete arr[i];         
         }
      }

      {
// <Snippet80>
         CObArray myArray;

         // Add elements to the array.
         for (int i = 0; i < 10; i++)
            myArray.Add(new CAge(i));

         // Add 100 to all the elements of the array.
         for (int i = 0; i < myArray.GetCount(); i++)
         {
            CAge*& pAge = (CAge*&) myArray.ElementAt(i);
            delete pAge;
            pAge = new CAge(100 + i);
         }
// </Snippet80>
         for (int i = 0; i < myArray.GetCount(); i++)
         {
            delete myArray[i];         
         }
      }

      {
// <Snippet81>
         CObArray myArray;

         // Allocate memory for at least 32 elements.
         myArray.SetSize(32, 128);

         // Add elements to the array.
         CAge** ppAge = (CAge**) myArray.GetData();
         for (int i = 0; i < 32; i++, ppAge++)
            *ppAge = new CAge(i);

         // Only keep first 5 elements and free extra (unused) bytes.
         for (int i = 5; i < myArray.GetCount(); i++)
         {
            delete myArray[i]; // free objects before resetting array size.         
         }
         myArray.SetSize(5, 128);
         myArray.FreeExtra(); // only frees pointers.

         #ifdef _DEBUG
             afxDump.SetDepth(1);
             afxDump << _T("myArray: ") << &myArray << _T("\n");
         #endif      
 // </Snippet81>
         for (int i = 0; i < myArray.GetCount(); i++)
         {
            delete myArray[i];         
         }
      }

      {
// <Snippet82>
         CObArray myArray;

         // Add elements to the array.
         for (int i = 0; i < 10; i++)
            myArray.Add(new CAge(i));

         // Add 100 to all the elements of the array.
         for (int i = 0; i < myArray.GetSize(); i++)
         {
            CAge*& pAge = (CAge*&) myArray.ElementAt(i);
            delete pAge;
            pAge = new CAge(100+i);
         }

         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("myArray: ") << &myArray << _T("\n");
         #endif      
// </Snippet82>
         for (int i = 0; i < myArray.GetCount(); i++)
         {
            delete myArray[i];         
         }
      }

      {
// <Snippet83>
         CObArray arr;

         arr.Add(new CAge(21)); // Element 0
         arr.Add(new CAge(40)); // Element 1
         ASSERT(arr.GetUpperBound() == 1); // Largest index      
// </Snippet83>
         for (int i = 0; i < arr.GetCount(); i++)
         {
            delete arr[i];         
         }
      }

      {
// <Snippet84>
         CObArray arr;

         arr.Add(new CAge(21)); // Element 0
         arr.Add(new CAge(40)); // Element 1 (will become 2).
         arr.InsertAt(1, new CAge(30));  // New element 1
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("InsertAt example: ") << &arr << _T("\n");
         #endif      
// </Snippet84>
         for (int i = 0; i < arr.GetCount(); i++)
         {
            delete arr[i];         
         }
      }

      {
// <Snippet85>
         CObArray arr;
         CAge* pa1;
         CAge* pa2;

         arr.Add(pa1 = new CAge(21)); // Element 0
         arr.Add(pa2 = new CAge(40)); // Element 1
         ASSERT(arr.GetSize() == 2);
         arr.RemoveAll(); // Pointers removed but objects not deleted.
         ASSERT(arr.GetSize() == 0);
         delete pa1;
         delete pa2;  // Cleans up memory.      
// </Snippet85>
      }

      {
// <Snippet112>
         CObArray arr;
         CObject* pa;

         arr.Add(new CAge(21)); // Element 0
         arr.Add(new CAge(40)); // Element 1
         if((pa = arr.GetAt(0)) != NULL)
         {
             arr.RemoveAt(0);  // Element 1 moves to 0.
             delete pa; // Delete the original element at 0.
         }
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("RemoveAt example: ") << &arr << _T("\n");
         #endif      
// </Snippet112>
         for (int i = 0; i < arr.GetCount(); i++)
         {
            delete arr[i];         
         }
      }

      {
// <Snippet86>
         CObArray arr;
         CObject* pa;

         arr.Add(new CAge(21)); // Element 0
         arr.Add(new CAge(40)); // Element 1
         if ((pa = arr.GetAt(0)) != NULL)
         {
            arr.SetAt(0, new CAge(30));  // Replace element 0.
            delete pa; // Delete the original element at 0.
         }
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("SetAt example: ") << &arr << _T("\n");
         #endif      
// </Snippet86>
         for (int i = 0; i < arr.GetCount(); i++)
         {
            delete arr[i];         
         }
      }

      {
// <Snippet87>
         CObArray arr;

         arr.Add(new CAge(21)); // Element 0
         arr.Add(new CAge(40)); // Element 1
         arr.SetAtGrow(3, new CAge(65)); // Element 2 deliberately
                                               // skipped.
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("SetAtGrow example: ") << &arr << _T("\n");
         #endif      
// </Snippet87>
         for (int i = 0; i < arr.GetCount(); i++)
         {
            delete arr[i];         
         }
      }

      {
// <Snippet88>
         CObArray arr;
         CAge* pa;

         arr.Add(new CAge(21)); // Element 0
         arr.Add(new CAge(40)); // Element 1
         pa = (CAge*)arr[0]; // Get element 0
         ASSERT(*pa == CAge(21)); // Get element 0
         arr[0] = new CAge(30); // Replace element 0
         delete pa;
         ASSERT(*(CAge*) arr[0] == CAge(30)); // Get new element 0      
// </Snippet88>
         for (int i = 0; i < arr.GetCount(); i++)
         {
            delete arr[i];         
         }
      }

      // CObList snippets

      {
// <Snippet89>
         CObList list;
         list.AddHead(new CAge(21)); // 21 is now at head.
         list.AddHead(new CAge(40)); // 40 replaces 21 at head.
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("AddHead example: ") << &list << _T("\n");
         #endif      
// </Snippet89>
         DeleteObList(&list);
      }

      {
// <Snippet90>
         CObList list;
         list.AddTail(new CAge(21));
         list.AddTail(new CAge(40)); // List now contains (21, 40).
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("AddTail example: ") << &list << _T("\n");
         #endif      
// </Snippet90>
         DeleteObList(&list);
      }

      {
// <Snippet92>
         CObList list(20);  // List on the stack with blocksize = 20.

         CObList* plist = new CObList; // List on the heap with default 
                                       // blocksize.         
// </Snippet92>
         delete plist;
      }

      {
// <Snippet93>
         CObList list;
         CAge* pa1;
         CAge* pa2;
         POSITION pos;
         list.AddHead(pa1 = new CAge(21));
         list.AddHead(pa2 = new CAge(40));    // List now contains (40, 21).
         if ((pos = list.Find(pa1)) != NULL) // Hunt for pa1
         {                                  // starting at head by default.
             ASSERT(*(CAge*) list.GetAt(pos) == CAge(21));
         }    
// </Snippet93>
         DeleteObList(&list);
      }

      {
// <Snippet94>
         CObList list;
         POSITION pos;

         list.AddHead(new CAge(21));
         list.AddHead(new CAge(40)); // List now contains (40, 21).
         if ((pos = list.FindIndex(0)) != NULL)
         {
             ASSERT(*(CAge*) list.GetAt(pos) == CAge(40));
         }    
// </Snippet94>
         DeleteObList(&list);
      }

      {
// <Snippet95>
         CObList list;

         list.AddHead(new CAge(21));
         list.AddHead(new CAge(40)); // List now contains (40, 21).
         ASSERT(list.GetCount() == 2);      
// </Snippet95>
         DeleteObList(&list);
      }

      {
// <Snippet96>
         const CObList* cplist;

         CObList* plist = new CObList;
         CAge* page1 = new CAge(21);
         CAge* page2 = new CAge(30);
         CAge* page3 = new CAge(40);
         plist->AddHead(page1);
         plist->AddHead(page2);  // List now contains (30, 21).
         // The following statement REPLACES the head element.
         plist->GetHead() = page3; // List now contains (40, 21).
         ASSERT(*(CAge*) plist->GetHead() == CAge(40));
         cplist = plist;  // cplist is a pointer to a const list.
         // cplist->GetHead() = page3; // Error: can't assign a pointer to a const list
         ASSERT(*(CAge*) plist->GetHead() == CAge(40)); // OK

         delete page1;
         delete page2;
         delete page3;
         delete plist; // Cleans up memory.      
// </Snippet96>
      }

      {
// <Snippet97>
         CObList list;
         POSITION pos;

         list.AddHead(new CAge(21));
         list.AddHead(new CAge(40)); // List now contains (40, 21).
         if ((pos = list.GetHeadPosition()) != NULL)
         {
             ASSERT(*(CAge*) list.GetAt(pos) == CAge(40));
         }    
// </Snippet97>
         DeleteObList(&list);
      }

      {
// <Snippet98>
         CObList list;
         POSITION pos;
         list.AddHead(new CAge(21));
         list.AddHead(new CAge(40)); // List now contains (40, 21).
         // Iterate through the list in head-to-tail order.
         #ifdef _DEBUG
            for (pos = list.GetHeadPosition(); pos != NULL;)
            {
               afxDump << list.GetNext(pos) << _T("\n");
            }
         #endif      
// </Snippet98>
         DeleteObList(&list);
      }

      {
// <Snippet99>
         CObList list;
         POSITION pos;

         list.AddHead(new CAge(21));
         list.AddHead(new CAge(40)); // List now contains (40, 21).
         // Iterate through the list in tail-to-head order.
         for (pos = list.GetTailPosition(); pos != NULL;)
         {
         #ifdef _DEBUG
             afxDump << list.GetPrev(pos) << _T("\n");
         #endif
         }      
// </Snippet99>
         DeleteObList(&list);
      }

      {
// <Snippet100>
         CObList list;

         list.AddHead(new CAge(21));
         list.AddHead(new CAge(40)); // List now contains (40, 21).
         ASSERT(list.GetSize() == 2);      
// </Snippet100>
         DeleteObList(&list);
      }

      {
// <Snippet101>
         CObList list;

         list.AddHead(new CAge(21));
         list.AddHead(new CAge(40)); // List now contains (40, 21).
         ASSERT(*(CAge*) list.GetTail() == CAge(21));      
// </Snippet101>
         DeleteObList(&list);
      }

      {
// <Snippet102>
         CObList list;
         POSITION pos;

         list.AddHead(new CAge(21));
         list.AddHead(new CAge(40)); // List now contains (40, 21).
         if ((pos = list.GetTailPosition()) != NULL)
         {
             ASSERT(*(CAge*) list.GetAt(pos) == CAge(21));
         }     
// </Snippet102>
         DeleteObList(&list);
      }

      {
// <Snippet103>
         CObList list;
         POSITION pos1, pos2;
         list.AddHead(new CAge(21));
         list.AddHead(new CAge(40)); // List now contains (40, 21).
         if ((pos1 = list.GetHeadPosition()) != NULL)
         {
             pos2 = list.InsertAfter(pos1, new CAge(65));
         }
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("InsertAfter example: ") << &list << _T("\n");
         #endif
// </Snippet103>
         DeleteObList(&list);
      }

      {
// <Snippet104>
         CObList list;
         POSITION pos1, pos2;
         list.AddHead(new CAge(21));
         list.AddHead(new CAge(40)); // List now contains (40, 21).
         if ((pos1 = list.GetTailPosition()) != NULL)
         {
             pos2 = list.InsertBefore(pos1, new CAge(65));
         }
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("InsertBefore example: ") << &list << _T("\n");
         #endif      
// </Snippet104>
         DeleteObList(&list);
      }

      {
// <Snippet105>
         CObList list;
         CAge* pa1;
         CAge* pa2;
         ASSERT(list.IsEmpty()); // Yes it is.
         list.AddHead(pa1 = new CAge(21));
         list.AddHead(pa2 = new CAge(40)); // List now contains (40, 21).
         ASSERT(!list.IsEmpty()); // No it isn't.
         list.RemoveAll(); // CAges aren't destroyed.
         ASSERT(list.IsEmpty()); // Yes it is.
         delete pa1;     // Now delete the CAge objects.
         delete pa2;      
// </Snippet105>
      }

      {
// <Snippet106>
         CObList list;
         POSITION pos1, pos2;
         CObject* pa;
         
         list.AddHead(new CAge(21));
         list.AddHead(new CAge(40));
         list.AddHead(new CAge(65)); // List now contains (65 40, 21).
         for (pos1 = list.GetHeadPosition(); (pos2 = pos1) != NULL;)
         {
             if (*(CAge*) list.GetNext(pos1) == CAge(40))
             {
                 pa = list.GetAt(pos2); // Save the old pointer for
                                        //deletion.
                 list.RemoveAt(pos2);
                 delete pa; // Deletion avoids memory leak.
             }
         }
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("RemoveAt example: ") << &list << _T("\n");
         #endif      
// </Snippet106>
         DeleteObList(&list);
      }

      {
// <Snippet107>
         CObList list;
         CAge* pa1;
         CAge* pa2;

         list.AddHead(pa1 = new CAge(21));
         list.AddHead(pa2 = new CAge(40)); // List now contains (40, 21).
         ASSERT(*(CAge*) list.RemoveHead() == CAge(40));  // Old head
         ASSERT(*(CAge*) list.GetHead() == CAge(21));  // New head
         delete pa1;
         delete pa2;      
// </Snippet107>
      }

      {
// <Snippet108>
         CObList list;
         CAge* pa1;
         CAge* pa2;

         list.AddHead(pa1 = new CAge(21));
         list.AddHead(pa2 = new CAge(40)); // List now contains (40, 21).
         ASSERT(*(CAge*) list.RemoveTail() == CAge(21));  // Old tail
         ASSERT(*(CAge*) list.GetTail() == CAge(40));  // New tail
         delete pa1;
         delete pa2; // Clean up memory.      
// </Snippet108>
      }

      {
// <Snippet109>
         CObList list;
         CObject* pa;
         POSITION pos;
         
         list.AddHead(new CAge(21));
         list.AddHead(new CAge(40)); // List now contains (40, 21).
         if ((pos = list.GetTailPosition()) != NULL)
         {
             pa = list.GetAt(pos); // Save the old pointer for 
                                   //deletion.
             list.SetAt(pos, new CAge(65));  // Replace the tail 
                                               //element.
             delete pa;  // Deletion avoids memory leak.
         }
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("SetAt example: ") << &list << _T("\n");
         #endif      
// </Snippet109>
         DeleteObList(&list);
      }

      {
// <Snippet110>
         typedef CTypedPtrList<CObList, CMyObject*>  CMyList;
         CMyList ml;
         CMyObject* pMyObject = new CMyObject();
         ml.AddTail(pMyObject);

         CFileException e;
         CFile myFile; 
         myFile.Open(_T("CTypedPtrList_File.txt"), 
            CFile::modeCreate|CFile::modeWrite, &e);
         CArchive ar(&myFile, CArchive::store);
         ml.Serialize(ar);

         ar.Close();
         myFile.Close(); 

         while (!ml.IsEmpty())
         {
            delete ml.GetHead();
            ml.RemoveHead();
         }
// </Snippet110>      
      }

      {
// <Snippet114>
#ifdef _DEBUG
   CString cStr;
   AfxDoForAllClasses(DoForAllClasses, &cStr);
   AfxMessageBox(cStr);
#endif
// </Snippet114>
      }

      {
// <Snippet116>
#ifdef _DEBUG
   //AfxDoForAllObjects will call the function DoForAllObjects 
   //For each CObject-derived object that is allocated on the heap
   int nCount = 0;
   AfxDoForAllObjects(DoForAllObjects, &nCount);
   TRACE("%d Objects Checked\n", nCount);
#endif
// </Snippet116>
      }
   }
      
   return nRetCode;
}
   