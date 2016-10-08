---
title: "CDialogImpl Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: d430bc7b-8a28-4ad3-9507-277bdd2c2c2e
caps.latest.revision: 16
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
# CDialogImpl Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>This class provides methods for creating a modal or modeless dialog box.</para>
        <alert class="important">
            <para>This class and its members cannot be used in applications that execute in the Windows Runtime.</para>
        </alert>
    </introduction>
    <syntaxSection>
        <legacySyntax>
<legacyBold>template &lt;</legacyBold>
   <legacyBold>class </legacyBold> <parameterReference>T</parameterReference>,
   <legacyBold>class </legacyBold> <parameterReference>TBase</parameterReference>
   <legacyBold>= CWindow </legacyBold><legacyBold>&gt;</legacyBold>
   <legacyBold>class ATL_NO_VTABLE CDialogImpl :</legacyBold>
   <legacyBold>public CDialogImplBaseT&lt; </legacyBold> <parameterReference>TBase</parameterReference><legacyBold>&gt;</legacyBold>
        </legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm> <parameterReference>T</parameterReference>
                </definedTerm>
                <definition>
                    <para>Your class, derived from <unmanagedCodeEntityReference>CDialogImpl</unmanagedCodeEntityReference>.</para>
                </definition>
                <definedTerm> <legacyItalic>TBase</legacyItalic>
                </definedTerm>
                <definition>
                    <para>The base class of your new class. The default base class is <legacyLink xlink:href="FEFA00C8-F053-4BCF-87BC-DC84F5386683">CWindow</legacyLink>.</para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
    <section>
        <title>Members</title>
        <content/>
        <sections>
            <section>
                <title>Methods</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="6883F413-ECFB-42D3-AE75-03918EE04917">Create</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a modeless dialog box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="8EAA1035-7F84-4EC4-BE92-6D7FC11DE8A0">DestroyWindow</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Destroys a modeless dialog box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="6F31F4C6-EAC4-4E00-A2F3-5175B2A6FE1F">DoModal</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a modal dialog box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="C85C7A6E-0B87-48B0-BF62-BE8D23CD0B1A">EndDialog</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Destroys a modal dialog box.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>CDialogImplBaseT Methods</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="E9F11F77-4355-4AC4-9532-518BE2275745">GetDialogProc</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the current dialog box procedure.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="F0815E3E-23E0-4363-B1C4-CD54939DAD95">MapDialogRect</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Maps the dialog-box units of the specified rectangle to screen units (pixels).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="1B16F4DC-80E5-4B11-A0FF-F224FFE2D774">OnFinalMessage</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called after receiving the last message, typically <unmanagedCodeEntityReference>WM_NCDESTROY</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Static Functions</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="828FA7FC-DD61-4F72-954C-2185D17823FC">DialogProc</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Processes messages sent to the dialog box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="96D34EB1-A693-44E6-B048-5B95A3041A94">StartDialogProc</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when the first message is received to process messages sent to the dialog box.</para>
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
            <para>With <unmanagedCodeEntityReference>CDialogImpl</unmanagedCodeEntityReference> you can create a modal or modeless dialog box. <unmanagedCodeEntityReference>CDialogImpl</unmanagedCodeEntityReference> provides the dialog box procedure, which uses the default message map to direct messages to the appropriate handlers.</para>
            <para>The base class destructor <legacyBold>~CWindowImplRoot</legacyBold> ensures that the window is gone before destroying the object.</para>
            <para> <unmanagedCodeEntityReference>CDialogImpl</unmanagedCodeEntityReference> derives from <legacyBold>CDialogImplBaseT</legacyBold>, which in turn derives from <legacyBold>CWindowImplRoot</legacyBold>.</para>
            <alert class="note">
                <para>Your class must define an <legacyBold>IDD</legacyBold> member that specifies the dialog template resource ID. For example, the ATL Project Wizard automatically adds the following line to your class:</para>
            </alert>
            <codeReference>NVC_ATL_Windowing#41</codeReference>
            <para>where <codeInline>MyDlg</codeInline> is the <legacyBold>Short name</legacyBold> entered in the wizard's <ui>Names</ui> page.</para>
            <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                <thead>
                    <tr>
                        <TD>
                            <para>For more information about</para>
                        </TD>
                        <TD>
                            <para>See</para>
                        </TD>
                    </tr>
                </thead>
                <tbody>
                    <tr>
                        <TD>
                            <para>Creating controls</para>
                        </TD>
                        <TD>
                            <para> <legacyLink xlink:href="F921A121-09C8-4812-9317-E15B2F1471FA">ATL Tutorial</legacyLink>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para>Using dialog boxes in ATL</para>
                        </TD>
                        <TD>
                            <para> <legacyLink xlink:href="1d12b708-de3e-49d5-9e41-42fe4769fa62">ATL Window Classes</legacyLink>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para>ATL Project Wizard</para>
                        </TD>
                        <TD>
                            <para> <legacyLink xlink:href="061D5F98-F669-440E-9380-42F017A0F9E8">Creating an ATL Project</legacyLink>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para>Dialog boxes</para>
                        </TD>
                        <TD>
                            <para> <externalLink> <linkText>Dialog Boxes</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632588</linkUri>
                                </externalLink> and subsequent topics in the <token>winSDK</token>
                            </para>
                        </TD>
                    </tr>
                </tbody>
            </table>
        </content>
    </languageReferenceRemarks>
    <requirements>
        <content>
            <para>
   <legacyBold>Header: </legacyBold>atlwin.h</para>
        </content>
    </requirements>
    <section address="cdialogimpl__create">
        <!--6883f413-ecfb-42d3-ae75-03918ee04917-->
        <title>CDialogImpl::Create</title>
        <content>
            <para>Creates a modeless dialog box.</para>
            <legacySyntax>
