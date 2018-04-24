#pragma once

// CMyMoniker command target

class CMyMoniker : public CAsyncMonikerFile
{
public:
   CMyMoniker();
   virtual ~CMyMoniker();
protected:
   DWORD m_dwReadBefore;
   CString m_strText;

   virtual void OnDataAvailable(DWORD dwSize, DWORD bscfFlag);
};


