// MFCCObjectSample.cpp : Defines the entry point for the console application.
//
// Demonstrates use of CObject in MFC
//
// Topic											      Snippet
// Deriving a Class from CObject					1
// Specifying Levels of Functionality			2 - 3
// Accessing Run-Time Class Information		2, 4 - 5
// Dynamic Object Creation							6
// CObject::AssertValid                      7
// CObject::CObject                          8
// CObject::Dump                             9
// CObject::GetRuntimeClass                  10
// CObject::IsKindOf                         11
// CObject::IsSerializable                   12
// CObject::Serialize                        13
// CObject::operator delete                  14 - 15
// CObject::operator new                     14, 16
// CRuntimeClass::FromName                   17
// CRuntimeClass::IsDerivedFrom              18
// AfxCheckMemory                            14, 26
// ASSERT_VALID                              19
// DEBUG_NEW                                 14
// DECLARE_SERIAL                            20 - 21
// IMPLEMENT_DYNAMIC                         2 - 3
// IMPLEMENT_DYNCREATE                       22 - 23
// IMPLEMENT_SERIAL                          20, 24
// RUNTIME_CLASS                             25
// Diagnostic Services                       14
//                                           (27)

#include "stdafx.h"
#include "resource.h"
#include "MFCCObjectSample.h"

#ifdef _DEBUG
// <Snippet14>
#define new DEBUG_NEW
// </Snippet14>
#endif

// The one and only application object

CWinApp theApp;

using namespace std;

IMPLEMENT_DYNCREATE( CMyClass, CObject )

// <Snippet5>
// <Snippet3>
IMPLEMENT_DYNAMIC( CPerson, CObject )
// </Snippet3>

// <Snippet23>
IMPLEMENT_DYNCREATE(CMyDynCreateObj, CObject)
// </Snippet23>

void MemoryCorruptingSnippet(bool bCorrupt)
{
   if (bCorrupt)
   {
// <Snippet26>
      CAge* pcage = new CAge(21);  // CAge is derived from CObject.
      Age* page = new Age(22);     // Age is NOT derived from CObject.
      *(((char*)pcage) - 1) = 99;   // Corrupt preceding guard byte
      *(((char*)page) - 1) = 99;    // Corrupt preceding guard byte
      AfxCheckMemory();
// </Snippet26>
   }
}

void SomeFunction(void)
{
   CObject* pMyObject = new CPerson;

   if(NULL != pMyObject &&
     pMyObject->IsKindOf( RUNTIME_CLASS( CPerson ) ) )
   {
      //if IsKindOf is true, then cast is all right
      CPerson* pmyPerson = (CPerson*) pMyObject ;
      pmyPerson->AssertValid();
      // other code goes here...
   }

   delete pMyObject;
}
// </Snippet5>

// <Snippet24>
IMPLEMENT_SERIAL(CAge, CObject, VERSIONABLE_SCHEMA | 2)
// </Snippet24>

// <Snippet13>
void CAge::Serialize(CArchive& ar)
{
   CObject::Serialize(ar);
   if(ar.IsStoring())
      ar << m_years;
   else
      ar >> m_years;
}
// </Snippet13>

// <Snippet7>
void CAge::AssertValid() const
{
   CObject::AssertValid();
   ASSERT(m_years > 0); 
   ASSERT(m_years < 105);
}
// </Snippet7>

#if _DEBUG
// <Snippet9>
void CAge::Dump(CDumpContext &dc) const
{
   CObject::Dump(dc);
   dc << _T("Age = ") << m_years;
}
// </Snippet9>
#endif

// <Snippet15>
void CAge::operator delete(void* p)
{
   free(p);
}