<legacyBold>HWND Create(</legacyBold>
   <legacyBold>   HWND </legacyBold> <parameterReference>hWndParent</parameterReference>,
   <legacyBold>   LPARAM </legacyBold> <parameterReference>dwInitParam</parameterReference>
   <legacyBold> = NULL </legacyBold>
   <legacyBold>);</legacyBold>
   <legacyBold>HWND Create(</legacyBold>
   <legacyBold>   HWND </legacyBold> <parameterReference>hWndParent</parameterReference>,
   <legacyBold>   RECT&amp;,</legacyBold>
   <legacyBold>   LPARAM </legacyBold> <parameterReference>dwInitParam</parameterReference>
   <legacyBold> = NULL </legacyBold>
   <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hWndParent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] The handle to the owner window.</para>
                        </definition>
                        <definedTerm>
   <legacyBold>RECT&amp; </legacyBold> <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] A <externalLink> <linkText>RECT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162897</linkUri>
                                </externalLink> structure specifying the dialog's size and position.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwInitParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] Specifies the value to pass to the dialog box in the <legacyBold>lParam</legacyBold> parameter of the <legacyBold>WM_INITDIALOG</legacyBold> message.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The handle to the newly created dialog box.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This dialog box is automatically attached to the <unmanagedCodeEntityReference>CDialogImpl</unmanagedCodeEntityReference> object. To create a modal dialog box, call <legacyLink xlink:href="6F31F4C6-EAC4-4E00-A2F3-5175B2A6FE1F">DoModal</legacyLink>. The second override above is used only with <legacyLink xlink:href="55368C27-BD16-45A7-B701-EDB36157C8E8">CComControl</legacyLink>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialogimpl__destroywindow">
        <!--8eaa1035-7f84-4ec4-be92-6d7fc11de8a0-->
        <title>CDialogImpl::DestroyWindow</title>
        <content>
            <para>Destroys a modeless dialog box.</para>
            <legacySyntax>
