// CustomApp.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCWindowing.h"
#include "CustomApp.h"


// CCustomApp

IMPLEMENT_DYNCREATE(CCustomApp, CWinApp)

CCustomApp::CCustomApp()
{
}

CCustomApp::~CCustomApp()
{
}

BOOL CCustomApp::InitInstance()
{
	// TODO:  perform and per-thread initialization here
	return TRUE;
}

int CCustomApp::ExitInstance()
{
	// TODO:  perform any per-thread cleanup here
	return CWinApp::ExitInstance();
}

// <Snippet50>
// The following message map illustrates how to rebind the
// File New, Open and Print Setup menu commands to handlers that
// you implement in your CWinApp-derived class.  
// Note, you can name the handler CCustomApp::OnFileNew instead of
// CCustomApp::OnMyFileNew, and likewise for the other handlers, if desired.
BEGIN_MESSAGE_MAP(CCustomApp, CWinApp)
   ON_COMMAND(ID_FILE_NEW, &CCustomApp::OnMyFileNew)
   ON_COMMAND(ID_FILE_OPEN, &CCustomApp::OnMyFileOpen)
   ON_COMMAND(ID_FILE_PRINT_SETUP, &CCustomApp::OnMyFilePrintSetup)
END_MESSAGE_MAP()
// </Snippet50>

// CCustomApp message handlers

void CCustomApp::OnMyFileNew()
{}
void CCustomApp::OnMyFileOpen()
{}
void CCustomApp::OnMyFilePrintSetup()
{}
