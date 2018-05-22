// MyComposite.cpp : Implementation of CMyComposite
#include "stdafx.h"
#include "MyComposite.h"


// CMyComposite

// <Snippet19>
// The following implementation of the WM_RBUTTONDOWN message handler
// will pop up the ActiveX Control's PropertyPages 
LRESULT CMyComposite::OnRButtonDown(UINT /*uMsg*/, WPARAM /*wParam*/, 
   LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
   DoVerbProperties(NULL, ::GetActiveWindow());
   return 0L;
}
// </Snippet19>