<legacyBold>BOOL DestroyWindow( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
   <legacyBold>TRUE</legacyBold> if the dialog box was successfully destroyed; otherwise <legacyBold>FALSE</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Returns <legacyBold>TRUE</legacyBold> if the dialog box was successfully destroyed; otherwise <legacyBold>FALSE</legacyBold>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialogimpl__dialogproc">
        <!--828fa7fc-dd61-4f72-954c-2185d17823fc-->
        <title>CDialogImpl::DialogProc</title>
        <content>
            <para>This static function implements the dialog box procedure.</para>
            <legacySyntax>
<legacyBold>static LRESULT CALLBACK DialogProc(</legacyBold>
   <legacyBold>   HWND </legacyBold> <parameterReference>hWnd</parameterReference>,
   <legacyBold>   UINT </legacyBold> <parameterReference>uMsg</parameterReference>,
   <legacyBold>   WPARAM </legacyBold> <parameterReference>wParam</parameterReference>,
   <legacyBold>   LPARAM </legacyBold> <parameterReference>lParam</parameterReference>
   <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] The handle to the dialog box.</para>
                        </definition>
                        <definedTerm> <parameterReference>uMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] The message sent to the dialog box.</para>
                        </definition>
                        <definedTerm> <parameterReference>wParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] Additional message-specific information.</para>
                        </definition>
                        <definedTerm> <parameterReference>lParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] Additional message-specific information.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
   <legacyBold>TRUE</legacyBold> if the message is processed; otherwise,                         <legacyBold>FALSE</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>DialogProc</unmanagedCodeEntityReference> uses the default message map to direct messages to the appropriate handlers.</para>
                    <para>You can override <unmanagedCodeEntityReference>DialogProc</unmanagedCodeEntityReference> to provide a different mechanism for handling messages.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialogimpl__domodal">
        <!--6f31f4c6-eac4-4e00-a2f3-5175b2a6fe1f-->
        <title>CDialogImpl::DoModal</title>
        <content>
            <para>Creates a modal dialog box.</para>
            <legacySyntax>
<legacyBold>INT_PTR DoModal(</legacyBold>
   <legacyBold>   HWND </legacyBold> <parameterReference>hWndParent</parameterReference>
   <legacyBold> = ::GetActiveWindow( ), </legacyBold>
   <legacyBold>   LPARAM </legacyBold> <parameterReference>dwInitParam</parameterReference>
   <legacyBold> = NULL </legacyBold>
   <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hWndParent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] The handle to the owner window. The default value is the return value of the <externalLink> <linkText>GetActiveWindow</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms646292</linkUri>
                                </externalLink> Win32 function.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwInitParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] Specifies the value to pass to the dialog box in the <legacyBold>lParam</legacyBold> parameter of the <legacyBold>WM_INITDIALOG</legacyBold> message.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If successful, the value of the <parameterReference>nRetCode</parameterReference> parameter specified in the call to <legacyLink xlink:href="C85C7A6E-0B87-48B0-BF62-BE8D23CD0B1A">EndDialog</legacyLink>. Otherwise, -1.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This dialog box is automatically attached to the <unmanagedCodeEntityReference>CDialogImpl</unmanagedCodeEntityReference> object.</para>
                    <para>To create a modeless dialog box, call <legacyLink xlink:href="6883F413-ECFB-42D3-AE75-03918EE04917">Create</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialogimpl__enddialog">
        <!--c85c7a6e-0b87-48b0-bf62-be8d23cd0b1a-->
        <title>CDialogImpl::EndDialog</title>
        <content>
            <para>Destroys a modal dialog box.</para>
            <legacySyntax>
<legacyBold>BOOL EndDialog(</legacyBold>
   <legacyBold>   int </legacyBold> <parameterReference>nRetCode</parameterReference>
   <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nRetCode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] The value to be returned by <legacyLink xlink:href="6F31F4C6-EAC4-4E00-A2F3-5175B2A6FE1F">CDialogImpl::DoModal</legacyLink>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
   <legacyBold>TRUE</legacyBold> if the dialog box is destroyed; otherwise,                         <legacyBold>FALSE</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>EndDialog</unmanagedCodeEntityReference> must be called through the dialog procedure. After the dialog box is destroyed, Windows uses the value of <parameterReference>nRetCode</parameterReference> as the return value for <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference>, which created the dialog box.</para>
                    <alert class="note">
                        <para>Do not call <unmanagedCodeEntityReference>EndDialog</unmanagedCodeEntityReference> to destroy a modeless dialog box. Call <legacyLink xlink:href="070FCB24-EBCE-4F51-9335-26665DFDBD82">CWindow::DestroyWindow</legacyLink> instead.</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialogimpl__getdialogproc">
        <!--e9f11f77-4355-4ac4-9532-518be2275745-->
        <title>CDialogImpl::GetDialogProc</title>
        <content>
            <para>Returns <unmanagedCodeEntityReference>DialogProc</unmanagedCodeEntityReference>, the current dialog box procedure.</para>
            <legacySyntax>
