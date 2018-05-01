#pragma once

// CMyDataPathProperty command target

class CMyDataPathProperty : public CDataPathProperty
{
public:
   CMyDataPathProperty();
   virtual ~CMyDataPathProperty();

   void OnDataAvailable(DWORD dwSize, DWORD bscfFlag);

   void DummyFunction();

};


