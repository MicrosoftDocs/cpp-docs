// NVC_ATL_Utilities.cpp : Defines the entry point for the console application.
//
// Snippets for various utility classes in ATL.
//
// Topic                                     Snippet
// CAtlArray::Add                            1
// CAtlArray::Append                         2
// CAtlArray::AssertValid                    3
// CAtlArray::CAtlArray                      4
// CAtlArray::Copy                           5
// CAtlArray::GetAt                          6
// CAtlArray::GetData                        7
// CAtlArray::InsertArrayAt                  8
// CAtlArray::InsertAt                       9
// CAtlArray::IsEmpty                        10
// CAtlArray::RemoveAt                       11
// CAtlArray::SetAtGrow                      12
// CAtlList::AddHead                         13
// CAtlList::AddHeadList                     14
// CAtlList::AddTail                         15
// CAtlList::AddTailList                     16
// CAtlList::AssertValid                     17
// CAtlList::CAtlList                        18
// CAtlList::Find                            19
// CAtlList::FindIndex                       20
// CAtlList::GetHeadPosition                 21
// CAtlList::GetTailPosition                 22
// CAtlList::InsertAfter                     23
// CAtlList::InsertBefore                    24
// CAtlList::IsEmpty                         25
// CAtlList::MoveToHead                      26
// CAtlList::RemoveAt                        27
// CAtlList::RemoveHead                      28
// CAtlList::RemoveTail                      29
// CAtlList::SetAt                           30
// CAtlList::SwapElements                    31
// CComBSTR::Append                          32
// CComBSTR::AppendBSTR                      33
// CComBSTR::AppendBytes                     34
// CComBSTR::Attach                          35
// CComBSTR::ByteLength                      36
// CComBSTR::CComBSTR                        37
// CComBSTR::Copy                            38
// CComBSTR::CopyTo                          39
// CComBSTR::Detach                          40
// CComBSTR::Empty                           41
// CComBSTR::Length                          42
// CComBSTR::LoadString                      43
// CComBSTR::ReadFromStream                  44
// CComBSTR::WriteToStream                   45
// CComBSTR::operator !                      35
// CComBSTR::operator &                      46 - 47
// CComBSTR::operator +=                     48
// CComBSTR::m_str                           49
// CComCurrency::GetFraction                 50
// CComCurrency::GetInteger                  51
// CComCurrency::Round                       52
// CComCurrency::SetFraction                 53
// CComCurrency::SetInteger                  54
// CComCurrency::operator -                  55
// CComCurrency::operator !=                 56
// CComCurrency::operator *                  57
// CComCurrency::operator *=                 58
// CComCurrency::operator /                  59
// CComCurrency::operator /=                 60
// CComCurrency::operator +                  61
// CComCurrency::operator +=                 62
// CComCurrency::operator <                  63
// CComCurrency::operator <=                 64
// CComCurrency::operator =                  65
// CComCurrency::operator -=                 66
// CComCurrency::operator ==                 67
// CComCurrency::operator >                  68
// CComCurrency::operator >=                 69
// CComCurrency::operator CURRENCY           70
// CAtlFileMappingBase::CAtlFileMappingBase  71
// CAtlMap::CAtlMap                          72
// CAtlTemporaryFile::CAtlTemporaryFile      73
// CAutoPtr Class                            74
// CComSafeArray Class                       75
// CComVariant::SetByRef                     76
// CHeapPtr::Allocate                        77
// CHeapPtr::CHeapPtr                        78
// CHeapPtr::Reallocate                      79
// CHeapPtr::operator =                      80
// CRBMap::CRBMap                            81
// CRBMap::Lookup                            82
// CRBMap::RemoveKey                         83
// CRBMap::SetAt                             84
// CRBMultiMap::CRBMultiMap                  85
// CSimpleArray Class                        86
// CSimpleArray::Add                         87
// CSimpleArray::Find                        88
// CSimpleArray::operator []                 89
// CSimpleArray::operator =                  90
// CSimpleMap Class                          91
// CWin32Heap::CWin32Heap                    92 - 93
// IAtlMemMgr Class                          94
// AtlGetVersion                             95
// _ATL_ALL_WARNINGS                         97
// ATL and MFC String Conversion Macros      98 - 107
// ATLENSURE                                 108
// ATLTRACE2                                 109 - 111
// ATL Collection Classes                    112
// Using Replaceable Parameters (The Registrar's Preprocessor) 113
// Programming with CComBSTR                 114 - 119
// CAdapt Class                              120 - 121
// _ATL_DEBUG_INTERFACES                     124
// _ATL_SECURE_NO_DEPRECATE                  125 - 126
// ATLTRACENOTIMPL                           127
// DEVMODE and TEXTMETRIC String Conversion Macros 128 - 129
// CComPtr Class                                   130 - 131
// CDefaultCharTraits::CharToLower                 132
// CUrl::CreateUrl                                 133
// IThreadPoolConfig::GetSize                      134
// IWorkerThreadClient::CloseHandle                135
// IWorkerThreadClient::Execute                    136
// Worker Archetype                                137

#include "stdafx.h"
#include "resource.h"
#include "atlutil.h"

#include <list>

class CBSTRStuff
{
public:
   CBSTRStuff() {}

// <Snippet38>
   CComBSTR m_bstrURL;    // BSTR representing a URL

   // put_URL is the put method for the URL property. 
   STDMETHOD(put_URL)(BSTR strURL)
   {
       ATLTRACE(_T("put_URL\n"));

       // free existing string in m_bstrURL & make a copy 
       // of strURL pointed to by m_bstrURL
       m_bstrURL = strURL;
       return S_OK;
   }

   // get_URL is the get method for the URL property. 
   STDMETHOD(get_URL)(BSTR* pstrURL)
   {
       ATLTRACE(_T("get_URL\n"));

       // make a copy of m_bstrURL pointed to by pstrURL
       *pstrURL = m_bstrURL.Copy(); // See CComBSTR::CopyTo
       return S_OK;
   }
// </Snippet38>
};

class CBSTRURL
{
public:
   CBSTRURL() {}

// <Snippet39>
   CComBSTR m_bstrURL; // BSTR representing a URL

   // get_URL is the get method for the URL property. 
   STDMETHOD(get_URL)(BSTR* pstrURL)
   {
      // Make a copy of m_bstrURL and return it via pstrURL
      return m_bstrURL.CopyTo(pstrURL);
   }
// </Snippet39>
};

class CMyDataObj
{
public:
   CMyDataObj() {};

   STDMETHOD(GetData)(FORMATETC *pformatetcIn, STGMEDIUM *pmedium);
};

// <Snippet45>
//implementation of IDataObject::GetData()
STDMETHODIMP CMyDataObj::GetData(FORMATETC *pformatetcIn, STGMEDIUM *pmedium)
{
    HRESULT hr = S_OK;
    if (pformatetcIn->cfFormat == CF_TEXT && pformatetcIn->tymed == TYMED_ISTREAM)
    {
        IStream *pStm;
        // Create an IStream from global memory
        hr = CreateStreamOnHGlobal(NULL, TRUE, &pStm);
        if (FAILED(hr))
            return hr;

        // Initialize CComBSTR
        CComBSTR bstrStr = OLESTR("Hello World");

        // Serialize string into stream
        // the length followed by actual string is serialized into stream
        hr = bstrStr.WriteToStream(pStm);

        // Pass the IStream pointer back through STGMEDIUM struct
        pmedium->tymed = TYMED_ISTREAM;
        pmedium->pstm = pStm;
        pmedium->pUnkForRelease = NULL; 
    }

    return hr;
}
// </Snippet45>