<legacyBold>virtual WNDPROC GetDialogProc( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current dialog box procedure.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method to replace the dialog procedure with your own.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialogimpl__mapdialogrect">
        <!--f0815e3e-23e0-4363-b1c4-cd54939dad95-->
        <title>CDialogImpl::MapDialogRect</title>
        <content>
            <para>Converts (maps) the dialog-box units of the specified rectangle to screen units (pixels).</para>
            <legacySyntax>
<legacyBold>BOOL MapDialogRect(</legacyBold>
   <legacyBold>   LPRECT </legacyBold> <parameterReference>lpRect</parameterReference>
   <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object or <legacyLink xlink:href="1B3160DE-64E9-40D1-89EB-AF3E0FD6ACF0">RECT</legacyLink> structure that is to receive the client coordinates of the update that encloses the update region.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the update succeeds; 0 if the update fails. To get extended error information, call <unmanagedCodeEntityReference>GetLastError</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function replaces the coordinates in the specified <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure with the converted coordinates, which allows the structure to be used to create a dialog box or position a control within a dialog box.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialogimpl__onfinalmessage">
        <!--1b16f4dc-80e5-4b11-a0ff-f224ffe2d774-->
        <title>CDialogImpl::OnFinalMessage</title>
        <content>
            <para>Called after receiving the last message (typically <unmanagedCodeEntityReference>WM_NCDESTROY</unmanagedCodeEntityReference>).</para>
            <legacySyntax>
<legacyBold>virtual void OnFinalMessage(</legacyBold>
   <legacyBold>   HWND </legacyBold> <parameterReference>hWnd</parameterReference>
   <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] A handle to the window being destroyed.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Note that if you want to automatically delete your object upon the window destruction, you can call <codeInline>delete this;</codeInline> here.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialogimpl__startdialogproc">
        <!--96d34eb1-a693-44e6-b048-5b95a3041a94-->
        <title>CDialogImpl::StartDialogProc</title>
        <content>
            <para>Called only once, when the first message is received, to process messages sent to the dialog box.</para>
            <legacySyntax>
<legacyBold>static LRESULT CALLBACK StartDialogProc(</legacyBold>
   <legacyBold>   HWND </legacyBold> <parameterReference>hWnd</parameterReference>,
   <legacyBold>   UINT </legacyBold> <parameterReference>uMsg</parameterReference>,
   <legacyBold>   WPARAM </legacyBold> <parameterReference>wParam</parameterReference>,
   <legacyBold>   LPARAM </legacyBold> <parameterReference>lParam </parameterReference>
   <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] The handle to the dialog box.</para>
                        </definition>
                        <definedTerm> <parameterReference>uMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] The message sent to the dialog box.</para>
                        </definition>
                        <definedTerm> <parameterReference>wParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] Additional message-specific information.</para>
                        </definition>
                        <definedTerm> <parameterReference>lParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>[in] Additional message-specific information.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The window procedure.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After the initial call to <unmanagedCodeEntityReference>StartDialogProc</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>DialogProc</unmanagedCodeEntityReference> is set as a dialog procedure, and further calls go there.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="8BBB5AF9-18B1-48C6-880E-166F599EE554">BEGIN_MSG_MAP</link> <link xlink:href="C38AC93D-C3A2-4CE7-8153-F1D34C0F0FA6">ATL Class Overview</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>

