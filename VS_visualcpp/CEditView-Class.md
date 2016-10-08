---
title: "CEditView Class"
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
ms.assetid: bf38255c-fcbe-450c-95b2-3c5e35f86c37
caps.latest.revision: 19
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
# CEditView Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>A type of view class that provides the functionality of a Windows edit control and can be used to implement simple text-editor functionality. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CEditView : public CCtrlView</legacySyntax>
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
                                    <para> <link xlink:href="#ceditview__ceditview">CEditView::CEditView</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs an object of type <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference>.</para>
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
                                    <para> <link xlink:href="#ceditview__findtext">CEditView::FindText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Searches for a string within the text.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ceditview__getbufferlength">CEditView::GetBufferLength</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Obtains the length of the character buffer.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ceditview__geteditctrl">CEditView::GetEditCtrl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Provides access to the <unmanagedCodeEntityReference>CEdit</unmanagedCodeEntityReference> portion of a <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> object (the Windows edit control).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ceditview__getprinterfont">CEditView::GetPrinterFont</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current printer font.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ceditview__getselectedtext">CEditView::GetSelectedText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current text selection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ceditview__lockbuffer">CEditView::LockBuffer</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Locks the buffer.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ceditview__printinsiderect">CEditView::PrintInsideRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Renders text inside a given rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ceditview__serializeraw">CEditView::SerializeRaw</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Serializes a <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> object to disk as raw text.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ceditview__setprinterfont">CEditView::SetPrinterFont</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets a new printer font.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ceditview__settabstops">CEditView::SetTabStops</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets tab stops for both screen display and printing.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ceditview__unlockbuffer">CEditView::UnlockBuffer</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Unlocks the buffer.</para>
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
                                    <para> <link xlink:href="#ceditview__onfindnext">CEditView::OnFindNext</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Finds next occurrence of a text string.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ceditview__onreplaceall">CEditView::OnReplaceAll</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Replaces all occurrences of a given string with a new string.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ceditview__onreplacesel">CEditView::OnReplaceSel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Replaces current selection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ceditview__ontextnotfound">CEditView::OnTextNotFound</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when a find operation fails to match any further text.</para>
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
                                    <para> <link xlink:href="#ceditview__dwstyledefault">CEditView::dwStyleDefault</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Default style for objects of type <legacyBold>CEditView.</legacyBold>
                                    </para>
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
            <para>The <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> class provides the following additional functions:  </para>
            <list class="bullet">
                <listItem>
                    <para>Print.</para>
                </listItem>
                <listItem>
                    <para>Find and replace.</para>
                </listItem>
            </list>
            <para>Because class <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> is a derivative of class <unmanagedCodeEntityReference>CView</unmanagedCodeEntityReference>, objects of class <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> can be used with documents and document templates.</para>
            <para>Each <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> control's text is kept in its own global memory object. Your application can have any number of <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> objects.</para>
            <para>Create objects of type <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> if you want an edit window with the added functionality listed above, or if you want simple text-editor functionality. A <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> object can occupy the entire client area of a window. Derive your own classes from <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> to add or modify the basic functionality, or to declare classes that can be added to a document template.</para>
            <para>The default implementation of class <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> handles the following commands: <legacyBold>ID_EDIT_SELECT_ALL</legacyBold>, <legacyBold>ID_EDIT_FIND</legacyBold>, <legacyBold>ID_EDIT_REPLACE</legacyBold>, <legacyBold>ID_EDIT_REPEAT</legacyBold>, and <legacyBold>ID_FILE_PRINT</legacyBold>.</para>
            <para>The default character limit for <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> is (1024 * 1024 - 1 = 1048575). This can be changed by calling the <legacyBold>EM_LIMITTEXT</legacyBold> function of the underlying edit control. However, the limits are different depending on the operating system and the type of edit control (single or multiline). For more information on these limits, see                 <externalLink> <linkText>EM_LIMITTEXT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761607</linkUri>
                </externalLink>.</para>
            <para>To change this limit in your control, override the <codeInline>OnCreate()</codeInline> function for your <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> class and insert the following line of code:</para>
            <codeReference>NVC_MFCDocView#65</codeReference>
            <para>Objects of type <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> (or of types derived from <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference>) have the following limitations:  </para>
            <list class="bullet">
                <listItem>
                    <para> <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> does not implement true what you see is what you get (WYSIWYG) editing. Where there is a choice between readability on the screen and matching printed output, <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> opts for screen readability.</para>
                </listItem>
                <listItem>
                    <para> <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> can display text in only a single font. No special character formatting is supported. See class <legacyLink xlink:href="bd576b10-4cc0-4050-8f76-e1a0548411e4">CRichEditView</legacyLink> for greater capabilities.</para>
                </listItem>
                <listItem>
                    <para>The amount of text a <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> can contain is limited. The limits are the same as for the <unmanagedCodeEntityReference>CEdit</unmanagedCodeEntityReference> control.</para>
                </listItem>
            </list>
            <para>For more information on <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference>, see <legacyLink xlink:href="dba42178-7459-4ccc-b025-f3d9b8a4b737">Derived View Classes Available in MFC</legacyLink>.</para>
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
            <para> <legacyLink xlink:href="9cff3c56-7564-416b-b9a4-71a9254ed755">CView</legacyLink>
            </para>
            <para> <legacyLink xlink:href="ff488596-1e71-451f-8fec-b0831a7b44e0">CCtrlView</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header:</legacyBold> afxext.h</para>
        </content>
    </requirements>
    <section address="ceditview__ceditview">
        <!--25431cbe-6756-423c-a3fa-d1fa6c3be531-->
        <title>CEditView::CEditView</title>
        <content>
            <para>Constructs an object of type <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference>.</para>
            <legacySyntax>CEditView();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After constructing the object, you must call the <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__create">CWnd::Create</legacyLink> function before the edit control is used. If you derive a class from <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> and add it to the template using <unmanagedCodeEntityReference>CWinApp::AddDocTemplate</unmanagedCodeEntityReference>, the framework calls both this constructor and the <legacyBold>Create</legacyBold> function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__dwstyledefault">
        <!--ddd4bc5b-9981-4d39-96d3-0ab073f2cb7e-->
        <title>CEditView::dwStyleDefault</title>
        <content>
            <para>Contains the default style of the <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>static const DWORD dwStyleDefault;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Pass this static member as the <parameterReference>dwStyle</parameterReference> parameter of the <legacyBold>Create</legacyBold> function to obtain the default style for the <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__findtext">
        <!--143adf23-8490-4575-b962-f3a6fc991de7-->
        <title>CEditView::FindText</title>
        <content>
            <para>Call the <unmanagedCodeEntityReference>FindText</unmanagedCodeEntityReference> function to search the <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> object's text buffer.</para>
            <legacySyntax>BOOL FindText(
    LPCTSTR lpszFind,
    BOOL bNext = TRUE,
    BOOL bCase = TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszFind</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The text to be found.</para>
                        </definition>
                        <definedTerm> <parameterReference>bNext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the direction of the search. If <legacyBold>TRUE</legacyBold>, the search direction is toward the end of the buffer. If <legacyBold>FALSE</legacyBold>, the search direction is toward the beginning of the buffer.</para>
                        </definition>
                        <definedTerm> <parameterReference>bCase</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the search is case sensitive. If <legacyBold>TRUE</legacyBold>, the search is case sensitive. If <legacyBold>FALSE</legacyBold>, the search is not case sensitive.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the search text is found; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function searches the text in the buffer for the text specified by <parameterReference>lpszFind</parameterReference>, starting at the current selection, in the direction specified by <parameterReference>bNext</parameterReference>, and with case sensitivity specified by <parameterReference>bCase</parameterReference>. If the text is found, it sets the selection to the found text and returns a nonzero value. If the text is not found, the function returns 0.</para>
                    <para>You normally do not need to call the <unmanagedCodeEntityReference>FindText</unmanagedCodeEntityReference> function unless you override <unmanagedCodeEntityReference>OnFindNext</unmanagedCodeEntityReference>, which calls <unmanagedCodeEntityReference>FindText</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__getbufferlength">
        <!--58a996bb-75d0-4d2f-a7ea-a7961434f42e-->
        <title>CEditView::GetBufferLength</title>
        <content>
            <para>Call this member function to obtain the number of characters currently in the edit control's buffer, not including the null terminator.</para>
            <legacySyntax>UINT GetBufferLength() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The length of the string in the buffer.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__geteditctrl">
        <!--72169fc2-7207-4023-908b-366faebede3f-->
        <title>CEditView::GetEditCtrl</title>
        <content>
            <para>Call <unmanagedCodeEntityReference>GetEditCtrl</unmanagedCodeEntityReference> to get a reference to the edit control used by the edit view.</para>
            <legacySyntax>CEdit&amp; GetEditCtrl() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to a <unmanagedCodeEntityReference>CEdit</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This control is of type <legacyLink xlink:href="b1533c30-7f10-4663-88d3-8b7f2c9f7024">CEdit</legacyLink>, so you can manipulate the Windows edit control directly using the <unmanagedCodeEntityReference>CEdit</unmanagedCodeEntityReference> member functions.</para>
                    <alert class="caution">
                        <para>Using the <unmanagedCodeEntityReference>CEdit</unmanagedCodeEntityReference> object can change the state of the underlying Windows edit control. For example, you should not change the tab settings using the <legacyLink xlink:href="b1533c30-7f10-4663-88d3-8b7f2c9f7024#cedit__settabstops">CEdit::SetTabStops</legacyLink> function because <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> caches these settings for use both in the edit control and in printing. Instead, use <legacyLink xlink:href="#ceditview__settabstops">CEditView::SetTabStops</legacyLink>.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#66</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__getprinterfont">
        <!--625cc504-b5b5-4549-ab38-690bb2809088-->
        <title>CEditView::GetPrinterFont</title>
        <content>
            <para>Call <unmanagedCodeEntityReference>GetPrinterFont</unmanagedCodeEntityReference> to get a pointer to a <legacyLink xlink:href="3fad6bfe-d6ce-4ab9-967a-5ce0aa102800">CFont</legacyLink> object that describes the current printer font.</para>
            <legacySyntax>CFont* GetPrinterFont() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to a <unmanagedCodeEntityReference>CFont</unmanagedCodeEntityReference> object that specifies the current printer font; <legacyBold>NULL</legacyBold> if the printer font has not been set. The pointer may be temporary and should not be stored for later use.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the printer font has not been set, the default printing behavior of the <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> class is to print using the same font used for display.</para>
                    <para>Use this function to determine the current printer font. If it is not the desired printer font, use <legacyLink xlink:href="#ceditview__setprinterfont">CEditView::SetPrinterFont</legacyLink> to change it. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__getselectedtext">
        <!--5b400de3-acb8-4e09-90bf-33342c640493-->
        <title>CEditView::GetSelectedText</title>
        <content>
            <para>Call <unmanagedCodeEntityReference>GetSelectedText</unmanagedCodeEntityReference> to copy the selected text into a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object, up to the end of the selection or the character preceding the first carriage-return character in the selection.</para>
            <legacySyntax>void GetSelectedText( CString&amp; strResult ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>strResult</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to the <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object that is to receive the selected text.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__lockbuffer">
        <!--f5f21c68-97d2-433f-b3f6-800627ca870f-->
        <title>CEditView::LockBuffer</title>
        <content>
            <para>Call this member function to obtain a pointer to the buffer. The buffer should not be modified.</para>
            <legacySyntax>LPCTSTR LockBuffer() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the edit control's buffer.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__onfindnext">
        <!--60e5843a-d18b-4be8-9662-eb4d8fa2606f-->
        <title>CEditView::OnFindNext</title>
        <content>
            <para>Searches the text in the buffer for the text specified by <parameterReference>lpszFind</parameterReference>, in the direction specified by <parameterReference>bNext</parameterReference>, with case sensitivity specified by <parameterReference>bCase</parameterReference>.</para>
            <legacySyntax>virtual void OnFindNext(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszFind</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The text to be found.</para>
                        </definition>
                        <definedTerm> <parameterReference>bNext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the direction of the search. If <legacyBold>TRUE</legacyBold>, the search direction is toward the end of the buffer. If <legacyBold>FALSE</legacyBold>, the search direction is toward the beginning of the buffer.</para>
                        </definition>
                        <definedTerm> <parameterReference>bCase</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the search is case sensitive. If <legacyBold>TRUE</legacyBold>, the search is case sensitive. If <legacyBold>FALSE</legacyBold>, the search is not case sensitive.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The search starts at the beginning of the current selection and is accomplished through a call to <legacyLink xlink:href="#ceditview__findtext">FindText</legacyLink>. In the default implementation, <unmanagedCodeEntityReference>OnFindNext</unmanagedCodeEntityReference> calls <legacyLink xlink:href="#ceditview__ontextnotfound">OnTextNotFound</legacyLink> if the text is not found.</para>
                    <para>Override <unmanagedCodeEntityReference>OnFindNext</unmanagedCodeEntityReference> to change the way a <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference>-derived object searches text. <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> calls <unmanagedCodeEntityReference>OnFindNext</unmanagedCodeEntityReference> when the user chooses the Find Next button in the standard Find dialog box.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__onreplaceall">
        <!--9da3567b-4a1a-4497-8507-95a97379a718-->
        <title>CEditView::OnReplaceAll</title>
        <content>
            <para> <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> calls <unmanagedCodeEntityReference>OnReplaceAll</unmanagedCodeEntityReference> when the user selects the Replace All button in the standard Replace dialog box.</para>
            <legacySyntax>virtual void OnReplaceAll(
    LPCTSTR lpszFind,
    LPCTSTR lpszReplace,
    BOOL bCase );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszFind</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The text to be found.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszReplace</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The text to replace the search text.</para>
                        </definition>
                        <definedTerm> <parameterReference>bCase</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether search is case sensitive. If <legacyBold>TRUE</legacyBold>, the search is case sensitive. If <legacyBold>FALSE</legacyBold>, the search is not case sensitive.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>OnReplaceAll</unmanagedCodeEntityReference> searches the text in the buffer for the text specified by <parameterReference>lpszFind</parameterReference>, with case sensitivity specified by <parameterReference>bCase</parameterReference>. The search starts at the beginning of the current selection. Each time the search text is found, this function replaces that occurrence of the text with the text specified by <parameterReference>lpszReplace</parameterReference>. The search is accomplished through a call to <legacyLink xlink:href="#ceditview__findtext">FindText</legacyLink>. In the default implementation, <legacyLink xlink:href="#ceditview__ontextnotfound">OnTextNotFound</legacyLink> is called if the text is not found.</para>
                    <para>If the current selection does not match <parameterReference>lpszFind</parameterReference>, the selection is updated to the first occurrence of the text specified by <parameterReference>lpszFind</parameterReference> and a replace is not performed. This allows the user to confirm that this is what they want to do when the selection does not match the text to be replaced.</para>
                    <para>Override <unmanagedCodeEntityReference>OnReplaceAll</unmanagedCodeEntityReference> to change the way a <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference>-derived object replaces text. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__onreplacesel">
        <!--ed425db7-c941-409b-8a21-6b0029f1b72e-->
        <title>CEditView::OnReplaceSel</title>
        <content>
            <para> <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> calls <unmanagedCodeEntityReference>OnReplaceSel</unmanagedCodeEntityReference> when the user selects the Replace button in the standard Replace dialog box.</para>
            <legacySyntax>virtual void OnReplaceSel(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase,
    LPCTSTR lpszReplace );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszFind</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The text to be found.</para>
                        </definition>
                        <definedTerm> <parameterReference>bNext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the direction of the search. If <legacyBold>TRUE</legacyBold>, the search direction is toward the end of the buffer. If <legacyBold>FALSE</legacyBold>, the search direction is toward the beginning of the buffer.</para>
                        </definition>
                        <definedTerm> <parameterReference>bCase</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the search is case sensitive. If <legacyBold>TRUE</legacyBold>, the search is case sensitive. If <legacyBold>FALSE</legacyBold>, the search is not case sensitive.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszReplace</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The text to replace the found text.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After replacing the selection, this function searches the text in the buffer for the next occurrence of the text specified by <parameterReference>lpszFind</parameterReference>, in the direction specified by <parameterReference>bNext</parameterReference>, with case sensitivity specified by <parameterReference>bCase</parameterReference>. The search is accomplished through a call to <legacyLink xlink:href="#ceditview__findtext">FindText</legacyLink>. If the text is not found, <legacyLink xlink:href="#ceditview__ontextnotfound">OnTextNotFound</legacyLink> is called.</para>
                    <para>Override <unmanagedCodeEntityReference>OnReplaceSel</unmanagedCodeEntityReference> to change the way a <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference>-derived object replaces the selected text. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__ontextnotfound">
        <!--72f1fa75-965f-4823-9871-785295cbabb8-->
        <title>CEditView::OnTextNotFound</title>
        <content>
            <para>Override this function to change the default implementation, which calls the Windows function <legacyBold>MessageBeep</legacyBold>.</para>
            <legacySyntax>virtual void OnTextNotFound( LPCTSTR lpszFind );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszFind</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The text to be found.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__printinsiderect">
        <!--34bb6c2d-d6e7-4de7-8c64-947b5517d8a0-->
        <title>CEditView::PrintInsideRect</title>
        <content>
            <para>Call <unmanagedCodeEntityReference>PrintInsideRect</unmanagedCodeEntityReference> to print text in the rectangle specified by                 <legacyItalic>rectLayout</legacyItalic>.</para>
            <legacySyntax>UINT PrintInsideRect(
    CDC *pDC,
    RECT&amp; rectLayout,
    UINT nIndexStart,
    UINT nIndexStop );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the printer device context.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>rectLayout</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Reference to a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object or <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure specifying the rectangle in which the text is to be rendered.</para>
                        </definition>
                        <definedTerm> <parameterReference>nIndexStart</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Index within the buffer of the first character to be rendered.</para>
                        </definition>
                        <definedTerm> <parameterReference>nIndexStop</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Index within the buffer of the character following the last character to be rendered.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The index of the next character to be printed (that is, the character following the last character rendered).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> control does not have the style <legacyBold>ES_AUTOHSCROLL</legacyBold>, text is wrapped within the rendering rectangle. If the control does have the style <legacyBold>ES_AUTOHSCROLL</legacyBold>, the text is clipped at the right edge of the rectangle.</para>
                    <para>The <legacyBold>rect.bottom</legacyBold> element of the                         <legacyItalic>rectLayout</legacyItalic> object is changed so that the rectangle's dimensions define the part of the original rectangle that is occupied by the text.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__serializeraw">
        <!--d51f6d99-5c0f-4600-9632-946124dcc837-->
        <title>CEditView::SerializeRaw</title>
        <content>
            <para>Call <unmanagedCodeEntityReference>SerializeRaw</unmanagedCodeEntityReference> to have a <unmanagedCodeEntityReference>CArchive</unmanagedCodeEntityReference> object read or write the text in the <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> object to a text file.</para>
            <legacySyntax>void SerializeRaw( CArchive&amp; ar );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>ar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Reference to the <unmanagedCodeEntityReference>CArchive</unmanagedCodeEntityReference> object that stores the serialized text.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>SerializeRaw</unmanagedCodeEntityReference> differs from <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference>'s internal implementation of <unmanagedCodeEntityReference>Serialize</unmanagedCodeEntityReference> in that it reads and writes only the text, without preceding object-description data.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__setprinterfont">
        <!--e3d5a885-c5ae-4e2b-94c7-d52099ee04e4-->
        <title>CEditView::SetPrinterFont</title>
        <content>
            <para>Call <unmanagedCodeEntityReference>SetPrinterFont</unmanagedCodeEntityReference> to set the printer font to the font specified by <parameterReference>pFont</parameterReference>.</para>
            <legacySyntax>void SetPrinterFont( CFont* pFont );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pFont</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an object of type <unmanagedCodeEntityReference>CFont</unmanagedCodeEntityReference>. If <legacyBold>NULL</legacyBold>, the font used for printing is based on the display font.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If you want your view to always use a particular font for printing, include a call to <unmanagedCodeEntityReference>SetPrinterFont</unmanagedCodeEntityReference> in your class's <unmanagedCodeEntityReference>OnPreparePrinting</unmanagedCodeEntityReference> function. This virtual function is called before printing occurs, so the font change takes place before the view's contents are printed.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__settabstops">
        <!--d29d34d9-7cb4-4fc7-8747-e5c183fa9f20-->
        <title>CEditView::SetTabStops</title>
        <content>
            <para>Call this function to set the tab stops used for display and printing.</para>
            <legacySyntax>void SetTabStops( int nTabStops );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nTabStops</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Width of each tab stop, in dialog units.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Only a single tab-stop width is supported. ( <unmanagedCodeEntityReference>CEdit</unmanagedCodeEntityReference> objects support multiple tab widths.) Widths are in dialog units, which equal one-fourth of the average character width (based on uppercase and lowercase alphabetic characters only) of the font used at the time of printing or displaying. You should not use <unmanagedCodeEntityReference>CEdit::SetTabStops</unmanagedCodeEntityReference> because <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> must cache the tab-stop value.</para>
                    <para>This function modifies only the tabs of the object for which it is called. To change the tab stops for each <unmanagedCodeEntityReference>CEditView</unmanagedCodeEntityReference> object in your application, call each object's <unmanagedCodeEntityReference>SetTabStops</unmanagedCodeEntityReference> function.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>This code fragment sets the tab stops in the control to every fourth character by carefully measuring the font the control uses.</para>
                    <codeReference>NVC_MFCDocView#67</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ceditview__unlockbuffer">
        <!--b77a07e1-d63d-4ee0-9a86-4f74c8ddcc9d-->
        <title>CEditView::UnlockBuffer</title>
        <content>
            <para>Call this member function to unlock the buffer.</para>
            <legacySyntax>void UnlockBuffer() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call <unmanagedCodeEntityReference>UnlockBuffer</unmanagedCodeEntityReference> after you have finished using the pointer returned by <legacyLink xlink:href="#ceditview__lockbuffer">LockBuffer</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample SUPERPAD</legacyLink> <link xlink:href="ff488596-1e71-451f-8fec-b0831a7b44e0">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="b1533c30-7f10-4663-88d3-8b7f2c9f7024">CEdit</link> <link xlink:href="e5a2891d-e1e1-4599-8c7e-afa9b4945446">CDocument</link> <link xlink:href="14b41a1f-bf9d-4eac-b6a8-4c54ffcc77f6">CDocTemplate</link> <link xlink:href="ff488596-1e71-451f-8fec-b0831a7b44e0">CCtrlView</link> <link xlink:href="bd576b10-4cc0-4050-8f76-e1a0548411e4">CRichEditView</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