void DoCAtlArray()
{
   {
// <Snippet1>
   // Declare an array of integers
   CAtlArray<int> iArray;

   iArray.Add(1);   // element 0
   iArray.Add(2);   // element 1
   iArray.Add();    // element 2

   ATLASSERT(iArray.GetCount() == 3);   
// </Snippet1>
   }   

   {
// <Snippet2>
   // Declare two integer arrays
   CAtlArray<int> iArray1,iArray2;

   iArray1.Add(1);   // element 0
   iArray1.Add(2);   // element 1

   iArray2.Add(3);   // element 0
   iArray2.Add(4);   // element 1

   // Append iArray2 to iArray1
   iArray1.Append(iArray2);

   ATLASSERT(iArray1.GetCount() == 4);   
// </Snippet2>
   }

   {
// <Snippet3>
   CAtlArray<float> fArray;
   // AssertValid only exists in debug builds
   #ifdef _DEBUG
   fArray.AssertValid();   
   #endif
// </Snippet3>
   }

   {
// <Snippet4>
   CAtlArray<int> iArray;   
// </Snippet4>
   }

   {
// <Snippet5>
   CAtlArray<int> iArrayS, iArrayT;

   iArrayS.Add(1);
   iArrayS.Add(2);

   iArrayT.Add(3);
   iArrayT.Add(4);

   iArrayT.Copy(iArrayS);

   ATLASSERT(iArrayT.GetCount() == 2);
   ATLASSERT(iArrayT[0] == 1);
   ATLASSERT(iArrayT[1] == 2);   
// </Snippet5>
   }

   {
// <Snippet6>
   // Declare an array of integers

   CAtlArray<int> iMyArray;
   int element;

   // Add ten elements to the array
   for (int i = 0; i < 10; i++)
   {
      iMyArray.Add(i);
   }

   // Use GetAt and SetAt to modify
   // every element in the array

   for (size_t i = 0; i < iMyArray.GetCount(); i++)
   {
      element = iMyArray.GetAt(i);
      element *= 10;
      iMyArray.SetAt(i, element);
   }   
// </Snippet6>
   }

   {
// <Snippet7>
   // Define an array of integers
   CAtlArray<int> MyArray;

   // Define a pointer
   int* pData;

   // Allocate enough space for 32 elements
   // with buffer increase to be calculated
   // automatically
   MyArray.SetCount(32, -1);

   // Set the pointer to the first element
   pData = MyArray.GetData();

   // Set array values directly
   for (int j = 0; j < 32; j++, pData++)
   {
      *pData = j * 10;   
   }
// </Snippet7>
   }

   {
// <Snippet8>
   // Define two integer arrays
   CAtlArray<int> iTargetArray, iSourceArray;

   // Add elements to first array
   for (int x = 0; x < 10; x++)
   {
      iTargetArray.Add(x);
   }

   // Add elements to the second array
   for (int x = 0; x < 10; x++)
   {
      iSourceArray.Add(x * 10);
   }

   // Insert the Source array into the Target
   // array, starting at the 5th element.
   iTargetArray.InsertArrayAt(5, &iSourceArray);   
// </Snippet8>
   }

   {
// <Snippet9>
   // Declare an array of integers
   CAtlArray<int> iBuffer;

   // Add elements to the array
   for (int b = 0; b < 10; b++)
   {
      iBuffer.Add(0);
   }

   // Instert ten 1's into the array
   // at position 5
   iBuffer.InsertAt(5, 1, 10);   
// </Snippet9>
   }

   {
// <Snippet10>
   // Define an array of chars
   CAtlArray<char> cArray;

   // Add an element
   cArray.Add('a');

   // Confirm array is not empty
   ATLASSERT(!cArray.IsEmpty());

   // Remove all elements
   cArray.RemoveAll();

   // Confirm array is empty
   ATLASSERT(cArray.IsEmpty());   
// </Snippet10>
   }

   {
// <Snippet11>
   // Declare an array of chars
   CAtlArray<char> cMyArray;

   // Add ten elements to the array
   for (int a = 0; a < 10; a++)
   {
      cMyArray.Add('*');
   }

   // Remove five elements starting with
   // the element at position 1
   cMyArray.RemoveAt(1, 5);

   // Free memory
   cMyArray.FreeExtra();

   // Confirm size of array
   ATLASSERT(cMyArray.GetCount() == 5);   
// </Snippet11>
   }

   {
// <Snippet12>
   // Declare an array of integers
   CAtlArray<int> iGrowArray;

   // Add an element
   iGrowArray.Add(0);

   // Add an extra element at position 19.
   // This will grow the array to accommodate.
   iGrowArray.SetAtGrow(19, 0);

   // Confirm size of new array
   ATLASSERT(iGrowArray.GetCount() == 20);

   // Note: the values at position 1 to 18
   // are undefined.
// </Snippet12>
   }
}

// <Snippet112>
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
// </Snippet112>

void DoCAtlList()
{
   {
// <Snippet13>
   // Declare a list of integers
   CAtlList<int> myList;

   // Add some elements, each to the head of the list.
   // As each new element is added, the previous head is
   // pushed down the list.
   myList.AddHead(42);
   myList.AddHead(49);

   // Confirm the value currently at the head of the list
   ATLASSERT(myList.GetHead() == 49);

   // Confirm the value currently at the tail of the list
   ATLASSERT(myList.GetTail() == 42);   
// </Snippet13>
   }

   {
// <Snippet14>
   // Define two lists of integers
   CAtlList<int> myList1;
   CAtlList<int> myList2;

   // Fill up the first list
   myList1.AddTail(1);
   myList1.AddTail(2);
   myList1.AddTail(3);

   // Add an element to the second list
   myList2.AddTail(4);

   // Insert the first list into the second
   myList2.AddHeadList(&myList1);

   // The second list now contains:
   // 1, 2, 3, 4   
// </Snippet14>
   }

   {
// <Snippet15>
   // Define the list
   CAtlList<int> myList;

   // Add elements to the tail
   myList.AddTail(1);
   myList.AddTail(2);
   myList.AddTail(3);

   // Confirm the current head of the list
   ATLASSERT(myList.GetHead() == 1);

   // Confirm the current tail of the list
   ATLASSERT(myList.GetTail() == 3);   
// </Snippet15>
   }

   {
// <Snippet16>
   // Define two integer lists
   CAtlList<int> myList1;
   CAtlList<int> myList2;

   // Fill up the first list
   myList1.AddTail(1);
   myList1.AddTail(2);
   myList1.AddTail(3);

   // Add an element to the second list
   myList2.AddTail(4);

   // Insert the first list into the second
   myList2.AddTailList(&myList1);

   // The second list now contains:
   // 4, 1, 2, 3   
// </Snippet16>
   }

   {
// <Snippet17>
   // Define the list
   CAtlList<int> myList;

   // AssertValid only exists in debug builds
   #ifdef _DEBUG
   myList.AssertValid();
   #endif   
// </Snippet17>
   }

   {
// <Snippet18>
   // Define two lists
   CAtlList<int> myList1;
   CAtlList<double> myList2;   
// </Snippet18>
   }

   {
// <Snippet19>
   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(100);
   myList.AddTail(200);
   myList.AddTail(300);
   myList.AddTail(400);

   // Find the '300' element in the list,
   // starting from the list head.
   POSITION myPos = myList.Find(300);

   // Confirm that the element was found
   ATLASSERT(myList.GetAt(myPos) == 300);   
// </Snippet19>
   }

   {
// <Snippet20>
   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   for (int i = 0; i < 100; i++)
   {
      myList.AddTail(i);
   }

   // Iterate through the entire list
   for (size_t j = 0; j < myList.GetCount(); j++)
   {
      size_t i = myList.GetAt(myList.FindIndex(j));
      ATLASSERT(i == j);
   }   
// </Snippet20>
   }

   {
// <Snippet21>
   // Define the integer list
   CAtlList<int> myList;
   int i;

   // Populate the list
   for (i = 0; i < 100; i++)
   {
      myList.AddTail(i);
   }

   // Get the starting position value
   POSITION myPos = myList.GetHeadPosition();

   // Iterate through the entire list
   i = 0;
   int j;

   do {
      j = myList.GetNext(myPos);
      ATLASSERT(i == j);
      i++;
   } while (myPos != NULL);   
// </Snippet21>
   }

   {
// <Snippet22>
   // Define the integer list
   CAtlList<int> myList;
   int i;

   // Populate the list
   for (i = 0; i < 100; i++)
   {
      myList.AddHead(i);
   }

   // Get the starting position value
   POSITION myP = myList.GetTailPosition();

   // Iterate through the entire list
   i = 0;
   int j;

   do {
      j = myList.GetPrev(myP);
      ATLASSERT(i == j);
      i++;
   } while (myP != NULL);   
// </Snippet22>
   }

   {
// <Snippet23>
   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   POSITION myPos = myList.AddHead(1);
   myPos = myList.InsertAfter(myPos, 2);
   myPos = myList.InsertAfter(myPos, 3);

   // Confirm the tail value is as expected
   ATLASSERT(myList.GetTail() == 3);   
// </Snippet23>
   }

   {
// <Snippet24>
   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   POSITION myPos = myList.AddHead(1);
   myPos = myList.InsertBefore(myPos, 2);
   myPos = myList.InsertBefore(myPos, 3);

   // Confirm the head value is as expected
   ATLASSERT(myList.GetHead() == 3);  
// </Snippet24>
   }

   {
// <Snippet25>
   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(1);
   myList.AddTail(2);
   myList.AddTail(3);
   myList.AddTail(4);

   // Confirm not empty
   ATLASSERT(myList.IsEmpty() == false);

   // Remove the tail element
   myList.RemoveTailNoReturn();

   // Confirm not empty
   ATLASSERT(myList.IsEmpty() == false);

   // Remove the head element
   myList.RemoveHeadNoReturn();

   // Confirm not empty
   ATLASSERT(myList.IsEmpty() == false);

   // Remove all remaining elements
   myList.RemoveAll();

   // Confirm empty
   ATLASSERT(myList.IsEmpty() == true);   
// </Snippet25>
   }

   {
// <Snippet26>
   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(1);
   myList.AddTail(2);
   myList.AddTail(3);
   myList.AddTail(4);

   // Move the tail element to the head
   myList.MoveToHead(myList.GetTailPosition());

   // Confirm the head is as expected
   ATLASSERT(myList.GetHead() == 4);

   // Move the head element to the tail
   myList.MoveToTail(myList.GetHeadPosition());

   // Confirm the tail is as expected
   ATLASSERT(myList.GetTail() == 4);   
// </Snippet26>
   }

   {
// <Snippet27>
   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(100);
   myList.AddTail(200);
   myList.AddTail(300);

   // Use RemoveAt to remove elements one by one
   myList.RemoveAt(myList.Find(100));
   myList.RemoveAt(myList.Find(200));
   myList.RemoveAt(myList.Find(300));

   // Confirm all have been deleted
   ATLASSERT(myList.IsEmpty() == true);   
// </Snippet27>
   }

   {
// <Snippet28>
   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(100);
   myList.AddTail(200);
   myList.AddTail(300);

   // Confirm the head of the list
   ATLASSERT(myList.GetHead() == 100);

   // Remove the head of the list
   ATLASSERT(myList.RemoveHead() == 100);

   // Confirm the new head of the list
   ATLASSERT(myList.GetHead() == 200);   
// </Snippet28>
   }

   {
// <Snippet29>
   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(100);
   myList.AddTail(200);
   myList.AddTail(300);

   // Confirm the tail of the list
   ATLASSERT(myList.GetTail() == 300);

   // Remove the tail of the list
   ATLASSERT(myList.RemoveTail() == 300);

   // Confirm the new tail of the list
   ATLASSERT(myList.GetTail() == 200);   
// </Snippet29>
   }

   {
// <Snippet30>
   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(100);
   myList.AddTail(200);

   // Use SetAt to change the values stored in the head and
   // tail of the list
   myList.SetAt(myList.GetHeadPosition(), myList.GetHead() * 10);
   myList.SetAt(myList.GetTailPosition(), myList.GetTail() * 10);

   // Confirm the values
   ATLASSERT(myList.GetHead() == 1000);
   ATLASSERT(myList.GetTail() == 2000);   
// </Snippet30>
   }

   {
// <Snippet31>
   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   for (int i = 0; i < 100; i++)
   {
      myList.AddHead(i);
   }

   // Order is: 99, 98, 97, 96...
   ATLASSERT(myList.GetHead() == 99);
   ATLASSERT(myList.GetTail() == 0);

   // Perform a crude bubble sort
   for (int j = 0; j < 100; j++)
   {
      for(int i = 0; i < 99; i++)
      {
         if (myList.GetAt(myList.FindIndex(i)) > 
            myList.GetAt(myList.FindIndex(i+1)))
         {
            myList.SwapElements(myList.FindIndex(i), myList.FindIndex(i+1));
         }
      }
   }

   // Order is: 0, 1, 2, 3...
   ATLASSERT(myList.GetHead() == 0);
   ATLASSERT(myList.GetTail() == 99);   
// </Snippet31>
   }

   DoAtlCustomTraitsList();
}

