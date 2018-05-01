
// NVC_MFC_CTaskDialog.cpp : Defines the class behaviors for the application.
//
// Topic                                                            Snippet
// CTaskDialog::AddCommandControl                                         2
// CTaskDialog::AddRadioButton                                            3
// CTaskDialog::CTaskDialog                                               7
// CTaskDialog::DoModal                                                   7
// CTaskDialog::GetOptions                                                7
// CTaskDialog::GetSelectedCommandControlID                               2
// CTaskDialog::GetSelectedRadioButtonID                                  3
// CTaskDialog::GetVerificationCheckboxState                              5
// CTaskDialog::IsCommandControlEnabled                                   2
// CTaskDialog::IsRadioButtonEnabled                                      3
// CTaskDialog::IsSupported                                               1
// CTaskDialog::LoadCommandControls                                       2
// CTaskDialog::LoadRadioButtons                                          3
// CTaskDialog::RemoveAllCommandControls                                  2
// CTaskDialog::RemoveAllRadioButtons                                     3
// CTaskDialog::SetCommandControlOptions                                  2
// CTaskDialog::SetCommonButtonOptions                                    6
// CTaskDialog::SetCommonButtons                                          6
// CTaskDialog::SetContent                                                7
// CTaskDialog::SetDefaultCommandControl                                  2
// CTaskDialog::SetDefaultRadioButton                                     3
// CTaskDialog::SetDialogWidth                                            7
// CTaskDialog::SetExpansionArea                                          7
// CTaskDialog::SetFooterIcon                                             7
// CTaskDialog::SetFooterText                                             7
// CTaskDialog::SetMainIcon                                               7
// CTaskDialog::SetMainInstruction                                        7
// CTaskDialog::SetOptions                                                7
// CTaskDialog::SetProgressBarMarquee                                     4
// CTaskDialog::SetProgressBarPosition                                    4
// CTaskDialog::SetProgressBarRange                                       4
// CTaskDialog::SetProgressBarState                                       4
// CTaskDialog::SetRadioButtonOptions                                     3
// CTaskDialog::SetVerificationCheckbox                                   5
// CTaskDialog::SetVerificationCheckboxText                               5
// CTaskDialog::SetWindowTitle                                            7
// CTaskDialog::ShowDialog                                                1

#include "stdafx.h"
#include "afxwinappex.h"
#include "NVC_MFC_CTaskDialog.h"
#include "MainFrm.h"

#include "ChildFrm.h"
#include "NVC_MFC_CTaskDialogDoc.h"
#include "NVC_MFC_CTaskDialogView.h"

#include "afxtaskdialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CNVC_MFC_CTaskDialogApp

BEGIN_MESSAGE_MAP(CNVC_MFC_CTaskDialogApp, CWinAppEx)
	ON_COMMAND(ID_APP_ABOUT, &CNVC_MFC_CTaskDialogApp::OnAppAbout)
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, &CWinAppEx::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CWinAppEx::OnFileOpen)
	// Standard print setup command
	ON_COMMAND(ID_FILE_PRINT_SETUP, &CWinAppEx::OnFilePrintSetup)
END_MESSAGE_MAP()


// CNVC_MFC_CTaskDialogApp construction

