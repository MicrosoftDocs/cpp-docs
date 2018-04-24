// FileDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CFileDialog.h"
#include "FileDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyFileDlg dialog




CMyFileDlg::CMyFileDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CMyFileDlg::IDD, pParent)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyFileDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMyFileDlg, CDialog)
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    //}}AFX_MSG_MAP
END_MESSAGE_MAP()


// CMyFileDlg message handlers

void CMyFileDlg::CreateOpenDialog( void )
{
    m_myFileDialogPtr = new CFileDialog( true );
}

void CMyFileDlg::CreateSaveDialog( void )
{
    m_myFileDialogPtr = new CFileDialog( false );
}

void CMyFileDlg::DeleteDialog( void )
{
    delete m_myFileDialogPtr;
}

BOOL CMyFileDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    // Set the icon for this dialog.  The framework does this automatically
    //  when the application's main window is not a dialog
    SetIcon(m_hIcon, TRUE);			// Set big icon
    SetIcon(m_hIcon, FALSE);		// Set small icon

    // TODO: Add extra initialization here

    // Run the tests
    RunTests();

    return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMyFileDlg::OnPaint()
{
    if (IsIconic())
    {
        CPaintDC dc(this); // device context for painting

        SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

        // Center icon in client rectangle
        int cxIcon = GetSystemMetrics(SM_CXICON);
        int cyIcon = GetSystemMetrics(SM_CYICON);
        CRect rect;
        GetClientRect(&rect);
        int x = (rect.Width() - cxIcon + 1) / 2;
        int y = (rect.Height() - cyIcon + 1) / 2;

        // Draw the icon
        dc.DrawIcon(x, y, m_hIcon);
    }
    else
    {
        CDialog::OnPaint();
    }
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMyFileDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}

void CMyFileDlg::RunTests( void )
{
    // Some of these tests are only valid if we are on Vista, so create a version variable
    OSVERSIONINFO versionInfo;
    versionInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);

    // Get the version
    GetVersionEx( &versionInfo );

    // Vista and greater have major version greater than 6
    if ( versionInfo.dwMajorVersion >= 6 )
    {
        // Create a dialog
        CreateOpenDialog();

        // <Snippet1>
        // Update the m_ofn variable
        m_myFileDialogPtr->UpdateOFNFromShellDialog();

        // Change the title
        m_myFileDialogPtr->m_ofn.lpstrTitle = L"New Dialog Title";

        // Apply the changes
        m_myFileDialogPtr->ApplyOFNToShellDialog();

        // Show the window
        LRESULT result = m_myFileDialogPtr->DoModal();
        // </Snippet1>

        if ( result == IDOK )
        {
        }

        // <Snippet2>
        // Get the interface pointer
        IFileOpenDialog * openDlgPtr = m_myFileDialogPtr->GetIFileOpenDialog();

        // Make sure that it is not null
        if ( openDlgPtr != NULL )
        {
            //
            // Perform any interface functionality here
            //

            // Release the pointer
            openDlgPtr->Release();
        }
        // </Snippet2>

        // Just for cleanliness, delete the dialog and create a save dialog
        DeleteDialog();
        CreateSaveDialog();

        // <Snippet3>
        // Get the interface pointer
        IFileSaveDialog * saveDlgPtr = m_myFileDialogPtr->GetIFileSaveDialog();

        // Make sure that it is not null
        if ( saveDlgPtr != NULL )
        {
            //
            // Perform any interface functionality here
            //

            // Release the pointer
            saveDlgPtr->Release();
        }
        // </Snippet3>

        // <Snippet4>
        // Get the interface pointer
        IFileDialogCustomize * customDlgPtr = m_myFileDialogPtr->GetIFileDialogCustomize();

        // Make sure that it is not null
        if ( customDlgPtr != NULL )
        {
            //
            // Perform any interface functionality here
            //

            // Release the pointer
            customDlgPtr->Release();
        }
        // </Snippet4>

        // Memory clean up
        DeleteDialog();
    }
}

