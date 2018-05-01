// MyMoniker.cpp : implementation file
//

#include "stdafx.h"
#include "MFCWinInet.h"
#include "MyMoniker.h"


// CMyMoniker

CMyMoniker::CMyMoniker()
   : m_dwReadBefore(0)
{
}

CMyMoniker::~CMyMoniker()
{
}


// CMyMoniker member functions

// <Snippet5>
void CMyMoniker::OnDataAvailable(DWORD dwSize, DWORD bscfFlag)
{
   if ((bscfFlag & BSCF_FIRSTDATANOTIFICATION) != 0)
   {
      m_dwReadBefore = 0;
      m_strText.Empty();
   }

   DWORD dwArriving = dwSize - m_dwReadBefore;

   if (dwArriving > 0)
   {
      int nLen = m_strText.GetLength();
      ASSERT((DWORD)nLen == m_dwReadBefore);
      LPTSTR psz = m_strText.GetBuffer(nLen + dwArriving);
      Read(psz + nLen, dwArriving);
      m_strText.ReleaseBuffer(nLen + dwArriving);
      m_dwReadBefore = dwSize;
   }
}
// </Snippet5>