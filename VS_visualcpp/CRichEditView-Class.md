---
title: "CRichEditView Class"
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
ms.assetid: bd576b10-4cc0-4050-8f76-e1a0548411e4
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
# CRichEditView Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>With <legacyLink xlink:href="c936ec18-d516-49d4-b7fb-c9aa0229eddc">CRichEditDoc</legacyLink> and <legacyLink xlink:href="6c0b4efe-0fb8-4621-b5e1-fdcb8ec48c3b">CRichEditCntrItem</legacyLink>, provides the functionality of the rich edit control within the context of MFC's document view architecture. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CRichEditView : public CCtrlView</legacySyntax>
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
                                    <para> <link xlink:href="#cricheditview__cricheditview">CRichEditView::CRichEditView</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#cricheditview__adjustdialogposition">CRichEditView::AdjustDialogPosition</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Moves a dialog box so that it doesn't obscure the current selection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__canpaste">CRichEditView::CanPaste</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Tells whether the Clipboard contains data that can be pasted into the rich edit view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__dopaste">CRichEditView::DoPaste</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Pastes an OLE item into this rich edit view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__findtext">CRichEditView::FindText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Finds the specified text, invoking the wait cursor.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__findtextsimple">CRichEditView::FindTextSimple</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Finds the specified text.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__getcharformatselection">CRichEditView::GetCharFormatSelection</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the character formatting attributes for the current selection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__getdocument">CRichEditView::GetDocument</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a pointer to the related <legacyLink xlink:href="c936ec18-d516-49d4-b7fb-c9aa0229eddc">CRichEditDoc</legacyLink>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__getinplaceactiveitem">CRichEditView::GetInPlaceActiveItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the OLE item that is currently in-place active in the rich edit view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__getmargins">CRichEditView::GetMargins</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the margins for this rich edit view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__getpagerect">CRichEditView::GetPageRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the page rectangle for this rich edit view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__getpapersize">CRichEditView::GetPaperSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the paper size for this rich edit view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__getparaformatselection">CRichEditView::GetParaFormatSelection</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the paragraph formatting attributes for the current selection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__getprintrect">CRichEditView::GetPrintRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the print rectangle for this rich edit view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__getprintwidth">CRichEditView::GetPrintWidth</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the print width for this rich edit view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__getricheditctrl">CRichEditView::GetRichEditCtrl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the rich edit control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__getselecteditem">CRichEditView::GetSelectedItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the selected item from the rich edit view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__gettextlength">CRichEditView::GetTextLength</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the length of the text in the rich edit view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__gettextlengthex">CRichEditView::GetTextLengthEx</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the number of characters or bytes in the rich edit view. Expanded flag list for method of determining the length. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__insertfileasobject">CRichEditView::InsertFileAsObject</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts a file as an OLE item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__insertitem">CRichEditView::InsertItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts a new item as an OLE item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__isricheditformat">CRichEditView::IsRichEditFormat</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Tells whether the Clipboard contains data in a rich edit or text format.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__onchareffect">CRichEditView::OnCharEffect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Toggles the character formatting for the current selection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__onparaalign">CRichEditView::OnParaAlign</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Changes the alignment of paragraphs.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__onupdatechareffect">CRichEditView::OnUpdateCharEffect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Updates the Command UI for character public member functions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__onupdateparaalign">CRichEditView::OnUpdateParaAlign</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Updates the Command UI for paragraph public member functions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__printinsiderect">CRichEditView::PrintInsideRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Formats the specified text within the given rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__printpage">CRichEditView::PrintPage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Formats the specified text within the given page.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__setcharformat">CRichEditView::SetCharFormat</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the character formatting attributes for the current selection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__setmargins">CRichEditView::SetMargins</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the margins for this rich edit view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__setpapersize">CRichEditView::SetPaperSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the paper size for this rich edit view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__setparaformat">CRichEditView::SetParaFormat</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the paragraph formatting attributes for the current selection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__textnotfound">CRichEditView::TextNotFound</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Resets the internal search state of the control.</para>
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
                                    <para> <link xlink:href="#cricheditview__getclipboarddata">CRichEditView::GetClipboardData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a Clipboard object for a range in this rich edit view.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__getcontextmenu">CRichEditView::GetContextMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a context menu to use on a right mouse-button down.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__isselected">CRichEditView::IsSelected</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates if the given OLE item is selected or not.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__onfindnext">CRichEditView::OnFindNext</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Finds the next occurrence of a substring.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__oninitialupdate">CRichEditView::OnInitialUpdate</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Refreshes a view when it is first attached to a document.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__onpastenativeobject">CRichEditView::OnPasteNativeObject</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves native data from an OLE item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__onprinterchanged">CRichEditView::OnPrinterChanged</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the print characteristics to the given device.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__onreplaceall">CRichEditView::OnReplaceAll</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Replaces all occurrences of a given string with a new string.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__onreplacesel">CRichEditView::OnReplaceSel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Replaces the current selection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__ontextnotfound">CRichEditView::OnTextNotFound</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Handles user notification that the requested text was not found.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__queryacceptdata">CRichEditView::QueryAcceptData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Queries to see about the data on the <unmanagedCodeEntityReference>IDataObject</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__wrapchanged">CRichEditView::WrapChanged</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adjusts the target output device for this rich edit view, based on the value of <unmanagedCodeEntityReference>m_nWordWrap</unmanagedCodeEntityReference>.</para>
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
                                    <para> <link xlink:href="#cricheditview__m_nbulletindent">CRichEditView::m_nBulletIndent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates the amount of indent for bullet lists.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditview__m_nwordwrap">CRichEditView::m_nWordWrap</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates the word wrap constraints.</para>
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
            <para>A "rich edit control" is a window in which the user can enter and edit text. The text can be assigned character and paragraph formatting, and can include embedded OLE objects. Rich edit controls provide a programming interface for formatting text. However, an application must implement any user interface components necessary to make formatting operations available to the user.</para>
            <para> <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference> maintains the text and formatting characteristic of text. <unmanagedCodeEntityReference>CRichEditDoc</unmanagedCodeEntityReference> maintains the list of OLE client items which are in the view. <unmanagedCodeEntityReference>CRichEditCntrItem</unmanagedCodeEntityReference> provides container-side access to the OLE client item.</para>
            <para>This Windows Common control (and therefore the <legacyLink xlink:href="2be52788-822c-4c27-aafd-2471231e74eb">CRichEditCtrl</legacyLink> and related classes) is available only to programs running under Windows 95/98 and Windows NT versions 3.51 and later.</para>
            <para>For an example of using a rich edit view in an MFC application, see the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">WORDPAD</legacyLink> sample application.</para>
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
            <para> <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxrich.h</para>
        </content>
    </requirements>
    <section address="cricheditview__adjustdialogposition">
        <!--e6890a9e-1416-46d0-b577-3f83aee9a7c6-->
        <title>CRichEditView::AdjustDialogPosition</title>
        <content>
            <para>Call this function to move the given dialog box so that it does not obscure the current selection.</para>
            <legacySyntax>void AdjustDialogPosition( CDialog* pDlg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>pDlg</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__canpaste">
        <!--a26eb57e-9632-4ce1-a8a0-b78b7c5323e2-->
        <title>CRichEditView::CanPaste</title>
        <content>
            <para>Call this function to determine if the Clipboard contains information that can be pasted into this rich edit view.</para>
            <legacySyntax>BOOL CanPaste() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the Clipboard contains data in a format which this rich edit view can accept; otherwise, 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__cricheditview">
        <!--ad0fac69-55a3-48cd-9583-3b727c1a11a7-->
        <title>CRichEditView::CRichEditView</title>
        <content>
            <para>Call this function to create a <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CRichEditView();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="cricheditview__dopaste">
        <!--39d3df99-f7ec-46ee-bdbd-0eeed48f1811-->
        <title>CRichEditView::DoPaste</title>
        <content>
            <para>Call this function to paste the OLE item in <parameterReference>dataobj</parameterReference> into this rich edit document/view.</para>
            <legacySyntax>void DoPaste(
    COleDataObject&amp; dataobj,
    CLIPFORMAT cf,
    HMETAFILEPICT hMetaPict );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dataobj</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <legacyLink xlink:href="d1cc84be-2e1c-4bb3-a8a0-565eb08aaa34">COleDataObject</legacyLink> containing the data to paste.</para>
                        </definition>
                        <definedTerm> <parameterReference>cf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The desired Clipboard format.</para>
                        </definition>
                        <definedTerm> <parameterReference>hMetaPict</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The metafile that represents the item to be pasted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this function as part of the default implementation of <legacyLink xlink:href="#cricheditview__queryacceptdata">QueryAcceptData</legacyLink>.</para>
                    <para>This function determines the type of paste based on the results of the handler for Paste Special. If <parameterReference>cf</parameterReference> is 0, the new item uses the current iconic representation. If <parameterReference>cf</parameterReference> is nonzero and <parameterReference>hMetaPict</parameterReference> is not <legacyBold>NULL</legacyBold>, the new item uses <parameterReference>hMetaPict</parameterReference> for its representation.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__findtext">
        <!--f38d323e-98d5-4638-af52-e9990e5c4595-->
        <title>CRichEditView::FindText</title>
        <content>
            <para>Call this function to find the specified text and set it to be the current selection.</para>
            <legacySyntax>BOOL FindText(
    LPCTSTR lpszFind,
    BOOL bCase = TRUE,
    BOOL bWord = TRUE,
    BOOL bNext = TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszFind</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the string to search for.</para>
                        </definition>
                        <definedTerm> <parameterReference>bCase</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates if the search is case sensitive.</para>
                        </definition>
                        <definedTerm> <parameterReference>bWord</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates if the search should match whole words only, not parts of words.</para>
                        </definition>
                        <definedTerm> <parameterReference>bNext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates the direction of the search. If <legacyBold>TRUE</legacyBold>, the search direction is toward the end of the buffer. If <legacyBold>FALSE</legacyBold>, the search direction is toward the beginning of the buffer.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the <parameterReference>lpszFind</parameterReference> text is found; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function displays the wait cursor during the find operation.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#151</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__findtextsimple">
        <!--4b8afdbe-26ba-4713-bbef-86e86f7b1836-->
        <title>CRichEditView::FindTextSimple</title>
        <content>
            <para>Call this function to find the specified text and set it to be the current selection.</para>
            <legacySyntax>BOOL FindTextSimple(
    LPCTSTR lpszFind,
    BOOL bCase = TRUE,
    BOOL bWord = TRUE,
    BOOL bNext = TRUE  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszFind</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the string to search for.</para>
                        </definition>
                        <definedTerm> <parameterReference>bCase</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates if the search is case sensitive.</para>
                        </definition>
                        <definedTerm> <parameterReference>bWord</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates if the search should match whole words only, not parts of words.</para>
                        </definition>
                        <definedTerm> <parameterReference>bNext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates the direction of the search. If <legacyBold>TRUE</legacyBold>, the search direction is toward the end of the buffer. If <legacyBold>FALSE</legacyBold>, the search direction is toward the beginning of the buffer.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the <parameterReference>lpszFind</parameterReference> text is found; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditview__findtext">CRichEditView::FindText</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__getcharformatselection">
        <!--bc9dbd03-105c-4062-860d-1b094c54bb6e-->
        <title>CRichEditView::GetCharFormatSelection</title>
        <content>
            <para>Call this function to get the character formatting attributes of the current selection.</para>
            <legacySyntax>CHARFORMAT2&amp; GetCharFormatSelection();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <externalLink> <linkText>CHARFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787883</linkUri>
                        </externalLink> structure which contains the character formatting attributes of the current selection.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see the                         <externalLink> <linkText>EM_GETCHARFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb788026</linkUri>
                        </externalLink> message and the                         <externalLink> <linkText>CHARFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787883</linkUri>
                        </externalLink> structure in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#152</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__getclipboarddata">
        <!--3dfc2da1-5603-4df5-ab7f-03a4d55de1cf-->
        <title>CRichEditView::GetClipboardData</title>
        <content>
            <para>The framework calls this function as part of the processing of                 <externalLink> <linkText>IRichEditOleCallback::GetClipboardData</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774315</linkUri>
                </externalLink>.</para>
            <legacySyntax>virtual HRESULT GetClipboardData(
    CHARRANGE* lpchrg,
    DWORD dwReco,
    LPDATAOBJECT lpRichDataObj,
    LPDATAOBJECT* lplpdataobj );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpchrg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the                                 <externalLink> <linkText>CHARRANGE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787885</linkUri>
                                </externalLink> structure specifying the range of characters (and OLE items) to copy to the data object specified by <parameterReference>lplpdataobj</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwReco</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Clipboard operation flag. Can be one of these values.</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>RECO_COPY</legacyBold>   Copy to the Clipboard.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RECO_CUT</legacyBold>   Cut to the Clipboard.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RECO_DRAG</legacyBold>   Drag operation (drag and drop).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RECO_DROP</legacyBold>   Drop operation (drag and drop).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RECO_PASTE</legacyBold>   Paste from the Clipboard.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>lpRichDataObj</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to an                                 <externalLink> <linkText>IDataObject</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms688421</linkUri>
                                </externalLink> object containing the Clipboard data from the rich edit control (                                <externalLink> <linkText>IRichEditOle::GetClipboardData</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774341</linkUri>
                                </externalLink>).</para>
                        </definition>
                        <definedTerm> <parameterReference>lplpdataobj</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the pointer variable that receives the address of the <unmanagedCodeEntityReference>IDataObject</unmanagedCodeEntityReference> object representing the range specified in the <parameterReference>lpchrg</parameterReference> parameter. The value of <parameterReference>lplpdataobj</parameterReference> is ignored if an error is returned.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An <unmanagedCodeEntityReference>HRESULT</unmanagedCodeEntityReference> value reporting the success of the operation. For more information on <unmanagedCodeEntityReference>HRESULT</unmanagedCodeEntityReference>, see                         <externalLink> <linkText>Structure of COM Error Codes</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms690088</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value indicates success, <legacyBold>IRichEditOleCallback::GetClipboardData</legacyBold> returns the <unmanagedCodeEntityReference>IDataObject</unmanagedCodeEntityReference> accessed by <parameterReference>lplpdataobj</parameterReference>; otherwise, it returns the one accessed by <parameterReference>lpRichDataObj</parameterReference>. Override this function to supply your own Clipboard data. The default implementation of this function returns <legacyBold>E_NOTIMPL</legacyBold>.</para>
                    <para>This is an advanced overridable.</para>
                    <para>For more information, see                         <externalLink> <linkText>IRichEditOle::GetClipboardData</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774341</linkUri>
                        </externalLink>,                         <externalLink> <linkText>IRichEditOleCallback::GetClipboardData</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774315</linkUri>
                        </externalLink>, and                         <externalLink> <linkText>CHARRANGE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787885</linkUri>
                        </externalLink> in the <token>winSDK</token> and see                         <externalLink> <linkText>IDataObject</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms688421</linkUri>
                        </externalLink> in the <token>winsdkshort</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__getcontextmenu">
        <!--267f96a3-e7a4-459d-b139-10cbd36326c8-->
        <title>CRichEditView::GetContextMenu</title>
        <content>
            <para>The framework calls this function as part of the processing of                 <externalLink> <linkText>IRichEditOleCallback::GetContextMenu</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774317</linkUri>
                </externalLink>.</para>
            <legacySyntax>virtual HMENU GetContextMenu(
    WORD seltyp,
    LPOLEOBJECT lpoleobj,
    CHARRANGE* lpchrg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>seltyp</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The selection type. The selection type values are described in the Remarks section.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpoleobj</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <legacyBold>OLEOBJECT</legacyBold> structure specifying the first selected OLE object if the selection contains one or more OLE items. If the selection contains no items, <parameterReference>lpoleobj</parameterReference> is <legacyBold>NULL</legacyBold>. The <legacyBold>OLEOBJECT</legacyBold> structure holds a pointer to an OLE object v-table.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpchrg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a                                 <externalLink> <linkText>CHARRANGE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787885</linkUri>
                                </externalLink> structure containing the current selection.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Handle to the context menu.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function is a typical part of right mouse-button down processing.</para>
                    <para>The selection type can be any combination of the following flags:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SEL_EMPTY</unmanagedCodeEntityReference>   Indicates that there is no current selection.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SEL_TEXT</unmanagedCodeEntityReference>   Indicates that the current selection contains text.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SEL_OBJECT</unmanagedCodeEntityReference>   Indicates that the current selection contains at least one OLE item.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SEL_MULTICHAR</unmanagedCodeEntityReference>   Indicates that the current selection contains more than one character of text.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SEL_MULTIOBJECT</unmanagedCodeEntityReference>   Indicates that the current selection contains more than one OLE object.</para>
                        </listItem>
                    </list>
                    <para>The default implementation returns <legacyBold>NULL</legacyBold>. This is an advanced overridable.</para>
                    <para>For more information, see                         <externalLink> <linkText>IRichEditOleCallback::GetContextMenu</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774317</linkUri>
                        </externalLink> and                         <externalLink> <linkText>CHARRANGE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787885</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                    <para>For more information on the <legacyBold>OLEOBJECT</legacyBold> type, see the OLE Data Structures and Structure Allocation article in the                         <legacyItalic>OLE Knowledge Base</legacyItalic>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__getdocument">
        <!--318f6b2f-1523-41a3-9c16-87fea82b43fe-->
        <title>CRichEditView::GetDocument</title>
        <content>
            <para>Call this function to get a pointer to the <unmanagedCodeEntityReference>CRichEditDoc</unmanagedCodeEntityReference> associated with this view.</para>
            <legacySyntax>CRichEditDoc* GetDocument() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to a <legacyLink xlink:href="c936ec18-d516-49d4-b7fb-c9aa0229eddc">CRichEditDoc</legacyLink> object associated with your <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__getinplaceactiveitem">
        <!--00bb819a-0dd3-40c5-9803-fbb078e9bb0f-->
        <title>CRichEditView::GetInPlaceActiveItem</title>
        <content>
            <para>Call this function to get the OLE item that is currently activated in place in this <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CRichEditCntrItem* GetInPlaceActiveItem() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the single, in-place active <legacyLink xlink:href="6c0b4efe-0fb8-4621-b5e1-fdcb8ec48c3b">CRichEditCntrItem</legacyLink> object in this rich edit view; <legacyBold>NULL</legacyBold> if there is no OLE item currently in the in-place active state.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__getmargins">
        <!--cdef3afd-0875-4f38-8f6a-f03372e381de-->
        <title>CRichEditView::GetMargins</title>
        <content>
            <para>Call this function to retrieve the current margins used in printing.</para>
            <legacySyntax>CRect GetMargins() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The margins used in printing, measured in <unmanagedCodeEntityReference>MM_TWIPS</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__getpagerect">
        <!--a7ae0ca0-57bb-4312-a3e3-7910f4fefc92-->
        <title>CRichEditView::GetPageRect</title>
        <content>
            <para>Call this function to get the dimensions of the page used in printing.</para>
            <legacySyntax>CRect GetPageRect() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The bounds of the page used in printing, measured in <unmanagedCodeEntityReference>MM_TWIPS</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This value is based on the paper size.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__getpapersize">
        <!--b7c2a231-9c30-47b7-a888-2508a2c2a716-->
        <title>CRichEditView::GetPaperSize</title>
        <content>
            <para>Call this function to retrieve the current paper size.</para>
            <legacySyntax>CSize GetPaperSize() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The size of the paper used in printing, measured in <unmanagedCodeEntityReference>MM_TWIPS</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#153</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__getparaformatselection">
        <!--af54f34b-b645-4fc1-a580-a517d2b11e04-->
        <title>CRichEditView::GetParaFormatSelection</title>
        <content>
            <para>Call this function to get the paragraph formatting attributes of the current selection.</para>
            <legacySyntax>PARAFORMAT2&amp; GetParaFormatSelection();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <externalLink> <linkText>PARAFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787942</linkUri>
                        </externalLink> structure which contains the paragraph formatting attributes of the current selection.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see                         <externalLink> <linkText>EM_GETPARAFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774182</linkUri>
                        </externalLink> message and                         <externalLink> <linkText>PARAFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787942</linkUri>
                        </externalLink> structure in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__getprintrect">
        <!--bbd46268-e0e8-4578-bce2-357e8dd83fa7-->
        <title>CRichEditView::GetPrintRect</title>
        <content>
            <para>Call this function to retrieve the bounds of the printing area within the page rectangle.</para>
            <legacySyntax>CRect GetPrintRect() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The bounds of the image area used in printing, measured in <unmanagedCodeEntityReference>MM_TWIPS</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#154</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__getprintwidth">
        <!--eb2f061f-214a-49bb-abb5-a79537987910-->
        <title>CRichEditView::GetPrintWidth</title>
        <content>
            <para>Call this function to determine the width of the printing area.</para>
            <legacySyntax>int GetPrintWidth() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The width of the printing area, measured in <unmanagedCodeEntityReference>MM_TWIPS</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__getricheditctrl">
        <!--d90b8110-57b6-47b3-a595-e343299a1716-->
        <title>CRichEditView::GetRichEditCtrl</title>
        <content>
            <para>Call this function to retrieve the <legacyLink xlink:href="2be52788-822c-4c27-aafd-2471231e74eb">CRichEditCtrl</legacyLink> object associated with the <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CRichEditCtrl&amp; GetRichEditCtrl() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object for this view.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditview__findtext">CRichEditView::FindText</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__getselecteditem">
        <!--aa2f3e58-cbae-486a-ad35-ed9c47f6727f-->
        <title>CRichEditView::GetSelectedItem</title>
        <content>
            <para>Call this function to retrieve the OLE item (a <unmanagedCodeEntityReference>CRichEditCntrItem</unmanagedCodeEntityReference> object) currently selected in this <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CRichEditCntrItem* GetSelectedItem() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to a <legacyLink xlink:href="6c0b4efe-0fb8-4621-b5e1-fdcb8ec48c3b">CRichEditCntrItem</legacyLink> object selected in the <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference> object; <legacyBold>NULL</legacyBold> if no item is selected in this view.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__gettextlength">
        <!--13d023cb-6f4c-49e9-9c6b-0ac52ab57415-->
        <title>CRichEditView::GetTextLength</title>
        <content>
            <para>Call this function to retrieve the length of the text in this <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>long GetTextLength() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The length of the text in this <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__gettextlengthex">
        <!--91012c48-1a69-42a2-a40c-5c8901fa5623-->
        <title>CRichEditView::GetTextLengthEx</title>
        <content>
            <para>Call this member function to calculate the length of the text in this <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>long GetTextLengthEx(
    DWORD dwFlags,
    UINT uCodePage = -1  ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Value specifying the method to be used in determining the text length. This member can be one or more of the values listed in the flags member of                                 <externalLink> <linkText>GETTEXTLENGTHEX</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787915</linkUri>
                                </externalLink> described in the <token>winSDK</token>. </para>
                        </definition>
                        <definedTerm> <parameterReference>uCodePage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Code page for translation (CP_ACP for ANSI Code Page, 1200 for Unicode). </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of characters or bytes in the edit control. If incompatible flags were set in <parameterReference>dwFlags</parameterReference>, this member function returns <unmanagedCodeEntityReference>E_INVALIDARG</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>GetTextLengthEx</unmanagedCodeEntityReference> provides additional ways of determining the length of the text. It supports the Rich Edit 2.0 functionality. For more information, see                         <externalLink> <linkText>About Rich Edit Controls</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787873</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__insertfileasobject">
        <!--67c6b1d9-d3c4-4e10-a013-a9969e040657-->
        <title>CRichEditView::InsertFileAsObject</title>
        <content>
            <para>Call this function to insert the specified file (as a <legacyLink xlink:href="6c0b4efe-0fb8-4621-b5e1-fdcb8ec48c3b">CRichEditCntrItem</legacyLink> object) into a rich edit view.</para>
            <legacySyntax>void InsertFileAsObject( LPCTSTR lpszFileName );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszFileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>String containing the name of the file to be inserted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__insertitem">
        <!--1399ad83-f42d-480a-92e9-6b3b342a8339-->
        <title>CRichEditView::InsertItem</title>
        <content>
            <para>Call this function to insert a <legacyLink xlink:href="6c0b4efe-0fb8-4621-b5e1-fdcb8ec48c3b">CRichEditCntrItem</legacyLink> object into a rich edit view.</para>
            <legacySyntax>HRESULT InsertItem( CRichEditCntrItem* pItem );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pItem</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the item to be inserted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An <unmanagedCodeEntityReference>HRESULT</unmanagedCodeEntityReference> value indicating the success of the insertion.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information on <unmanagedCodeEntityReference>HRESULT</unmanagedCodeEntityReference>, see                         <externalLink> <linkText>Structure of COM Error Codes</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms690088</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__isricheditformat">
        <!--888c6851-8a12-4a2f-b73d-63eae0684e9c-->
        <title>CRichEditView::IsRichEditFormat</title>
        <content>
            <para>Call this function to determine if <parameterReference>cf</parameterReference> is a Clipboard format which is text, rich text, or rich text with OLE items.</para>
            <legacySyntax>static BOOL AFX_CDECL IsRichEditFormat( CLIPFORMAT cf );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The Clipboard format of interest.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if <parameterReference>cf</parameterReference> is a rich edit or text Clipboard format.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__isselected">
        <!--ca0a29f7-8de2-4e49-b59e-5fbb6cf614f9-->
        <title>CRichEditView::IsSelected</title>
        <content>
            <para>Call this function to determine if the specified OLE item is currently selected in this view.</para>
            <legacySyntax>virtual BOOL IsSelected( const CObject* pDocItem ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDocItem</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to an object in the view.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the object is selected; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function if your derived view class has a different method for handling selection of OLE items.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__m_nbulletindent">
        <!--e7d7587d-d764-4f25-bfaf-668122983dc5-->
        <title>CRichEditView::m_nBulletIndent</title>
        <content>
            <para>The indentation for bullet items in a list; by default, 720 units, which is 1/2 inch.</para>
            <legacySyntax>int m_nBulletIndent;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="cricheditview__m_nwordwrap">
        <!--723d0042-6e6d-4fa4-90d6-9aced891099d-->
        <title>CRichEditView::m_nWordWrap</title>
        <content>
            <para>Indicates the type of word wrap for this rich edit view.</para>
            <legacySyntax>int m_nWordWrap;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>One of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <unmanagedCodeEntityReference>WrapNone</unmanagedCodeEntityReference>   Indicates no automatic word wrapping.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>WrapToWindow</unmanagedCodeEntityReference>   Indicates word wrapping based on the width of the window.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>WrapToTargetDevice</unmanagedCodeEntityReference>   Indicates word wrapping based on the characteristics of the target device.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditview__wrapchanged">CRichEditView::WrapChanged</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__onchareffect">
        <!--ccd7cddb-46a3-45e9-8c24-fbda1095e780-->
        <title>CRichEditView::OnCharEffect</title>
        <content>
            <para>Call this function to toggle the character formatting effects for the current selection.</para>
            <legacySyntax>void OnCharEffect(
    DWORD dwMask,
    DWORD dwEffect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwMask</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The character formatting effects to modify in the current selection.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwEffect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The desired list of character formatting effects to toggle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Each call to this function toggles the specified formatting effects for the current selection.</para>
                    <para>For more information on the <parameterReference>dwMask</parameterReference> and <parameterReference>dwEffect</parameterReference> parameters and their potential values, see the corresponding data members of                         <externalLink> <linkText>CHARFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787881</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#155</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__onfindnext">
        <!--ccff9731-4d19-4369-b4a5-93d7e8c24ce1-->
        <title>CRichEditView::OnFindNext</title>
        <content>
            <para>Called by the framework when processing commands from the Find/Replace dialog box.</para>
            <legacySyntax>virtual void OnFindNext(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase,
    BOOL bWord );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszFind</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The string to find.</para>
                        </definition>
                        <definedTerm> <parameterReference>bNext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The direction to search: <legacyBold>TRUE</legacyBold> indicates down; <legacyBold>FALSE</legacyBold>, up.</para>
                        </definition>
                        <definedTerm> <parameterReference>bCase</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates whether the search is to be case sensitive.</para>
                        </definition>
                        <definedTerm> <parameterReference>bWord</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates whether the search is to match whole words only or not.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function to find text within the <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference>. Override this function to alter search characteristics for your derived view class.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__oninitialupdate">
        <!--25944e9f-f924-46ab-ac54-a25f34e06f14-->
        <title>CRichEditView::OnInitialUpdate</title>
        <content>
            <para>Called by the framework after the view is first attached to the document, but before the view is initially displayed.</para>
            <legacySyntax>virtual void OnInitialUpdate();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation of this function calls the <legacyLink xlink:href="9cff3c56-7564-416b-b9a4-71a9254ed755#cview__onupdate">CView::OnUpdate</legacyLink> member function with no hint information (that is, using the default values of 0 for the <parameterReference>lHint</parameterReference> parameter and <legacyBold>NULL</legacyBold> for the <parameterReference>pHint</parameterReference> parameter). Override this function to perform any one-time initialization that requires information about the document. For example, if your application has fixed-sized documents, you can use this function to initialize a view's scrolling limits based on the document size. If your application supports variable-sized documents, use <unmanagedCodeEntityReference>OnUpdate</unmanagedCodeEntityReference> to update the scrolling limits every time the document changes.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditview__m_nwordwrap">CRichEditView::m_nWordWrap</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__onpastenativeobject">
        <!--f3fe0f3c-ad8f-4051-984f-a7a20d6994d9-->
        <title>CRichEditView::OnPasteNativeObject</title>
        <content>
            <para>Use this function to load native data from an embedded item.</para>
            <legacySyntax>virtual BOOL OnPasteNativeObject( LPSTORAGE lpStg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpStg</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to an                                 <externalLink> <linkText>IStorage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/aa380015</linkUri>
                                </externalLink> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise, 0;</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Typically, you would do this by creating a <legacyLink xlink:href="e4f93698-e17c-4a18-a7c0-4b4df8eb4d93">COleStreamFile</legacyLink> around the <unmanagedCodeEntityReference>IStorage</unmanagedCodeEntityReference>. The <unmanagedCodeEntityReference>COleStreamFile</unmanagedCodeEntityReference> can be attached to an archive and <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a#cobject__serialize">CObject::Serialize</legacyLink> called to load the data.</para>
                    <para>This is an advanced overridable.</para>
                    <para>For more information, see                         <externalLink> <linkText>IStorage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/aa380015</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__onparaalign">
        <!--fed46c64-d765-49f3-a045-0e4ca51758c3-->
        <title>CRichEditView::OnParaAlign</title>
        <content>
            <para>Call this function to change the paragraph alignment for the selected paragraphs.</para>
            <legacySyntax>void OnParaAlign( WORD wAlign );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>wAlign</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Desired paragraph alignment. One of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>PFA_LEFT</unmanagedCodeEntityReference>   Align the paragraphs with the left margin.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>PFA_RIGHT</unmanagedCodeEntityReference>   Align the paragraphs with the right margin.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>PFA_CENTER</unmanagedCodeEntityReference>   Center the paragraphs between the margins.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#156</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__onprinterchanged">
        <!--dde9a411-8170-4ed8-be90-be76f6df07fa-->
        <title>CRichEditView::OnPrinterChanged</title>
        <content>
            <para>Override this function to change characteristics for this rich edit view when the printer changes.</para>
            <legacySyntax>virtual void OnPrinterChanged( const CDC&amp; dcPrinter );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dcPrinter</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2">CDC</legacyLink> object for the new printer. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation sets the paper size to the physical height and width for the output device (printer). If there is no device context associated with <parameterReference>dcPrinter</parameterReference>, the default implementation sets the paper size to 8.5 by 11 inches.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__onreplaceall">
        <!--ca6788e7-e425-4149-bd9a-aa856df64834-->
        <title>CRichEditView::OnReplaceAll</title>
        <content>
            <para>Called by the framework when processing Replace All commands from the Replace dialog box.</para>
            <legacySyntax>virtual void OnReplaceAll(
    LPCTSTR lpszFind,
    LPCTSTR lpszReplace,
    BOOL bCase,
    BOOL bWord );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszFind</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The text to be replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszReplace</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The replacement text.</para>
                        </definition>
                        <definedTerm> <parameterReference>bCase</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates if the search is case sensitive.</para>
                        </definition>
                        <definedTerm> <parameterReference>bWord</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates if the search must select whole words or not.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function to replace all occurrences of some given text with another string. Override this function to alter search characteristics for this view.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditview__findtext">CRichEditView::FindText</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__onreplacesel">
        <!--14298560-cf20-4b1e-aa6f-c0d39034326e-->
        <title>CRichEditView::OnReplaceSel</title>
        <content>
            <para>Called by the framework when processing Replace commands from the Replace dialog box.</para>
            <legacySyntax>virtual void OnReplaceSel(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase,
    BOOL bWord,
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
                            <para>The text to be replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>bNext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates the direction of the search: <legacyBold>TRUE</legacyBold> is down; <legacyBold>FALSE</legacyBold>, up.</para>
                        </definition>
                        <definedTerm> <parameterReference>bCase</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates if the search is case sensitive.</para>
                        </definition>
                        <definedTerm> <parameterReference>bWord</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates if the search must select whole words or not.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszReplace</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The replacement text.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function to replace one occurrence of some given text with another string. Override this function to alter search characteristics for this view.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__ontextnotfound">
        <!--696b8afe-698b-499e-a5b2-0ee4b63666cd-->
        <title>CRichEditView::OnTextNotFound</title>
        <content>
            <para>Called by the framework whenever a search fails.</para>
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
                            <para>The text which was not found.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function to change the output notification from a                         <externalLink> <linkText>MessageBeep</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms680356</linkUri>
                        </externalLink>.</para>
                    <para>For more information, see                         <externalLink> <linkText>MessageBeep</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms680356</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#157</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__onupdatechareffect">
        <!--a0f45929-ce0e-4a33-9457-836772fac2b3-->
        <title>CRichEditView::OnUpdateCharEffect</title>
        <content>
            <para>The framework calls this function to update the command UI for character effect commands.</para>
            <legacySyntax>void OnUpdateCharEffect(
    CCmdUI* pCmdUI,
    DWORD dwMask,
    DWORD dwEffect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pCmdUI</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <legacyLink xlink:href="04eaaaf5-f510-48ab-b425-94665ba24766">CCmdUI</legacyLink> object.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwMask</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates the character formatting mask.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwEffect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates the character formatting effect.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The mask <parameterReference>dwMask</parameterReference> specifies which character formatting attributes to check. The flags <parameterReference>dwEffect</parameterReference> list the character formatting attributes to set/clear.</para>
                    <para>For more information on the <parameterReference>dwMask</parameterReference> and <parameterReference>dwEffect</parameterReference> parameters and their potential values, see the corresponding data members of                         <externalLink> <linkText>CHARFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787881</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#158</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__onupdateparaalign">
        <!--9e7d4ded-7790-44a7-85ef-9402636de145-->
        <title>CRichEditView::OnUpdateParaAlign</title>
        <content>
            <para>The framework calls this function to update the command UI for paragraph effect commands.</para>
            <legacySyntax>void OnUpdateParaAlign(
    CCmdUI* pCmdUI,
    WORD wAlign );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pCmdUI</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <legacyLink xlink:href="04eaaaf5-f510-48ab-b425-94665ba24766">CCmdUI</legacyLink> object.</para>
                        </definition>
                        <definedTerm> <parameterReference>wAlign</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The paragraph alignment to check. One of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>PFA_LEFT</unmanagedCodeEntityReference>   Align the paragraphs with the left margin.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>PFA_RIGHT</unmanagedCodeEntityReference>   Align the paragraphs with the right margin.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>PFA_CENTER</unmanagedCodeEntityReference>   Center the paragraphs between the margins.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#159</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__printinsiderect">
        <!--c5403f6c-aa86-496f-9a2e-ee8090d60f2c-->
        <title>CRichEditView::PrintInsideRect</title>
        <content>
            <para>Call this function to format a range of text in a rich edit control to fit within                 <legacyItalic>rectLayout</legacyItalic> for the device specified by <parameterReference>pDC</parameterReference>.</para>
            <legacySyntax>long PrintInsideRect(
    CDC* pDC,
    RECT&amp; rectLayout,
    long nIndexStart,
    long nIndexStop,
    BOOL bOutput );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a device context for the output area.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>rectLayout</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para> <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> or <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> which defines the output area.</para>
                        </definition>
                        <definedTerm> <parameterReference>nIndexStart</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the first character to be formatted.</para>
                        </definition>
                        <definedTerm> <parameterReference>nIndexStop</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the last character to be formatted.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>bOutput</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Indicates if the text should be rendered. If <legacyBold>FALSE</legacyBold>, the text is just measured.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The index of the last character that fits in the output area plus one.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Typically, this call is followed by a call to <legacyLink xlink:href="2be52788-822c-4c27-aafd-2471231e74eb#cricheditctrl__displayband">CRichEditCtrl::DisplayBand</legacyLink> which generates the output.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditview__getpapersize">CRichEditView::GetPaperSize</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__printpage">
        <!--75db1cef-e5ab-4552-b726-3da113f61f33-->
        <title>CRichEditView::PrintPage</title>
        <content>
            <para>Call this function to format a range of text in a rich edit control for the output device specified by <parameterReference>pDC</parameterReference>.</para>
            <legacySyntax>long PrintPage(
    CDC* pDC,
    long nIndexStart,
    long nIndexStop );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a device context for page output.</para>
                        </definition>
                        <definedTerm> <parameterReference>nIndexStart</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the first character to be formatted.</para>
                        </definition>
                        <definedTerm> <parameterReference>nIndexStop</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the last character to be formatted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The index of the last character that fits on the page plus one.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The layout of each page is controlled by <legacyLink xlink:href="#cricheditview__getpagerect">GetPageRect</legacyLink> and <legacyLink xlink:href="#cricheditview__getprintrect">GetPrintRect</legacyLink>. Typically, this call is followed by a call to <legacyLink xlink:href="2be52788-822c-4c27-aafd-2471231e74eb#cricheditctrl__displayband">CRichEditCtrl::DisplayBand</legacyLink> which generates the output.</para>
                    <para>Note that margins are relative to the physical page, not the logical page. Thus, margins of zero will often clip the text since many printers have unprintable areas on the page. To avoid clipping your text, you should call <legacyLink xlink:href="#cricheditview__setmargins">SetMargins</legacyLink> and set reasonable margins before printing.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__queryacceptdata">
        <!--bc2f524f-0b46-44fd-8e5c-1828cf8a4979-->
        <title>CRichEditView::QueryAcceptData</title>
        <content>
            <para>Called by the framework to paste an object into the rich edit.</para>
            <legacySyntax>virtual HRESULT QueryAcceptData(
    LPDATAOBJECT lpdataobj,
    CLIPFORMAT* lpcfFormat,
    DWORD dwReco,
    BOOL bReally,
    HGLOBAL hMetaFile );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpdataobj</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the                                 <externalLink> <linkText>IDataObject</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms688421</linkUri>
                                </externalLink> to query.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lpcfFormat</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the acceptable data format.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwReco</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Not used.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>bReally</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Indicates if the paste operation should continue or not.</para>
                        </definition>
                        <definedTerm> <parameterReference>hMetaFile</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A handle to the metafile used for drawing the item's icon.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An <unmanagedCodeEntityReference>HRESULT</unmanagedCodeEntityReference> value reporting the success of the operation.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function to handle different organization of COM items in your derived document class. This is an advanced overridable.</para>
                    <para>For more information on <unmanagedCodeEntityReference>HRESULT</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>IDataObject</unmanagedCodeEntityReference>, see                         <externalLink> <linkText>Structure of COM Error Codes</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms690088</linkUri>
                        </externalLink> and                         <externalLink> <linkText>IDataObject</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms688421</linkUri>
                        </externalLink>, respectively, in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#160</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__setcharformat">
        <!--cc3fd397-012d-4c45-8be3-13982aa2a762-->
        <title>CRichEditView::SetCharFormat</title>
        <content>
            <para>Call this function to set the character formatting attributes for new text in this <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>void SetCharFormat( CHARFORMAT2 cf );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                <externalLink> <linkText>CHARFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787883</linkUri>
                                </externalLink> structure containing the new default character formatting attributes.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Only the attributes specified by the <legacyBold>dwMask</legacyBold> member of <parameterReference>cf</parameterReference> are changed by this function.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_SETCHARFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774230</linkUri>
                        </externalLink> message and                         <externalLink> <linkText>CHARFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787883</linkUri>
                        </externalLink> structure in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#152</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__setmargins">
        <!--8e74c5f9-014e-4bb6-8cda-781fc935efae-->
        <title>CRichEditView::SetMargins</title>
        <content>
            <para>Call this function to set the printing margins for this rich edit view.</para>
            <legacySyntax>void SetMargins( const CRect&amp; rectMargin );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>rectMargin</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The new margin values for printing, measured in <unmanagedCodeEntityReference>MM_TWIPS</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <legacyLink xlink:href="#cricheditview__m_nwordwrap">m_nWordWrap</legacyLink> is <unmanagedCodeEntityReference>WrapToTargetDevice</unmanagedCodeEntityReference>, you should call <legacyLink xlink:href="#cricheditview__wrapchanged">WrapChanged</legacyLink> after using this function to adjust printing characteristics.</para>
                    <para>Note that the margins used by <legacyLink xlink:href="#cricheditview__printpage">PrintPage</legacyLink> are relative to the physical page, not the logical page. Thus, margins of zero will often clip the text since many printers have unprintable areas on the page. To avoid clipping your text, you should call use <unmanagedCodeEntityReference>SetMargins</unmanagedCodeEntityReference> to set reasonable printer margins before printing.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditview__getpapersize">CRichEditView::GetPaperSize</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__setpapersize">
        <!--426647c9-b7cb-4fa4-9a90-768811437e83-->
        <title>CRichEditView::SetPaperSize</title>
        <content>
            <para>Call this function to set the paper size for printing this rich edit view.</para>
            <legacySyntax>void SetPaperSize( CSize sizePaper );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>sizePaper</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The new paper size values for printing, measured in <unmanagedCodeEntityReference>MM_TWIPS</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <legacyLink xlink:href="#cricheditview__m_nwordwrap">m_nWordWrap</legacyLink> is <unmanagedCodeEntityReference>WrapToTargetDevice</unmanagedCodeEntityReference>, you should call <legacyLink xlink:href="#cricheditview__wrapchanged">WrapChanged</legacyLink> after using this function to adjust printing characteristics.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#161</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__setparaformat">
        <!--2fd8ca4c-79e6-4d00-8b2a-a422fb2242ce-->
        <title>CRichEditView::SetParaFormat</title>
        <content>
            <para>Call this function to set the paragraph formatting attributes for the current selection in this <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>BOOL SetParaFormat( PARAFORMAT2&amp; pf );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                <externalLink> <linkText>PARAFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787942</linkUri>
                                </externalLink> structure containing the new default paragraph formatting attributes.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise, 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Only the attributes specified by the <legacyBold>dwMask</legacyBold> member of <parameterReference>pf</parameterReference> are changed by this function.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_SETPARAFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774276</linkUri>
                        </externalLink> message and                         <externalLink> <linkText>PARAFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787942</linkUri>
                        </externalLink> structure in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#162</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__textnotfound">
        <!--89a3ec32-f7a2-4c22-b395-dae62b8f15af-->
        <title>CRichEditView::TextNotFound</title>
        <content>
            <para>Call this function to reset the internal search state of the <legacyLink xlink:href="bd576b10-4cc0-4050-8f76-e1a0548411e4">CRichEditView</legacyLink> control after a failed call to <legacyLink xlink:href="#cricheditview__findtext">FindText</legacyLink>.</para>
            <legacySyntax>void TextNotFound( LPCTSTR lpszFind );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszFind</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the text string that was not found.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>It is recommended that this method be called immediately after failed calls to <legacyLink xlink:href="#cricheditview__findtext">FindText</legacyLink> so that the internal search state of the control is properly reset.</para>
                    <para>The <parameterReference>lpszFind</parameterReference> parameter should include the same content as the string provided to <legacyLink xlink:href="#cricheditview__findtext">FindText</legacyLink>. After resetting the internal search state, this method will call the <legacyLink xlink:href="#cricheditview__ontextnotfound">OnTextNotFound</legacyLink> method with the provided search string.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <link xlink:href="#cricheditview__findtext">CRichEditView::FindText</link>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditview__wrapchanged">
        <!--0519d4c6-6129-465e-abd6-28519e911951-->
        <title>CRichEditView::WrapChanged</title>
        <content>
            <para>Call this function when the printing characteristics have changed ( <legacyLink xlink:href="#cricheditview__setmargins">SetMargins</legacyLink> or <legacyLink xlink:href="#cricheditview__setpapersize">SetPaperSize</legacyLink>).</para>
            <legacySyntax>virtual void WrapChanged();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function to modify the way the rich edit view responds to changes in <legacyLink xlink:href="#cricheditview__m_nwordwrap">m_nWordWrap</legacyLink> or the printing characteristics ( <legacyLink xlink:href="#cricheditview__onprinterchanged">OnPrinterChanged</legacyLink>).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#163</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample WORDPAD</legacyLink> <link xlink:href="ff488596-1e71-451f-8fec-b0831a7b44e0">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="c936ec18-d516-49d4-b7fb-c9aa0229eddc">CRichEditDoc</link> <link xlink:href="6c0b4efe-0fb8-4621-b5e1-fdcb8ec48c3b">CRichEditCntrItem</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



