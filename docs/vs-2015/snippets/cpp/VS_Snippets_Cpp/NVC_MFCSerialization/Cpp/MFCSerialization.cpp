// MFCSerialization.cpp : Defines the entry point for the console application.
//
// Demonstrates serialization in MFC
//
// Topic											         Snippet
// Serialization: Making a Serializable Class	1 - 4
// Two Ways to Create a CArchive Object			5 - 6
// Using the CArchive << and >> Operators			7 - 11
// Storing and Loading CObjects via an Archive  36 - 37
// CArchive::CArchive								   12
// CArchive::Flush									   13
// CArchive::GetFile								      14
// CArchive::GetObjectSchema						   15
// CArchive::IsLoading								   16
// CArchive::IsStoring								   17
// CArchive::MapObject								   18 - 21
// CArchive::Read									      23
// CArchive::SerializeClass							25
// CArchive::SetLoadParams							   26
// CArchive::SetObjectSchema						   27
// CArchive::SetStoreParams							26
// CArchive::Write									   24
// CArchive::WriteClass								   28
// CArchive::WriteObject							   29
// CArchive::WriteString							   30
// CArchive::operator<<								   31 - 32
// CArchive::operator>>								   33 - 34
// CArchive::m_pDocument							   35
//                                              (38)

#include "stdafx.h"
#include "MFCSerialization.h"
#include "Person.h"
#include "Employee.h"
#include "CompoundObject.h"
#include "SchemaObject.h"
#include "MyDocument.h"
#include "SubItem.h"
#include "DerivedClass.h"
#include "MyLargeDoc.h"
#include "Age.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// The one and only application object
         
CWinApp theApp;

