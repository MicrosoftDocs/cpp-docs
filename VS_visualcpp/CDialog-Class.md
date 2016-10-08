---
title: "CDialog Class"
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
ms.assetid: ca64b77e-2cd2-47e3-8eff-c2645ad578f9
caps.latest.revision: 18
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
# CDialog Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>The base class used for displaying dialog boxes on the screen. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CDialog : public CWnd</legacySyntax>
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
                                    <para> <link xlink:href="#cdialog__cdialog">CDialog::CDialog</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#cdialog__create">CDialog::Create</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Initializes the <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference> object. Creates a modeless dialog box and attaches it to the <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__createindirect">CDialog::CreateIndirect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a modeless dialog box from a dialog-box template in memory (not resource-based).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__domodal">CDialog::DoModal</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Calls a modal dialog box and returns when done.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__enddialog">CDialog::EndDialog</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Closes a modal dialog box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__getdefid">CDialog::GetDefID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the ID of the default pushbutton control for a dialog box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__gotodlgctrl">CDialog::GotoDlgCtrl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Moves the focus to a specified dialog-box control in the dialog box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__initmodalindirect">CDialog::InitModalIndirect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a modal dialog box from a dialog-box template in memory (not resource-based). The parameters are stored until the function <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference> is called.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__mapdialogrect">CDialog::MapDialogRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts the dialog-box units of a rectangle to screen units.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__nextdlgctrl">CDialog::NextDlgCtrl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Moves the focus to the next dialog-box control in the dialog box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__oninitdialog">CDialog::OnInitDialog</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to augment dialog-box initialization.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__onsetfont">CDialog::OnSetFont</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to specify the font that a dialog-box control is to use when it draws text.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__prevdlgctrl">CDialog::PrevDlgCtrl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Moves the focus to the previous dialog-box control in the dialog box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__setdefid">CDialog::SetDefID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Changes the default pushbutton control for a dialog box to a specified pushbutton.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__sethelpid">CDialog::SetHelpID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets a context-sensitive help ID for the dialog box.</para>
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
                                    <para> <link xlink:href="#cdialog__oncancel">CDialog::OnCancel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to perform the Cancel button or ESC key action. The default closes the dialog box and <legacyBold>DoModal </legacyBold>returns <legacyBold>IDCANCEL</legacyBold>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdialog__onok">CDialog::OnOK</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to perform the OK button action in a modal dialog box. The default closes the dialog box and <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference> returns <legacyBold>IDOK</legacyBold>.</para>
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
            <para>Dialog boxes are of two types: modal and modeless. A modal dialog box must be closed by the user before the application continues. A modeless dialog box allows the user to display the dialog box and return to another task without canceling or removing the dialog box.</para>
            <para>A <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference> object is a combination of a dialog template and a <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference>-derived class. Use the dialog editor to create the dialog template and store it in a resource, then use the Add Class wizard to create a class derived from <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference>. </para>
            <para>A dialog box, like any other window, receives messages from Windows. In a dialog box, you are particularly interested in handling notification messages from the dialog box's controls since that is how the user interacts with your dialog box. Use the Properties window to select which messages you wish to handle and it will add the appropriate message-map entries and message-handler member functions to the class for you. You only need to write application-specific code in the handler member functions.</para>
            <para>If you prefer, you can always write message-map entries and member functions manually.</para>
            <para>In all but the most trivial dialog box, you add member variables to your derived dialog class to store data entered in the dialog box's controls by the user or to display data for the user. You can use the Add Variable wizard to create member variables and associate them with controls. At the same time, you choose a variable type and permissible range of values for each variable. The code wizard adds the member variables to your derived dialog class. </para>
            <para>A data map is generated to automatically handle the exchange of data between the member variables and the dialog box's controls. The data map provides functions that initialize the controls in the dialog box with the proper values, retrieve the data, and validate the data.</para>
            <para>To create a modal dialog box, construct an object on the stack using the constructor for your derived dialog class and then call <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference> to create the dialog window and its controls. If you wish to create a modeless dialog, call <legacyBold>Create</legacyBold> in the constructor of your dialog class.</para>
            <para>You can also create a template in memory by using a                 <externalLink> <linkText>DLGTEMPLATE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms645394</linkUri>
                </externalLink> data structure as described in the <token>winSDK</token>. After you construct a <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference> object, call <legacyLink xlink:href="#cdialog__createindirect">CreateIndirect</legacyLink> to create a modeless dialog box, or call <legacyLink xlink:href="#cdialog__initmodalindirect">InitModalIndirect</legacyLink> and <legacyLink xlink:href="#cdialog__domodal">DoModal</legacyLink> to create a modal dialog box.</para>
            <para>The exchange and validation data map is written in an override of <unmanagedCodeEntityReference>CWnd::DoDataExchange</unmanagedCodeEntityReference> that is added to your new dialog class. See the <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__dodataexchange">DoDataExchange</legacyLink> member function in <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> for more on the exchange and validation functionality.</para>
            <para>Both the programmer and the framework call <unmanagedCodeEntityReference>DoDataExchange</unmanagedCodeEntityReference> indirectly through a call to <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__updatedata">CWnd::UpdateData</legacyLink>.</para>
            <para>The framework calls <unmanagedCodeEntityReference>UpdateData</unmanagedCodeEntityReference> when the user clicks the OK button to close a modal dialog box. (The data is not retrieved if the Cancel button is clicked.) The default implementation of <legacyLink xlink:href="#cdialog__oninitdialog">OnInitDialog</legacyLink> also calls <unmanagedCodeEntityReference>UpdateData</unmanagedCodeEntityReference> to set the initial values of the controls. You typically override <unmanagedCodeEntityReference>OnInitDialog</unmanagedCodeEntityReference> to further initialize controls. <unmanagedCodeEntityReference>OnInitDialog</unmanagedCodeEntityReference> is called after all the dialog controls are created and just before the dialog box is displayed.</para>
            <para>You can call <unmanagedCodeEntityReference>CWnd::UpdateData</unmanagedCodeEntityReference> at any time during the execution of a modal or modeless dialog box.</para>
            <para>If you develop a dialog box by hand, you add the necessary member variables to the derived dialog-box class yourself, and you add member functions to set or get these values.</para>
            <para>A modal dialog box closes automatically when the user presses the OK or Cancel buttons or when your code calls the <unmanagedCodeEntityReference>EndDialog</unmanagedCodeEntityReference> member function.</para>
            <para>When you implement a modeless dialog box, always override the <unmanagedCodeEntityReference>OnCancel</unmanagedCodeEntityReference> member function and call <unmanagedCodeEntityReference>DestroyWindow</unmanagedCodeEntityReference> from within it. Don't call the base class <unmanagedCodeEntityReference>CDialog::OnCancel</unmanagedCodeEntityReference>, because it calls <unmanagedCodeEntityReference>EndDialog</unmanagedCodeEntityReference>, which will make the dialog box invisible but will not destroy it. You should also override <unmanagedCodeEntityReference>PostNcDestroy</unmanagedCodeEntityReference> for modeless dialog boxes in order to delete <legacyBold>this</legacyBold>, since modeless dialog boxes are usually allocated with <legacyBold>new</legacyBold>. Modal dialog boxes are usually constructed on the frame and do not need <unmanagedCodeEntityReference>PostNcDestroy</unmanagedCodeEntityReference> cleanup.</para>
            <para>For more information on <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference>, see:  </para>
            <list class="bullet">
                <listItem>
                    <para> <legacyLink xlink:href="e4feea1a-8360-4ccb-9b84-507f1ccd9ef3">Dialog Boxes</legacyLink>
                    </para>
                </listItem>
                <listItem>
                    <para>Knowledge Base article Q262954 : HOWTO: Create a Resizeable Dialog Box with Scroll Bars</para>
                </listItem>
            </list>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">CCmdTarget</legacyLink>
            </para>
            <para> <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxwin.h</para>
        </content>
    </requirements>
    <section address="cdialog__cdialog">
        <!--426dcd74-7974-429b-b9d3-eb0b1cf96d5b-->
        <title>CDialog::CDialog</title>
        <content>
            <para>To construct a resource-based modal dialog box, call either public form of the constructor.</para>
            <legacySyntax>explicit CDialog(
    LPCTSTR lpszTemplateName,
    CWnd* pParentWnd = NULL );

