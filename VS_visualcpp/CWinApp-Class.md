---
title: "CWinApp Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: e426a3cd-0d15-40d6-bd55-beaa5feb2343
caps.latest.revision: 21
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CWinApp Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>The base class from which you derive a Windows application object. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CWinApp : public CWinThread</legacySyntax>
    </syntaxSection>
    <section>
        <title>Members</title>
        <content/>
        <sections>
            <section>
                <title>Public Constructors</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__cwinapp">CWinApp::CWinApp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Constructs a <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> object.
                                    </para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Methods</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__adddoctemplate">CWinApp::AddDocTemplate</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds a document template to the application's list of available document templates.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__addtorecentfilelist">CWinApp::AddToRecentFileList</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds a filename to the most recently used (MRU) file list.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__applicationrecoverycallback">CWinApp::ApplicationRecoveryCallback</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the application unexpectedly exits.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__closealldocuments">CWinApp::CloseAllDocuments</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Closes all open documents.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__createprinterdc">CWinApp::CreatePrinterDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a printer device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__delregtree">CWinApp::DelRegTree</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Deletes a specified key and all its subkeys.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__domessagebox">CWinApp::DoMessageBox</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Implements <legacyLink xlink:href="d66d0328-cdcc-48f6-96a4-badf089099c8">AfxMessageBox</legacyLink> for the application.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__dowaitcursor">CWinApp::DoWaitCursor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Turns the wait cursor on and off.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__enabled2dsupport">CWinApp::EnableD2DSupport</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Enables application <languageKeyword>D2D</languageKeyword> support. Call this method before the main window is initialized.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__enablehtmlhelp">CWinApp::EnableHtmlHelp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Implements HTMLHelp for the application, rather than WinHelp.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__enabletaskbarinteraction">CWinApp::EnableTaskbarInteraction</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables Taskbar interaction.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__exitinstance">CWinApp::ExitInstance</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to clean up when your application terminates.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__getapplicationrecoveryparameter">CWinApp::GetApplicationRecoveryParameter</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the input parameter for the application recovery method.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__getapplicationrecoverypinginterval">CWinApp::GetApplicationRecoveryPingInterval</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the length of time that the restart manager waits for the recovery callback function to return.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__getapplicationrestartflags">CWinApp::GetApplicationRestartFlags</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the flags for the restart manager.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__getappregistrykey">CWinApp::GetAppRegistryKey</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns key for HKEY_CURRENT_USER\"Software"\RegistryKey\ProfileName.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__getdatarecoveryhandler">CWinApp::GetDataRecoveryHandler</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the data recovery handler for this instance of the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__getfirstdoctemplateposition">CWinApp::GetFirstDocTemplatePosition</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the position of the first document template.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__gethelpmode">CWinApp::GetHelpMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the type of help used by the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__getnextdoctemplate">CWinApp::GetNextDocTemplate</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the position of a document template. Can be used recursively.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__getprinterdevicedefaults">CWinApp::GetPrinterDeviceDefaults</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the printer device defaults.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__getprofilebinary">CWinApp::GetProfileBinary</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves binary data from an entry in the application's .INI file.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__getprofileint">CWinApp::GetProfileInt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves an integer from an entry in the application's .INI file.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__getprofilestring">CWinApp::GetProfileString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a string from an entry in the application's .INI file.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__getsectionkey">CWinApp::GetSectionKey</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns key for HKEY_CURRENT_USER\"Software"\RegistryKey\AppName\lpszSection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__hideapplication">CWinApp::HideApplication</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Hides the application before closing all documents.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__htmlhelp">CWinApp::HtmlHelp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Calls the <unmanagedCodeEntityReference>HTMLHelp</unmanagedCodeEntityReference> Windows function.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__initinstance">CWinApp::InitInstance</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to perform Windows instance initialization, such as creating your window objects.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__istaskbarinteractionenabled">CWinApp::IsTaskbarInteractionEnabled</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Tells whether Windows 7 Taskbar interaction is enabled. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__loadcursor">CWinApp::LoadCursor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Loads a cursor resource.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__loadicon">CWinApp::LoadIcon</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Loads an icon resource.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__loadoemcursor">CWinApp::LoadOEMCursor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Loads a Windows OEM predefined cursor that the <legacyBold>OCR_</legacyBold> constants specify in WINDOWS.H.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__loadoemicon">CWinApp::LoadOEMIcon</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Loads a Windows OEM predefined icon that the <legacyBold>OIC_</legacyBold> constants specify in WINDOWS.H.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__loadstandardcursor">CWinApp::LoadStandardCursor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Loads a Windows predefined cursor that the <legacyBold>IDC_</legacyBold> constants specify in WINDOWS.H.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__loadstandardicon">CWinApp::LoadStandardIcon</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Loads a Windows predefined icon that the <legacyBold>IDI_</legacyBold> constants specify in WINDOWS.H.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__onddecommand">CWinApp::OnDDECommand</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework in response to a dynamic data exchange (DDE) execute command.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__onidle">CWinApp::OnIdle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to perform application-specific idle-time processing.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__opendocumentfile">CWinApp::OpenDocumentFile</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to open a document from a file.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__parsecommandline">CWinApp::ParseCommandLine</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Parses individual parameters and flags in the command line.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__pretranslatemessage">CWinApp::PreTranslateMessage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Filters messages before they are dispatched to the Windows functions                                         <externalLink> <linkText>TranslateMessage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms644955</linkUri>
                                        </externalLink> and                                         <externalLink> <linkText>DispatchMessage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms644934</linkUri>
                                        </externalLink>.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__processmessagefilter">CWinApp::ProcessMessageFilter</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Intercepts certain messages before they reach the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__processshellcommand">CWinApp::ProcessShellCommand</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Handles command-line arguments and flags.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__processwndprocexception">CWinApp::ProcessWndProcException</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Intercepts all unhandled exceptions thrown by the application's message and command handlers.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__register">CWinApp::Register</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Performs customized registration.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__registerwithrestartmanager">CWinApp::RegisterWithRestartManager</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Registers the application with the restart manager.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__reopenpreviousfilesatrestart">CWinApp::ReopenPreviousFilesAtRestart</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the restart manager reopens the files that were open when the application exited unexpectedly.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__restartinstance">CWinApp::RestartInstance</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Handles an application restart initiated by the restart manager.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__restoreautosavedfilesatrestart">CWinApp::RestoreAutosavedFilesAtRestart</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the restart manager restores the autosaved files when it restarts the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__run">CWinApp::Run</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Runs the default message loop. Override to customize the message loop.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__runautomated">CWinApp::RunAutomated</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Tests the application's command line for the                                         <system>/Automation</system> option. Obsolete. Instead, use the value in <legacyLink xlink:href="3e313ddb-0a82-4991-87ac-a27feff4668c#ccommandlineinfo__m_brunautomated">CCommandLineInfo::m_bRunAutomated</legacyLink> after calling <legacyLink xlink:href="#cwinapp__parsecommandline">ParseCommandLine</legacyLink>.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__runembedded">CWinApp::RunEmbedded</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Tests the application's command line for the                                         <system>/Embedding</system> option. Obsolete. Instead, use the value in <legacyLink xlink:href="3e313ddb-0a82-4991-87ac-a27feff4668c#ccommandlineinfo__m_brunembedded">CCommandLineInfo::m_bRunEmbedded</legacyLink> after calling <legacyLink xlink:href="#cwinapp__parsecommandline">ParseCommandLine</legacyLink>.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__saveallmodified">CWinApp::SaveAllModified</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Prompts the user to save all modified documents.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__selectprinter">CWinApp::SelectPrinter</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Selects a printer previously indicated by a user through a print dialog box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__sethelpmode">CWinApp::SetHelpMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets and initializes the type of help used by the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__supportsapplicationrecovery">CWinApp::SupportsApplicationRecovery</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the restart manager recovers an application that exited unexpectedly.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__supportsautosaveatinterval">CWinApp::SupportsAutosaveAtInterval</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the restart manager autosaves open documents at a regular interval.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__supportsautosaveatrestart">CWinApp::SupportsAutosaveAtRestart</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the restart manager autosaves any open documents when the application restarts.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__supportsrestartmanager">CWinApp::SupportsRestartManager</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the application supports the restart manager.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__unregister">CWinApp::Unregister</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Unregisters everything known to be registered by the <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> object.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__winhelp">CWinApp::WinHelp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Calls the <unmanagedCodeEntityReference>WinHelp</unmanagedCodeEntityReference> Windows function.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__writeprofilebinary">CWinApp::WriteProfileBinary</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Writes binary data to an entry in the application's .INI file.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__writeprofileint">CWinApp::WriteProfileInt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Writes an integer to an entry in the application's .INI file.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__writeprofilestring">CWinApp::WriteProfileString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Writes a string to an entry in the application's .INI file.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Protected Methods</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__enableshellopen">CWinApp::EnableShellOpen</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Allows the user to open data files from the Windows File Manager.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__loadstdprofilesettings">CWinApp::LoadStdProfileSettings</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Loads standard .INI file settings and enables the MRU file list feature.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__oncontexthelp">CWinApp::OnContextHelp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Handles SHIFT+F1 Help within the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__onfilenew">CWinApp::OnFileNew</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Implements the <unmanagedCodeEntityReference>ID_FILE_NEW</unmanagedCodeEntityReference> command.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__onfileopen">CWinApp::OnFileOpen</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Implements the <unmanagedCodeEntityReference>ID_FILE_OPEN</unmanagedCodeEntityReference> command.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__onfileprintsetup">CWinApp::OnFilePrintSetup</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Implements the <unmanagedCodeEntityReference>ID_FILE_PRINT_SETUP</unmanagedCodeEntityReference> command.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__onhelp">CWinApp::OnHelp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Handles F1 Help within the application (using the current context).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__onhelpfinder">CWinApp::OnHelpFinder</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Handles the <unmanagedCodeEntityReference>ID_HELP_FINDER</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ID_DEFAULT_HELP</unmanagedCodeEntityReference> commands.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__onhelpindex">CWinApp::OnHelpIndex</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Handles the <unmanagedCodeEntityReference>ID_HELP_INDEX</unmanagedCodeEntityReference> command and provides a default Help topic.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__onhelpusing">CWinApp::OnHelpUsing</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Handles the <unmanagedCodeEntityReference>ID_HELP_USING</unmanagedCodeEntityReference> command.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__registershellfiletypes">CWinApp::RegisterShellFileTypes</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Registers all the application's document types with the Windows File Manager.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__setappid">CWinApp::SetAppID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Explicitly sets Application User Model ID for the application. This method should be called before any user interface is presented to user (the best place is the application constructor).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__setregistrykey">CWinApp::SetRegistryKey</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Causes application settings to be stored in the registry instead of .INI files.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__unregistershellfiletypes">CWinApp::UnregisterShellFileTypes</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Unregisters all the application's document types with the Windows File Manager.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Data Members</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_bhelpmode">CWinApp::m_bHelpMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates if the user is in Help context mode (typically invoked with SHIFT+F1).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_ehelptype">CWinApp::m_eHelpType</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies the type of help used by the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_hinstance">CWinApp::m_hInstance</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Identifies the current instance of the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_lpcmdline">CWinApp::m_lpCmdLine</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Points to a null-terminated string that specifies the command line for the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_ncmdshow">CWinApp::m_nCmdShow</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies how the window is to be shown initially.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_pactivewnd">CWinApp::m_pActiveWnd</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Pointer to the main window of the container application when an OLE server is in-place active.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_pszappid">CWinApp::m_pszAppID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Application User Model ID.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_pszappname">CWinApp::m_pszAppName</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies the name of the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_pszexename">CWinApp::m_pszExeName</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The module name of the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_pszhelpfilepath">CWinApp::m_pszHelpFilePath</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The path to the application's Help file.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_pszprofilename">CWinApp::m_pszProfileName</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The application's .INI filename.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_pszregistrykey">CWinApp::m_pszRegistryKey</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Used to determine the full registry key for storing application profile settings.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Protected Data Members</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_dwrestartmanagersupportflags">CWinApp::m_dwRestartManagerSupportFlags</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Flags that determine how the restart manager behaves.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_nautosaveinterval">CWinApp::m_nAutosaveInterval</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The length of time in milliseconds between autosaves.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinapp__m_pdatarecoveryhandler">CWinApp::m_pDataRecoveryHandler</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Pointer to the data recovery handler for the application.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <languageReferenceRemarks>
        <content>
            <para>An application object provides member functions for initializing your application (and each instance of it) and for running the application.</para>
            <para>
                Each application that uses the Microsoft Foundation classes can only contain one object derived from <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference>. This object is constructed when other C++ global objects are constructed and is already available when Windows calls the <unmanagedCodeEntityReference>WinMain</unmanagedCodeEntityReference> function, which is supplied by the Microsoft Foundation Class Library. Declare your derived <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> object at the global level.
            </para>
            <para>
                When you derive an application class from <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference>, override the <legacyLink xlink:href="#cwinapp__initinstance">InitInstance</legacyLink> member function to create your application's main window object.
            </para>
            <para>
                In addition to the <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> member functions, the Microsoft Foundation Class Library provides the following global functions to access your <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> object and other global information:
            </para>
            <list class="bullet">
                <listItem>
                    <para> <legacyLink xlink:href="dd869fe6-157c-4317-a624-1e92830d7f83">AfxGetApp</legacyLink>   Obtains a pointer to the <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> object.
                    </para>
                </listItem>
                <listItem>
                    <para> <legacyLink xlink:href="3a2c97b9-e65c-4921-8f62-c7045f867732">AfxGetInstanceHandle</legacyLink>   Obtains a handle to the current application instance.
                    </para>
                </listItem>
                <listItem>
                    <para> <legacyLink xlink:href="d0eff6c4-f566-471a-96b7-a5a70a751a92">AfxGetResourceHandle</legacyLink>   Obtains a handle to the application's resources.
                    </para>
                </listItem>
                <listItem>
                    <para> <legacyLink xlink:href="970fa683-4af6-4107-92e0-e460c9eb823c">AfxGetAppName</legacyLink>   Obtains a pointer to a string containing the application's name. Alternately, if you have a pointer to the <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> object, use <unmanagedCodeEntityReference>m_pszExeName</unmanagedCodeEntityReference> to get the application's name.
                    </para>
                </listItem>
            </list>
            <para>
                See <legacyLink xlink:href="935822bb-d463-481b-a5f6-9719d68ed1d5">CWinApp: The Application Class</legacyLink> for more on the <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> class, including an overview of the following:
            </para>
            <list class="bullet">
                <listItem>
                    <para> <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference>-derived code written by the Application Wizard.
                    </para>
                </listItem>
                <listItem>
                    <para> <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference>'s role in the execution sequence of your application.
                    </para>
                </listItem>
                <listItem>
                    <para> <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference>'s default member function implementations.
                    </para>
                </listItem>
                <listItem>
                    <para> <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference>'s key overridables.
                    </para>
                </listItem>
            </list>
            <para>
                The <legacyBold>m_hPrevInstance</legacyBold> data member no longer exists. For information on detecting a previous instance of <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference>, see the Knowledge Base article "How To Identify a Previous Instance of an Application" (KB106385) at                 <externalLink> <linkText>http://support.microsoft.com/default.aspx?scid=kb;en-us;106385</linkText> <linkUri>http://support.microsoft.com/default.aspx?scid=kb;en-us;106385</linkUri>
                </externalLink>.
            </para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">CCmdTarget</legacyLink>
            </para>
            <para> <legacyLink xlink:href="10cdc294-4057-4e76-ac7c-a8967a89af0b">CWinThread</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxwin.h
            </para>
        </content>
    </requirements>
    <section address="cwinapp__adddoctemplate">
        <!--9bc1fc63-1cff-4301-b8e9-c4bdda3c8fea-->
        <title>CWinApp::AddDocTemplate</title>
        <content>
            <para>Call this member function to add a document template to the list of available document templates that the application maintains.</para>
            <legacySyntax>void AddDocTemplate( CDocTemplate* pTemplate );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pTemplate</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                A pointer to the <unmanagedCodeEntityReference>CDocTemplate</unmanagedCodeEntityReference> to be added.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        You should add all document templates to an application before you call <legacyLink xlink:href="#cwinapp__registershellfiletypes">RegisterShellFileTypes</legacyLink>.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#35</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__addtorecentfilelist">
        <!--772cc033-bb63-4841-b62f-667b9c8559d2-->
        <title>CWinApp::AddToRecentFileList</title>
        <content>
            <para>
                Call this member function to add <parameterReference>lpszPathName</parameterReference> to the MRU file list.
            </para>
            <legacySyntax>virtual void AddToRecentFileList( LPCTSTR lpszPathName );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszPathName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The path of the file.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        You should call the <legacyLink xlink:href="#cwinapp__loadstdprofilesettings">LoadStdProfileSettings</legacyLink> member function to load the current MRU file list before you use this member function.
                    </para>
                    <para>The framework calls this member function when it opens a file or executes the Save As command to save a file with a new name.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#36</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__applicationrecoverycallback">
        <!--477ec2db-40ea-4e42-9710-de1596cdb1fe-->
        <title>CWinApp::ApplicationRecoveryCallback</title>
        <content>
            <para>Called by the framework when the application unexpectedly exits.</para>
            <legacySyntax>
                virtual DWORD ApplicationRecoveryCallback(
                LPVOID lpvParam );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            [in] <parameterReference>lpvParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Reserved for future use.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>0 if this method is successful; nonzero if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If your application supports the restart manager, the framework calls this function when your application unexpectedly exits.</para>
                    <para>
                        The default implementation of <unmanagedCodeEntityReference>ApplicationRecoveryCallback</unmanagedCodeEntityReference> uses the <unmanagedCodeEntityReference>CDataRecoveryHandler</unmanagedCodeEntityReference> to save the list of currently open documents to the registry. This method does not autosave any files.
                    </para>
                    <para>
                        To customize the behavior, override this function in a derived <link xlink:href="e426a3cd-0d15-40d6-bd55-beaa5feb2343">CWinApp Class</link> or pass your own application recovery method as a parameter to <link xlink:href="#cwinapp__registerwithrestartmanager">CWinApp::RegisterWithRestartManager</link>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__closealldocuments">
        <!--dde4acc5-028b-4b21-a08a-f7c5b50ac2b6-->
        <title>CWinApp::CloseAllDocuments</title>
        <content>
            <para>Call this member function to close all open documents before exiting.</para>
            <legacySyntax>void CloseAllDocuments( BOOL bEndSession );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bEndSession</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies whether or not the Windows session is being ended. It is <legacyBold>TRUE</legacyBold> if the session is being ended; otherwise <legacyBold>FALSE</legacyBold>.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Call <legacyLink xlink:href="#cwinapp__hideapplication">HideApplication</legacyLink> before calling <unmanagedCodeEntityReference>CloseAllDocuments</unmanagedCodeEntityReference>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__createprinterdc">
        <!--828b3772-0797-4ed6-a60a-685a19421d1f-->
        <title>CWinApp::CreatePrinterDC</title>
        <content>
            <para>Call this member function to create a printer device context (DC) from the selected printer.</para>
            <legacySyntax>BOOL CreatePrinterDC( CDC&amp; dc );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a printer device context.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the printer device context is created successfully; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>CreatePrinterDC</unmanagedCodeEntityReference> initializes the device context that you pass in by reference, so you can use it to print.
                    </para>
                    <para>
                        If the function is successful, when you have finished printing, you must destroy the device context. You can let the destructor of the <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2">CDC</legacyLink> object do it, or you can do it explicitly by calling <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2#cdc__deletedc">CDC::DeleteDC</legacyLink>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__cwinapp">
        <!--c0d716b3-5ea9-43ce-8398-ababcaed7d49-->
        <title>CWinApp::CWinApp</title>
        <content>
            <para>
                Constructs a <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> object and passes <parameterReference>lpszAppName</parameterReference> to be stored as the application name.
            </para>
            <legacySyntax>CWinApp( LPCTSTR lpszAppName = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszAppName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                A null-terminated string that contains the application name that Windows uses. If this argument is not supplied or is <legacyBold>NULL</legacyBold>, <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> uses the resource string <legacyBold>AFX_IDS_APP_TITLE</legacyBold> or the filename of the executable file.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        You should construct one global object of your <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference>-derived class. You can have only one <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> object in your application. The constructor stores a pointer to the <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> object so that <unmanagedCodeEntityReference>WinMain</unmanagedCodeEntityReference> can call the object's member functions to initialize and run the application.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__delregtree">
        <!--60745561-388a-4976-a519-4762590e196d-->
        <title>CWinApp::DelRegTree</title>
        <content>
            <para>Deletes a specific registry key and all its subkeys.</para>
            <legacySyntax>LONG DelRegTree(
    HKEY hParentKey,
    const CString&amp; strKeyName );

LONG DelRegTree(
    HKEY hParentKey, const CString&amp; strKeyName, CAtlTransactionManager* pTM = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>hParentKey</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Handle to a registry key.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>strKeyName</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The name of the registry key to be deleted.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>pTM</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to CAtlTransactionManager object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the function succeeds, the return value is ERROR_SUCCESS. If the function fails, the return value is a nonzero error code defined in Winerror.h.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function to delete the specified key and its subkeys.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__domessagebox">
        <!--ef07f405-632c-4283-a448-c40e2b96d74c-->
        <title>CWinApp::DoMessageBox</title>
        <content>
            <para>
                The framework calls this member function to implement a message box for the global function <legacyLink xlink:href="d66d0328-cdcc-48f6-96a4-badf089099c8">AfxMessageBox</legacyLink>.
            </para>
            <legacySyntax>virtual int DoMessageBox(
    LPCTSTR lpszPrompt,
    UINT nType,
    UINT nIDPrompt );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpszPrompt</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Address of text in the message box.</para>
                        </definition>
                        <definedTerm> <parameterReference>nType</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                The message box <legacyLink xlink:href="d87014c5-4ea4-4950-a27e-7bcdda67be7d">style</legacyLink>.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>nIDPrompt</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An index to a Help context string.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        Returns the same values as <unmanagedCodeEntityReference>AfxMessageBox</unmanagedCodeEntityReference>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Do not call this member function to open a message box; use <unmanagedCodeEntityReference>AfxMessageBox</unmanagedCodeEntityReference> instead.
                    </para>
                    <para>
                        Override this member function to customize your application-wide processing of <unmanagedCodeEntityReference>AfxMessageBox</unmanagedCodeEntityReference> calls.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__dowaitcursor">
        <!--15697c83-a43d-4f22-a710-08e0d63e1b6b-->
        <title>CWinApp::DoWaitCursor</title>
        <content>
            <para>
                This member function is called by the framework to implement <legacyLink xlink:href="5dfae2ff-d7b6-4383-b0ad-91e0868c67b3">CWaitCursor</legacyLink>, <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13#ccmdtarget__beginwaitcursor">CCmdTarget::BeginWaitCursor</legacyLink>, <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13#ccmdtarget__endwaitcursor">CCmdTarget::EndWaitCursor</legacyLink>, and <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13#ccmdtarget__restorewaitcursor">CCmdTarget::RestoreWaitCursor</legacyLink>.
            </para>
            <legacySyntax>virtual void DoWaitCursor( int nCode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nCode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If this parameter is 1, a wait cursor appears. If 0, the wait cursor is restored without incrementing the reference count. If –1, the wait cursor ends.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The default implements an hourglass cursor. <unmanagedCodeEntityReference>DoWaitCursor</unmanagedCodeEntityReference> maintains a reference count. When positive, the hourglass cursor is displayed.
                    </para>
                    <para>
                        While you would not normally call <unmanagedCodeEntityReference>DoWaitCursor</unmanagedCodeEntityReference> directly, you could override this member function to change the wait cursor or to do additional processing while the wait cursor is displayed.
                    </para>
                    <para>
                        For an easier, more streamlined way to implement a wait cursor, use <unmanagedCodeEntityReference>CWaitCursor</unmanagedCodeEntityReference>.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#37</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__enabled2dsupport">
        <!--9c4941e3-afc7-4cb4-8520-0cd2ac91166b-->
        <title>CWinApp::EnableD2DSupport</title>
        <content>
            <para> <token>dev10_sp1required</token>
            </para>
            <para>Enables application D2D support. Call this method before the main window is initialized.</para>
            <legacySyntax>
                BOOL EnableD2DSupport(
                D2D1_FACTORY_TYPE d2dFactoryType = D2D1_FACTORY_TYPE_SINGLE_THREADED,
                DWRITE_FACTORY_TYPE writeFactoryType = DWRITE_FACTORY_TYPE_SHARED
                );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>d2dFactoryType</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The threading model of the D2D factory and the resources it creates.</para>
                        </definition>
                        <definedTerm> <parameterReference>writeFactoryType</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A value that specifies whether the write factory object will be shared or isolated</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns TRUE if D2D support was enabled, FALSE - otherwise</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__enablehtmlhelp">
        <!--9be066d3-9c41-449e-92bb-866616a51224-->
        <title>CWinApp::EnableHtmlHelp</title>
        <content>
            <para>
                Call this member function from within the constructor of your <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference>-derived class to use HTMLHelp for your application's help.
            </para>
            <legacySyntax>void EnableHtmlHelp();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cwinapp__enableshellopen">
        <!--d73c8842-493d-4948-b2ea-4c68308b1be9-->
        <title>CWinApp::EnableShellOpen</title>
        <content>
            <para>
                Call this function, typically from your <unmanagedCodeEntityReference>InitInstance</unmanagedCodeEntityReference> override, to enable your application's users to open data files when they double-click the files from within the Windows File Manager.
            </para>
            <legacySyntax>void EnableShellOpen();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Call the <unmanagedCodeEntityReference>RegisterShellFileTypes</unmanagedCodeEntityReference> member function in conjunction with this function, or provide a .REG file with your application for manual registration of document types.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#38</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__enabletaskbarinteraction">
        <!--f15b28c1-247c-4d69-acd8-9bfa96cd604f-->
        <title>CWinApp::EnableTaskbarInteraction</title>
        <content>
            <para>Enables Taskbar interaction.</para>
            <legacySyntax>
                BOOL EnableTaskbarInteraction(
                BOOL bEnable = TRUE
                );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies whether interaction with Windows 7 taskbar should be enabled ( <languageKeyword>TRUE</languageKeyword>), or disabled ( <languageKeyword>FALSE</languageKeyword>).
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        Returns <languageKeyword>TRUE</languageKeyword> if taskbar interaction can be enabled or disabled.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        This method must be called before creation of main window, otherwise it asserts and returns <languageKeyword>FALSE</languageKeyword>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__exitinstance">
        <!--b4ddbbee-88eb-41cf-91b5-03cf5791d747-->
        <title>CWinApp::ExitInstance</title>
        <content>
            <para>
                Called by the framework from within the <legacyBold>Run</legacyBold> member function to exit this instance of the application.
            </para>
            <legacySyntax>virtual int ExitInstance();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        The application's exit code; 0 indicates no errors, and values greater than 0 indicate an error. This value is used as the return value from <unmanagedCodeEntityReference>WinMain</unmanagedCodeEntityReference>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Do not call this member function from anywhere but within the <legacyBold>Run</legacyBold> member function.
                    </para>
                    <para>The default implementation of this function writes framework options to the application's .INI file. Override this function to clean up when your application terminates.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#39</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__getapplicationrecoveryparameter">
        <!--d3d093ca-4509-4fb3-a34f-9b7ed1f419c0-->
        <title>CWinApp::GetApplicationRecoveryParameter</title>
        <content>
            <para>Retrieves the input parameter for the application recovery method.</para>
            <legacySyntax>virtual LPVOID GetApplicationRecoveryParameter();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The default input parameter for the application recovery method.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The default behavior of this function returns <languageKeyword>NULL</languageKeyword>.
                    </para>
                    <para>
                        For more information, see <link xlink:href="#cwinapp__applicationrecoverycallback">CWinApp::ApplicationRecoveryCallback</link>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__getapplicationrecoverypinginterval">
        <!--005df5e6-dc48-45d1-8142-e9284427303d-->
        <title>CWinApp::GetApplicationRecoveryPingInterval</title>
        <content>
            <para>Returns the length of time that the restart manager waits for the recovery callback function to return.</para>
            <legacySyntax>virtual DWORD GetApplicationRecoveryPingInterval();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The length of time in milliseconds.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        When an application that is registered with the restart manager exits unexpectedly, the application tries to save open documents and calls the recovery callback function. The default recovery callback function is <link xlink:href="#cwinapp__applicationrecoverycallback">CWinApp::ApplicationRecoveryCallback</link>.
                    </para>
                    <para>
                        The length of time that the framework waits for the recovery callback function to return is the ping interval. You can customize the ping interval by overriding <unmanagedCodeEntityReference>CWinApp::GetApplicationRecoveryPingInterval</unmanagedCodeEntityReference> or by providing a custom value to <unmanagedCodeEntityReference>RegisterWithRestartManager</unmanagedCodeEntityReference>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__getapplicationrestartflags">
        <!--83661f1e-d295-44a8-8ae1-b5d45d1e62cc-->
        <title>CWinApp::GetApplicationRestartFlags</title>
        <content>
            <para>Returns the flags for the restart manager.</para>
            <legacySyntax>virtual DWORD GetApplicationRestartFlags();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The flags for the restart manager. The default implementation returns 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The flags for the restart manager have no effect with the default implementation. They are provided for future use.</para>
                    <para>
                        You set the flags when you register the application with the restart manager by using <link xlink:href="#cwinapp__registerwithrestartmanager">CWinApp::RegisterWithRestartManager</link>.
                    </para>
                    <para>The possible values for the restart manager flags are as follows:</para>
                    <list class="bullet">
                        <listItem>
                            <para> <unmanagedCodeEntityReference>RESTART_NO_CRASH</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>RESTART_NO_HANG</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>RESTART_NO_PATCH</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>RESTART_NO_REBOOT</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                    </list>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__getappregistrykey">
        <!--451162d3-7941-4fe8-ba5e-1a37d1c5d666-->
        <title>CWinApp::GetAppRegistryKey</title>
        <content>
            <para>Returns the key for HKEY_CURRENT_USER\"Software"\RegistryKey\ProfileName.</para>
            <legacySyntax>
                HKEY GetAppRegistryKey(
                CAtlTransactionManager* pTM = NULL
                );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pTM</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Pointer to a <unmanagedCodeEntityReference>CAtlTransactionManager</unmanagedCodeEntityReference> object.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        Application key if the function succeeds; otherwise <languageKeyword>NULL</languageKeyword>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cwinapp__getdatarecoveryhandler">
        <!--e011b4f9-4a2f-4a43-b5e0-54e876a54ee0-->
        <title>CWinApp::GetDataRecoveryHandler</title>
        <content>
            <para>Gets the data recovery handler for this instance of the application.</para>
            <legacySyntax>virtual CDataRecoveryHandler *GetDataRecoveryHandler();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The data recovery handler for this instance of the application.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Each application that uses the restart manager must have one instance of the <link xlink:href="7794802c-e583-4eba-90b9-2fed1a161f9c">CDataRecoveryHandler Class</link>. This class is responsible for monitoring open documents and autosaving files. The behavior of the <unmanagedCodeEntityReference>CDataRecoveryHandler</unmanagedCodeEntityReference> depends on the configuration of the restart manager. For more information, see <link xlink:href="7794802c-e583-4eba-90b9-2fed1a161f9c">CDataRecoveryHandler Class</link>.
                    </para>
                    <para>
                        This method returns <languageKeyword>NULL</languageKeyword> on operating systems earlier than <token>wiprlhext</token>. The restart manager is not supported on operating systems earlier than <token>wiprlhext</token>.
                    </para>
                    <para>If the application does not currently have a data recovery handler, this method creates one and returns a pointer to it.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__getfirstdoctemplateposition">
        <!--c732674b-780f-499a-945d-7ff495cf6626-->
        <title>CWinApp::GetFirstDocTemplatePosition</title>
        <content>
            <para>Gets the position of the first document template in the application.</para>
            <legacySyntax>POSITION GetFirstDocTemplatePosition() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        A <legacyBold>POSITION</legacyBold> value that can be used for iteration or object pointer retrieval; <legacyBold>NULL</legacyBold> if the list is empty.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Use the <legacyBold>POSITION</legacyBold> value returned in a call to <legacyLink xlink:href="#cwinapp__getnextdoctemplate">GetNextDocTemplate</legacyLink> to get the first <legacyLink xlink:href="14b41a1f-bf9d-4eac-b6a8-4c54ffcc77f6">CDocTemplate</legacyLink> object.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__gethelpmode">
        <!--38009eed-affe-4b57-9067-20eb5e8f9a8f-->
        <title>CWinApp::GetHelpMode</title>
        <content>
            <para>Retrieves the type of help used by the application.</para>
            <legacySyntax>AFX_HELP_TYPE GetHelpMode();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        The help type used by the application. See <legacyLink xlink:href="#cwinapp__m_ehelptype">CWinApp::m_eHelpType</legacyLink> for more information.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__getnextdoctemplate">
        <!--ed60a32e-e37b-4a32-9efa-ce1454876286-->
        <title>CWinApp::GetNextDocTemplate</title>
        <content>
            <para>
                Gets the document template identified by <parameterReference>pos</parameterReference>, then sets <parameterReference>pos</parameterReference> to the <legacyBold>POSITION</legacyBold> value.
            </para>
            <legacySyntax>CDocTemplate* GetNextDocTemplate( POSITION&amp; pos ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pos</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                A reference to a <legacyBold>POSITION</legacyBold> value returned by a previous call to <unmanagedCodeEntityReference>GetNextDocTemplate</unmanagedCodeEntityReference> or <legacyLink xlink:href="#cwinapp__getfirstdoctemplateposition">GetFirstDocTemplatePosition</legacyLink>. The value is updated to the next position by this call.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        A pointer to a <legacyLink xlink:href="14b41a1f-bf9d-4eac-b6a8-4c54ffcc77f6">CDocTemplate</legacyLink> object.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        You can use <unmanagedCodeEntityReference>GetNextDocTemplate</unmanagedCodeEntityReference> in a forward iteration loop if you establish the initial position with a call to <unmanagedCodeEntityReference>GetFirstDocTemplatePosition</unmanagedCodeEntityReference>.
                    </para>
                    <para>
                        You must ensure that your <legacyBold>POSITION</legacyBold> value is valid. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.
                    </para>
                    <para>
                        If the retrieved document template is the last available, then the new value of <parameterReference>pos</parameterReference> is set to <legacyBold>NULL</legacyBold>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__getprinterdevicedefaults">
        <!--fac45f81-11e7-4a72-acdf-36837ac026e4-->
        <title>CWinApp::GetPrinterDeviceDefaults</title>
        <content>
            <para>Call this member function to prepare a printer device context for printing.</para>
            <legacySyntax>BOOL GetPrinterDeviceDefaults( struct tagPDA* pPrintDlg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>pPrintDlg</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>
                                A pointer to a                                 <externalLink> <linkText>PRINTDLG</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms646843</linkUri>
                                </externalLink> structure.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Retrieves the current printer defaults from the Windows .INI file as necessary, or uses the last printer configuration set by the user in Print Setup.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#40</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__getprofilebinary">
        <!--cd8af8a3-ed24-4691-a631-a33baba1464c-->
        <title>CWinApp::GetProfileBinary</title>
        <content>
            <para>Call this member function to retrieve binary data from an entry within a specified section of the application's registry or .INI file.</para>
            <legacySyntax>BOOL GetProfileBinary(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPBYTE* ppData,
    UINT* pBytes );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpszSection</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that specifies the section containing the entry.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lpszEntry</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that contains the entry whose value is to be retrieved.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>ppData</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to a pointer that will receive the address of the data.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>pBytes</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to a UINT that will receive the size of the data (in bytes).</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        This member function is not case sensitive, so the strings in the                         <legacyItalic>lpszSection</legacyItalic> and                         <legacyItalic>lpszEntry</legacyItalic> parameters may differ in case.
                    </para>
                    <alert class="note">
                        <para> <legacyBold>GetProfileBinary</legacyBold> allocates a buffer and returns its address in *                            <legacyItalic>ppData</legacyItalic>. The caller is responsible for freeing the buffer using <legacyBold>delete []</legacyBold>.
                        </para>
                    </alert>
                    <alert class="security note">
                        <para>
                            The data returned by this function is not necessarily NULL terminated, and the caller must perform validation. For more information, see                             <externalLink> <linkText>Avoiding Buffer Overruns</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms717795</linkUri>
                            </externalLink>.
                        </para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#41</codeReference>
                    
                            <para>
                                For an additional example, see <legacyLink xlink:href="#cwinapp__writeprofilebinary">CWinApp::WriteProfileBinary</legacyLink>.
                            </para>
                        
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__getprofileint">
        <!--d3bdb3b1-a7c3-4151-a5b6-45beca2f76e1-->
        <title>CWinApp::GetProfileInt</title>
        <content>
            <para>Call this member function to retrieve the value of an integer from an entry within a specified section of the application's registry or .INI file.</para>
            <legacySyntax>UINT GetProfileInt(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    int nDefault );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszSection</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that specifies the section containing the entry.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszEntry</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that contains the entry whose value is to be retrieved.</para>
                        </definition>
                        <definedTerm> <parameterReference>nDefault</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the default value to return if the framework cannot find the entry.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        The integer value of the string that follows the specified entry if the function is successful. The return value is the value of the <parameterReference>nDefault</parameterReference> parameter if the function does not find the entry. The return value is 0 if the value that corresponds to the specified entry is not an integer.
                    </para>
                    <para>
                        This member function supports hexadecimal notation for the value in the .INI file. When you retrieve a signed integer, you should cast the value into an <languageKeyword>int</languageKeyword>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        This member function is not case sensitive, so the strings in the <parameterReference>lpszSection</parameterReference> and <parameterReference>lpszEntry</parameterReference> parameters may differ in case.
                    </para>
                    <alert class="security note">
                        <para>
                            The data returned by this function is not necessarily NULL terminated, and the caller must perform validation. For more information, see                             <externalLink> <linkText>Avoiding Buffer Overruns</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms717795</linkUri>
                            </externalLink>.
                        </para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#42</codeReference>
                    
                            <para>
                                For an additional example, see <legacyLink xlink:href="#cwinapp__writeprofileint">CWinApp::WriteProfileInt</legacyLink>.
                            </para>
                       
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__getprofilestring">
        <!--69c1cefd-8ee2-436d-90d4-50dc201d04fd-->
        <title>CWinApp::GetProfileString</title>
        <content>
            <para>Call this member function to retrieve the string associated with an entry within the specified section in the application's registry or .INI file.</para>
            <legacySyntax>CString GetProfileString(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPCTSTR lpszDefault = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszSection</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that specifies the section containing the entry.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszEntry</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to a null-terminated string that contains the entry whose string is to be retrieved. This value must not be <legacyBold>NULL</legacyBold>.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>lpszDefault</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the default string value for the given entry if the entry cannot be found in the initialization file.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        The return value is the string from the application's .INI file or <parameterReference>lpszDefault</parameterReference> if the string cannot be found. The maximum string length supported by the framework is <unmanagedCodeEntityReference>_MAX_PATH</unmanagedCodeEntityReference>. If <parameterReference>lpszDefault</parameterReference> is <legacyBold>NULL</legacyBold>, the return value is an empty string.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <alert class="security note">
                        <para>
                            The data returned by this function is not necessarily NULL terminated, and the caller must perform validation. For more information, see                             <externalLink> <linkText>Avoiding Buffer Overruns</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms717795</linkUri>
                            </externalLink>.
                        </para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#43</codeReference>
                    
                            <para>
                                For another example, see the example for <legacyLink xlink:href="#cwinapp__getprofileint">CWinApp::GetProfileInt</legacyLink>.
                            </para>
                        
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__getsectionkey">
        <!--591f75b6-6393-41ad-b891-9791e9ee31ae-->
        <title>CWinApp::GetSectionKey</title>
        <content>
            <para>Returns the key for HKEY_CURRENT_USER\"Software"\RegistryKey\AppName\lpszSection.</para>
            <legacySyntax>
                HKEY GetSectionKey(
                LPCTSTR lpszSection,
                CAtlTransactionManager* pTM = NULL
                );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszSection</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The name of the key to be obtained.</para>
                        </definition>
                        <definedTerm> <parameterReference>pTM</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Pointer to a <unmanagedCodeEntityReference>CAtlTransactionManager</unmanagedCodeEntityReference> object.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        Section key if the function succeeds; otherwise <languageKeyword>NULL</languageKeyword>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cwinapp__hideapplication">
        <!--41028715-1180-47be-9ff1-a6f810c0f590-->
        <title>CWinApp::HideApplication</title>
        <content>
            <para>Call this member function to hide an application before closing the open documents.</para>
            <legacySyntax>void HideApplication();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="cwinapp__htmlhelp">
        <!--a1201f03-ae9d-4c50-9bae-e53aa23dcde8-->
        <title>CWinApp::HtmlHelp</title>
        <content>
            <para>Call this member function to invoke the HTMLHelp application.</para>
            <legacySyntax>virtual void HtmlHelp(
    DWORD_PTR dwData,
    UINT nCmd = 0x000F  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies additional data. The value used depends on the value of the <parameterReference>nCmd</parameterReference> parameter.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>nCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies the type of help requested. For a list of possible values and how they affect the <parameterReference>dwData</parameterReference> parameter, see the <parameterReference>uCommand</parameterReference> parameter described in <legacyLink xlink:href="vsconhowcallingthehtmlhelpapi">About the HTMLHelp API Function</legacyLink> in the <token>winSDK</token>.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework also calls this function to invoke the HTMLHelp application.</para>
                    <para>The framework will automatically close the HTMLHelp application when your application terminates.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__initinstance">
        <!--0dcf01bb-276d-4615-ba6b-ef9bafaa80ba-->
        <title>CWinApp::InitInstance</title>
        <content>
            <para>Windows allows several copies of the same program to run at the same time.</para>
            <legacySyntax>virtual BOOL InitInstance();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if initialization is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Application initialization is conceptually divided into two sections: one-time application initialization that is done the first time the program runs, and instance initialization that runs each time a copy of the program runs, including the first time. The framework's implementation of <unmanagedCodeEntityReference>WinMain</unmanagedCodeEntityReference> calls this function.
                    </para>
                    <para>
                        Override <unmanagedCodeEntityReference>InitInstance</unmanagedCodeEntityReference> to initialize each new instance of your application running under Windows. Typically, you override <unmanagedCodeEntityReference>InitInstance</unmanagedCodeEntityReference> to construct your main window object and set the <unmanagedCodeEntityReference>CWinThread::m_pMainWnd</unmanagedCodeEntityReference> data member to point to that window. For more information on overriding this member function, see <legacyLink xlink:href="935822bb-d463-481b-a5f6-9719d68ed1d5">CWinApp: The Application Class</legacyLink>.
                    </para>
                    <alert class="note">
                        <para>
                            MFC applications must be initialized as single threaded apartment (STA). If you call                             <externalLink> <linkText>CoInitializeEx</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms695279</linkUri>
                            </externalLink> in your <unmanagedCodeEntityReference>InitInstance</unmanagedCodeEntityReference> override, specify <unmanagedCodeEntityReference>COINIT_APARTMENTTHREADED</unmanagedCodeEntityReference> (rather than <unmanagedCodeEntityReference>COINIT_MULTITHREADED</unmanagedCodeEntityReference>). For more information, see PRB: MFC Application Stops Responding When You Initialize the Application as a Multithreaded Apartment (828643) at                             <externalLink> <linkText>http://support.microsoft.com/default.aspx?scid=kb;en-us;828643</linkText> <linkUri>http://support.microsoft.com/default.aspx?scid=kb;en-us;828643</linkUri>
                            </externalLink>.
                        </para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCListView#9</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__istaskbarinteractionenabled">
        <!--4fceafac-3600-4197-8f4b-03f44a83d605-->
        <title>CWinApp::IsTaskbarInteractionEnabled</title>
        <content>
            <para>Tells whether Windows 7 Taskbar interaction is enabled.</para>
            <legacySyntax>virtual BOOL IsTaskbarInteractionEnabled();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        Returns <languageKeyword>TRUE</languageKeyword> if <unmanagedCodeEntityReference>EnableTaskbarInteraction</unmanagedCodeEntityReference> has been called and the Operating System is Windows 7 or higher.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Taskbar interaction means that MDI application displays the content of MDI children in separate tabbed thumbnails that appear when the mouse pointer is over the application taskbar button.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__loadcursor">
        <!--d4131bba-5703-4bcc-8d11-a45a458efbd4-->
        <title>CWinApp::LoadCursor</title>
        <content>
            <para>
                Loads the cursor resource named by <parameterReference>lpszResourceName</parameterReference> or specified by <parameterReference>nIDResource</parameterReference> from the current executable file.
            </para>
            <legacySyntax>HCURSOR LoadCursor( LPCTSTR lpszResourceName ) const;

HCURSOR LoadCursor( UINT nIDResource ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszResourceName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to a null-terminated string that contains the name of the cursor resource. You can use a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> for this argument.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>nIDResource</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                ID of the cursor resource. For a list of resources, see                                 <externalLink> <linkText>LoadCursor</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms648391</linkUri>
                                </externalLink> in the <token>winSDK</token>.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        A handle to a cursor if successful; otherwise <legacyBold>NULL</legacyBold>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>LoadCursor</unmanagedCodeEntityReference> loads the cursor into memory only if it has not been previously loaded; otherwise, it retrieves a handle of the existing resource.
                    </para>
                    <para>
                        Use the <legacyLink xlink:href="#cwinapp__loadstandardcursor">LoadStandardCursor</legacyLink> or <legacyLink xlink:href="#cwinapp__loadoemcursor">LoadOEMCursor</legacyLink> member function to access the predefined Windows cursors.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#44</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__loadicon">
        <!--83b01cc2-8ea0-4d65-8095-a6f7fe0bf812-->
        <title>CWinApp::LoadIcon</title>
        <content>
            <para>
                Loads the icon resource named by <parameterReference>lpszResourceName</parameterReference> or specified by <parameterReference>nIDResource</parameterReference> from the executable file.
            </para>
            <legacySyntax>HICON LoadIcon( LPCTSTR lpszResourceName ) const;

HICON LoadIcon( UINT nIDResource ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszResourceName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to a null-terminated string that contains the name of the icon resource. You can also use a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> for this argument.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>nIDResource</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>ID number of the icon resource.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        A handle to an icon if successful; otherwise <legacyBold>NULL</legacyBold>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>LoadIcon</unmanagedCodeEntityReference> loads the icon only if it has not been previously loaded; otherwise, it retrieves a handle of the existing resource.
                    </para>
                    <para>
                        You can use the <legacyLink xlink:href="#cwinapp__loadstandardicon">LoadStandardIcon</legacyLink> or <legacyLink xlink:href="#cwinapp__loadoemicon">LoadOEMIcon</legacyLink> member function to access the predefined Windows icons.
                    </para>
                    <alert class="note">
                        <para>
                            This member function calls the Win32 API function                             <externalLink> <linkText>LoadIcon</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms648072</linkUri>
                            </externalLink>, which can only load an icon whose size conforms to the <legacyBold>SM_CXICON</legacyBold> and <legacyBold>SM_CYICON</legacyBold> system metric values.
                        </para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__loadoemcursor">
        <!--ea360729-97aa-456e-a4d1-92397a370952-->
        <title>CWinApp::LoadOEMCursor</title>
        <content>
            <para>
                Loads the Windows predefined cursor resource specified by <parameterReference>nIDCursor</parameterReference>.
            </para>
            <legacySyntax>HCURSOR LoadOEMCursor( UINT nIDCursor ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIDCursor</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                An <legacyBold>OCR_</legacyBold> manifest constant identifier that specifies a predefined Windows cursor. You must have <legacyBold>#define OEMRESOURCE</legacyBold> before <legacyBold>#include &lt;afxwin.h&gt;</legacyBold> to gain access to the <legacyBold>OCR_</legacyBold> constants in WINDOWS.H.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        A handle to a cursor if successful; otherwise <legacyBold>NULL</legacyBold>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Use the <unmanagedCodeEntityReference>LoadOEMCursor</unmanagedCodeEntityReference> or <legacyLink xlink:href="#cwinapp__loadstandardcursor">LoadStandardCursor</legacyLink> member function to access the predefined Windows cursors.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#45</codeReference>
                    <codeReference>NVC_MFCWindowing#46</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__loadoemicon">
        <!--194d7379-e000-40e2-bab0-e1b63881b1ef-->
        <title>CWinApp::LoadOEMIcon</title>
        <content>
            <para>
                Loads the Windows predefined icon resource specified by <parameterReference>nIDIcon</parameterReference>.
            </para>
            <legacySyntax>HICON LoadOEMIcon( UINT nIDIcon ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIDIcon</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                An <legacyBold>OIC_</legacyBold> manifest constant identifier that specifies a predefined Windows icon. You must have <legacyBold>#define OEMRESOURCE</legacyBold> before <legacyBold>#include &lt;afxwin.h&gt;</legacyBold> to access the <legacyBold>OIC_</legacyBold> constants in WINDOWS.H.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        A handle to an icon if successful; otherwise <legacyBold>NULL</legacyBold>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Use the <unmanagedCodeEntityReference>LoadOEMIcon</unmanagedCodeEntityReference> or <legacyLink xlink:href="#cwinapp__loadstandardicon">LoadStandardIcon</legacyLink> member function to access the predefined Windows icons.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__loadstandardcursor">
        <!--ddcd46bb-459d-41b2-a080-b550de736299-->
        <title>CWinApp::LoadStandardCursor</title>
        <content>
            <para>
                Loads the Windows predefined cursor resource that <parameterReference>lpszCursorName</parameterReference> specifies.
            </para>
            <legacySyntax>HCURSOR LoadStandardCursor( LPCTSTR lpszCursorName ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszCursorName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                An <legacyBold>IDC_</legacyBold> manifest constant identifier that specifies a predefined Windows cursor. These identifiers are defined in WINDOWS.H. The following list shows the possible predefined values and meanings for <parameterReference>lpszCursorName</parameterReference>:
                            </para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>IDC_ARROW</legacyBold>   Standard arrow cursor
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>IDC_IBEAM</legacyBold>   Standard text-insertion cursor
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>IDC_WAIT</legacyBold>   Hourglass cursor used when Windows performs a time-consuming task
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>IDC_CROSS</legacyBold>   Cross-hair cursor for selection
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>IDC_UPARROW</legacyBold>   Arrow that points straight up
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>IDC_SIZE</legacyBold>   Obsolete and unsupported; use <legacyBold>IDC_SIZEALL</legacyBold>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>IDC_SIZEALL</legacyBold>   A four-pointed arrow. The cursor to use to resize a window.
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>IDC_ICON</legacyBold>   Obsolete and unsupported. Use <legacyBold>IDC_ARROW</legacyBold>.
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>IDC_SIZENWSE</legacyBold>   Two-headed arrow with ends at upper left and lower right
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>IDC_SIZENESW</legacyBold>   Two-headed arrow with ends at upper right and lower left
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>IDC_SIZEWE</legacyBold>   Horizontal two-headed arrow
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>IDC_SIZENS</legacyBold>   Vertical two-headed arrow
                                    </para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        A handle to a cursor if successful; otherwise <legacyBold>NULL</legacyBold>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Use the <unmanagedCodeEntityReference>LoadStandardCursor</unmanagedCodeEntityReference> or <legacyLink xlink:href="#cwinapp__loadoemcursor">LoadOEMCursor</legacyLink> member function to access the predefined Windows cursors.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#47</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__loadstandardicon">
        <!--f9cc187f-5a50-482c-9e04-a4e61ae1cefb-->
        <title>CWinApp::LoadStandardIcon</title>
        <content>
            <para>
                Loads the Windows predefined icon resource that <parameterReference>lpszIconName</parameterReference> specifies.
            </para>
            <legacySyntax>HICON LoadStandardIcon( LPCTSTR lpszIconName ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszIconName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                A manifest constant identifier that specifies a predefined Windows icon. These identifiers are defined in WINDOWS.H. For a list of the possible predefined values and their descriptions, see the                                 <legacyItalic>lpIconName</legacyItalic> parameter in                                 <externalLink> <linkText>LoadIcon</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms648072</linkUri>
                                </externalLink> in the <token>winSDK</token>.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        A handle to an icon if successful; otherwise <legacyBold>NULL</legacyBold>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Use the <unmanagedCodeEntityReference>LoadStandardIcon</unmanagedCodeEntityReference> or <legacyLink xlink:href="#cwinapp__loadoemicon">LoadOEMIcon</legacyLink> member function to access the predefined Windows icons.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__loadstdprofilesettings">
        <!--c23205b4-580b-431d-9c68-3710e6aaa29a-->
        <title>CWinApp::LoadStdProfileSettings</title>
        <content>
            <para>
                Call this member function from within the <legacyLink xlink:href="#cwinapp__initinstance">InitInstance</legacyLink> member function to enable and load the list of most recently used (MRU) files and last preview state.
            </para>
            <legacySyntax>void LoadStdProfileSettings( UINT nMaxMRU = _AFX_MRU_COUNT );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nMaxMRU</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of recently used files to track.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        If <parameterReference>nMaxMRU</parameterReference> is 0, no MRU list will be maintained.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_bhelpmode">
        <!--cfa7a8f5-fcda-40ce-84e4-4ae6eb95e0b1-->
        <title>CWinApp::m_bHelpMode</title>
        <content>
            <para> <legacyBold>TRUE</legacyBold> if the application is in Help context mode (conventionally invoked with SHIFT + F1); otherwise <legacyBold>FALSE</legacyBold>.
            </para>
            <legacySyntax>BOOL m_bHelpMode;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        In Help context mode, the cursor becomes a question mark and the user can move it about the screen. Examine this flag if you want to implement special handling when in the Help mode. <unmanagedCodeEntityReference>m_bHelpMode</unmanagedCodeEntityReference> is a public variable of type <legacyBold>BOOL</legacyBold>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_dwrestartmanagersupportflags">
        <!--db3ecf08-98a2-4734-85a1-741875292ca9-->
        <title>CWinApp::m_dwRestartManagerSupportFlags</title>
        <content>
            <para>Flags that determine how the restart manager behaves.</para>
            <legacySyntax>DWORD m_dwRestartManagerSupportFlags;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        To enable the restart manager, set <unmanagedCodeEntityReference>m_dwRestartManagerSupportFlags</unmanagedCodeEntityReference> to the behavior that you want. The following table shows the flags that are available.
                    </para>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para>Flag</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_SUPPORT_RESTART</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        The application is registered by using <link xlink:href="#cwinapp__registerwithrestartmanager">CWinApp::RegisterWithRestartManager</link>. The restart manager is responsible for restarting the application if it unexpectedly exits.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <list class="bullet">
                                        <listItem>
                                            <para> <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_SUPPORT_RECOVERY</unmanagedCodeEntityReference>
                                            </para>
                                        </listItem>
                                    </list>
                                </TD>
                                <TD>
                                    <para>
                                        The application is registered with the restart manager and the restart manager calls the recovery callback function when it restarts the application. The default recovery callback function is <link xlink:href="#cwinapp__applicationrecoverycallback">CWinApp::ApplicationRecoveryCallback</link>.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <list class="bullet">
                                        <listItem>
                                            <para> <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART</unmanagedCodeEntityReference>
                                            </para>
                                        </listItem>
                                    </list>
                                </TD>
                                <TD>
                                    <para>Autosave is enabled and the restart manager autosaves any open documents when the application restarts.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <list class="bullet">
                                        <listItem>
                                            <para> <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL</unmanagedCodeEntityReference>
                                            </para>
                                        </listItem>
                                    </list>
                                </TD>
                                <TD>
                                    <para>
                                        Autosave is enabled and the restart manager autosaves any open documents at a regular interval. The interval is defined by <link xlink:href="#cwinapp__m_nautosaveinterval">CWinApp::m_nAutosaveInterval</link>.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <list class="bullet">
                                        <listItem>
                                            <para> <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES</unmanagedCodeEntityReference>
                                            </para>
                                        </listItem>
                                    </list>
                                </TD>
                                <TD>
                                    <para>
                                        The restart manager opens previously open documents after restarting the application from an unexpected exit. The <link xlink:href="7794802c-e583-4eba-90b9-2fed1a161f9c">CDataRecoveryHandler Class</link> handles storing the list of open documents and restoring them.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <list class="bullet">
                                        <listItem>
                                            <para> <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES</unmanagedCodeEntityReference>
                                            </para>
                                        </listItem>
                                    </list>
                                </TD>
                                <TD>
                                    <para>
                                        The restart manager prompts the user to restore autosaved files after restarting the application. The <unmanagedCodeEntityReference>CDataRecoveryHandler</unmanagedCodeEntityReference> class queries the user.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <list class="bullet">
                                        <listItem>
                                            <para> <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_SUPPORT_NO_AUTOSAVE</unmanagedCodeEntityReference>
                                            </para>
                                        </listItem>
                                    </list>
                                </TD>
                                <TD>
                                    <para>
                                        The union of <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_SUPPORT_RESTART</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_SUPPORT_RECOVER</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES</unmanagedCodeEntityReference>.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <list class="bullet">
                                        <listItem>
                                            <para> <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS</unmanagedCodeEntityReference>
                                            </para>
                                        </listItem>
                                    </list>
                                </TD>
                                <TD>
                                    <para>
                                        The union of <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_SUPPORT_NO_AUTOSAVE</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES</unmanagedCodeEntityReference>.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <list class="bullet">
                                        <listItem>
                                            <para> <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_SUPPORT_RESTART_ASPECTS</unmanagedCodeEntityReference>
                                            </para>
                                        </listItem>
                                    </list>
                                </TD>
                                <TD>
                                    <para>
                                        The union of <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_SUPPORT_RESTART</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES</unmanagedCodeEntityReference>.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <list class="bullet">
                                        <listItem>
                                            <para> <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_SUPPORT_RECOVERY_ASPECTS</unmanagedCodeEntityReference>
                                            </para>
                                        </listItem>
                                    </list>
                                </TD>
                                <TD>
                                    <para>
                                        The union of <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_SUPPORT_RECOVERY</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES</unmanagedCodeEntityReference>.
                                    </para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_ehelptype">
        <!--5a481f8f-e6b1-4890-a4f8-7b81cac0b154-->
        <title>CWinApp::m_eHelpType</title>
        <content>
            <para>
                The type of this data member is the enumerated type <legacyBold>AFX_HELP_TYPE</legacyBold>, which is defined within the <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> class.
            </para>
            <legacySyntax>AFX_HELP_TYPE m_eHelpType;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The <legacyBold>AFX_HELP_TYPE</legacyBold> enumeration is defined as follows:
                    </para>
                    <para> <codeInline>enum AFX_HELP_TYPE</codeInline>
                    </para>
                    <para> <codeInline>{</codeInline>
                    </para>
                    <para> <codeInline>   afxWinHelp = 0,</codeInline>
                    </para>
                    <para> <codeInline>   afxHTMLHelp = 1</codeInline>
                    </para>
                    <para> <codeInline>}; </codeInline>
                    </para>
                    <list class="bullet">
                        <listItem>
                            <para>
                                To set the application's help to HTML Help, call <legacyLink xlink:href="#cwinapp__sethelpmode">SetHelpMode</legacyLink> and specify <legacyBold>afxHTMLHelp</legacyBold>.
                            </para>
                        </listItem>
                        <listItem>
                            <para>
                                To set the application's help to WinHelp, call <unmanagedCodeEntityReference>SetHelpMode</unmanagedCodeEntityReference> and specify <legacyBold>afxWinHelp</legacyBold>.
                            </para>
                        </listItem>
                    </list>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_hinstance">
        <!--7344f586-6956-4c36-9131-af8cced9eb67-->
        <title>CWinApp::m_hInstance</title>
        <content>
            <para>
                Corresponds to the <parameterReference>hInstance</parameterReference> parameter passed by Windows to <unmanagedCodeEntityReference>WinMain</unmanagedCodeEntityReference>.
            </para>
            <legacySyntax>HINSTANCE m_hInstance;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The <unmanagedCodeEntityReference>m_hInstance</unmanagedCodeEntityReference> data member is a handle to the current instance of the application running under Windows. This is returned by the global function <legacyLink xlink:href="3a2c97b9-e65c-4921-8f62-c7045f867732">AfxGetInstanceHandle</legacyLink>. <unmanagedCodeEntityReference>m_hInstance</unmanagedCodeEntityReference> is a public variable of type <unmanagedCodeEntityReference>HINSTANCE</unmanagedCodeEntityReference>.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#55</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_lpcmdline">
        <!--c29fd6e9-47cd-4fec-91c8-62c91a794c98-->
        <title>CWinApp::m_lpCmdLine</title>
        <content>
            <para>
                Corresponds to the <parameterReference>lpCmdLine</parameterReference> parameter passed by Windows to <unmanagedCodeEntityReference>WinMain</unmanagedCodeEntityReference>.
            </para>
            <legacySyntax>LPTSTR m_lpCmdLine;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Points to a null-terminated string that specifies the command line for the application. Use <unmanagedCodeEntityReference>m_lpCmdLine</unmanagedCodeEntityReference> to access any command-line arguments the user entered when the application was started. <unmanagedCodeEntityReference>m_lpCmdLine</unmanagedCodeEntityReference> is a public variable of type <unmanagedCodeEntityReference>LPTSTR</unmanagedCodeEntityReference>.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#52</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_nautosaveinterval">
        <!--b123458e-12fa-4e34-9d28-f3c3e1dfc629-->
        <title>CWinApp::m_nAutosaveInterval</title>
        <content>
            <para>The length of time in milliseconds between autosaves.</para>
            <legacySyntax>int m_nAutosaveInterval;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can configure the restart manager to autosave open documents at set intervals. If your application does not autosave files, this parameter has no effect.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_ncmdshow">
        <!--ba1c0117-3446-4613-ac56-ff1433515d19-->
        <title>CWinApp::m_nCmdShow</title>
        <content>
            <para>
                Corresponds to the <parameterReference>nCmdShow</parameterReference> parameter passed by Windows to <unmanagedCodeEntityReference>WinMain</unmanagedCodeEntityReference>.
            </para>
            <legacySyntax>int m_nCmdShow;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        You should pass <unmanagedCodeEntityReference>m_nCmdShow</unmanagedCodeEntityReference> as an argument when you call <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__showwindow">CWnd::ShowWindow</legacyLink> for your application's main window. <unmanagedCodeEntityReference>m_nCmdShow</unmanagedCodeEntityReference> is a public variable of type <languageKeyword>int</languageKeyword>.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#56</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_pactivewnd">
        <!--c12d1c91-6ef0-4b18-9f3f-06c5a450a66f-->
        <title>CWinApp::m_pActiveWnd</title>
        <content>
            <para>Use this data member to store a pointer to the main window of the OLE container application that has your OLE server application in-place activated.</para>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        If this data member is <legacyBold>NULL</legacyBold>, the application is not in-place active.
                    </para>
                    <para>The framework sets this member variable when the frame window is in-place activated by an OLE container application.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_pdatarecoveryhandler">
        <!--a52d6c8e-59cd-46c7-bce9-51b8a2e77713-->
        <title>CWinApp::m_pDataRecoveryHandler</title>
        <content>
            <para>Pointer to the data recovery handler for the application.</para>
            <legacySyntax>CDataRecoveryHandler* m_pDataRecoveryHandler;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The data recovery handler of an application monitors open documents and autosaves them. The framework uses the data recovery handler to restore autosaved files when an application restarts after it exits unexpectedly. For more information, see <link xlink:href="7794802c-e583-4eba-90b9-2fed1a161f9c">CDataRecoveryHandler Class</link>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_pszappname">
        <!--f0f7ff5c-176a-4c8a-9fb8-889fce314718-->
        <title>CWinApp::m_pszAppName</title>
        <content>
            <para>Specifies the name of the application.</para>
            <legacySyntax>LPCTSTR m_pszAppName;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The application name can come from the parameter passed to the <legacyLink xlink:href="#cwinapp__cwinapp">CWinApp</legacyLink> constructor, or, if not specified, to the resource string with the ID of <legacyBold>AFX_IDS_APP_TITLE</legacyBold>. If the application name is not found in the resource, it comes from the program's .EXE filename.
                    </para>
                    <para>
                        Returned by the global function <legacyLink xlink:href="970fa683-4af6-4107-92e0-e460c9eb823c">AfxGetAppName</legacyLink>. <unmanagedCodeEntityReference>m_pszAppName</unmanagedCodeEntityReference> is a public variable of type <legacyBold>const char*</legacyBold>.
                    </para>
                    <alert class="note">
                        <para>
                            If you assign a value to <unmanagedCodeEntityReference>m_pszAppName</unmanagedCodeEntityReference>, it must be dynamically allocated on the heap. The <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> destructor calls <legacyBold>free</legacyBold>( ) with this pointer. You many want to use the <unmanagedCodeEntityReference>_tcsdup</unmanagedCodeEntityReference>( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:
                        </para>
                    </alert>
                    <codeReference>NVC_MFCWindowing#57</codeReference>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#65</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_pszexename">
        <!--bc04e7c3-97dc-444e-bfa3-5fae75ba76e4-->
        <title>CWinApp::m_pszExeName</title>
        <content>
            <para>Contains the name of the application's executable file without an extension.</para>
            <legacySyntax>LPCTSTR m_pszExeName;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Unlike <legacyLink xlink:href="#cwinapp__m_pszappname">m_pszAppName</legacyLink>, this name cannot contain blanks. <unmanagedCodeEntityReference>m_pszExeName</unmanagedCodeEntityReference> is a public variable of type <legacyBold>const char*</legacyBold>.
                    </para>
                    <alert class="note">
                        <para>
                            If you assign a value to <unmanagedCodeEntityReference>m_pszExeName</unmanagedCodeEntityReference>, it must be dynamically allocated on the heap. The <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> destructor calls <legacyBold>free</legacyBold>( ) with this pointer. You many want to use the <unmanagedCodeEntityReference>_tcsdup</unmanagedCodeEntityReference>( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:
                        </para>
                    </alert>
                    <codeReference>NVC_MFCWindowing#58</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_pszhelpfilepath">
        <!--75708044-a495-4578-9388-cb3c2e9a4121-->
        <title>CWinApp::m_pszHelpFilePath</title>
        <content>
            <para>Contains the path to the application's Help file.</para>
            <legacySyntax>LPCTSTR m_pszHelpFilePath;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        By default, the framework initializes <unmanagedCodeEntityReference>m_pszHelpFilePath</unmanagedCodeEntityReference> to the name of the application with ".HLP" appended. To change the name of the help file, set <unmanagedCodeEntityReference>m_pszHelpFilePath</unmanagedCodeEntityReference> to point to a string that contains the complete name of the desired help file. A convenient place to do this is in the application's <legacyLink xlink:href="#cwinapp__initinstance">InitInstance</legacyLink> function. <unmanagedCodeEntityReference>m_pszHelpFilePath</unmanagedCodeEntityReference> is a public variable of type <legacyBold>const char*</legacyBold>.
                    </para>
                    <alert class="note">
                        <para>
                            If you assign a value to <unmanagedCodeEntityReference>m_pszHelpFilePath</unmanagedCodeEntityReference>, it must be dynamically allocated on the heap. The <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> destructor calls <legacyBold>free</legacyBold>( ) with this pointer. You many want to use the <unmanagedCodeEntityReference>_tcsdup</unmanagedCodeEntityReference>( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:
                        </para>
                    </alert>
                    <codeReference>NVC_MFCWindowing#59</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_pszprofilename">
        <!--53f35c1f-b7f9-45f2-a8d9-556b4a1b9f91-->
        <title>CWinApp::m_pszProfileName</title>
        <content>
            <para>Contains the name of the application's .INI file.</para>
            <legacySyntax>LPCTSTR m_pszProfileName;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>m_pszProfileName</unmanagedCodeEntityReference> is a public variable of type <legacyBold>const char*</legacyBold>.
                    </para>
                    <alert class="note">
                        <para>
                            If you assign a value to <unmanagedCodeEntityReference>m_pszProfileName</unmanagedCodeEntityReference>, it must be dynamically allocated on the heap. The <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> destructor calls <legacyBold>free</legacyBold>( ) with this pointer. You many want to use the <unmanagedCodeEntityReference>_tcsdup</unmanagedCodeEntityReference>( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:
                        </para>
                    </alert>
                    <codeReference>NVC_MFCWindowing#60</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_pszregistrykey">
        <!--498ae5af-a88b-4f6c-99e9-628ff6af619d-->
        <title>CWinApp::m_pszRegistryKey</title>
        <content>
            <para>Used to determine where, in the registry or INI file, application profile settings are stored.</para>
            <legacySyntax>LPCTSTR m_pszRegistryKey;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Normally, this data member is treated as read-only. </para>
                    <list class="bullet">
                        <listItem>
                            <para>The value is stored to a registry key. The name for the application profile setting is appended to the following registry key: HKEY_CURRENT_USER/Software/LocalAppWizard-Generated/.</para>
                        </listItem>
                    </list>
                    <para>
                        If you assign a value to <unmanagedCodeEntityReference>m_pszRegistryKey</unmanagedCodeEntityReference>, it must be dynamically allocated on the heap. The <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> destructor calls <legacyBold>free</legacyBold>( ) with this pointer. You many want to use the <unmanagedCodeEntityReference>_tcsdup</unmanagedCodeEntityReference>( ) run-time library function to do the allocating. Also, free the memory associated with the current pointer before assigning a new value. For example:
                    </para>
                    <codeReference>NVC_MFCWindowing#61</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__m_pszappid">
        <!--b3a33db4-47fa-455b-b607-157301cd58b8-->
        <title>CWinApp::m_pszAppID</title>
        <content>
            <para>Application User Model ID.</para>
            <legacySyntax>LPCTSTR m_pszAppID;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cwinapp__oncontexthelp">
        <!--713d9a27-e3e3-45b1-a151-e0ed30b29b32-->
        <title>CWinApp::OnContextHelp</title>
        <content>
            <para>Handles SHIFT+F1 Help within the application.</para>
            <legacySyntax>afx_msg void OnContextHelp();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        You must add an <codeInline>ON_COMMAND( ID_CONTEXT_HELP, OnContextHelp ) </codeInline>statement to your <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> class message map and also add an accelerator table entry, typically SHIFT+F1, to enable this member function.
                    </para>
                    <para> <unmanagedCodeEntityReference>OnContextHelp</unmanagedCodeEntityReference> puts the application into Help mode. The cursor changes to an arrow and a question mark, and the user can then move the mouse pointer and press the left mouse button to select a dialog box, window, menu, or command button. This member function retrieves the Help context of the object under the cursor and calls the Windows function WinHelp with that Help context.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__onddecommand">
        <!--36c1c16d-41fd-46e2-b408-4095f2315952-->
        <title>CWinApp::OnDDECommand</title>
        <content>
            <para>Called by the framework when the main frame window receives a DDE execute message.</para>
            <legacySyntax>virtual BOOL OnDDECommand( LPTSTR lpszCommand );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpszCommand</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to a DDE command string received by the application.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the command is handled; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation checks whether the command is a request to open a document and, if so, opens the specified document. The Windows File Manager usually sends such DDE command strings when the user double-clicks a data file. Override this function to handle other DDE execute commands, such as the command to print.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#48</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__onfilenew">
        <!--ddf79290-2ef7-4715-a1b9-256d3a52e741-->
        <title>CWinApp::OnFileNew</title>
        <content>
            <para>
                Implements the <unmanagedCodeEntityReference>ID_FILE_NEW</unmanagedCodeEntityReference> command.
            </para>
            <legacySyntax>afx_msg void OnFileNew();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        You must add an <codeInline>ON_COMMAND( ID_FILE_NEW, OnFileNew )</codeInline> statement to your <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> class message map to enable this member function. If enabled, this function handles execution of the File New command.
                    </para>
                    <para>
                        See <legacyLink xlink:href="a7883b46-23f7-4870-ac3a-804aed9258b5">Technical Note 22</legacyLink> for information on default behavior and guidance on how to override this member function.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#49</codeReference>
                    <codeReference>NVC_MFCWindowing#50</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__onfileopen">
        <!--eb02fa35-0c0a-40e0-92c9-396706d76cb4-->
        <title>CWinApp::OnFileOpen</title>
        <content>
            <para>
                Implements the <unmanagedCodeEntityReference>ID_FILE_OPEN</unmanagedCodeEntityReference> command.
            </para>
            <legacySyntax>afx_msg void OnFileOpen();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        You must add an <codeInline>ON_COMMAND( ID_FILE_OPEN, OnFileOpen )</codeInline> statement to your <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> class message map to enable this member function. If enabled, this function handles execution of the File Open command.
                    </para>
                    <para>
                        For information on default behavior and guidance on how to override this member function, see <legacyLink xlink:href="a7883b46-23f7-4870-ac3a-804aed9258b5">Technical Note 22</legacyLink>.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#49</codeReference>
                    <codeReference>NVC_MFCWindowing#50</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__onfileprintsetup">
        <!--1a8acb9c-97d7-4887-8fac-8c497bd52085-->
        <title>CWinApp::OnFilePrintSetup</title>
        <content>
            <para>
                Implements the <legacyBold>ID_FILE_PRINT_SETUP</legacyBold> command.
            </para>
            <legacySyntax>afx_msg void OnFilePrintSetup();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        You must add an <codeInline>ON_COMMAND( ID_FILE_PRINT_SETUP, OnFilePrintSetup )</codeInline> statement to your <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> class message map to enable this member function. If enabled, this function handles execution of the File Print command.
                    </para>
                    <para>
                        For information on default behavior and guidance on how to override this member function, see <legacyLink xlink:href="a7883b46-23f7-4870-ac3a-804aed9258b5">Technical Note 22</legacyLink>.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#49</codeReference>
                    <codeReference>NVC_MFCWindowing#50</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__onhelp">
        <!--b27ff76f-04e8-4593-ad69-134ab8194ed6-->
        <title>CWinApp::OnHelp</title>
        <content>
            <para>Handles F1 Help within the application (using the current context).</para>
            <legacySyntax>afx_msg void OnHelp();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Usually you will also add an accelerator-key entry for the F1 key. Enabling the F1 key is only a convention, not a requirement.</para>
                    <para>
                        You must add an <codeInline>ON_COMMAND( ID_HELP, OnHelp )</codeInline> statement to your <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> class message map to enable this member function. If enabled, called by the framework when the user presses the F1 key.
                    </para>
                    <para>The default implementation of this message-handler function determines the Help context that corresponds to the current window, dialog box, or menu item and then calls WINHELP.EXE. If no context is currently available, the function uses the default context.</para>
                    <para>
                        Override this member function to set the Help context to something other than the window, dialog box, menu item, or toolbar button that currently has the focus. Call <unmanagedCodeEntityReference>WinHelp</unmanagedCodeEntityReference> with the desired Help context ID.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__onhelpfinder">
        <!--5fe1c81c-2dcf-49cb-ab47-b660961f2109-->
        <title>CWinApp::OnHelpFinder</title>
        <content>
            <para>
                Handles the <legacyBold>ID_HELP_FINDER</legacyBold> and <legacyBold>ID_DEFAULT_HELP</legacyBold> commands.
            </para>
            <legacySyntax>afx_msg void OnHelpFinder();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        You must add an <codeInline>ON_COMMAND( ID_HELP_FINDER, OnHelpFinder )</codeInline> statement to your <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> class message map to enable this member function. If enabled, the framework calls this message-handler function when the user of your application selects the Help Finder command to invoke <unmanagedCodeEntityReference>WinHelp</unmanagedCodeEntityReference> with the standard <legacyBold>HELP_FINDER</legacyBold> topic.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__onhelpindex">
        <!--90e0d402-058f-46b8-88f0-6d0c67d87f0b-->
        <title>CWinApp::OnHelpIndex</title>
        <content>
            <para>
                Handles the <legacyBold>ID_HELP_INDEX</legacyBold> command and provides a default Help topic.
            </para>
            <legacySyntax>afx_msg void OnHelpIndex();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        You must add an <codeInline>ON_COMMAND( ID_HELP_INDEX, OnHelpIndex )</codeInline> statement to your <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> class message map to enable this member function. If enabled, the framework calls this message-handler function when the user of your application selects the Help Index command to invoke <unmanagedCodeEntityReference>WinHelp</unmanagedCodeEntityReference> with the standard <legacyBold>HELP_INDEX</legacyBold> topic.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__onhelpusing">
        <!--1ea0cbb1-23a9-4893-81b6-e7a7f514c241-->
        <title>CWinApp::OnHelpUsing</title>
        <content>
            <para>
                Handles the <legacyBold>ID_HELP_USING</legacyBold> command.
            </para>
            <legacySyntax>afx_msg void OnHelpUsing();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        You must add an <codeInline>ON_COMMAND( ID_HELP_USING, OnHelpUsing )</codeInline> statement to your <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> class message map to enable this member function. The framework calls this message-handler function when the user of your application selects the Help Using command to invoke the <unmanagedCodeEntityReference>WinHelp</unmanagedCodeEntityReference> application with the standard <legacyBold>HELP_HELPONHELP</legacyBold> topic.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__onidle">
        <!--29094045-b29b-4239-ba1f-7831b79ad2d7-->
        <title>CWinApp::OnIdle</title>
        <content>
            <para>Override this member function to perform idle-time processing.</para>
            <legacySyntax>virtual BOOL OnIdle( LONG lCount );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                A counter incremented each time <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> is called when the application's message queue is empty. This count is reset to 0 each time a new message is processed. You can use the <parameterReference>lCount</parameterReference> parameter to determine the relative length of time the application has been idle without processing a message.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero to receive more idle processing time; 0 if no more idle time is needed.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> is called in the default message loop when the application's message queue is empty. Use your override to call your own background idle-handler tasks.
                    </para>
                    <para> <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> should return 0 to indicate that no idle processing time is required. The <parameterReference>lCount</parameterReference> parameter is incremented each time <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> is called when the message queue is empty and resets to 0 each time a new message is processed. You can call your different idle routines based on this count.
                    </para>
                    <para>The following summarizes idle loop processing:  </para>
                    <list class="ordered">
                        <listItem>
                            <para>
                                If the message loop in the Microsoft Foundation Class Library checks the message queue and finds no pending messages, it calls <codeInline>OnIdle</codeInline> for the application object and supplies 0 as the <parameterReference>lCount</parameterReference> argument.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <codeInline>OnIdle</codeInline> performs some processing and returns a nonzero value to indicate it should be called again to do further processing.
                            </para>
                        </listItem>
                        <listItem>
                            <para>
                                The message loop checks the message queue again. If no messages are pending, it calls <codeInline>OnIdle</codeInline> again, incrementing the <parameterReference>lCount</parameterReference> argument.
                            </para>
                        </listItem>
                        <listItem>
                            <para>
                                Eventually, <codeInline>OnIdle</codeInline> finishes processing all its idle tasks and returns 0. This tells the message loop to stop calling <codeInline>OnIdle</codeInline> until the next message is received from the message queue, at which point the idle cycle restarts with the argument set to 0.
                            </para>
                        </listItem>
                    </list>
                    <para>
                        Do not perform lengthy tasks during <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> because your application cannot process user input until <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> returns.
                    </para>
                    <alert class="note">
                        <para>
                            The default implementation of <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> updates command user-interface objects such as menu items and toolbar buttons, and it performs internal data structure cleanup. Therefore, if you override <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference>, you must call <unmanagedCodeEntityReference>CWinApp::OnIdle</unmanagedCodeEntityReference> with the <parameterReference>lCount</parameterReference> in your overridden version. First call all base-class idle processing (that is, until the base class <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> returns 0). If you need to perform work before the base-class processing completes, review the base-class implementation to select the proper <parameterReference>lCount</parameterReference> during which to do your work.
                        </para>
                    </alert>
                    <para>
                        If you do not want <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> to be called whenever a message is retrieved from the message queue, you can override the <legacyLink xlink:href="10cdc294-4057-4e76-ac7c-a8967a89af0b#cwinthread__isidlemessage">CWinThreadIsIdleMessage</legacyLink>. If an application has set a very short timer, or if the system is sending the <legacyBold>WM_SYSTIMER</legacyBold> message, then <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> will be called repeatedly, and degrade performance.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>
                        The following two examples show how to use <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference>. The first example processes two idle tasks using the <parameterReference>lCount</parameterReference> argument to prioritize the tasks. The first task is high priority, and you should do it whenever possible. The second task is less important and should be done only when there is a long pause in user input. Note the call to the base-class version of <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference>. The second example manages a group of idle tasks with different priorities.
                    </para>
                    <codeReference>NVC_MFCWindowing#51</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__opendocumentfile">
        <!--ec9d6752-8ae2-4922-8442-830d9fb15812-->
        <title>CWinApp::OpenDocumentFile</title>
        <content>
            <para>
                The framework calls this method to open the named <legacyLink xlink:href="e5a2891d-e1e1-4599-8c7e-afa9b4945446">CDocument</legacyLink> file for the application.
            </para>
            <legacySyntax>
                virtual CDocument* OpenDocumentFile(
                LPCTSTR lpszFileName
                BOOL bAddToMRU = TRUE
                );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            [in] <parameterReference>lpszFileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The name of the file to be opened.</para>
                        </definition>
                        <definedTerm>
                            [in] <parameterReference>bAddToMRU</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> indicates the document is one of the most recent files; <languageKeyword>FALSE</languageKeyword> indicates the document is not one of the most recent files.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        A pointer to a <unmanagedCodeEntityReference>CDocument</unmanagedCodeEntityReference> if successful; otherwise <languageKeyword>NULL</languageKeyword>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If a document that has that name is already open, the first frame window that contains that document will get the focus. If an application supports multiple document templates, the framework uses the file name extension to find the appropriate document template to try to load the document. If successful, the document template then creates a frame window and view for the document.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#52</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__parsecommandline">
        <!--7ee5b480-7cb1-4ce5-91a0-a99ae5aa8417-->
        <title>CWinApp::ParseCommandLine</title>
        <content>
            <para>
                Call this member function to parse the command line and send the parameters, one at a time, to <legacyLink xlink:href="3e313ddb-0a82-4991-87ac-a27feff4668c#ccommandlineinfo__parseparam">CCommandLineInfo::ParseParam</legacyLink>.
            </para>
            <legacySyntax>void ParseCommandLine( CCommandLineInfo&amp; rCmdInfo );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>rCmdInfo</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                A reference to a <legacyLink xlink:href="3e313ddb-0a82-4991-87ac-a27feff4668c">CCommandLineInfo</legacyLink> object.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        When you start a new MFC project using the Application Wizard, the Application Wizard will create a local instance of <unmanagedCodeEntityReference>CCommandLineInfo</unmanagedCodeEntityReference>, and then call <unmanagedCodeEntityReference>ProcessShellCommand</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ParseCommandLine</unmanagedCodeEntityReference> in the <legacyLink xlink:href="#cwinapp__initinstance">InitInstance</legacyLink> member function. A command line follows the route described below:
                    </para>
                    <list class="ordered">
                        <listItem>
                            <para>
                                After being created in <unmanagedCodeEntityReference>InitInstance</unmanagedCodeEntityReference>, the <unmanagedCodeEntityReference>CCommandLineInfo</unmanagedCodeEntityReference> object is passed to <unmanagedCodeEntityReference>ParseCommandLine</unmanagedCodeEntityReference>.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ParseCommandLine</unmanagedCodeEntityReference> then calls <unmanagedCodeEntityReference>CCommandLineInfo::ParseParam</unmanagedCodeEntityReference> repeatedly, once for each parameter.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ParseParam</unmanagedCodeEntityReference> fills the <unmanagedCodeEntityReference>CCommandLineInfo</unmanagedCodeEntityReference> object, which is then passed to <legacyLink xlink:href="#cwinapp__processshellcommand">ProcessShellCommand</legacyLink>.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ProcessShellCommand</unmanagedCodeEntityReference> handles the command-line arguments and flags.
                            </para>
                        </listItem>
                    </list>
                    <para>
                        Note that you can call <unmanagedCodeEntityReference>ParseCommandLine</unmanagedCodeEntityReference> directly as needed.
                    </para>
                    <para>
                        For a description of the command-line flags, see <legacyLink xlink:href="3e313ddb-0a82-4991-87ac-a27feff4668c#ccommandlineinfo__m_nshellcommand">CCommandLineInfo::m_nShellCommand</legacyLink>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__pretranslatemessage">
        <!--dd11262e-7d32-44f1-8b9b-ed30daab88d7-->
        <title>CWinApp::PreTranslateMessage</title>
        <content>
            <para>
                Override this function to filter window messages before they are dispatched to the Windows functions                 <externalLink> <linkText>TranslateMessage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms644955</linkUri>
                </externalLink> and                 <externalLink> <linkText>DispatchMessage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms644934</linkUri>
                </externalLink> The default implementation performs accelerator-key translation, so you must call the <unmanagedCodeEntityReference>CWinApp::PreTranslateMessage</unmanagedCodeEntityReference> member function in your overridden version.
            </para>
            <legacySyntax>virtual BOOL PreTranslateMessage( MSG* pMsg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                A pointer to a <legacyLink xlink:href="dc166d27-9423-41f1-9599-5ba76d2f0138">MSG</legacyLink> structure that contains the message to process.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        Nonzero if the message was fully processed in <unmanagedCodeEntityReference>PreTranslateMessage</unmanagedCodeEntityReference> and should not be processed further. Zero if the message should be processed in the normal way.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__processmessagefilter">
        <!--a056150f-245f-4bb9-9938-715c7f82a416-->
        <title>CWinApp::ProcessMessageFilter</title>
        <content>
            <para>The framework's hook function calls this member function to filter and respond to certain Windows messages.</para>
            <legacySyntax>virtual BOOL ProcessMessageFilter(
    int code,
    LPMSG lpMsg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>code</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies a hook code. This member function uses the code to determine how to process <parameterReference>lpMsg.</parameterReference>
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>lpMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                A pointer to a Windows <legacyLink xlink:href="dc166d27-9423-41f1-9599-5ba76d2f0138">MSG</legacyLink> structure.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the message is processed; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A hook function processes events before they are sent to the application's normal message processing.</para>
                    <para>If you override this advanced feature, be sure to call the base-class version to maintain the framework's hook processing.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__processshellcommand">
        <!--684ea1bb-0c56-4039-9532-a072e8476f47-->
        <title>CWinApp::ProcessShellCommand</title>
        <content>
            <para>
                This member function is called by <legacyLink xlink:href="#cwinapp__initinstance">InitInstance</legacyLink> to accept the parameters passed from the <unmanagedCodeEntityReference>CCommandLineInfo</unmanagedCodeEntityReference> object identified by <parameterReference>rCmdInfo</parameterReference>, and perform the indicated action.
            </para>
            <legacySyntax>BOOL ProcessShellCommand( CCommandLineInfo&amp; rCmdInfo );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>rCmdInfo</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                A reference to a <legacyLink xlink:href="3e313ddb-0a82-4991-87ac-a27feff4668c">CCommandLineInfo</legacyLink> object.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        Nonzero if the shell command is processed successfully. If 0, return <legacyBold>FALSE</legacyBold> from <legacyLink xlink:href="#cwinapp__initinstance">InitInstance</legacyLink>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        When you start a new MFC project using the Application Wizard, the Application Wizard will create a local instance of <unmanagedCodeEntityReference>CCommandLineInfo</unmanagedCodeEntityReference>, and then call <unmanagedCodeEntityReference>ProcessShellCommand</unmanagedCodeEntityReference> and <legacyLink xlink:href="#cwinapp__parsecommandline">ParseCommandLine</legacyLink> in the <unmanagedCodeEntityReference>InitInstance</unmanagedCodeEntityReference> member function. A command line follows the route described below:
                    </para>
                    <list class="ordered">
                        <listItem>
                            <para>
                                After being created in <unmanagedCodeEntityReference>InitInstance</unmanagedCodeEntityReference>, the <unmanagedCodeEntityReference>CCommandLineInfo</unmanagedCodeEntityReference> object is passed to <unmanagedCodeEntityReference>ParseCommandLine</unmanagedCodeEntityReference>.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ParseCommandLine</unmanagedCodeEntityReference> then calls <legacyLink xlink:href="3e313ddb-0a82-4991-87ac-a27feff4668c#ccommandlineinfo__parseparam">CCommandLineInfo::ParseParam</legacyLink> repeatedly, once for each parameter.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ParseParam</unmanagedCodeEntityReference> fills the <unmanagedCodeEntityReference>CCommandLineInfo</unmanagedCodeEntityReference> object, which is then passed to <unmanagedCodeEntityReference>ProcessShellCommand</unmanagedCodeEntityReference>.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ProcessShellCommand</unmanagedCodeEntityReference> handles the command-line arguments and flags.
                            </para>
                        </listItem>
                    </list>
                    <para>
                        The data members of the <unmanagedCodeEntityReference>CCommandLineInfo</unmanagedCodeEntityReference> object, identified by <legacyLink xlink:href="3e313ddb-0a82-4991-87ac-a27feff4668c#ccommandlineinfo__m_nshellcommand">CCommandLineInfo::m_nShellCommand</legacyLink>, are of the following enumerated type, which is defined within the <unmanagedCodeEntityReference>CCommandLineInfo</unmanagedCodeEntityReference> class.
                    </para>
                    <para> <codeInline>enum {</codeInline>
                    </para>
                    <para> <codeInline>   FileNew,</codeInline>
                    </para>
                    <para> <codeInline>   FileOpen,</codeInline>
                    </para>
                    <para> <codeInline>   FilePrint,</codeInline>
                    </para>
                    <para> <codeInline>   FilePrintTo,</codeInline>
                    </para>
                    <para> <codeInline>   FileDDE,</codeInline>
                    </para>
                    <para> <codeInline>};</codeInline>
                    </para>
                    <para>
                        For a brief description of each of these values, see <unmanagedCodeEntityReference>CCommandLineInfo::m_nShellCommand</unmanagedCodeEntityReference>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__processwndprocexception">
        <!--15ed56fe-deee-4a69-b0df-68a457ab4840-->
        <title>CWinApp::ProcessWndProcException</title>
        <content>
            <para>The framework calls this member function whenever the handler does not catch an exception thrown in one of your application's message or command handlers.</para>
            <legacySyntax>virtual LRESULT ProcessWndProcException(
    CException* e,
    const MSG* pMsg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>e</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an uncaught exception.</para>
                        </definition>
                        <definedTerm> <parameterReference>pMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                A <legacyLink xlink:href="dc166d27-9423-41f1-9599-5ba76d2f0138">MSG</legacyLink> structure that contains information about the windows message that caused the framework to throw an exception.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        The value that should be returned to Windows. Normally this is 0L for windows messages, 1L ( <legacyBold>TRUE</legacyBold>) for command messages.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Do not call this member function directly.</para>
                    <para>The default implementation of this member function creates a message box. If the uncaught exception originates with a menu, toolbar, or accelerator command failure, the message box displays a "Command failed" message; otherwise, it displays an "Internal application error" message.</para>
                    <para>Override this member function to provide global handling of your exceptions. Only call the base functionality if you wish the message box to be displayed.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__register">
        <!--624d6071-4fef-44cf-b53a-bf8cdbfccf00-->
        <title>CWinApp::Register</title>
        <content>
            <para>
                Performs any registration tasks not handled by <unmanagedCodeEntityReference>RegisterShellFileTypes</unmanagedCodeEntityReference>.
            </para>
            <legacySyntax>virtual BOOL Register();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero on success; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation simply returns TRUE. Override this function to provide any customized registration steps.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__registershellfiletypes">
        <!--483950ad-959c-4c5c-84e7-a1123fb81e71-->
        <title>CWinApp::RegisterShellFileTypes</title>
        <content>
            <para>Call this member function to register all of your application's document types with the Windows File Manager.</para>
            <legacySyntax>
                void RegisterShellFileTypes(
                BOOL bCompat = FALSE
                );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            [in] <parameterReference>bCompat</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> adds registration entries for shell commands Print and Print To, allowing a user to print files directly from the shell, or by dragging the file to a printer object. It also adds a DefaultIcon key. By default, this parameter is <languageKeyword>FALSE</languageKeyword> for backward compatibility.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        This allows the user to open a data file created by your application by double-clicking it from within File Manager. Call <unmanagedCodeEntityReference>RegisterShellFileTypes</unmanagedCodeEntityReference> after you call <legacyLink xlink:href="#cwinapp__adddoctemplate">AddDocTemplate</legacyLink> for each of the document templates in your application. Also call the <legacyLink xlink:href="#cwinapp__enableshellopen">EnableShellOpen</legacyLink> member function when you call <unmanagedCodeEntityReference>RegisterShellFileTypes</unmanagedCodeEntityReference>.
                    </para>
                    <para> <unmanagedCodeEntityReference>RegisterShellFileTypes</unmanagedCodeEntityReference> iterates through the list of <legacyLink xlink:href="14b41a1f-bf9d-4eac-b6a8-4c54ffcc77f6">CDocTemplate</legacyLink> objects that the application maintains and, for each document template, adds entries to the registration database that Windows maintains for file associations. File Manager uses these entries to open a data file when the user double-clicks it. This eliminates the need to ship a .REG file with your application.
                    </para>
                    <alert class="note">
                        <para> <unmanagedCodeEntityReference>RegisterShellFileTypes</unmanagedCodeEntityReference> only works if the user runs the program with administrator rights. If the program does not have administrator rights, it cannot alter registry keys.
                        </para>
                    </alert>
                    <para>
                        If the registration database already associates a given filename extension with another file type, no new association is created. See the <unmanagedCodeEntityReference>CDocTemplate</unmanagedCodeEntityReference> class for the format of strings necessary to register this information.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__registerwithrestartmanager">
        <!--102e3032-2f93-464e-87b4-d6941301a1c4-->
        <title>CWinApp::RegisterWithRestartManager</title>
        <content>
            <para>Registers the application with the restart manager.</para>
            <legacySyntax>
                virtual HRESULT RegisterWithRestartManager(
                BOOL bRegisterRecoveryCallback,
                const CString &amp; strRestartIdentifier );


                virtual HRESULT RegisterWithRestartManager(
                LPCWSTR pwzCommandLineArgs,
                DWORD dwRestartFlags,
                APPLICATION_RECOVERY_CALLBACK pRecoveryCallback,
                LPVOID lpvParam,
                DWORD dwPingInterval,
                DWORD dwCallbackFlags );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        [in] <parameterReference>bRegisterRecoveryCallback</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <languageKeyword>TRUE</languageKeyword> indicates that this instance of the application uses a recovery callback function; <languageKeyword>FALSE</languageKeyword> indicates that it does not. The framework calls the recovery callback function when the application exits unexpectedly. For more information, see <link xlink:href="#cwinapp__applicationrecoverycallback">CWinApp::ApplicationRecoveryCallback</link>.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        [in] <parameterReference>strRestartIdentifier</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The unique string that identifies this instance of the restart manager. The restart manager identifier is unique for each instance of an application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        [in] <parameterReference>pwzCommandLineArgs</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A string that contains any extra arguments from the command line.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        [in] <parameterReference>dwRestartFlags</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Optional flags for the restart manager. For more information, see the Remarks section.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        [in] <parameterReference>pRecoveryCallback</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        The recovery callback function. This function must take a <languageKeyword>LPVOID</languageKeyword> parameter as input and return a <languageKeyword>DWORD</languageKeyword>. The default recovery callback function is <unmanagedCodeEntityReference>CWinApp::ApplicationRecoveryCallback</unmanagedCodeEntityReference>.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        [in] <parameterReference>lpvParam</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        The input parameter for the recovery callback function. For more information, see <link xlink:href="#cwinapp__applicationrecoverycallback">CWinApp::ApplicationRecoveryCallback</link>.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        [in] <parameterReference>dwPingInterval</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The length of time that the restart manager waits for the recovery callback function to return. This parameter is in milliseconds.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        [in] <parameterReference>dwCallbackFlags</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Flags passed to the recovery callback function. Reserved for future use.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>S_OK</languageKeyword> if the method is successful; otherwise an error code.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        If your application uses the default MFC implementation for autosaving files, you should use the simple version of <unmanagedCodeEntityReference>RegisterWithRestartManager</unmanagedCodeEntityReference>. Use the complex version of <unmanagedCodeEntityReference>RegisterWithRestartManager</unmanagedCodeEntityReference> if you want to customize the autosave behavior of your application.
                    </para>
                    <para>
                        If you call this method with an empty string for <parameterReference>strRestartIdentifier</parameterReference>, <unmanagedCodeEntityReference>RegisterWithRestartManager</unmanagedCodeEntityReference> creates a unique identifier string for this instance of the restart manager.
                    </para>
                    <para>
                        When an application exits unexpectedly, the restart manager restarts the application from the command line and provides the unique restart identifier as an optional argument. In this scenario, the framework calls <unmanagedCodeEntityReference>RegisterWithRestartManager</unmanagedCodeEntityReference> two times. The first call comes from <link xlink:href="#cwinapp__initinstance">CWinApp::InitInstance</link> with an empty string for the string identifier. Then, the method <link xlink:href="#cwinapp__processshellcommand">CWinApp::ProcessShellCommand</link> calls <unmanagedCodeEntityReference>RegisterWithRestartManager</unmanagedCodeEntityReference> with the unique restart identifier.
                    </para>
                    <para>
                        After you register an application with the restart manager, the restart manager monitors the application. If the application exits unexpectedly, the restart manager calls the recovery callback function during the shut down process. The restart manager waits the <parameterReference>dwPingInterval</parameterReference> for a response from the recovery callback function. If the recovery callback function does not respond within this time, the application exits without executing the recovery callback function.
                    </para>
                    <para>
                        By default, the dwRestartFlags are not supported but are provided for future use. The possible values for <parameterReference>dwRestartFlags</parameterReference> are as follows:
                    </para>
                    <list class="bullet">
                        <listItem>
                            <para> <unmanagedCodeEntityReference>RESTART_NO_CRASH</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>RESTART_NO_HANG</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>RESTART_NO_PATCH</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>RESTART_NO_REBOOT</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                    </list>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__reopenpreviousfilesatrestart">
        <!--475af835-12fb-4c49-8187-31c1473045cf-->
        <title>CWinApp::ReopenPreviousFilesAtRestart</title>
        <content>
            <para>Determines whether the restart manager reopens the files that were open when the application exited unexpectedly.</para>
            <legacySyntax>virtual BOOL ReopenPreviousFilesAtRestart() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> indicates the restart manager reopens the previously open files; <languageKeyword>FALSE</languageKeyword> indicates the restart manager does not.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__restartinstance">
        <!--3121aa4f-1cc5-452d-b7b4-9f90580e9ee8-->
        <title>CWinApp::RestartInstance</title>
        <content>
            <para>Handles an application restart initiated by the restart manager.</para>
            <legacySyntax>virtual BOOL CWinApp::RestartInstance();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the data recovery handler opens previously open documents; <languageKeyword>FALSE</languageKeyword> if the data recovery handler has an error or if there are no previously open documents.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        When the restart manager restarts an application, the framework calls this method. This method retrieves the data recovery handler and restores the autosaved files. This method calls <link xlink:href="7794802c-e583-4eba-90b9-2fed1a161f9c#cdatarecoveryhandler__restoreautosaveddocuments">CDataRecoveryHandler::RestoreAutosavedDocuments</link> to determine whether the user wants to restore the autosaved files.
                    </para>
                    <para>
                        This method returns <languageKeyword>FALSE</languageKeyword> if the <legacyLink xlink:href="7794802c-e583-4eba-90b9-2fed1a161f9c">CDataRecoveryHandler</legacyLink> determines that there were no open documents. If there were no open documents, the application starts ordinarily.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__restoreautosavedfilesatrestart">
        <!--4a43dfec-96e8-4968-bab7-98cb6cf37e22-->
        <title>CWinApp::RestoreAutosavedFilesAtRestart</title>
        <content>
            <para>Determines whether the restart manager restores the autosaved files when it restarts the application.</para>
            <legacySyntax>virtual BOOL RestoreAutosavedFilesAtRestart() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> indicates the restart manager restores autosaved files; <languageKeyword>FALSE</languageKeyword> indicates the restart manager does not.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__run">
        <!--aea0d215-f6be-4f40-bfae-939db926775f-->
        <title>CWinApp::Run</title>
        <content>
            <para>Provides a default message loop.</para>
            <legacySyntax>virtual int Run();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        An <languageKeyword>int</languageKeyword> value that is returned by <unmanagedCodeEntityReference>WinMain</unmanagedCodeEntityReference>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <legacyBold>Run</legacyBold> acquires and dispatches Windows messages until the application receives a <legacyBold>WM_QUIT</legacyBold> message. If the application's message queue currently contains no messages, <legacyBold>Run</legacyBold> calls <legacyLink xlink:href="#cwinapp__onidle">OnIdle</legacyLink> to perform idle-time processing. Incoming messages go to the <legacyLink xlink:href="#cwinapp__pretranslatemessage">PreTranslateMessage</legacyLink> member function for special processing and then to the Windows function <legacyBold>TranslateMessage</legacyBold> for standard keyboard translation; finally, the <legacyBold>DispatchMessage</legacyBold> Windows function is called.
                    </para>
                    <para> <legacyBold>Run</legacyBold> is rarely overridden, but you can override it to provide special behavior.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__runautomated">
        <!--5405b99d-d8d9-47c1-ac8f-21af9d11bd1d-->
        <title>CWinApp::RunAutomated</title>
        <content>
            <para>
                Call this function to determine whether the "                <system>/Automation</system>" or " <legacyBold>-Automation</legacyBold>" option is present, which indicates whether the server application was launched by a client application.
            </para>
            <legacySyntax>BOOL RunAutomated();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the option was found; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        If present, the option is removed from the command line. For more information on OLE Automation, see the article <legacyLink xlink:href="523fd155-51ce-4f91-b986-b74bdbdd7d92">Automation Servers</legacyLink>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__runembedded">
        <!--af9dedcb-a6e9-4f58-9c6e-394a5412370b-->
        <title>CWinApp::RunEmbedded</title>
        <content>
            <para>
                Call this function to determine whether the "                <system>/Embedding</system>" or " <legacyBold>-Embedding</legacyBold>" option is present, which indicates whether the server application was launched by a client application.
            </para>
            <legacySyntax>BOOL RunEmbedded();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the option was found; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        If present, the option is removed from the command line. For more information on embedding, see the article <legacyLink xlink:href="5bd57e8e-3b23-4f23-9597-496fac2d24b5">Servers: Implementing a Server</legacyLink>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__saveallmodified">
        <!--aa73335f-0ec9-42dc-a40f-e438e1a41332-->
        <title>CWinApp::SaveAllModified</title>
        <content>
            <para>
                Called by the framework to save all documents when the application's main frame window is to be closed, or through a <unmanagedCodeEntityReference>WM_QUERYENDSESSION</unmanagedCodeEntityReference> message.
            </para>
            <legacySyntax>virtual BOOL SaveAllModified();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if safe to terminate the application; 0 if not safe to terminate the application.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The default implementation of this member function calls the <legacyLink xlink:href="e5a2891d-e1e1-4599-8c7e-afa9b4945446#cdocument__savemodified">CDocument::SaveModified</legacyLink> member function in turn for all modified documents within the application.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__selectprinter">
        <!--4f1791b9-901c-42e3-aba0-1aa9f991d475-->
        <title>CWinApp::SelectPrinter</title>
        <content>
            <para>Call this member function to select a specific printer, and release the printer that was previously selected in the Print Dialog box.</para>
            <legacySyntax>void SelectPrinter(
    HANDLE hDevNames,
    HANDLE hDevMode,
    BOOL bFreeOld = TRUE  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hDevNames</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                A handle to a <legacyLink xlink:href="aac97f60-2169-471a-ba5d-c0baed9eed9a">DEVNAMES</legacyLink> structure that identifies the driver, device, and output port names of a specific printer.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>hDevMode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                A handle to a                                 <externalLink> <linkText>DEVMODE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183565</linkUri>
                                </externalLink> structure that specifies information about the device initialization and environment of a printer.
                            </para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>bFreeOld</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Frees the previously-selected printer.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        If both <parameterReference>hDevMode</parameterReference> and <parameterReference>hDevNames</parameterReference> are <legacyBold>NULL</legacyBold>, <unmanagedCodeEntityReference>SelectPrinter</unmanagedCodeEntityReference> uses the current default printer.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__sethelpmode">
        <!--0088cc2e-8327-4bf9-b1f7-8514ba375c34-->
        <title>CWinApp::SetHelpMode</title>
        <content>
            <para>Sets the application's help type.</para>
            <legacySyntax>void SetHelpMode( AFX_HELP_TYPE eHelpType );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>eHelpType</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies the type of help to use. See <legacyLink xlink:href="#cwinapp__m_ehelptype">CWinApp::m_eHelpType</legacyLink> for more information.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Sets the application's Help type. </para>
                    <para>
                        To set your application's Help type to HTMLHelp, you can call <legacyLink xlink:href="#cwinapp__enablehtmlhelp">EnableHTMLHelp</legacyLink>. Once you call <unmanagedCodeEntityReference>EnableHTMLHelp</unmanagedCodeEntityReference>, your application must use HTMLHelp as its help application. If you want to change to use WinHelp, you can call <unmanagedCodeEntityReference>SetHelpMode</unmanagedCodeEntityReference> and set <parameterReference>eHelpType</parameterReference> to <legacyBold>afxWinHelp</legacyBold>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__setregistrykey">
        <!--a4df20ef-2e90-4040-a06d-0cfb27e34d70-->
        <title>CWinApp::SetRegistryKey</title>
        <content>
            <para>Causes application settings to be stored in the registry instead of INI files.</para>
            <legacySyntax>void SetRegistryKey( LPCTSTR lpszRegistryKey );

void SetRegistryKey( UINT nIDRegistryKey );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpszRegistryKey</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a string containing the name of the key.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>nIDRegistryKey</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>ID of a string resource containing the name of the registry key.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        This function sets                         <legacyItalic>m_pszRegistryKey</legacyItalic>, which is then used by the <unmanagedCodeEntityReference>GetProfileInt</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>GetProfileString</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>WriteProfileInt</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>WriteProfileString</unmanagedCodeEntityReference> member functions of <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference>. If this function has been called, the list of most recently-used (MRU) files is also stored in the registry. The registry key is usually the name of a company. It is stored in a key of the following form: HKEY_CURRENT_USER\Software\&lt;company name&gt;\&lt;application name&gt;\&lt;section name&gt;\&lt;value name&gt;.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__supportsapplicationrecovery">
        <!--9f07ecf1-4f52-4bee-a8ce-bb4dd0b49504-->
        <title>CWinApp::SupportsApplicationRecovery</title>
        <content>
            <para>Determines whether the restart manager recovers an application that exited unexpectedly.</para>
            <legacySyntax>virtual BOOL SupportsApplicationRecovery() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> indicates the restart manager recovers the application; <languageKeyword>FALSE</languageKeyword> indicates the restart manager does not.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__supportsautosaveatinterval">
        <!--26ac68e8-2a99-4257-ba49-427952900c1f-->
        <title>CWinApp::SupportsAutosaveAtInterval</title>
        <content>
            <para>Determines whether the restart manager autosaves open documents at a regular interval.</para>
            <legacySyntax>virtual BOOL SupportsAutosaveAtInterval() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> indicates the restart manager autosaves open documents; <languageKeyword>FALSE</languageKeyword> indicates the restart manager does not.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__supportsautosaveatrestart">
        <!--43b3477d-be76-4d63-aa48-8ac80722056e-->
        <title>CWinApp::SupportsAutosaveAtRestart</title>
        <content>
            <para>Determines whether the restart manager autosaves any open documents when the application restarts.</para>
            <legacySyntax>virtual BOOL SupportsAutosaveAtRestart() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> indicates the restart manager autosaves open documents when the application restarts; <languageKeyword>FALSE</languageKeyword> indicates the restart manager does not.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__supportsrestartmanager">
        <!--80048c46-e95d-4538-adf1-fc1bc9c2b29a-->
        <title>CWinApp::SupportsRestartManager</title>
        <content>
            <para>Determines whether the application supports the restart manager.</para>
            <legacySyntax>virtual BOOL SupportsRestartManager() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> indicates the application supports the restart manager; <languageKeyword>FALSE</languageKeyword> indicates the application does not.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__unregister">
        <!--09689545-56a7-49f5-8151-8a7a5c1bd6be-->
        <title>CWinApp::Unregister</title>
        <content>
            <para>Unregisters all files registered by the application object.</para>
            <legacySyntax>virtual BOOL Unregister();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero on success; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The <unmanagedCodeEntityReference>Unregister</unmanagedCodeEntityReference> function undoes the registration performed by the application object and the <legacyLink xlink:href="#cwinapp__register">Register</legacyLink> function. Normally, both functions are called implicitly by MFC and therefore will not appear in your code.
                    </para>
                    <para>Override this function to perform custom unregistration steps.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__unregistershellfiletypes">
        <!--2964487d-c313-425e-a2dd-b3c2efbd8e31-->
        <title>CWinApp::UnregisterShellFileTypes</title>
        <content>
            <para>Call this member function to unregister all of your application's document types with the Windows File Manager.</para>
            <legacySyntax>void UnregisterShellFileTypes();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="cwinapp__winhelp">
        <!--8cfcb0bc-6b2f-4108-be6e-ce1d38defea0-->
        <title>CWinApp::WinHelp</title>
        <content>
            <para>Call this member function to invoke the WinHelp application.</para>
            <legacySyntax>virtual void WinHelp(
    DWORD_PTR dwData,
    UINT nCmd = HELP_CONTEXT );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies additional data. The value used depends on the value of the <parameterReference>nCmd</parameterReference> parameter.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>nCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies the type of help requested. For a list of possible values and how they affect the <parameterReference>dwData</parameterReference> parameter, see the                                 <externalLink> <linkText>WinHelp</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb762267</linkUri>
                                </externalLink> Windows function.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework also calls this function to invoke the WinHelp application. </para>
                    <para>The framework will automatically close the WinHelp application when your application terminates.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#53</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__writeprofilebinary">
        <!--2a081643-9f1e-4a3c-9e84-3eca40be3139-->
        <title>CWinApp::WriteProfileBinary</title>
        <content>
            <para>Call this member function to write binary data into the specified section of the application's registry or .INI file.</para>
            <legacySyntax>BOOL WriteProfileBinary(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPBYTE pData,
    UINT nBytes );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszSection</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that specifies the section containing the entry. If the section does not exist, it is created. The name of the section is case independent; the string may be any combination of uppercase and lowercase letters.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszEntry</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that contains the entry into which the value is to be written. If the entry does not exist in the specified section, it is created.</para>
                        </definition>
                        <definedTerm> <parameterReference>pData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the data to be written.</para>
                        </definition>
                        <definedTerm> <parameterReference>nBytes</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the number of bytes to be written.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>
                        This example uses <codeInline>CWinApp* pApp = AfxGetApp();</codeInline> to get at the CWinApp class illustrating a way that <unmanagedCodeEntityReference>WriteProfileBinary</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>GetProfileBinary</unmanagedCodeEntityReference> can be used from any function in an MFC application.
                    </para>
                    <codeReference>NVC_MFCWindowing#54</codeReference>
                 
                            <para>
                                For another example, see the example for <legacyLink xlink:href="#cwinapp__getprofilebinary">CWinApp::GetProfileBinary</legacyLink>.
                            </para>
                        
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__writeprofileint">
        <!--dc547ec6-242e-47b4-87de-318d1da9bf46-->
        <title>CWinApp::WriteProfileInt</title>
        <content>
            <para>Call this member function to write the specified value into the specified section of the application's registry or .INI file.</para>
            <legacySyntax>BOOL WriteProfileInt(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    int nValue );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszSection</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that specifies the section containing the entry. If the section does not exist, it is created. The name of the section is case independent; the string may be any combination of uppercase and lowercase letters.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszEntry</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that contains the entry into which the value is to be written. If the entry does not exist in the specified section, it is created.</para>
                        </definition>
                        <definedTerm> <parameterReference>nValue</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the value to be written.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>
                        This example uses <codeInline>CWinApp* pApp = AfxGetApp();</codeInline> to get at the CWinApp class illustrating a way that <unmanagedCodeEntityReference>WriteProfileString</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>WriteProfileInt</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>GetProfileString</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>GetProfileInt</unmanagedCodeEntityReference> can be used from any function in an MFC application.
                    </para>
                    <codeReference>NVC_MFCWindowing#43</codeReference>
                   
                            <para>
                                For another example, see the example for <legacyLink xlink:href="#cwinapp__getprofileint">CWinApp::GetProfileInt</legacyLink>.
                            </para>
                        
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__writeprofilestring">
        <!--e4ec9194-5f7a-480e-856c-b9ccfa782039-->
        <title>CWinApp::WriteProfileString</title>
        <content>
            <para>Call this member function to write the specified string into the specified section of the application's registry or .INI file.</para>
            <legacySyntax>BOOL WriteProfileString(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPCTSTR lpszValue );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszSection</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that specifies the section containing the entry. If the section does not exist, it is created. The name of the section is case independent; the string may be any combination of uppercase and lowercase letters.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszEntry</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to a null-terminated string that contains the entry into which the value is to be written. If the entry does not exist in the specified section, it is created. If this parameter is <languageKeyword>NULL</languageKeyword>, the section specified by <parameterReference>lpszSection</parameterReference> is deleted.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>lpszValue</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to the string to be written. If this parameter is <languageKeyword>NULL</languageKeyword>, the entry specified by the <parameterReference>lpszEntry</parameterReference> parameter is deleted.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#43</codeReference>
                    
                            <para>
                                For another example, see the example for <legacyLink xlink:href="#cwinapp__getprofileint">CWinApp::GetProfileInt</legacyLink>.
                            </para>
                        
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinapp__setappid">
        <!--c1b634b4-9a78-4faa-9338-ec1d77f8c96c-->
        <title>CWinApp::SetAppID</title>
        <content>
            <para>Explicitly sets Application User Model ID for the application. This method should be called before any user interface is presented to the user (the best place is the application constructor).</para>
            <legacySyntax>
                void SetAppID(
                LPCTSTR lpcszAppID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpcszAppID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the Application User Model ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="10cdc294-4057-4e76-ac7c-a8967a89af0b">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="7f3f5867-d4bc-4ba8-b3c9-dc1e7be93642">How to: Add Restart Manager Support</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