// <Snippet35>
// STDMETHOD(BSTRToUpper)(/*[in, out]*/ BSTR bstrConv);
STDMETHODIMP InplaceBSTRToUpper(BSTR bstrConv)
{
   // Assign bstrConv to m_str member of CComBSTR
   CComBSTR bstrTemp;
   bstrTemp.Attach(bstrConv); 

   // Make sure BSTR is not NULL string
   if (!bstrTemp)
        return E_POINTER;

   // Make string uppercase 
   HRESULT hr;
   hr = bstrTemp.ToUpper();
   if (hr != S_OK)
       return hr;

   // Set m_str to NULL, so the BSTR is not freed
   bstrTemp.Detach(); 

   return S_OK; 
}
// </Snippet35>

// <Snippet40>
// Method which converts bstrIn to uppercase 
STDMETHODIMP BSTRToUpper(BSTR bstrIn, BSTR* pbstrOut)
{ 
    if (bstrIn == NULL || pbstrOut == NULL) 
        return E_POINTER; 

    // Create a temporary copy of bstrIn
    CComBSTR bstrTemp(bstrIn); 

    if (!bstrTemp) 
        return E_OUTOFMEMORY; 

    // Make string uppercase
    HRESULT hr;
    hr = bstrTemp.ToUpper();
    if (hr != S_OK)
        return hr;
    
    // Return m_str member of bstrTemp 
    *pbstrOut = bstrTemp.Detach(); 

    return S_OK; 
}
// </Snippet40>

// <Snippet46>
#define ATL_NO_CCOMBSTR_ADDRESS_OF_ASSERT

void MyInitFunction(BSTR* pbstr)
{
   ::SysReAllocString(pbstr, OLESTR("Hello World"));
   return;
}
// </Snippet46>

// <Snippet49>
CComBSTR GuidToBSTR(REFGUID guid) 
{
    // 39 - length of string representation of GUID + 1
    CComBSTR b(39); 

    // Convert GUID to BSTR
    // m_str member of CComBSTR is of type BSTR. When BSTR param 
    // is required, pass the m_str member explicitly or use implicit 
    // BSTR cast operator.
    int nRet = StringFromGUID2(guid, b.m_str, 39); 

    // Above equivalent to:
    // int nRet = StringFromGUID2(guid, b, 39); 
    // implicit BSTR cast operator used for 2nd param

    // Both lines are equivalent to:
    // CComBSTR b(guid);
    // CComBSTR constructor can convert GUIDs

    ATLASSERT(nRet); 
    return b; 
}
// </Snippet49>

// <Snippet116>
// The wrong way to do it
BSTR * MyBadFunction()
{
   // Create the CComBSTR object
   CComBSTR bstrString(L"Hello World");
   // Convert the string to uppercase
   HRESULT hr;
   hr = bstrString.ToUpper();

   // Return a pointer to the BSTR. ** Bad thing to do **
   return &bstrString;
}
// The correct way to do it
HRESULT MyGoodFunction(/*[out]*/ BSTR* bstrStringPtr)
{
   // Create the CComBSTR object
   CComBSTR bstrString(L"Hello World");
   // Convert the string to uppercase
   HRESULT hr;
   hr = bstrString.ToUpper();
   if (hr != S_OK)
       return hr;
   // Return a copy of the string.
   return bstrString.CopyTo(bstrStringPtr);
}
// </Snippet116>