void CAge::operator delete(void *p, LPCSTR lpszFileName, int nLine)
{
   UNREFERENCED_PARAMETER(lpszFileName);
   UNREFERENCED_PARAMETER(nLine);
   free(p);
}
// </Snippet15>

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
   UNREFERENCED_PARAMETER(argc);
   UNREFERENCED_PARAMETER(argv);
   UNREFERENCED_PARAMETER(envp);

   int nRetCode = 0;

   CSimple Simple;

   // initialize MFC and print and error on failure
   if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
   {
      // TODO: change error code to suit your needs
      _tprintf(_T("Fatal Error: MFC initialization failed\n"));
      nRetCode = 1;
   }
   else
   {
// <Snippet4>
      CRuntimeClass* pClass = RUNTIME_CLASS( CObject );	
// </Snippet4>
      UNREFERENCED_PARAMETER(pClass);

// <Snippet6>
      CRuntimeClass* pRuntimeClass = RUNTIME_CLASS( CMyClass );
      CObject* pObject = pRuntimeClass->CreateObject();
      ASSERT( pObject->IsKindOf( RUNTIME_CLASS( CMyClass ) ) );
// </Snippet6>

      SomeFunction();

      delete pObject;

      {
// <Snippet8>
      // Create a CAge object using the default constructor.
      CAge age1;

      // Create a CAge object using the copy constructor.
      CAge age2(age1);   
// </Snippet8>
      }

      {
// <Snippet10>
      CAge a(21);
      CRuntimeClass* prt = a.GetRuntimeClass();
      ASSERT(strcmp(prt->m_lpszClassName, "CAge")  == 0);   
// </Snippet10>
      }

      {
// <Snippet11>
      CAge a(21);  // Must use IMPLEMENT_DYNAMIC, IMPLEMENT _DYNCREATE, or
                   // IMPLEMENT_SERIAL
      ASSERT(a.IsKindOf(RUNTIME_CLASS(CAge)));
      ASSERT(a.IsKindOf(RUNTIME_CLASS(CObject)));   
// </Snippet11>
      }

      {
// <Snippet12>
      CAge a(21);
      ASSERT(a.IsSerializable());
// </Snippet12>
      }

      {
      CAge* page = new CAge(5);
      AFXDUMP(page);
      page->AssertValid();
      CFile file(_T("CAge_Test.dat"), CFile::modeCreate | CFile::modeWrite);
      CArchive ar(&file, CArchive::store);
      page->Serialize(ar);
      ar.Close();
      file.Close();
      delete page;
      }

      {
      CAge* pAge = new CAge(34);
// <Snippet17>
      // This example creates an object if CAge is defined.

      CRuntimeClass* pClass = CRuntimeClass::FromName(_T("CAge"));
      if (pClass == NULL)
      {
         // not found, display a warning for diagnostic purposes
         AfxMessageBox(_T("Warning: CMyClass not defined"));
         return NULL;
      }

      // attempt to create the object with the found CRuntimeClass
      CObject* pObject = pClass->CreateObject();
// </Snippet17>
      delete pObject;
      delete pAge;
      }

      {
      CMyWnd mw;
      CRuntimeClass* pClass = mw.GetRuntimeClass();
// <Snippet18>
      // This example creates an object from the run-time class. It only 
      // creates objects derived from CWnd.

      // We only want to create an object derived from CWnd.
      if (!pClass->IsDerivedFrom(RUNTIME_CLASS(CWnd)))
      {
         TRACE(_T("Error; Object %s is not derived from CWnd\n"),
            pClass->m_lpszClassName);
         return FALSE;
      }

      // Get a pointer to the base class CRuntimeClass.
      #ifdef _AFXDLL
         CRuntimeClass* pBaseClass = pClass->m_pfnGetBaseClass();
      #else
         CRuntimeClass* pBaseClass = pClass->m_pBaseClass;
      #endif
      ASSERT(pBaseClass != NULL);

      TRACE("Creating object %s derived from %s, with object size %d "
         "and schema %d\n", pClass->m_lpszClassName, 
         pBaseClass->m_lpszClassName, pClass->m_nObjectSize, 
         pClass->m_wSchema);

      // Create the object.
      CObject* pObject = pClass->CreateObject();
// </Snippet18>
      delete pObject;
      }

      {
      CObject* pMyObject = new CAge(35);

// <Snippet19>
      // Assure that pMyObject is a valid pointer to an
      // object derived from CObject.
      ASSERT_VALID(pMyObject);
// </Snippet19>

      delete pMyObject;
      }

      {
// <Snippet25>
      CRuntimeClass* prt = RUNTIME_CLASS(CAge);
      ASSERT(strcmp(prt->m_lpszClassName, "CAge") == 0);   
// </Snippet25>
      }

   
   
      MemoryCorruptingSnippet(false);
      // NOTE: DON'T PUT NEW SNIPPETS AFTER THIS ONE, IT CORRUPTS MEMORY
   }

   return nRetCode;
}

IMPLEMENT_DYNCREATE(CMyWnd, CWnd)