CNVC_MFC_CTaskDialogApp::CNVC_MFC_CTaskDialogApp()
{
	m_bHiColorIcons = TRUE;

	// support Restart Manager
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS;

	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

// The one and only CNVC_MFC_CTaskDialogApp object

CNVC_MFC_CTaskDialogApp theApp;


// CNVC_MFC_CTaskDialogApp initialization

BOOL CNVC_MFC_CTaskDialogApp::InitInstance()
{
	// InitCommonControlsEx() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Set this to include all the common control classes you want to use
	// in your application.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinAppEx::InitInstance();

	// Initialize OLE libraries
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}
	AfxEnableControlContainer();
	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));
	LoadStdProfileSettings(4);  // Load standard INI file options (including MRU)

	InitContextMenuManager();

	InitKeyboardManager();

	InitTooltipManager();
	CMFCToolTipInfo ttParams;
	ttParams.m_bVislManagerTheme = TRUE;
	theApp.GetTooltipManager()->SetTooltipParams(AFX_TOOLTIP_TYPE_ALL,
		RUNTIME_CLASS(CMFCToolTipCtrl), &ttParams);

	// Register the application's document templates.  Document templates
	//  serve as the connection between documents, frame windows and views
	CMultiDocTemplate* pDocTemplate;
	pDocTemplate = new CMultiDocTemplate(IDR_NVC_MFC_CTaskDiTYPE,
		RUNTIME_CLASS(CNVC_MFC_CTaskDialogDoc),
		RUNTIME_CLASS(CChildFrame), // custom MDI child frame
		RUNTIME_CLASS(CNVC_MFC_CTaskDialogView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate);

	// create main MDI Frame window
	CMainFrame* pMainFrame = new CMainFrame;
	if (!pMainFrame || !pMainFrame->LoadFrame(IDR_MAINFRAME))
	{
		delete pMainFrame;
		return FALSE;
	}
	m_pMainWnd = pMainFrame;
	// call DragAcceptFiles only if there's a suffix
	//  In an MDI app, this should occur immediately after setting m_pMainWnd


	// Parse command line for standard shell commands, DDE, file open
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);


	// Dispatch commands specified on the command line.  Will return FALSE if
	// app was launched with /RegServer, /Register, /Unregserver or /Unregister.
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;
	// The main window has been initialized, so show and update it
	pMainFrame->ShowWindow(m_nCmdShow);
	pMainFrame->UpdateWindow();


    if (CTaskDialog::IsSupported())
    {
    	// TODO: Replace the strings below with the appropriate message, 
        // main instruction, and dialog title
        CString message("This is an important message to the user.");
        CString mainInstruction("Important!\nPlease read!");
        CString title("Alert Dialog");

        CTaskDialog taskDialog(message, mainInstruction, title, 
            TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON );

        // Get the current options
        int options = taskDialog.GetOptions();

        // Change the options to not use HICONs
        options &= ~TDF_USE_HICON_MAIN;
        options &= ~TDF_USE_HICON_FOOTER;

        // Start with the expansion area expanded
        options |= TDF_EXPANDED_BY_DEFAULT;

        //Set the options
        taskDialog.SetOptions(options);

        // Add a main icon
        taskDialog.SetMainIcon(TD_WARNING_ICON);

        // Add a footer icon and footer text
        taskDialog.SetFooterIcon(TD_INFORMATION_ICON);
        taskDialog.SetFooterText(
            L"Here is some supplementary information for the user.");

        // Add some command buttons
        taskDialog.AddCommandControl(101, L"First command button option");
        taskDialog.AddCommandControl(102, L"Second command button option");
        taskDialog.AddCommandControl(103, L"Third command button option");

        // Add expansion information
        taskDialog.SetExpansionArea(
            L"Supplementary information to the user\ntyped over two lines.",
            L"Expand this label for more information",
            L"Compress here to hide the additional information.");

        // Add some radio buttons
        taskDialog.AddRadioButton(201, L"First possible radio");
        taskDialog.AddRadioButton(202, L"Second possible radio");
        taskDialog.AddRadioButton(203, L"Third possible radio");
        taskDialog.AddRadioButton(204, L"Fourth possible radio option");

        // Add a marquee progress bar
        taskDialog.SetProgressBarMarquee();

        // Add the verification checkbox
        taskDialog.SetVerificationCheckboxText(
            L"Remember the user's settings");

        // Show the dialog
        taskDialog.DoModal();

        ShowDialogs();
    }

    return TRUE;
}