explicit CDialog(
    UINT nIDTemplate,
    CWnd* pParentWnd = NULL );

CDialog();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszTemplateName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a null-terminated string that is the name of a dialog-box template resource.</para>
                        </definition>
                        <definedTerm> <parameterReference>nIDTemplate</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the ID number of a dialog-box template resource.</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the parent or owner window object (of type <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink>) to which the dialog object belongs. If it is <legacyBold>NULL</legacyBold>, the dialog object's parent window is set to the main application window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>One form of the constructor provides access to the dialog resource by template name. The other constructor provides access by template ID number, usually with an <legacyBold>IDD_</legacyBold> prefix (for example, IDD_DIALOG1).</para>
                    <para>To construct a modal dialog box from a template in memory, first invoke the parameterless, protected constructor and then call <unmanagedCodeEntityReference>InitModalIndirect</unmanagedCodeEntityReference>.</para>
                    <para>After you construct a modal dialog box with one of the above methods, call <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference>.</para>
                    <para>To construct a modeless dialog box, use the protected form of the <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference> constructor. The constructor is protected because you must derive your own dialog-box class to implement a modeless dialog box. Construction of a modeless dialog box is a two-step process. First call the constructor; then call the <legacyBold>Create</legacyBold> member function to create a resource-based dialog box, or call <unmanagedCodeEntityReference>CreateIndirect</unmanagedCodeEntityReference> to create the dialog box from a template in memory. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__create">
        <!--df6bd976-0166-497c-bd33-3f33c1738877-->
        <title>CDialog::Create</title>
        <content>
            <para>Call <legacyBold>Create</legacyBold> to create a modeless dialog box using a dialog-box template from a resource.</para>
            <legacySyntax>virtual BOOL Create(
    LPCTSTR lpszTemplateName,
    CWnd* pParentWnd = NULL );

