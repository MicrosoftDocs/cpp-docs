// MyClass.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCMessageMaps.h"
#include "MyClass.h"


// CMyClass

IMPLEMENT_DYNAMIC(CMyClass, CWnd)

CMyClass::CMyClass()
{

}

CMyClass::~CMyClass()
{
}


BEGIN_MESSAGE_MAP(CMyClass, CWnd)
// <Snippet11>
   ON_COMMAND(ID_MYCMD, OnMyCommand)
   ON_UPDATE_COMMAND_UI(ID_MYCMD, OnUpdateMyCommand)
   ON_COMMAND_EX(ID_COMPLEX, OnComplexCommand)
// </Snippet11>
END_MESSAGE_MAP()



// CMyClass message handlers

// <Snippet12>
void CMyClass::OnMyCommand()
{
    // handle the command
}

void CMyClass::OnUpdateMyCommand(CCmdUI* pCmdUI)
{
    // set the UI state with pCmdUI
   UNREFERENCED_PARAMETER(pCmdUI);
}

BOOL CMyClass::OnComplexCommand(UINT nID)
{
    // handle the command
   UNREFERENCED_PARAMETER(nID);
   return TRUE;
}
// </Snippet12>