void DoCComBSTR()
{
   {
// <Snippet32>
   enum { urlASP, urlHTM, urlISAPI } urlType;
   urlType = urlASP;

   CComBSTR bstrURL = OLESTR("http://SomeSite/");
   CComBSTR bstrDEF = OLESTR("/OtherSite");
   CComBSTR bstrASP = OLESTR("default.asp");

   CComBSTR bstrTemp;
   HRESULT hr;

   switch (urlType)
   {
   case urlASP:
      // bstrURL is 'http://SomeSite/default.asp'
      hr = bstrURL.Append(bstrASP);
      break;

   case urlHTM:
      // bstrURL is 'http://SomeSite/default.htm'
      hr = bstrURL.Append(OLESTR("default.htm"));
      break;
   
   case urlISAPI:
      // bstrURL is 'http://SomeSite/default.dll?func'
      hr = bstrURL.Append(OLESTR("default.dll?func"));
      break;

   default:
      // bstrTemp is 'http://'
      hr = bstrTemp.Append(bstrURL, 7);
      // bstrURL is 'http://OtherSite'
      if (hr == S_OK)
          hr = bstrTemp.Append(bstrDEF);
      bstrURL = bstrTemp;

      break;
   }
// </Snippet32>
   }

   {
// <Snippet33>
   CComBSTR bstrPre(OLESTR("Hello "));
   CComBSTR bstrSuf(OLESTR("World!"));
   HRESULT hr;

   // Appends "World!" to "Hello "
   hr = bstrPre.AppendBSTR(bstrSuf);

   // Displays a message box with text "Hello World!"
   ::MessageBox(NULL, CW2CT(bstrPre), NULL, MB_OK);   
// </Snippet33>
   }

   {
// <Snippet34>
   CComBSTR bstrPre(OLESTR("Hello "));
   HRESULT hr;

   // Appends "Wo" to "Hello " (4 bytes == 2 characters)
   hr = bstrPre.AppendBytes(reinterpret_cast<char*>(OLESTR("World!")), 4);

   // Displays a message box with text "Hello Wo"
   ::MessageBox(NULL, CW2CT(bstrPre), NULL, MB_OK);   
// </Snippet34>
   }

   {
   BSTR bstr = ::SysAllocString(OLESTR("A string."));
   InplaceBSTRToUpper(bstr);
   ::SysFreeString(bstr);
   }

   {
// <Snippet36>
   // string with 11 chars (22 bytes)
   CComBSTR bstrTemp(OLESTR("Hello World"));

   unsigned int len = bstrTemp.ByteLength();

   ATLASSERT(len == 22);   
// </Snippet36>
   }

   {
// <Snippet37>
   CComBSTR bstr1;   // BSTR points to NULL
   bstr1 = "Bye";    // initialize with assignment operator
                     // ANSI string is converted to wide char

   OLECHAR* str = OLESTR("Bye bye!");  // wide char string of length 5
   int len = (int)wcslen(str);
   CComBSTR bstr2(len + 1);// unintialized BSTR of length 6
   wcsncpy_s(bstr2.m_str, bstr2.Length(), str, len); // copy wide char string to BSTR

   CComBSTR bstr3(5, OLESTR("Hello World")); // BSTR containing 'Hello', 
                                             // input string is wide char
   CComBSTR bstr4(5, "Hello World");         // same as above, input string 
                                             // is ANSI

   CComBSTR bstr5(OLESTR("Hey there")); // BSTR containing 'Hey there', 
                                        // input string is wide char
   CComBSTR bstr6("Hey there");         // same as above, input string 
                                        // is ANSI

   CComBSTR bstr7(bstr6);     // copy constructor, bstr7 contains 'Hey there'   
// </Snippet37>
   }

   {
   CBSTRStuff bs;
   BSTR bstrPut = ::SysAllocString(OLESTR("A bstr!"));
   bs.put_URL(bstrPut);
   BSTR bstrGet;
   bs.get_URL(&bstrGet);

   ::SysFreeString(bstrPut);
   ::SysFreeString(bstrGet);
   }

   {
   CBSTRURL bu;
   bu.m_bstrURL = ::SysAllocString(OLESTR("Yet another BSTR."));
   BSTR bstr;
   bu.get_URL(&bstr);
   ::SysFreeString(bstr);
   }

   {
   BSTR bstrIn = ::SysAllocString(OLESTR("A string."));
   BSTR bstrOut;
   BSTRToUpper(bstrIn, &bstrOut);
   ::SysFreeString(bstrIn);
   ::SysFreeString(bstrOut);
   }

   {
// <Snippet41>
   CComBSTR bstr(OLESTR("abc"));

   // Calls SysFreeString to free the BSTR
   bstr.Empty();
   ATLASSERT(bstr.Length() == 0);   
// </Snippet41>
   }

   {
// <Snippet42>
   // string with 11 chars
   CComBSTR bstrTemp(OLESTR("Hello World"));

   unsigned int len = bstrTemp.Length();

   ATLASSERT(len == 11);
// </Snippet42>
   }

   {
// <Snippet43>
   CComBSTR bstrTemp;

   // IDS_PROJNAME proj name stored as resource in string table
   bstrTemp.LoadString(IDS_PROJNAME);

   // the above is equivalent to:
   // bstrTemp.LoadString(_Module.m_hInstResource, IDS_PROJNAME);

   // display message box w/ proj name as title & text
   ::MessageBox(NULL, CW2CT(bstrTemp), CW2CT(bstrTemp), MB_OK);   
// </Snippet43>
   }

   {
// <Snippet44>
   IDataObject* pDataObj;

   // Fill in the FORMATETC struct to retrieve desired format 
   // from clipboard
   FORMATETC formatetcIn = {CF_TEXT, NULL, DVASPECT_CONTENT, -1, TYMED_ISTREAM};
   STGMEDIUM medium;
   ZeroMemory(&medium, sizeof(STGMEDIUM));

   // Get IDataObject from clipboard
   HRESULT hr = ::OleGetClipboard(&pDataObj);

   // Retrieve data from clipboard
   hr = pDataObj->GetData(&formatetcIn, &medium);

   if (SUCCEEDED(hr) && medium.tymed == TYMED_ISTREAM)
   {
      CComBSTR bstrStr;
      // Get BSTR out of the stream
      hr = bstrStr.ReadFromStream(medium.pstm);

      //release the stream
      ::ReleaseStgMedium(&medium);
   }
// </Snippet44>
   }

   {
   CMyDataObj mdo;
   FORMATETC fmt = {0};
   fmt.cfFormat = CF_TEXT;
   fmt.tymed = TYMED_ISTREAM;
   STGMEDIUM stg = {0};
   mdo.GetData(&fmt, &stg);
   CComBSTR bstr;
   HRESULT hr;
   hr = bstr.ReadFromStream(stg.pstm);
   ::ReleaseStgMedium(&stg);
   }

   {
// <Snippet47>
   CComBSTR bstrStr ;
   // bstrStr is not initialized so this call will not assert.
   MyInitFunction(&bstrStr); 

   CComBSTR bstrStr2(OLESTR("Hello World"));
   // bstrStr2 is initialized so this call will assert.
   ::SysReAllocString(&bstrStr2, OLESTR("Bye"));
// </Snippet47>
   }

   {
// <Snippet48>
   CComBSTR bstrPre(OLESTR("Hello "));
   CComBSTR bstrSuf(OLESTR("World!"));

   // Appends "World!" to "Hello "
   bstrPre += bstrSuf;

   // Displays a message box with text "Hello World!"
   ::MessageBox(NULL, CW2CT(bstrPre), NULL, MB_OK);   
// </Snippet48>
   }

   {
   CComBSTR bstr = GuidToBSTR(CLSID_Registrar);
   }

   {
// <Snippet114>
   // Declare a CComBSTR object. Although the argument is ANSI,
   // the constructor converts it into UNICODE.
   CComBSTR bstrMyString("Hello World");
   // Convert the string into an ANSI string
   CW2A szMyString(bstrMyString);
   // Display the ANSI string
   MessageBoxA(NULL, szMyString, "String Test", MB_OK);   
// </Snippet114>
   }

   {
// <Snippet115>
   // The following converts the ANSI string to Unicode
   CComBSTR bstr1("Test");
   // The following uses a Unicode string at compile time 
   CComBSTR bstr2(L"Test");   
// </Snippet115>
   }

   {
   BSTR* pbstrBad = MyBadFunction();
   pbstrBad;
   BSTR bstrGood;
   HRESULT hr = MyGoodFunction(&bstrGood);
   hr;
   }

   {
// <Snippet117>
   // Declare a CComBSTR object
   CComBSTR bstrMyString(L"Hello World");
   // Free the string explicitly
   ::SysFreeString(bstrMyString);
   // The string will be freed a second time
   // when the CComBSTR object goes out of scope,
   // which is invalid.   
// </Snippet117>
   }

   {
// <Snippet118>
   // This is not an efficient way to use a CComBSTR object.
   CComBSTR bstrMyString;
   HRESULT hr;
   while (bstrMyString.Length() < 1000)
      hr = bstrMyString.Append(L"*");   
// </Snippet118>
   }

   {
// <Snippet119>
   CComBSTR bstrLeak(L"Initialized");
   HRESULT hr = MyGoodFunction(&bstrLeak);   
// </Snippet119>
   hr;
   }

   {
// <Snippet120>
   std::list< CComBSTR > m_List;
// </Snippet120>
   }

   {
// <Snippet121>
   std::list< CAdapt< CComBSTR > > m_List;
// </Snippet121>
   }
}