void CNVC_MFC_CTaskDialogApp::ShowDialogs()
{
    // Cover showing a dialog with CTaskDialog::ShowDialog
    {
// <Snippet1>
    	// TODO: Replace the string below with the actual message to the user
        CString message("Important information to the user");
    	// TODO: Replace the string below with the title of this project
        CString title("Project Title");

        CString emptyString;

        if (CTaskDialog::IsSupported())
    	{
    		CTaskDialog::ShowDialog(message, emptyString, title, 0, 0, 
                TDCBF_OK_BUTTON);
    	}
    	else
    	{
            AfxMessageBox(message);
    	}
// </Snippet1>
    }

    // Cover all functions dealing with command button controls
    {
// <Snippet2>
        // TODO: Replace the strings below with the appropriate message, 
        // main instruction, and dialog title.
        CString message("This is an important message to the user.");
        CString mainInstruction("Important!\nPlease read!");
        CString title("Alert Dialog");

        CTaskDialog taskDialog(message, mainInstruction, title, 
            TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON );

        taskDialog.AddCommandControl(201, L"First command button control");
        taskDialog.AddCommandControl(202, L"Second command button control");
        taskDialog.AddCommandControl(203, L"Third command button control");

        // Show the CTaskDialog and remember how the user closed it.
        int selection = taskDialog.DoModal();

        switch(selection)
        {
        case 201:
            // TODO: Place processing here for the first 
            // command button control.
            break;

        case 202:
            // TODO: Place processing here for the second 
            // command button control.
            break;

        case 203:
            // TODO: Place processing here for the third 
            // command button control.
            break;

        default:
            break;
        }

        // Remove all the command controls so that we can use the same task
        // dialog with new command button controls.
        taskDialog.RemoveAllCommandControls();

        taskDialog.AddCommandControl(301, 
            L"New first command button control");
        taskDialog.AddCommandControl(302, 
            L"New second command button control should require elevation",
            TRUE, TRUE);
        taskDialog.AddCommandControl(303, 
            L"New third command button control should be disabled");

        // Change the default command button control
        taskDialog.SetDefaultCommandControl(302);

        // Make sure the third option is disabled.
        if (taskDialog.IsCommandControlEnabled(303))
        {
            taskDialog.SetCommandControlOptions(303, FALSE);
        }

        taskDialog.DoModal();

        switch(taskDialog.GetSelectedCommandControlID())
        {
        case 301:
            // TODO: Place processing here for new first 
            // command button control.
            break;

        case 302:
            // TODO: Place processing here for new second 
            // command button control.
            break;

        case 303:
            // TODO: Place processing here for the new third 
            // command button control.
            break;

        default:
            break;
        }

        // Remove all the command button controls and add new ones from
        // the string table resource.
        taskDialog.RemoveAllCommandControls();
        taskDialog.LoadCommandControls(1001, 1005);
// </Snippet2>
    }

    // Cover all functions dealing with radio buttons
    {
// <Snippet3>
        // TODO: Replace the strings below with the appropriate message, 
        // main instruction, and dialog title
        CString message("This is an important message to the user.");
        CString mainInstruction("Important!\nPlease read!");
        CString title("Alert Dialog");

        CTaskDialog taskDialog(message, mainInstruction, title, 
            TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON );

        taskDialog.AddRadioButton(201, L"First option");
        taskDialog.AddRadioButton(202, L"Second option");
        taskDialog.AddRadioButton(203, L"Third option");

        taskDialog.DoModal();
        int selection = taskDialog.GetSelectedRadioButtonID();

        switch(selection)
        {
        case 201:
            // TODO: Place processing here for the first 
            // radio button.
            break;

        case 202:
            // TODO: Place processing here for the second 
            // radio button.
            break;

        case 203:
            // TODO: Place processing here for the third 
            // radio button.
            break;

        default:
            break;
        }

        // Remove all the radio buttons so that we can use the same task
        // dialog with new radio buttons.
        taskDialog.RemoveAllRadioButtons();

        taskDialog.AddRadioButton(301, L"New first option");
        taskDialog.AddRadioButton(302, L"New second option");
        taskDialog.AddRadioButton(303, 
            L"New third option should be disabled");

        // Change the default radio button to the second option
        taskDialog.SetDefaultRadioButton(302);

        // Make sure the third option is disabled.
        if (taskDialog.IsRadioButtonEnabled(303))
        {
            taskDialog.SetRadioButtonOptions(303, FALSE);
        }

        taskDialog.DoModal();
        selection = taskDialog.GetSelectedRadioButtonID();

        switch(taskDialog.GetSelectedRadioButtonID())
        {
        case 301:
            // TODO: Place processing here for new first 
            // command button control.
            break;

        case 302:
            // TODO: Place processing here for new second 
            // command button control.
            break;

        case 303:
            // TODO: Place processing here for the new third 
            // command button control.
            break;

        default:
            break;
        }

        // Remove all the radio button controls and add new ones from
        // the string table resource.
        taskDialog.RemoveAllRadioButtons();
        taskDialog.LoadRadioButtons(1001, 1005);
// </Snippet3>
    }

    // Cover progress bar functions
    {
 // <Snippet4>
        // TODO: Replace the strings below with the appropriate message, 
        // main instruction, and dialog title
        CString message("This is an important message to the user.");
        CString mainInstruction("Important!\nPlease read!");
        CString title("Alert Dialog");

        CTaskDialog taskDialog(message, mainInstruction, title, 
            TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON );

        // Add a marquee progress bar.
        taskDialog.SetProgressBarMarquee();

        taskDialog.DoModal();

        // Remove the marquee bar and replace it with a standard progress bar
        taskDialog.SetProgressBarMarquee(0);
        taskDialog.SetProgressBarRange(0, 100);
        taskDialog.SetProgressBarPosition(75);
        taskDialog.SetProgressBarState();

        taskDialog.DoModal();
// </Snippet4>
    }

    // Cover verification checkbox
    {
// <Snippet5>
        // TODO: Replace the strings below with the appropriate message, 
        // main instruction, and dialog title
        CString message("This is an important message to the user.");
        CString mainInstruction("Important!\nPlease read!");
        CString title("Alert Dialog");

        CTaskDialog taskDialog(message, mainInstruction, title, 
            TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON );

        // Add the verification checkbox and set the default state.
        taskDialog.SetVerificationCheckboxText(L"Remember your selection.");
        taskDialog.SetVerificationCheckbox(false);

        taskDialog.DoModal();

        if (taskDialog.GetVerificationCheckboxState())
        {
            // TODO: Write settings of the task dialog to the registry
        }
// </Snippet5>
    }

    // Cover common buttons
    {
// <Snippet6>
        // TODO: Replace the strings below with the appropriate message, 
        // main instruction, and dialog title
        CString message("This is an important message to the user.");
        CString mainInstruction("Important!\nPlease read!");
        CString title("Alert Dialog");

        CTaskDialog taskDialog(message, mainInstruction, title);

        // Create a button mask.
        int buttons = TDCBF_OK_BUTTON | TDCBF_CANCEL_BUTTON;
        buttons |= TDCBF_RETRY_BUTTON | TDCBF_CLOSE_BUTTON;

        taskDialog.SetCommonButtons(buttons);

        // Disable the close button and make the retry button require 
        // elevation.
        taskDialog.SetCommonButtonOptions(TDCBF_CLOSE_BUTTON, 
            TDCBF_RETRY_BUTTON);

        taskDialog.DoModal();
// </Snippet6>
    }

    // Cover base information (title, caption, text, icons, footer, width etc)
    {
// <Snippet7>
        // TODO: Replace the strings below with the appropriate message, 
        // main instruction, and dialog title
        CString message("This is an important message to the user.");
        CString mainInstruction("Important!\nPlease read!");
        CString title("Alert Dialog");

        CTaskDialog taskDialog(message, mainInstruction, title, 
            TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON );

        // Setting new information to be able to reuse the dialog resource
        taskDialog.SetWindowTitle(L"New title for the task dialog");
        taskDialog.SetContent(L"New message to show the user.");
        taskDialog.SetMainInstruction(L"Even more important!");
        taskDialog.SetMainIcon(TD_ERROR_ICON);
        taskDialog.SetDialogWidth(300);

        // Add a footer
        taskDialog.SetFooterText(L"Footer information for the dialog.");
        taskDialog.SetFooterIcon(TD_INFORMATION_ICON);

        // Add expansion information
        taskDialog.SetExpansionArea(L"Additional information\non two lines.",
            L"Click here for more information.",
            L"Click here to hide the extra information.");

        // Change the options to show the expanded information by default.
        // It is necessary to retrieve the current options first.
        int options = taskDialog.GetOptions();
        options |= TDF_EXPANDED_BY_DEFAULT;
        taskDialog.SetOptions(options);

        taskDialog.DoModal();
// </Snippet7>
    }
}



// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()

// App command to run the dialog
void CNVC_MFC_CTaskDialogApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

// CNVC_MFC_CTaskDialogApp customization load/save methods

void CNVC_MFC_CTaskDialogApp::PreLoadState()
{
	BOOL bNameValid;
	CString strName;
	bNameValid = strName.LoadString(IDS_EDIT_MENU);
	ASSERT(bNameValid);
	GetContextMenuManager()->AddMenu(strName, IDR_POPUP_EDIT);
	bNameValid = strName.LoadString(IDS_EXPLORER);
	ASSERT(bNameValid);
	GetContextMenuManager()->AddMenu(strName, IDR_POPUP_EXPLORER);
}

void CNVC_MFC_CTaskDialogApp::LoadCustomState()
{
}

void CNVC_MFC_CTaskDialogApp::SaveCustomState()
{
}

// CNVC_MFC_CTaskDialogApp message handlers