using namespace std;

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
         // <Snippet5>
         CFile theFile;
         theFile.Open(_T("CArchive__Test.txt"), CFile::modeCreate | CFile::modeWrite);
         CArchive archive(&theFile, CArchive::store);
         // </Snippet5>
         CPerson person;
         person.Serialize(archive);
         // <Snippet6>
         archive.Close();
         theFile.Close();
         // </Snippet6>
      }

      {
         CFile theFile;
         theFile.Open(_T("CArchive__Test2.txt"), CFile::modeCreate | CFile::modeReadWrite);

         {
            // <Snippet7>
            CArchive ar(&theFile, CArchive::store);
            WORD wEmployeeID = 78;
            ar << wEmployeeID;
            // </Snippet7>
            ar.Close();
         }

         theFile.SeekToBegin();
         {
            // <Snippet8>
            CArchive ar(&theFile, CArchive::load);
            WORD wEmployeeID;
            ar >> wEmployeeID;
            // </Snippet8>
            ar.Close();
         }

         theFile.Close();
      }

      {
         CFile theFile;
         theFile.Open(_T("CArchive__Test3.txt"), CFile::modeCreate | CFile::modeWrite);
         CArchive ar(&theFile, CArchive::store);
         CEmployee cee;
         cee.m_strName = _T("Bubba");
         cee.m_wAge = 55;
         cee.Serialize(ar);
         ar.Close();
         theFile.Close();
      }

      {
         CFile theFile;
         theFile.Open(_T("CArchive__Test4.txt"), CFile::modeCreate | CFile::modeReadWrite);
         CArchive ar(&theFile, CArchive::store);

         CCompoundObject cco;
         cco.Serialize(ar);

         ar.Close();
         theFile.Close();
      }

      {
// <Snippet12>
         CFile file;
         TCHAR szBuf[512];
         if( !file.Open(_T("CArchive__test__file.txt"), 
            CFile::modeCreate | CFile::modeWrite)) 
         {
            #ifdef _DEBUG
              AFXDUMP(_T("Unable to open file\n"));
              exit(1);
            #endif
         }
         CArchive ar(&file, CArchive::store, 512, szBuf);
// </Snippet12>
      }

      {
         CFile file;
         file.Open(_T("CArchive__test__file.txt"),
            CFile::modeCreate | CFile::modeReadWrite);

         CArchive arstore(&file, CArchive::store);
         CMyDocument mydoc;
         for (WORD i = 0; i < 4; i++)
         {
            CSubItem* psi = new CSubItem(&mydoc);
            psi->m_i = i;
            mydoc.m_listOfSubItems.AddHead(psi);
         }
         mydoc.Serialize(arstore);
         arstore.Flush();
         
         file.SeekToBegin();
         
         CArchive arload(&file, CArchive::load);
         CMyDocument newmydoc;
         newmydoc.Serialize(arload);

         file.SeekToBegin();
         
         CSchemaObject so;
         arstore << &so;
         arstore.Flush();
         file.SeekToBegin();
         arload >> (CObject*&)so;

         arload.Flush();

         file.SeekToBegin();

         {
            CArchive& ar = arstore;
// <Snippet23>
            char pbWrite[100];
            memset(pbWrite, 'a', 100);
            ar.Write(pbWrite, 100);
// </Snippet23>
         }

         arstore.Flush();
         file.SeekToBegin();

         {
            CArchive& ar = arload;
// <Snippet24>
            char pbRead[100];
            ar.Read(pbRead, 100);
// </Snippet24>

            arload.Flush();
            file.SeekToBegin();
         }


         CDerivedClass cdcout;
         cdcout.Serialize(arstore);
         arstore.Flush();
         file.SeekToBegin();
         CDerivedClass cdcin;
         cdcin.Serialize(arload);

         file.SeekToBegin();

         {
            CArchive& ar = arstore;
            UINT uSchema = ar.GetObjectSchema();

// <Snippet27>
            ar.SetObjectSchema(2);
            ASSERT(2 == ar.GetObjectSchema());
// </Snippet27>

            ar.SetObjectSchema(uSchema);			
         }

         arstore.Abort();
         arload.Abort();
      }

      {
         CFile myFile(_T("CArchive__test__file.txt"), 
            CFile::modeCreate | CFile::modeReadWrite);
         CArchive arstore(&myFile, CArchive::store);
         CArchive arload(&myFile, CArchive::load);

         {
            CArchive& ar = arstore;
// <Snippet31>
            long l = 5;
            int i = 10;
            if(ar.IsStoring())
               ar << l << i;							
// </Snippet31>

// <Snippet32>
            CString s("abc");
            ar << s;  // Prints the value (abc)
// </Snippet32>
         }

         arstore.Flush();
         myFile.SeekToBegin();

         {
            CArchive& ar = arload;
// <Snippet33>
            long l;
            int i;
            if(ar.IsLoading())
               ar >> l >> i;
// </Snippet33>

// <Snippet34>
            CString s;
            if (ar.IsLoading())
               ar >> s;
// </Snippet34>
         }
      }

      {
// <Snippet13>
         CFile myFile(_T("CArchive__test__file.txt"), 
            CFile::modeCreate | CFile::modeWrite);
         CArchive ar(&myFile, CArchive::store);

         // Write a string to the archive.
         ar.WriteString(_T("My string."));

         // Flush all of the data to the file.
         ar.Flush();		
// </Snippet13>

// <Snippet14>
         const CFile* fp = ar.GetFile();
// </Snippet14>
         UNREFERENCED_PARAMETER(fp);
      }

      {
         CFile myFile(_T("CArchive__test__file.txt"), 
            CFile::modeCreate | CFile::modeReadWrite);
         CArchive arstore(&myFile, CArchive::store);
         CArchive arload(&myFile, CArchive::load);

         {
            CArchive& ar = arstore;
// <Snippet16>
            int i = 0;
            if(ar.IsLoading())
               ar >> i;
            else
               ar << i;
// </Snippet16>
         }
         arstore.Flush();
         myFile.SeekToBegin();
         {
            CArchive& ar = arload;
// <Snippet17>
            int i = 0;
            if(ar.IsStoring())
               ar << i;
            else
               ar >> i;			
// </Snippet17>
         }
      }

      {
// <Snippet28>
         CFile myFile(_T("My__test__file.dat"), 
            CFile::modeCreate | CFile::modeReadWrite);

         // Create a storing archive.
         CArchive arStore(&myFile, CArchive::store);

         // Store the class CAge in the archive.
         arStore.WriteClass(RUNTIME_CLASS(CAge));

         // Close the storing archive.
         arStore.Close();

         // Create a loading archive.
         myFile.SeekToBegin();
         CArchive arLoad(&myFile, CArchive::load);

         // Load a class from the archive.
         CRuntimeClass* pClass = arLoad.ReadClass();
         if (!pClass->IsDerivedFrom(RUNTIME_CLASS(CAge)))
         {
            arLoad.Abort();					
         }
// </Snippet28>
      }

      {
// <Snippet29>
         CFile myFile(_T("My__test__file.dat"), 
            CFile::modeCreate | CFile::modeReadWrite);
         CAge age(21), *pAge;

         // Create a storing archive.
         CArchive arStore(&myFile, CArchive::store);

         // Write the object to the archive
         arStore.WriteObject(&age);

         // Close the storing archive
         arStore.Close();

         // Create a loading archive.
         myFile.SeekToBegin();
         CArchive arLoad(&myFile, CArchive::load);

         // Verify the object is in the archive.
         pAge = (CAge*) arLoad.ReadObject(RUNTIME_CLASS(CAge));
         ASSERT(age == *pAge);		
// </Snippet29>
      }

      {
// <Snippet30>
         CFile myFile(_T("My__test__file.dat"), 
            CFile::modeCreate | CFile::modeReadWrite);
         CString str1("String1"), str2("String2"), str;

         // Create a storing archive.
         CArchive arStore(&myFile, CArchive::store);

         // Write str1 and str2 to the archive
         arStore.WriteString(str1);
         arStore.WriteString(_T("\n"));
         arStore.WriteString(str2);
         arStore.WriteString(_T("\n"));

         // Close the storing archive
         arStore.Close();

         // Create a loading archive.
         myFile.SeekToBegin();
         CArchive arLoad(&myFile, CArchive::load);

         // Verify the two strings are in the archive.
         arLoad.ReadString(str);
         ASSERT(str == str1);
         arLoad.ReadString(str);
         ASSERT(str == str2);
// </Snippet30>
      }

      {
// <Snippet35>
         CFile myFile(_T("My__test__file.dat"), 
            CFile::modeCreate | CFile::modeWrite);
         CArchive ar(&myFile, CArchive::store);
         CMyDocument mydoc;
         ar.m_pDocument = &mydoc;

         // Serialize the document to the archive.
         if (ar.m_pDocument != NULL)
            ar.m_pDocument->Serialize(ar);					
// </Snippet35>
      }

      {
         CFile myFile(_T("My__test__file.dat"), 
            CFile::modeCreate | CFile::modeWrite);
         CArchive arstore(&myFile, CArchive::store);
         CArchive arload(&myFile, CArchive::load);

         CMyLargeDocument cmldout;
         cmldout.Serialize(arstore);
         arstore.Flush();
         myFile.SeekToBegin();
         CMyLargeDocument cmldin;
         cmldin.Serialize(arload);
      }


   }

   return nRetCode;
}