void DoCComCurrency()
{
   {
// <Snippet50>
   CComCurrency cur(10, 5000);
   int nFract;
   nFract = cur.GetFraction();
   ATLASSERT(nFract == 5000);   
// </Snippet50>
   }

   {
// <Snippet51>
   CComCurrency cur(10, 5000);
   LONGLONG nInteger;
   nInteger = cur.GetInteger();
   ATLASSERT(nInteger == 10);   
// </Snippet51>
   }

   {
// <Snippet52>
   CComCurrency cur(10, 1234);
   cur.Round(3);
   ATLASSERT(cur.GetFraction() == 1230);   
// </Snippet52>
   }

   {
// <Snippet53>
   CComCurrency cur(10, 0);
   cur.SetFraction(5000);
   ATLASSERT(CComCurrency(10, 5000) == cur);   
// </Snippet53>
   }

   {
// <Snippet54>
   CComCurrency cur(0, 5000);
   cur.SetInteger(10);
   ATLASSERT(CComCurrency(10, 5000) == cur);   
// </Snippet54>
   }

   {
// <Snippet55>
   CComCurrency cur1(10, 5000), cur2;
   cur2 = cur1 - CComCurrency(4, 5000);
   ATLASSERT(cur2 == CComCurrency(6, 0));   
// </Snippet55>
   }

   {
// <Snippet56>
   CComCurrency cur1(10, 5000), cur2(10, 5001);
   ATLASSERT(cur1 != cur2);   
// </Snippet56>
   }

   {
// <Snippet57>
   CComCurrency cur1(10, 5000), cur2;
   cur2 = cur1 * 2;
   ATLASSERT(cur2 == CComCurrency(21, 0));   
// </Snippet57>
   }

   {
// <Snippet58>
   CComCurrency cur(10, 5000);
   cur *= 2;
   ATLASSERT(cur == CComCurrency(21, 0));   
// </Snippet58>
   }

   {
// <Snippet59>
   CComCurrency cur1(10, 5000), cur2;
   cur2 = cur1 / 10;
   ATLASSERT(cur2 == CComCurrency(1, 500));
// </Snippet59>
   }

   {
// <Snippet60>
   CComCurrency cur(10, 5000);
   cur /= 10;
   ATLASSERT(cur == CComCurrency(1, 500));
// </Snippet60>
   }

   {
// <Snippet61>
   CComCurrency cur1(10, 5000), cur2;
   cur2 = cur1 + CComCurrency(4, 5000);
   ATLASSERT(cur2 == CComCurrency(15, 0));
// </Snippet61>
   }

   {
// <Snippet62>
   CComCurrency cur(10, 2500);
   cur += CComCurrency(4, 2500);
   ATLASSERT(cur == CComCurrency(14, 5000));
// </Snippet62>
   }

   {
// <Snippet63>
   CComCurrency cur1(10, 4900);
   CComCurrency cur2(10, 5000);
   ATLASSERT(cur1 < cur2);
// </Snippet63>
   }

   {
// <Snippet64>
   CComCurrency cur1(10, 4900);
   CComCurrency cur2(10, 5000);
   ATLASSERT(cur1 <= cur2);
// </Snippet64>
   }

   {
// <Snippet65>
   CComCurrency cur1, cur2(10, 5000);
   CURRENCY cy;

   // Copying one object to another 
   cur1 = cur2;

   // Using the CURRENCY data type
   cy.int64 = 105000;
   cur1 = cy;

   ATLASSERT(cur1 == cur2);
// </Snippet65>
   }

   {
// <Snippet66>
   CComCurrency cur(10, 5000);
   cur -= CComCurrency(4, 5000);
   ATLASSERT(cur == CComCurrency(6, 0));
// </Snippet66>
   }

   {
// <Snippet67>
   CComCurrency cur1(10, 5000), cur2;
   cur2 = cur1;
   ATLASSERT(cur1 == cur2);
// </Snippet67>
   }

   {
// <Snippet68>
   CComCurrency cur1(10, 5100);
   CComCurrency cur2(10, 5000);
   ATLASSERT(cur1 > cur2);
// </Snippet68>
   }

   {
// <Snippet69>
   CComCurrency cur1(10, 5100);
   CComCurrency cur2(10, 5000);
   ATLASSERT(cur1 >= cur2);
// </Snippet69>
   }

   {
// <Snippet70>
   CComCurrency cur(10, 5000);
   CURRENCY cy = static_cast<CURRENCY>(cur); // Note that explicit cast is not necessary
   ATLASSERT(cy.int64 == 105000);
// </Snippet70>
   }
}

void DoCHeapPtr()
{
   {
// <Snippet77>
   // Create a new CHeapPtr object
   CHeapPtr <int> myHP;
   // Allocate space for 10 integers on the heap
   myHP.Allocate(10);
// </Snippet77>
   }

   {
// <Snippet78>
   // Create a new CHeapPtr object
   CHeapPtr <int> myHP;
   // Create a new CHeapPtr from the first
   CHeapPtr <int> myHP2(myHP);   
// </Snippet78>
   }

   {
// <Snippet79>
   // Create a new CHeapPtr object
   CHeapPtr <int> myHP;
   // Allocate space for 10 integers on the heap
   myHP.Allocate(10);
   // Resize the allocated memory for 20 integers
   myHP.Reallocate(20);   
// </Snippet79>
   }

   {
// <Snippet80>
   // Create a new CHeapPtr object
   CHeapPtr <int> myHP;
   // Allocate space for 10 integers on the heap
   myHP.Allocate(10);
   // Create a second heap pointer
   // and assign it to the first pointer.
   CHeapPtr <int> myHP2;
   myHP2 = myHP;   
// </Snippet80>
   }
}

// <Snippet71>
int OpenMyFileMap()
{
   // Create the file-mapping object.
   CAtlFileMappingBase myFileMap;

   // Create a file.
   CAtlFile myFile;
   myFile.Create(_T("myMapTestFile"),
      GENERIC_READ|GENERIC_WRITE|STANDARD_RIGHTS_ALL,
      FILE_SHARE_READ|FILE_SHARE_WRITE,
      OPEN_ALWAYS);

   // The file handle.
   HANDLE hFile = (HANDLE)myFile;

   // Test the file has opened successfully.
   ATLASSERT(hFile != INVALID_HANDLE_VALUE);

   // Open the file for file-mapping.
   // Must give a size as the file is zero by default.
   if (myFileMap.MapFile(hFile,
      1024,
      0,
      PAGE_READWRITE,
      FILE_MAP_READ) != S_OK)
   {
      CloseHandle(hFile);
      return 0;
   }

   // Confirm the size of the mapping file.
   ATLASSERT(myFileMap.GetMappingSize() == 1024);

   // Now the file-mapping object is open, a second
   // process could access the filemap object to exchange
   // data.

   return 0;
}
// </Snippet71>

// <Snippet74>
// A simple class for demonstration purposes

class MyClass 
{
   int iA;
   int iB;
public:
   MyClass(int a, int b);
   void Test();
};

MyClass::MyClass(int a, int b)
{
   iA = a;
   iB = b;
}

void MyClass::Test()
{
   ATLASSERT(iA == iB);
}

// A simple function

void MyFunction(MyClass* c)
{
   c->Test();
}

int UseMyClass()
{
   // Create an object of MyClass.
   MyClass *pMyC = new MyClass(1, 1);

   // Create a CAutoPtr object and have it take
   // over the pMyC pointer by calling Attach.
   CAutoPtr<MyClass> apMyC;
   apMyC.Attach(pMyC);

   // The overloaded -> operator allows the 
   // CAutoPtr object to be used in place of the pointer.
   apMyC->Test();

   // Assign a second CAutoPtr, using the = operator.
   CAutoPtr<MyClass> apMyC2;
   apMyC2 = apMyC;

   // The casting operator allows the
   // object to be used in place of the pointer.
   MyFunction(pMyC);
   MyFunction(apMyC2);

   // Detach breaks the association, so after this
   // call, pMyC is controlled only by apMyC.
   apMyC2.Detach();

   // CAutoPtr destroys any object it controls when it
   // goes out of scope, so apMyC destroys the object 
   // pointed to by pMyC here.
   return 0;
}
// </Snippet74>

// <Snippet94>
// Demonstrate IAtlMemMgr using the five possible
// memory function implementation classes. 

HRESULT MemoryManagerDemonstration(IAtlMemMgr& MemoryManager) throw()
{
   // The IAtlMemMgr interface guarantees not to throw exceptions
   // so we can make the same guarantee for this function
   // without adding exception handling code.

   // A variable which will point to some allocated memory.
   void* pMemory = NULL;

   const size_t BytesInChunk = 1024;

   // Allocate a chunk of memory
   pMemory = MemoryManager.Allocate(BytesInChunk);

   // Confirm the validity of the allocated memory
   if (pMemory == NULL)
      return E_OUTOFMEMORY;

   // Confirm the size of the allocated memory
   ATLASSERT(MemoryManager.GetSize(pMemory) == BytesInChunk);

   // Increase the size of the allocated memory
   pMemory = MemoryManager.Reallocate(pMemory, BytesInChunk * 2);

   // Confirm the validity of the allocated memory
   if (pMemory == NULL)
      return E_OUTOFMEMORY;

   // Confirm the size of the reallocated  memory
   ATLASSERT(MemoryManager.GetSize(pMemory) == BytesInChunk * 2);

   // Free the allocated memory
   MemoryManager.Free(pMemory);

   return S_OK;
}

int DoMemoryManagerDemonstration()
{
   CComHeap heapCom;
   CCRTHeap heapCrt;
   CLocalHeap heapLocal;
   CGlobalHeap heapGlobal;
   // It is necessary to provide extra information 
   // to the constructor when using CWin32Heap
   CWin32Heap heapWin32(NULL, 4096); 

   ATLASSERT(S_OK==MemoryManagerDemonstration(heapCom));
   ATLASSERT(S_OK==MemoryManagerDemonstration(heapCrt));
   ATLASSERT(S_OK==MemoryManagerDemonstration(heapLocal));
   ATLASSERT(S_OK==MemoryManagerDemonstration(heapGlobal));
   ATLASSERT(S_OK==MemoryManagerDemonstration(heapWin32));

   return 0;
}
// </Snippet94>