virtual BOOL Create(
    UINT nIDTemplate,
    CWnd* pParentWnd = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszTemplateName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a null-terminated string that is the name of a dialog-box template resource.</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the parent window object (of type <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink>) to which the dialog object belongs. If it is <legacyBold>NULL</legacyBold>, the dialog object's parent window is set to the main application window.</para>
                        </definition>
                        <definedTerm> <parameterReference>nIDTemplate</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the ID number of a dialog-box template resource.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Both forms return nonzero if dialog-box creation and initialization were successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can put the call to <legacyBold>Create</legacyBold> inside the constructor or call it after the constructor is invoked.</para>
                    <para>Two forms of the <legacyBold>Create</legacyBold> member function are provided for access to the dialog-box template resource by either template name or template ID number (for example, IDD_DIALOG1).</para>
                    <para>For either form, pass a pointer to the parent window object. If <parameterReference>pParentWnd</parameterReference> is <legacyBold>NULL</legacyBold>, the dialog box will be created with its parent or owner window set to the main application window.</para>
                    <para>The <legacyBold>Create</legacyBold> member function returns immediately after it creates the dialog box.</para>
                    <para>Use the <legacyBold>WS_VISIBLE</legacyBold> style in the dialog-box template if the dialog box should appear when the parent window is created. Otherwise, you must call <unmanagedCodeEntityReference>ShowWindow</unmanagedCodeEntityReference>. For further dialog-box styles and their application, see the                         <externalLink> <linkText>DLGTEMPLATE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms645394</linkUri>
                        </externalLink> structure in the <token>winSDK</token> and <legacyLink xlink:href="c85ffbe4-f4ff-4227-917a-48ec4a411842">Window Styles</legacyLink> in the                         <legacyItalic>MFC Reference</legacyItalic>. </para>
                    <para>Use the <unmanagedCodeEntityReference>CWnd::DestroyWindow</unmanagedCodeEntityReference> function to destroy a dialog box created by the <legacyBold>Create</legacyBold> function.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCControlLadenDialog#62</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__createindirect">
        <!--9baffca0-6b7a-4db4-9146-13f9f078752b-->
        <title>CDialog::CreateIndirect</title>
        <content>
            <para>Call this member function to create a modeless dialog box from a dialog-box template in memory.</para>
            <legacySyntax>virtual BOOL CreateIndirect(
    LPCDLGTEMPLATE lpDialogTemplate,
    CWnd* pParentWnd = NULL,
    void* lpDialogInit = NULL );

virtual BOOL CreateIndirect(
    HGLOBAL hDialogTemplate,
    CWnd* pParentWnd = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpDialogTemplate</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to memory that contains a dialog-box template used to create the dialog box. This template is in the form of a                                 <externalLink> <linkText>DLGTEMPLATE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms645394</linkUri>
                                </externalLink> structure and control information, as described in the <token>winSDK</token>. </para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the dialog object's parent window object (of type <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink>). If it is <legacyBold>NULL</legacyBold>, the dialog object's parent window is set to the main application window.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpDialogInit</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyBold>DLGINIT </legacyBold>resource.</para>
                        </definition>
                        <definedTerm> <parameterReference>hDialogTemplate</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a handle to global memory containing a dialog-box template. This template is in the form of a <legacyBold>DLGTEMPLATE</legacyBold> structure and data for each control in the dialog box.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the dialog box was created and initialized successfully; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>CreateIndirect</unmanagedCodeEntityReference> member function returns immediately after it creates the dialog box.</para>
                    <para>Use the <legacyBold>WS_VISIBLE</legacyBold> style in the dialog-box template if the dialog box should appear when the parent window is created. Otherwise, you must call <unmanagedCodeEntityReference>ShowWindow</unmanagedCodeEntityReference> to cause it to appear. For more information on how you can specify other dialog-box styles in the template, see the                         <externalLink> <linkText>DLGTEMPLATE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms645394</linkUri>
                        </externalLink> structure in the <token>winSDK</token>. </para>
                    <para>Use the <unmanagedCodeEntityReference>CWnd::DestroyWindow</unmanagedCodeEntityReference> function to destroy a dialog box created by the <unmanagedCodeEntityReference>CreateIndirect</unmanagedCodeEntityReference> function.</para>
                    <para>Dialog boxes that contain ActiveX controls require additional information provided in a <legacyBold>DLGINIT </legacyBold>resource. For more information, see Knowledge Base article Q231591, " HOWTO: Use a Dialog Template to Create a MFC Dialog with an ActiveX Control." Knowledge Base articles are available in the MSDN Library Visual Studio documentation or at                         <externalLink> <linkText>http://support.microsoft.com</linkText> <linkUri>http://support.microsoft.com/</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__domodal">
        <!--da4e2889-2903-4971-b086-86f9a2a3d965-->
        <title>CDialog::DoModal</title>
        <content>
            <para>Call this member function to invoke the modal dialog box and return the dialog-box result when done.</para>
            <legacySyntax>virtual INT_PTR DoModal();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An <languageKeyword>int</languageKeyword> value that specifies the value of the <parameterReference>nResult</parameterReference> parameter that was passed to the <legacyLink xlink:href="#cdialog__enddialog">CDialog::EndDialog</legacyLink> member function, which is used to close the dialog box. The return value is –1 if the function could not create the dialog box, or <legacyBold>IDABORT</legacyBold> if some other error occurred, in which case the <legacyLink xlink:href="d8931d88-250e-4db4-963f-2c5b3e99b45f">Output window</legacyLink> will contain error information from                         <externalLink> <linkText>GetLastError</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms679360</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function handles all interaction with the user while the dialog box is active. This is what makes the dialog box modal; that is, the user cannot interact with other windows until the dialog box is closed.</para>
                    <para>If the user clicks one of the pushbuttons in the dialog box, such as OK or Cancel, a message-handler member function, such as <legacyLink xlink:href="#cdialog__onok">OnOK</legacyLink> or <legacyLink xlink:href="#cdialog__oncancel">OnCancel</legacyLink>, is called to attempt to close the dialog box. The default <unmanagedCodeEntityReference>OnOK</unmanagedCodeEntityReference> member function will validate and update the dialog-box data and close the dialog box with result <legacyBold>IDOK</legacyBold>, and the default <unmanagedCodeEntityReference>OnCancel</unmanagedCodeEntityReference> member function will close the dialog box with result <legacyBold>IDCANCEL</legacyBold> without validating or updating the dialog-box data. You can override these message-handler functions to alter their behavior.</para>
                    <alert class="note">
                        <para> <unmanagedCodeEntityReference>PreTranslateMessage</unmanagedCodeEntityReference> is now called for modal dialog box message processing.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCControlLadenDialog#63</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__enddialog">
        <!--49f28795-6181-488a-869c-a44bbd776af2-->
        <title>CDialog::EndDialog</title>
        <content>
            <para>Call this member function to terminate a modal dialog box.</para>
            <legacySyntax>void EndDialog( int nResult );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nResult</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the value to be returned from the dialog box to the caller of <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function returns <parameterReference>nResult</parameterReference> as the return value of <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference>. You must use the <unmanagedCodeEntityReference>EndDialog</unmanagedCodeEntityReference> function to complete processing whenever a modal dialog box is created.</para>
                    <para>You can call <unmanagedCodeEntityReference>EndDialog</unmanagedCodeEntityReference> at any time, even in <legacyLink xlink:href="#cdialog__oninitdialog">OnInitDialog</legacyLink>, in which case you should close the dialog box before it is shown or before the input focus is set.</para>
                    <para> <unmanagedCodeEntityReference>EndDialog</unmanagedCodeEntityReference> does not close the dialog box immediately. Instead, it sets a flag that directs the dialog box to close as soon as the current message handler returns.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCControlLadenDialog#64</codeReference>
                    <codeReference>NVC_MFCControlLadenDialog#65</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__getdefid">
        <!--2e0dd782-bb16-418f-a647-ee04af76f5e6-->
        <title>CDialog::GetDefID</title>
        <content>
            <para>Call the <unmanagedCodeEntityReference>GetDefID</unmanagedCodeEntityReference> member function to get the ID of the default pushbutton control for a dialog box.</para>
            <legacySyntax>DWORD GetDefID() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A 32-bit value ( <unmanagedCodeEntityReference>DWORD</unmanagedCodeEntityReference>). If the default pushbutton has an ID value, the high-order word contains <legacyBold>DC_HASDEFID</legacyBold> and the low-order word contains the ID value. If the default pushbutton does not have an ID value, the return value is 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This is usually an OK button.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__gotodlgctrl">
        <!--171bc5b7-5ecb-4bec-a0b5-5b56c5ebbddd-->
        <title>CDialog::GotoDlgCtrl</title>
        <content>
            <para>Moves the focus to the specified control in the dialog box.</para>
            <legacySyntax>void GotoDlgCtrl( CWnd* pWndCtrl );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pWndCtrl</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the window (control) that is to receive the focus.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To get a pointer to the control (child window) to pass as <parameterReference>pWndCtrl</parameterReference>, call the <unmanagedCodeEntityReference>CWnd::GetDlgItem</unmanagedCodeEntityReference> member function, which returns a pointer to a <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink> object.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__getdlgitem">CWnd::GetDlgItem</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__initmodalindirect">
        <!--c1fb27e1-c16a-45b1-bfa8-2be307c057aa-->
        <title>CDialog::InitModalIndirect</title>
        <content>
            <para>Call this member function to initialize a modal dialog object using a dialog-box template that you construct in memory.</para>
            <legacySyntax>BOOL InitModalIndirect(
    LPCDLGTEMPLATE lpDialogTemplate,
    CWnd* pParentWnd = NULL,
    void* lpDialogInit = NULL );

    BOOL InitModalIndirect(
    HGLOBAL hDialogTemplate,
    CWnd* pParentWnd = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpDialogTemplate</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to memory that contains a dialog-box template used to create the dialog box. This template is in the form of a                                 <externalLink> <linkText>DLGTEMPLATE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms645394</linkUri>
                                </externalLink> structure and control information, as described in the <token>winSDK</token>. </para>
                        </definition>
                        <definedTerm> <parameterReference>hDialogTemplate</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a handle to global memory containing a dialog-box template. This template is in the form of a <legacyBold>DLGTEMPLATE</legacyBold> structure and data for each control in the dialog box.</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the parent or owner window object (of type <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink>) to which the dialog object belongs. If it is <legacyBold>NULL</legacyBold>, the dialog object's parent window is set to the main application window.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpDialogInit</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyBold>DLGINIT </legacyBold>resource.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the dialog object was created and initialized successfully; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To create a modal dialog box indirectly, first allocate a global block of memory and fill it with the dialog box template. Then call the empty <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference> constructor to construct the dialog-box object. Next, call <unmanagedCodeEntityReference>InitModalIndirect</unmanagedCodeEntityReference> to store your handle to the in-memory dialog-box template. The Windows dialog box is created and displayed later, when the <legacyLink xlink:href="#cdialog__domodal">DoModal</legacyLink> member function is called.</para>
                    <para>Dialog boxes that contain ActiveX controls require additional information provided in a <legacyBold>DLGINIT </legacyBold>resource. For more information, see Knowledge Base article Q231591, " HOWTO: Use a Dialog Template to Create a MFC Dialog with an ActiveX Control." Knowledge Base articles are available in the MSDN Library Visual Studio documentation or at                         <externalLink> <linkText>http://support.microsoft.com</linkText> <linkUri>http://support.microsoft.com/</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__mapdialogrect">
        <!--5c260147-4ba2-4d93-a7e8-708b83c212bb-->
        <title>CDialog::MapDialogRect</title>
        <content>
            <para>Call to convert the dialog-box units of a rectangle to screen units.</para>
            <legacySyntax>void MapDialogRect( LPRECT lpRect ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object that contains the dialog-box coordinates to be converted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Dialog-box units are stated in terms of the current dialog-box base unit derived from the average width and height of characters in the font used for dialog-box text. One horizontal unit is one-fourth of the dialog-box base-width unit, and one vertical unit is one-eighth of the dialog-box base height unit.</para>
                    <para>The <legacyBold>GetDialogBaseUnits</legacyBold> Windows function returns size information for the system font, but you can specify a different font for each dialog box if you use the <legacyBold>DS_SETFONT</legacyBold> style in the resource-definition file. The <unmanagedCodeEntityReference>MapDialogRect</unmanagedCodeEntityReference> Windows function uses the appropriate font for this dialog box.</para>
                    <para>The <unmanagedCodeEntityReference>MapDialogRect</unmanagedCodeEntityReference> member function replaces the dialog-box units in <parameterReference>lpRect</parameterReference> with screen units (pixels) so that the rectangle can be used to create a dialog box or position a control within a box.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__nextdlgctrl">
        <!--58a0959c-f112-4d01-9ca0-66a947637b26-->
        <title>CDialog::NextDlgCtrl</title>
        <content>
            <para>Moves the focus to the next control in the dialog box.</para>
            <legacySyntax>void NextDlgCtrl() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the focus is at the last control in the dialog box, it moves to the first control.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__oncancel">
        <!--01b6fadd-183c-481d-9a9b-4da64213b1c2-->
        <title>CDialog::OnCancel</title>
        <content>
            <para>The framework calls this method when the user clicks <ui>Cancel</ui> or presses the ESC key in a modal or modeless dialog box.</para>
            <legacySyntax>virtual void OnCancel();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method to perform actions (such as restoring old data) when a user closes the dialog box by clicking <ui>Cancel</ui> or hitting the ESC key. The default closes a modal dialog box by calling <legacyLink xlink:href="#cdialog__enddialog">EndDialog</legacyLink> and causing <legacyLink xlink:href="#cdialog__domodal">DoModal</legacyLink> to return IDCANCEL.</para>
                    <para>If you implement the <ui>Cancel</ui> button in a modeless dialog box, you must override the <unmanagedCodeEntityReference>OnCancel</unmanagedCodeEntityReference> method and call <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__destroywindow">DestroyWindow</legacyLink> inside it. Do not call the base-class method, because it calls <unmanagedCodeEntityReference>EndDialog</unmanagedCodeEntityReference>, which will make the dialog box invisible but not destroy it.</para>
                    <alert class="note">
                        <para>You cannot override this method when you use a <unmanagedCodeEntityReference>CFileDialog</unmanagedCodeEntityReference> object in a program that is compiled under Windows XP. For more information about <unmanagedCodeEntityReference>CFileDialog</unmanagedCodeEntityReference>, see <link xlink:href="fda4fd3c-08b8-4ce0-8e9d-7bab23f8c6c0">CFileDialog Class</link>.</para>
                    </alert>
                    <para/>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCControlLadenDialog#66</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__oninitdialog">
        <!--76d86e5f-435d-44d0-89ec-c2296367d058-->
        <title>CDialog::OnInitDialog</title>
        <content>
            <para>This method is called in response to the <unmanagedCodeEntityReference>WM_INITDIALOG</unmanagedCodeEntityReference> message.</para>
            <legacySyntax>virtual BOOL OnInitDialog();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Specifies whether the application has set the input focus to one of the controls in the dialog box. If <unmanagedCodeEntityReference>OnInitDialog</unmanagedCodeEntityReference> returns nonzero, Windows sets the input focus to the default location, the first control in the dialog box. The application can return 0 only if it has explicitly set the input focus to one of the controls in the dialog box.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Windows sends the <unmanagedCodeEntityReference>WM_INITDIALOG</unmanagedCodeEntityReference> message to the dialog box during the <legacyLink xlink:href="#cdialog__create">Create</legacyLink>, <legacyLink xlink:href="#cdialog__createindirect">CreateIndirect</legacyLink>, or <legacyLink xlink:href="#cdialog__domodal">DoModal</legacyLink> calls, which occur immediately before the dialog box is displayed. </para>
                    <para>Override this method if you want to perform special processing when the dialog box is initialized. In the overridden version, first call the base class <unmanagedCodeEntityReference>OnInitDialog</unmanagedCodeEntityReference> but ignore its return value. You will typically return <languageKeyword>TRUE</languageKeyword> from your overridden method.</para>
                    <para>Windows calls the <unmanagedCodeEntityReference>OnInitDialog</unmanagedCodeEntityReference> function by using the standard global dialog-box procedure common to all Microsoft Foundation Class Library dialog boxes. It does not call this function through your message map, and therefore you do not need a message map entry for this method.</para>
                    <alert class="note">
                        <para>You cannot override this method when you use a <unmanagedCodeEntityReference>CFileDialog</unmanagedCodeEntityReference> object in a program that is compiled under <token>wiprlhext</token>. For more information about changes to <unmanagedCodeEntityReference>CFileDialog</unmanagedCodeEntityReference> under <token>wiprlhext</token> see <link xlink:href="fda4fd3c-08b8-4ce0-8e9d-7bab23f8c6c0">CFileDialog Class</link>.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCControlLadenDialog#67</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__onok">
        <!--78ca29b6-d9cf-44e6-ac6f-37a046e876e3-->
        <title>CDialog::OnOK</title>
        <content>
            <para>Called when the user clicks the <ui>OK</ui> button (the button with an ID of IDOK).</para>
            <legacySyntax>virtual void OnOK();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method to perform actions when the <ui>OK</ui> button is activated. If the dialog box includes automatic data validation and exchange, the default implementation of this method validates the dialog box data and updates the appropriate variables in your application.</para>
                    <para>If you implement the <ui>OK</ui> button in a modeless dialog box, you must override the <unmanagedCodeEntityReference>OnOK</unmanagedCodeEntityReference> method and call <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__destroywindow">DestroyWindow</legacyLink> inside it. Do not call the base-class method, because it calls <legacyLink xlink:href="#cdialog__enddialog">EndDialog</legacyLink> which makes the dialog box invisible but does not destroy it.</para>
                    <alert class="note">
                        <para>You cannot override this method when you use a <unmanagedCodeEntityReference>CFileDialog</unmanagedCodeEntityReference> object in a program that is compiled under Windows XP. For more information about <unmanagedCodeEntityReference>CFileDialog</unmanagedCodeEntityReference>, see <link xlink:href="fda4fd3c-08b8-4ce0-8e9d-7bab23f8c6c0">CFileDialog Class</link>.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCControlLadenDialog#68</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__onsetfont">
        <!--bee88a27-9e50-4de2-abc5-e431154ca218-->
        <title>CDialog::OnSetFont</title>
        <content>
            <para>Specifies the font a dialog-box control will use when drawing text.</para>
            <legacySyntax>Virtual void OnSetFont(
    CFont* pFont );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference> pFont</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies a pointer to the font that will be used as the default font for all controls in this dialog box.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The dialog box will use the specified font as the default for all its controls. </para>
                    <para>The dialog editor typically sets the dialog-box font as part of the dialog-box template resource.</para>
                    <alert class="note">
                        <para>You cannot override this method when you use a <unmanagedCodeEntityReference>CFileDialog</unmanagedCodeEntityReference> object in a program that is compiled under <token>wiprlhext</token>. For more information about changes to <unmanagedCodeEntityReference>CFileDialog</unmanagedCodeEntityReference> under <token>wiprlhext</token> see <link xlink:href="fda4fd3c-08b8-4ce0-8e9d-7bab23f8c6c0">CFileDialog Class</link>.</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__prevdlgctrl">
        <!--5892530b-9cd1-4f6f-b0b0-b4c37e1d62c3-->
        <title>CDialog::PrevDlgCtrl</title>
        <content>
            <para>Sets the focus to the previous control in the dialog box.</para>
            <legacySyntax>void PrevDlgCtrl() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the focus is at the first control in the dialog box, it moves to the last control in the box.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__setdefid">
        <!--27861f24-b7d2-40e2-87d2-ab2bca425f5e-->
        <title>CDialog::SetDefID</title>
        <content>
            <para>Changes the default pushbutton control for a dialog box.</para>
            <legacySyntax>void SetDefID( UINT nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the ID of the pushbutton control that will become the default.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdialog__sethelpid">
        <!--90f9a1f1-9127-4d54-936d-2fb40f113396-->
        <title>CDialog::SetHelpID</title>
        <content>
            <para>Sets a context-sensitive help ID for the dialog box.</para>
            <legacySyntax>void SetHelpID( UINT nIDR );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>nIDR</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the context-sensitive help ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample DLGCBR32</legacyLink> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample DLGTEMPL</legacyLink> <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