void ExampleFunctionA(LPCSTR pszA)
{
   printf_s(pszA);
}

// <Snippet98>
//Example 1
// Convert LPCWSTR to LPCSTR.
void ExampleFunction1(LPCWSTR pszW)
{
   // Create an instance of CW2A, called pszA,
   // and initialize it with pszW.
   CW2A pszA(pszW);
   // pszA works like an LPCSTR, and can be used thus:
   ExampleFunctionA(pszA);  
   // Note: pszA will become invalid when it goes out of scope.
}

// Example 2
// Use a temporary instance of CW2A.
void ExampleFunction2(LPCWSTR pszW)
{
   // Create a temporary instance of CW2A,
   // and initialize it with pszW.
   ExampleFunctionA(CW2A(pszW));
   // Note: the temporary instance becomes invalid 
   // after the execution of the statement above.
}

// Example 3
// Incorrect use of conversion macros.
void ExampleFunction3(LPCWSTR pszW)
{
   // Create a temporary instance of CW2A,
   // save a pointer to it and then delete
   // the temportary instance.
   LPCSTR pszA = CW2A(pszW);
   // The pszA in the following line is an invalid pointer,
   // as the instance of CW2A has gone out of scope.
   ExampleFunctionA(pszA);
}
// </Snippet98>

// <Snippet104>
// Example 4
// Changing the size of the buffer.
void ExampleFunction4(LPCWSTR pszW)
{
   // Use a 16-character buffer.
   ExampleFunctionA(CW2AEX<16>(pszW));
}
// </Snippet104>

// <Snippet105>
// Example 5
// Specifying the code page.
void ExampleFunction5(LPCWSTR pszW)
{
   // Convert to the Macintosh code page
   ExampleFunctionA(CW2A(pszW, CP_MACCP));
}
// </Snippet105>

#pragma warning (disable:6255)
// <Snippet107>
void StringFunc(LPSTR lpsz)
{
   USES_CONVERSION;

   LPWSTR x = A2W(lpsz);
   // Do something with x
   wprintf_s(L"x is %s", x);
}
// </Snippet107>
#pragma warning (default:6255)

// <Snippet108>
void MyImportantFunction(char* psz)
{
   ATLENSURE(NULL != psz);

   char mysz[64];
   strcpy_s(mysz, sizeof(mysz), psz);
}
// </Snippet108>

// <Snippet109>
CTraceCategory MY_CATEGORY(_T("MyCategoryName"), 1);
// </Snippet109>

interface IBug
{
   virtual void Release() = 0;
};

interface IBug2
{
   virtual void Release() = 0;
};

class CBug : public IBug, IBug2
{
public:
   CBug() : m_dwRef(0) {}

   HRESULT QueryInterface(IBug** ppBug)
   { 
      *ppBug = this; 
      AddRef();
      return S_OK; 
   }
   HRESULT QueryInterface(IBug2** ppBug) 
   { 
      *ppBug = this; 
      AddRef();
      return S_OK; 
   }
   void AddRef()
   {
      ++m_dwRef;   
   }
   void Release() 
   {
      --m_dwRef;
      if (0 == m_dwRef)
      {
         delete this;      
      }
   }

   DWORD m_dwRef;
};

#pragma warning(push)
#pragma warning(disable: 6203)
void DoCopyChars()
{
   CAtlString atlstr(_T("Hi."));
   IAtlStringMgr* pMgr = atlstr.GetManager();

// <Snippet126>
   CSimpleString str(_T("xxxxxxxxxxxxxxxxxxx"), 20, pMgr);

   TCHAR* pszSrc = NULL;
   pszSrc = new TCHAR[12];
   str.CopyChars(str.GetBuffer(), pszSrc, 12);
// </Snippet126>

   delete[] pszSrc;
}
#pragma warning(pop)

class MyFakeCtrl : public IOleControl
{
public:
   STDMETHOD(QueryInterface)(REFIID /*riid*/, LPVOID* /*ppv*/)
   {
      ATLTRACENOTIMPL(_T("IUnknown::QueryInterface"));
   }
   STDMETHOD_(ULONG, AddRef)()
   {
      return 0;   
   }
   STDMETHOD_(ULONG, Release)()
   {
      return 0;   
   }

   STDMETHOD(GetControlInfo)(LPCONTROLINFO /*pCI*/)
   {
// <Snippet127>
      ATLTRACENOTIMPL(_T("IOleControl::GetControlInfo"));   
// </Snippet127>
   }
   STDMETHOD(OnMnemonic)(LPMSG /*pMsg*/)
   {
      ATLTRACENOTIMPL(_T("IOleControl::OnMnemonic"));
   }
   STDMETHOD(OnAmbientPropertyChange)(DISPID /*dispid*/)
   {
      ATLTRACENOTIMPL(_T("IOleControl::OnAmbientPropertyChange"));
   }
   STDMETHOD(FreezeEvents)(BOOL /*bFreeze*/)
   {
      ATLTRACENOTIMPL(_T("IOleControl::FreezeEvents"));
   }
};

void MakeAnError()
{
   ICreateErrorInfo* pcei;
   HRESULT hr;
   hr = CreateErrorInfo(&pcei);
   LPOLESTR description = LPOLESTR(L"MyFakeError");
   LPOLESTR source = LPOLESTR(L"The source of all things");
   LPOLESTR helpFile = LPOLESTR(L"FakeError.hlp");
   pcei->SetDescription(description);
   pcei->SetSource(source);
   pcei->SetHelpFile(helpFile);

   IErrorInfo* pei;
   pcei->QueryInterface(IID_IErrorInfo, (void**)&pei);
   SetErrorInfo(0, pei);

   pei->Release();
   pcei->Release();
}

// <Snippet130>
// Error-checking routine that performs manual lifetime management
// of a COM IErrorInfo object
HRESULT CheckComError_Manual()
{
   HRESULT hr;
   CComBSTR bstrDescription; 
   CComBSTR bstrSource; 
   CComBSTR bstrHelpFile; 

   IErrorInfo* pErrInfo = NULL; // naked COM interface pointer
   hr = ::GetErrorInfo(0, &pErrInfo);
   if(hr != S_OK)
      return hr;

   hr = pErrInfo->GetDescription(&bstrDescription); 
   if(FAILED(hr))
   {
      pErrInfo->Release();   // must release interface pointer before returning
      return hr;
   }

   hr = pErrInfo->GetSource(&bstrSource);
   if(FAILED(hr))
   {
      pErrInfo->Release();   // must release interface pointer before returning
      return hr;
   }

   hr = pErrInfo->GetHelpFile(&bstrHelpFile);
   if(FAILED(hr))
   {
      pErrInfo->Release();   // must release interface pointer before returning
      return hr;
   }

   pErrInfo->Release();      // must release interface pointer before returning
   return S_OK;
}
// </Snippet130>

// <Snippet131>
// Error-checking routine that performs automatic lifetime management
// of a COM IErrorInfo object through a CComPtr smart pointer object
HRESULT CheckComError_SmartPtr()
{
   HRESULT hr;
   CComBSTR bstrDescription; 
   CComBSTR bstrSource; 
   CComBSTR bstrHelpFile; 

   CComPtr<IErrorInfo> pErrInfo; 
   hr = ::GetErrorInfo(0, &pErrInfo);
   if(hr != S_OK)
      return hr;

   hr = pErrInfo->GetDescription(&bstrDescription); 
   if(FAILED(hr))
      return hr;

   hr = pErrInfo->GetSource(&bstrSource);
   if(FAILED(hr))
      return hr;

   hr = pErrInfo->GetHelpFile(&bstrHelpFile);
   if(FAILED(hr))
      return hr;

   return S_OK;
}   // CComPtr will auto-release underlying IErrorInfo interface pointer as needed
// </Snippet131>

// <Snippet134>
HRESULT DoPoolOperations(IThreadPoolConfig* pPool, int nSize)
{
    int nCurrSize = 0;
    HRESULT hr = pPool->GetSize(&nCurrSize);
    if (SUCCEEDED(hr))
    {
        printf_s("Current pool size: %d\n", nCurrSize);
        hr = pPool->SetSize(nSize);
        if (SUCCEEDED(hr))
        {
            printf_s("New pool size : %d\n", nSize);
            DWORD dwTimeout = 0;
            hr = pPool->GetTimeout(&dwTimeout);
            if (SUCCEEDED(hr))
            {
                printf_s("Current pool timeout: %u\n", dwTimeout);
                // Increase timeout by 10 seconds.
                dwTimeout += 10 * 1000;
                hr = pPool->SetTimeout(dwTimeout);
                if (SUCCEEDED(hr))
                {
                    printf_s("New pool timeout: %u\n", dwTimeout);
                }
                else
                {
                    printf_s("Failed to set pool timeout: 0x%08X\n", hr);
                }
            }
            else
            {
                printf_s("Failed to get pool timeout: 0x%08X\n", hr);
            }
        }
        else
        {
            printf_s("Failed to resize pool: 0x%08X\n", hr);
        }
    }
    else
    {
        printf_s("Failed to get pool size: 0x%08x\n", hr);
    }

    return hr;
}
// </Snippet134>

class CMyWTC : public IWorkerThreadClient
{
public:
   CMyWTC() : m_ref(0) {}
   STDMETHOD(QueryInterface)(REFIID riid, void** ppv) 
   { 
      riid;
      *ppv = this;
      return S_OK;
   }
   STDMETHOD_(ULONG, AddRef)() { return ++m_ref; }
   STDMETHOD_(ULONG, Release)() 
   {
      --m_ref;
      if (0 == m_ref)
      {       
         delete this;
         return 0;
      }
      return m_ref;
   }
   ULONG m_ref;

// <Snippet135>
   HRESULT CloseHandle(HANDLE hObject)
   {
      // Users should do any shutdown operation required here.
      // Generally, this means just closing the handle.

      if (!::CloseHandle(hObject))
      {
         // Closing the handle failed for some reason.
         return AtlHresultFromLastError();
      }

      return S_OK;
   }
// </Snippet135>

// <Snippet136>
   HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject)
   {
      // Cast the parameter to its known type.
      LONG* pn = reinterpret_cast<LONG*>(dwParam);

      // Increment the LONG.
      LONG n = InterlockedIncrement(pn);

      // Log the results.
      printf_s("Handle 0x%08X incremented value to : %d\n", (DWORD_PTR)hObject, n);

      return S_OK;
   }
// </Snippet136>
};

typedef int MyRequestType;
// <Snippet137>
class CMyWorker
{
public:
   typedef MyRequestType RequestType;

   BOOL Initialize(void* pvWorkerParam);

   void Execute(MyRequestType request, void* pvWorkerParam, OVERLAPPED* pOverlapped);

   void Terminate(void* pvWorkerParam);
};
// </Snippet137>

BOOL CMyWorker::Initialize(void* pvWorkerParam)
{
   return (NULL == pvWorkerParam);
}

void CMyWorker::Execute(MyRequestType request, void *pvWorkerParam, OVERLAPPED *pOverlapped)
{
   request;
   pvWorkerParam;
   pOverlapped;
}

void CMyWorker::Terminate(void* pvWorkerParam)
{
   pvWorkerParam;
}

void DoMisc()
{
   OpenMyFileMap();

   {
// <Snippet72>
   // Create a map which stores a double
   // value using an integer key

   CAtlMap<int, double> mySinTable;
   int i;

   // Initialize the Hash Table
   mySinTable.InitHashTable(257);

   // Add items to the map
   for (i = 0; i < 90; i++)
      mySinTable[i] = sin((double)i);

   // Confirm the map is valid
   mySinTable.AssertValid();

   // Confirm the number of elements in the map
   ATLASSERT(mySinTable.GetCount() == 90);

   // Remove elements with even key values
   for (i = 0; i < 90; i += 2)
      mySinTable.RemoveKey(i);

   // Confirm the number of elements in the map
   ATLASSERT(mySinTable.GetCount() == 45);

   // Walk through all the elements in the map.
   // First, get start position.
   POSITION pos;
   int key;
   double value;
   pos = mySinTable.GetStartPosition();

   // Now iterate the map, element by element
   while (pos != NULL) 
   {
      key = mySinTable.GetKeyAt(pos);
      value = mySinTable.GetNextValue(pos);
   }
// </Snippet72>
   }

   {
// <Snippet73>
   // Declare the temporary file object
   CAtlTemporaryFile myTempFile;

   // Create the temporary file, without caring where it
   // will be created, but with both read and write access.
   ATLVERIFY (myTempFile.Create(NULL, GENERIC_READ|GENERIC_WRITE) == S_OK);

   // Create some data to write to the file

   int nBuffer[100];
   DWORD bytes_written = 0, bytes_read = 0;
   int i;

   for (i = 0; i < 100; i++)
      nBuffer[i] = i;

   // Write some data to the file
   myTempFile.Write(&nBuffer, sizeof(nBuffer), &bytes_written);

   // Confirm it was written ok
   ATLASSERT(bytes_written == sizeof(nBuffer));

   // Flush the data to disk
   ATLVERIFY(myTempFile.Flush() == S_OK);

   // Reset the file pointer to the beginning of the file
   ATLVERIFY(myTempFile.Seek(0, FILE_BEGIN) == S_OK);

   // Read in the data
   myTempFile.Read(&nBuffer, sizeof(nBuffer), bytes_read);

   // Confirm it was read ok
   ATLASSERT(bytes_read == sizeof(nBuffer));

   // Close the file, making a copy of it at another location
   ATLVERIFY(myTempFile.Close(_T("c:\\temp\\mydata.tmp")) == S_OK);
// </Snippet73>
   }

   UseMyClass();

   {
// <Snippet75>
   // Create a multidimensional array, 
   // then write and read elements

   // Define an array of character pointers
   CComSafeArray<char> *pSar;

   char cElement;
   char cTable[2][3] = {'A','B','C','D','E','F'};

   // Declare the variable used to store the
   // array indexes
   LONG aIndex[2];

   // Define the array bound structure
   CComSafeArrayBound bound[2];
   bound[0].SetCount(3);
   bound[0].SetLowerBound(0);
   bound[1].SetCount(3);
   bound[1].SetLowerBound(0);   
   
   // Create a new 2 dimensional array
   // each dimension size is 3
   pSar = new CComSafeArray<char>(bound,2); 

   // Use MultiDimSetAt to store characters in the array
   for (int x = 0; x < 2; x++)
   {
      for (int y = 0; y < 3; y++)
      {
         aIndex[0] = x;
         aIndex[1] = y;
         HRESULT hr = pSar->MultiDimSetAt(aIndex,cTable[x][y]);
         ATLASSERT(hr == S_OK);
      }
   }
   // Use MultiDimGetAt to retrieve characters in the array
   for (int x = 0; x < 2; x++)
   {
      for (int y = 0; y < 3; y++)
      {
         aIndex[0]=x;
         aIndex[1]=y;
         HRESULT hr = pSar->MultiDimGetAt(aIndex,cElement);
         ATLASSERT(hr == S_OK);
         ATLASSERT(cElement == cTable[x][y]);
      }   
   }
// </Snippet75>
   }

   {
// <Snippet76>
   CComVariant var;
   int nData = 10;
   var.SetByRef(&nData);   
// </Snippet76>
   }

   {
// <Snippet91>
   // Create a map with an integer key and character pointer value
   CSimpleMap<int, char *> iArray;   
// </Snippet91>
   }

   {
// <Snippet92>
   CWin32Heap MyHeap(GetProcessHeap());   
// </Snippet92>
   }

   {
   size_t SomeInitialSize = 64;
// <Snippet93>
   CWin32Heap MyHeap(HEAP_NO_SERIALIZE, SomeInitialSize);   
// </Snippet93>
   }

   DoMemoryManagerDemonstration();

   {
// <Snippet95>
   DWORD ver;
   ver = AtlGetVersion(NULL);   
// </Snippet95>
   }

   ExampleFunction1(L"Stringy!");
   ExampleFunction2(L"Stringy.");
   ExampleFunction3(L"Stringy?");
   ExampleFunction4(L"Stringy...");
   ExampleFunction5(L"Stringy!?!?!?");

   USES_CONVERSION;
   char* szReplaceFile = "FileString";

   {
// <Snippet99>
   LPCTSTR szr = CA2T(szReplaceFile);
// </Snippet99>
   szr;
   }

   {
#pragma warning (disable:6255)
// <Snippet100>
   LPCTSTR szr = A2T(szReplaceFile);   
// </Snippet100>
#pragma warning (default:6255)
   szr;
   }

   {
// <Snippet101>
   LPCTSTR szr = CA2T(szReplaceFile);   
// </Snippet101>
   szr;
   }

   {
// <Snippet102>
   LPCTSTR szr;
   {
      CA2T temp(szReplaceFile);
      szr = temp.operator LPTSTR();
   }   
// </Snippet102>
   szr;
   }

   {
// <Snippet103>
   CA2T szr(szReplaceFile);   
// </Snippet103>
   szr;
   }

   {
   char* lpa = "thing";
#pragma warning (disable:6255)
// <Snippet106>
   A2W(lpa);
// </Snippet106>
#pragma warning (default:6255)
   }

   StringFunc("Here's a string.");

   try
   {
      MyImportantFunction(NULL);   
   }
   catch (CAtlException& e)
   {
      ATLTRACE(_T("MyImportantFunction failed, hr = %08x"), e.m_hr);
   }

   MyImportantFunction("Here's a string.");

// <Snippet110>
   ATLTRACE2(MY_CATEGORY, 2, _T("a message in a custom category"));
// </Snippet110>

// <Snippet111>
   int i = 1;
   ATLTRACE2(atlTraceGeneral, 4, "Integer = %d\n", i);
   // Output: 'Integer = 1'
// </Snippet111>

   {
   CComPtr<IRegistrar> p;
   AtlCreateRegistrar(&p);

// <Snippet113>
   TCHAR szModule[_MAX_PATH];
   ::GetModuleFileName(_AtlBaseModule.GetModuleInstance(), szModule, _MAX_PATH);
   p->AddReplacement(OLESTR("Module"), T2OLE(szModule));   
// </Snippet113>
   }

   {
   CBug* p = new CBug();
   HRESULT hr;

// <Snippet124>
   IBug* pBug = NULL;
   hr = p->QueryInterface(&pBug);
   ATLASSERT(SUCCEEDED(hr));
   IBug* pBug2 = NULL;
   hr = p->QueryInterface(&pBug2);
   ATLASSERT(SUCCEEDED(hr));
   pBug->Release();
   pBug->Release();    // Mismatched - should be pBug2->Release();   
// </Snippet124>
   }

   {
   DoCopyChars();
   }

   {
   MyFakeCtrl mfc;
   CONTROLINFO ci;
   HRESULT hr = mfc.GetControlInfo(&ci);
   hr;
   }

   {
   DEVMODEA dma = {0};
   strcpy_s((char*)dma.dmDeviceName, sizeof(dma.dmDeviceName), "My Device");
   strcpy_s((char*)dma.dmFormName, sizeof(dma.dmFormName), "My Form");
   DEVMODEA* lpa = &dma;

#pragma warning (disable:6255)
// <Snippet128>
   DEVMODEW* lpw = DEVMODEA2W(lpa);
// </Snippet128>
#pragma warning (default:6255)
   lpw;
   }

   {
   TEXTMETRICA tma = {0};
   TEXTMETRICA* lptma = &tma;

#pragma warning (disable:6255)
// <Snippet129>
   TEXTMETRICW* lptmw = TEXTMETRICA2W(lptma);
// </Snippet129>
#pragma warning (default:6255)
   lptmw;
   }

   MakeAnError();
   CheckComError_Manual();

   MakeAnError();
   CheckComError_SmartPtr();

// <Snippet132>
   printf_s("%c\n", CDefaultCharTraits<char>::CharToLower('A'));
// </Snippet132>

   {
// <Snippet133>
   CUrl url;

   // Set the CUrl contents
   url.CrackUrl(_T("http://someone:secret@www.microsoft.com:8080/visualc/stuff.htm#contents"));

   // Obtain the length of the URL string and allocate a buffer to 
   // hold its contents
   DWORD dwUrlLen = url.GetUrlLength() + 1;
   TCHAR* szUrl = new TCHAR[dwUrlLen];

   // Retrieve the contents of the CUrl object
   url.CreateUrl(szUrl, &dwUrlLen, 0L);

   // Cleanup
   delete[] szUrl;   
// </Snippet133>
   }

   {
      HRESULT hr;
      CThreadPool<CMyWorker> pool;
      hr = pool.Initialize();
      
      hr = DoPoolOperations(&pool, 9);
   }

   {
      CWorkerThread<Win32ThreadTraits> wt;
      HRESULT hr;
      CMyWTC wtc;
      hr = wt.Initialize();
      HANDLE ev = CreateEvent(NULL, FALSE, FALSE, NULL);
      LONG lParam = 5;
      hr = wt.AddHandle(ev, &wtc, (DWORD_PTR)&lParam);
      SetEvent(ev);
   }
}

void DoCRBMap()
{
   {
// <Snippet81>
   // Define a map object which has an
   // integer key, a double value, and a
   // block size of 5
   CRBMap<int, double> myMap(5);
// </Snippet81>

// <Snippet84>
   // Add an element to the map, with a key of 0
   myMap.SetAt(0,1.1);
// </Snippet84>

// <Snippet82>
   // Look up the value for a key of 0
   double v;
   myMap.Lookup(0,v);
// </Snippet82>

// <Snippet83>
   // Remove an element, based on the key of 0
   ATLVERIFY(myMap.RemoveKey(0) == true);
// </Snippet83>
   }

   {
// <Snippet85>
   // Define a multimap object which has an integer
   // key, a double value, and a block size of 5
   CRBMultiMap<int, double> myMap(5);

   // Add some key/values. Notice how three
   // different values are associated with 
   // one key. In a CRBMap object, the values
   // would simply overwrite each other.
   myMap.Insert(0, 1.1);
   myMap.Insert(0, 1.2);
   myMap.Insert(0, 1.3);
   myMap.Insert(1, 2.1);

   // Look up a key and iterate through
   // all associated values

   double v;
   POSITION myPos = myMap.FindFirstWithKey(0);

   while (myPos != NULL)
   {
      v = myMap.GetNextValueWithKey(myPos,0);
      // As the loop iterates, v 
      // contains the values 1.3, 1.2, 1.1
   }

   // Remove all of the values associated with that key
   size_t i = myMap.RemoveKey(0);

   // Confirm all three values were deleted
   ATLASSERT(i == 3);
// </Snippet85>
   }
}

template <class T>
class MyEqualityEqualHelper : public CSimpleArrayEqualHelper<T>
{
public:
   MyEqualityEqualHelper() {}
};

void DoCSimpleArray()
{
   {
// <Snippet86>
   // Create an array of integers
   CSimpleArray<int> iArray;

   // Create an array of char pointers
   // and use a new equality function
   CSimpleArray<char *, MyEqualityEqualHelper<char *> > cMyArray;   
// </Snippet86>
   }

   {
// <Snippet87>
   // Create an array of integers and add some elements
   CSimpleArray<int> iMyArray;
   for (int i = 0; i < 10; i++)
      iMyArray.Add(i);  
// </Snippet87>
   }

   {
// <Snippet88>
   // Create an array of floats and search for a particular element

   CSimpleArray<float> fMyArray;

   for (int i = 0; i < 10; i++)
      fMyArray.Add((float)i * 100);

   int e = fMyArray.Find(200);
   if (e == -1)
      _tprintf_s(_T("Could not find element\n"));
   else
      _tprintf_s(_T("Found the element at location %d\n"), e);   
// </Snippet88>
   }

   {
// <Snippet89>
   // Create an array and display its contents
    CSimpleArray<int> iMySampleArray;

    for (int i = 0; i < 10; i++)
       iMySampleArray.Add(i);

    for (int i = 0; i < iMySampleArray.GetSize(); i++)
       _tprintf_s(_T("Array index %d contains %d\n"), i, iMySampleArray[i]);
 // </Snippet89>
   }
 
   {
// <Snippet90>
   // Create an array of chars and copy it to a second array
   CSimpleArray<char> cMyArray1;
   cMyArray1.Add('a');
   CSimpleArray<char> cMyArray2;
   cMyArray2 = cMyArray1;
   ATLASSERT(cMyArray2[0] == 'a');   
// </Snippet90>
   }
}

// The main function

enum TestSuite
{
   tsMin,
   tsCAtlArray,
   tsCAtlList,
   tsCComBSTR,
   tsCComCurrency,
   tsCHeapPtr,
   tsCRBMap,
   tsCSimpleArray,
   tsMisc,
   tsMax
};

typedef void (*t_TestSuiteFunction)();

t_TestSuiteFunction apfnTestSuite[] =
{
   NULL,
   &DoCAtlArray,
   &DoCAtlList,
   &DoCComBSTR,
   &DoCComCurrency,
   &DoCHeapPtr,
   &DoCRBMap,
   &DoCSimpleArray,
   &DoMisc
};

int _tmain(int argc, _TCHAR* argv[])
{
   UNREFERENCED_PARAMETER(argc);
   UNREFERENCED_PARAMETER(argv);

   int iTest = 0;

   _tprintf_s(_T("Which tests do you want?\n")
      _T("%d CAtlArray\n")
      _T("%d CAtlList\n")
      _T("%d CComBSTR\n")
      _T("%d CComCurrency\n")
      _T("%d CHeapPtr\n")
      _T("%d CRBMap\n")
      _T("%d CSimpleArray\n")
      _T("%d Misc\n"),
      tsCAtlArray,
      tsCAtlList,
      tsCComBSTR,
      tsCComCurrency,
      tsCHeapPtr,
      tsCRBMap,
      tsCSimpleArray,
      tsMisc);
   _tscanf_s(_T("%d"), &iTest);

   if (tsMin < iTest && iTest < tsMax)
   {
      apfnTestSuite[iTest]();
   }
   else
   {
      _tprintf_s(_T("%d is not a valid choice!"), iTest);
   }

   return 0;
}

