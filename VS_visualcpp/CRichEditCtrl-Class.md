---
title: "CRichEditCtrl Class"
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
ms.assetid: 2be52788-822c-4c27-aafd-2471231e74eb
caps.latest.revision: 20
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
# CRichEditCtrl Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Provides the functionality of the rich edit control. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CRichEditCtrl : public CWnd</legacySyntax>
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
                                    <para> <link xlink:href="#cricheditctrl__cricheditctrl">CRichEditCtrl::CRichEditCtrl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#cricheditctrl__canpaste">CRichEditCtrl::CanPaste</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines if the contents of the Clipboard can be pasted into this rich edit control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__canredo">CRichEditCtrl::CanRedo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether there are any actions in the control's redo queue.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__canundo">CRichEditCtrl::CanUndo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines if an editing operation can be undone.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__charfrompos">CRichEditCtrl::CharFromPos</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves information about the character closest to a specified point in the client area of an edit control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__clear">CRichEditCtrl::Clear</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Clears the current selection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__copy">CRichEditCtrl::Copy</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies the current selection to the Clipboard.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__create">CRichEditCtrl::Create</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates the Windows rich edit control and associates it with this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__createex">CRichEditCtrl::CreateEx</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates the Windows rich edit control with the specified extended Windows styles and associates it with this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__cut">CRichEditCtrl::Cut</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Cuts the current selection to the Clipboard.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__displayband">CRichEditCtrl::DisplayBand</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Displays a portion of the contents of this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__emptyundobuffer">CRichEditCtrl::EmptyUndoBuffer</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Resets (clears) the undo flag of this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__findtext">CRichEditCtrl::FindText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Locates text within this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__findwordbreak">CRichEditCtrl::FindWordBreak</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Finds the next word break before or after the specified character position, or retrieves information about the character at that position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__formatrange">CRichEditCtrl::FormatRange</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Formats a range of text for the target output device.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getcharpos">CRichEditCtrl::GetCharPos</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines the location of a given character within this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getdefaultcharformat">CRichEditCtrl::GetDefaultCharFormat</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current default character formatting attributes in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__geteventmask">CRichEditCtrl::GetEventMask</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the event mask for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getfirstvisibleline">CRichEditCtrl::GetFirstVisibleLine</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines the topmost visible line in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getiricheditole">CRichEditCtrl::GetIRichEditOle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a pointer to the <unmanagedCodeEntityReference>IRichEditOle</unmanagedCodeEntityReference> interface for this rich edit control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getlimittext">CRichEditCtrl::GetLimitText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the limit on the amount of text a user can enter into this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getline">CRichEditCtrl::GetLine</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a line of text from this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getlinecount">CRichEditCtrl::GetLineCount</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the number of lines in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getmodify">CRichEditCtrl::GetModify</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines if the contents of this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object have changed since the last save.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getoptions">CRichEditCtrl::GetOptions</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the rich edit control options.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getparaformat">CRichEditCtrl::GetParaFormat</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the paragraph formatting attributes in the current selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getpunctuation">CRichEditCtrl::GetPunctuation</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current punctuation characters for the rich edit control. This message is available only in Asian-language versions of the operating system.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getrect">CRichEditCtrl::GetRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the formatting rectangle for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getredoname">CRichEditCtrl::GetRedoName</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the type of the next action, if any, in the control's redo queue.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getsel">CRichEditCtrl::GetSel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the starting and ending positions of the current selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getselectioncharformat">CRichEditCtrl::GetSelectionCharFormat</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the character formatting attributes in the current selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getselectiontype">CRichEditCtrl::GetSelectionType</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the type of contents in the current selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getseltext">CRichEditCtrl::GetSelText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the text of the current selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__gettextlength">CRichEditCtrl::GetTextLength</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the length of the text, in characters, in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object. Does not include the terminating null character.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__gettextlengthex">CRichEditCtrl::GetTextLengthEx</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the number of characters or bytes in the rich edit view. Accepts a list of flags to indicate the method of determining length of the text in a rich edit control</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__gettextmode">CRichEditCtrl::GetTextMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current text mode and undo level of a rich edit control. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__gettextrange">CRichEditCtrl::GetTextRange</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the specified range of text.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getundoname">CRichEditCtrl::GetUndoName</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the type of the next undo action, if any.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__getwordwrapmode">CRichEditCtrl::GetWordWrapMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current word wrapping and word breaking options for the rich edit control. This message is available only in Asian-language versions of the operating system.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__hideselection">CRichEditCtrl::HideSelection</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Shows or hides the current selection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__limittext">CRichEditCtrl::LimitText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Limits the amount of text a user can enter into the <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__linefromchar">CRichEditCtrl::LineFromChar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines which line contains the given character.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__lineindex">CRichEditCtrl::LineIndex</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the character index of a given line in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__linelength">CRichEditCtrl::LineLength</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the length of a given line in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__linescroll">CRichEditCtrl::LineScroll</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Scrolls the text in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__paste">CRichEditCtrl::Paste</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts the contents of the Clipboard into this rich edit control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__pastespecial">CRichEditCtrl::PasteSpecial</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts the contents of the Clipboard into this rich edit control in the specified data format.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__posfromchar">CRichEditCtrl::PosFromChar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the client area coordinates of a specified character in an edit control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__redo">CRichEditCtrl::Redo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Redoes the next action in the control's redo queue. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__replacesel">CRichEditCtrl::ReplaceSel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Replaces the current selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object with specified text.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__requestresize">CRichEditCtrl::RequestResize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Forces this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object to send request resize notifications.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setautourldetect">CRichEditCtrl::SetAutoURLDetect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates if the auto URL detection is active in a rich edit control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setbackgroundcolor">CRichEditCtrl::SetBackgroundColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the background color in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setdefaultcharformat">CRichEditCtrl::SetDefaultCharFormat</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the current default character formatting attributes in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__seteventmask">CRichEditCtrl::SetEventMask</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the event mask for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setmodify">CRichEditCtrl::SetModify</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets or clears the modification flag for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setolecallback">CRichEditCtrl::SetOLECallback</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the <unmanagedCodeEntityReference>IRichEditOleCallback</unmanagedCodeEntityReference> COM object for this rich edit control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setoptions">CRichEditCtrl::SetOptions</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the options for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setparaformat">CRichEditCtrl::SetParaFormat</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the paragraph formatting attributes in the current selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setpunctuation">CRichEditCtrl::SetPunctuation</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the punctuation characters for a rich edit control. This message is available only in Asian-language versions of the operating system.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setreadonly">CRichEditCtrl::SetReadOnly</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the read-only option for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setrect">CRichEditCtrl::SetRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the formatting rectangle for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setsel">CRichEditCtrl::SetSel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setselectioncharformat">CRichEditCtrl::SetSelectionCharFormat</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the character formatting attributes in the current selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__settargetdevice">CRichEditCtrl::SetTargetDevice</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the target output device for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__settextmode">CRichEditCtrl::SetTextMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the text mode or undo level of a rich edit control. The message fails if the control contains text. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setundolimit">CRichEditCtrl::SetUndoLimit</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the maximum number of actions that can stored in the undo queue.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setwordcharformat">CRichEditCtrl::SetWordCharFormat</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the character formatting attributes in the current word in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__setwordwrapmode">CRichEditCtrl::SetWordWrapMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the word-wrapping and word-breaking options for the rich edit control. This message is available only in Asian-language versions of the operating system.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__stopgrouptyping">CRichEditCtrl::StopGroupTyping</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Stops the control from collecting additional typing actions into the current undo action. The control stores the next typing action, if any, into a new action in the undo queue.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__streamin">CRichEditCtrl::StreamIn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts text from an input stream into this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__streamout">CRichEditCtrl::StreamOut</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Stores text from this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object into an output stream.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cricheditctrl__undo">CRichEditCtrl::Undo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Reverses the last editing operation.</para>
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
            <para>This Windows Common control (and therefore the <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> class) is available only to programs running under Windows 95/98 and Windows NT versions 3.51 and later. The <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> class supports versions 2.0 and 3.0 of the <token>winSDK</token> rich edit control.</para>
            <alert class="caution">
                <para>If you are using a rich edit control in a dialog box (regardless whether your application is SDI, MDI, or dialog-based), you must call <legacyLink xlink:href="895c9537-8046-4496-b4fa-01095f1ecfba">AfxInitRichEdit</legacyLink> once before the dialog box is displayed. A typical place to call this function is in your program's <unmanagedCodeEntityReference>InitInstance</unmanagedCodeEntityReference> member function. You do not need to call it for each time you display the dialog box, only the first time. You do not have to call <unmanagedCodeEntityReference>AfxInitRichEdit</unmanagedCodeEntityReference> if you are working with <unmanagedCodeEntityReference>CRichEditView</unmanagedCodeEntityReference>.</para>
            </alert>
            <para>For more information on using <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference>, see:  </para>
            <list class="bullet">
                <listItem>
                    <para> <legacyLink xlink:href="b2842884-6435-4b8f-933b-21671bf8af95">Controls</legacyLink>
                    </para>
                </listItem>
                <listItem>
                    <para> <legacyLink xlink:href="e400c6ed-563e-4d4c-ab3b-a3f0aa20273b">Using CRichEditCtrl</legacyLink>
                    </para>
                </listItem>
                <listItem>
                    <para>Knowledge Base article Q259949 : INFO: SetCaretPos() Is Not Appropriate with CEdit or CRichEditCtrl Controls</para>
                </listItem>
            </list>
            <para>For an example of using a rich edit control in an MFC application, see the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">WORDPAD</legacyLink> sample application. </para>
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
            <para> <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxcmn.h</para>
        </content>
    </requirements>
    <section address="cricheditctrl__canpaste">
        <!--7e3f709d-ccf1-46ec-9c81-e5b006b42f1f-->
        <title>CRichEditCtrl::CanPaste</title>
        <content>
            <para>Determines if the rich edit control can paste the specified Clipboard format.</para>
            <legacySyntax>BOOL CanPaste( UINT nFormat = 0  ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nFormat</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The Clipboard data format to query. This parameter can be one of the predefined Clipboard formats or the value returned by                                 <externalLink> <linkText>RegisterClipboardFormat</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms649049</linkUri>
                                </externalLink>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the Clipboard format can be pasted; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <parameterReference>nFormat</parameterReference> is 0, <unmanagedCodeEntityReference>CanPaste</unmanagedCodeEntityReference> will try any format currently on the Clipboard.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_CANPASTE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787993</linkUri>
                        </externalLink> message and                         <externalLink> <linkText>RegisterClipboardFormat</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms649049</linkUri>
                        </externalLink> function in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#1</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__canredo">
        <!--843b1ba7-1eb2-4b4c-af84-d5843edf9ffe-->
        <title>CRichEditCtrl::CanRedo</title>
        <content>
            <para>Determines if the redo queue contains any actions.</para>
            <legacySyntax>BOOL CanRedo() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the redo queue contains actions, otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To discover the name of the operation in the redo queue, call <legacyLink xlink:href="#cricheditctrl__getredoname">CRichEditCtrl::GetRedoName</legacyLink>. To redo the most recent Undo operation, call <legacyLink xlink:href="#cricheditctrl__redo">Redo</legacyLink>. </para>
                    <para>For more information, see                         <externalLink> <linkText>EM_CANREDO</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787995</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__canundo">
        <!--809f2f22-2557-4821-aebd-f4d4e7134500-->
        <title>CRichEditCtrl::CanUndo</title>
        <content>
            <para>Determines if the last editing operation can be undone.</para>
            <legacySyntax>BOOL CanUndo() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the last edit operation can be undone by a call to the <legacyLink xlink:href="#cricheditctrl__undo">Undo</legacyLink> member function; 0 if it cannot be undone.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see                         <externalLink> <linkText>EM_CANUNDO</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775468</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#2</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__charfrompos">
        <!--57686d42-fdd7-46d2-b76d-f66cdfd29111-->
        <title>CRichEditCtrl::CharFromPos</title>
        <content>
            <para>Retrieves information about the character at the point specified by the parameter <parameterReference>pt</parameterReference>.</para>
            <legacySyntax>int CharFromPos( CPoint pt ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pt</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object containing the coordinates of the specified point.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The zero-based character index of the character nearest the specified point. If the specified point is beyond the last character in the control, the return value indicates the last character in the control.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function works with a rich edit control. To get the information for an edit control, call <legacyLink xlink:href="b1533c30-7f10-4663-88d3-8b7f2c9f7024#cedit__charfrompos">CEdit::CharFromPos</legacyLink>.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_CHARFROMPOS</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761566</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__clear">
        <!--4fe696b7-d67b-4838-88de-1f678a415901-->
        <title>CRichEditCtrl::Clear</title>
        <content>
            <para>Deletes (clears) the current selection (if any) in the rich edit control.</para>
            <legacySyntax>void Clear();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The deletion performed by <legacyBold>Clear</legacyBold> can be undone by calling the <legacyLink xlink:href="#cricheditctrl__undo">Undo</legacyLink> member function. </para>
                    <para>To delete the current selection and place the deleted contents onto the Clipboard, call the <legacyLink xlink:href="#cricheditctrl__cut">Cut</legacyLink> member function.</para>
                    <para>For more information, see                         <externalLink> <linkText>WM_CLEAR</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms649020</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#3</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__copy">
        <!--04b733ec-65a6-4ca5-a1e1-66887a6b4f81-->
        <title>CRichEditCtrl::Copy</title>
        <content>
            <para>Copies the current selection (if any) in the rich edit control to the Clipboard.</para>
            <legacySyntax>void Copy();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see                         <externalLink> <linkText>WM_COPY</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms649022</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#4</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__create">
        <!--3546c313-6d8d-4716-9708-ce82d1e4e563-->
        <title>CRichEditCtrl::Create</title>
        <content>
            <para>Creates the Windows rich edit control and associates it with this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual BOOL Create(
    DWORD dwStyle,
    const RECT&amp; rect,
    CWnd* pParentWnd,
    UINT nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the edit control's style. Apply a combination of the window styles listed in the <legacyBold>Remarks</legacyBold> section below, and                                 <externalLink> <linkText>edit control styles</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775464</linkUri>
                                </externalLink>, described in the <token>winSDK</token>. </para>
                        </definition>
                        <definedTerm> <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the edit control's size and position. Can be a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object or RECT structure.</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the edit control's parent window (often a <legacyLink xlink:href="ca64b77e-2cd2-47e3-8eff-c2645ad578f9">CDialog</legacyLink>). It must not be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the edit control's ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if initialization is successful; otherwise, 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You construct a <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object in two steps. First, call the <legacyLink xlink:href="#cricheditctrl__cricheditctrl">CRichEditCtrl</legacyLink> constructor, then call <legacyBold>Create</legacyBold>, which creates the Windows edit control and attaches it to the <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object. </para>
                    <para>When you create a rich edit control with this function, first you must load the necessary common controls library. To load the libary, call the global function <legacyLink xlink:href="895c9537-8046-4496-b4fa-01095f1ecfba">AfxInitRichEdit</legacyLink>, which in turn initializes the common controls library. You need to call <unmanagedCodeEntityReference>AfxInitRichEdit</unmanagedCodeEntityReference> only once in your process.</para>
                    <para>When <legacyBold>Create</legacyBold> executes, Windows sends the <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onnccreate">WM_NCCREATE</legacyLink>, <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onnccalcsize">WM_NCCALCSIZE</legacyLink>, <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__oncreate">WM_CREATE</legacyLink>, and <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__ongetminmaxinfo">WM_GETMINMAXINFO</legacyLink> messages to the edit control. </para>
                    <para>These messages are handled by default by the <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onnccreate">OnNcCreate</legacyLink>, <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onnccalcsize">OnNcCalcSize</legacyLink>, <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__oncreate">OnCreate</legacyLink>, and <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__ongetminmaxinfo">OnGetMinMaxInfo</legacyLink> member functions in the <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> base class. To extend the default message handling, derive a class from <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference>, add a message map to the new class, and override the above message-handler member functions. Override <unmanagedCodeEntityReference>OnCreate</unmanagedCodeEntityReference>, for example, to perform needed initialization for the new class.</para>
                    <para>Apply the following <legacyLink xlink:href="c85ffbe4-f4ff-4227-917a-48ec4a411842">window styles</legacyLink> to an edit control.   </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>WS_CHILD</legacyBold>   Always.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_VISIBLE</legacyBold>   Usually.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_DISABLED</legacyBold>   Rarely.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_GROUP</legacyBold>   To group controls.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_TABSTOP</legacyBold>   To include edit control in the tabbing order.</para>
                        </listItem>
                    </list>
                    <para>For more information about window styles, see                         <externalLink> <linkText>CreateWindow</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632679</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#5</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__createex">
        <!--6dce88aa-9843-4d19-b1ce-e5b8a4ac8d3a-->
        <title>CRichEditCtrl::CreateEx</title>
        <content>
            <para>Creates a control (a child window) and associates it with the <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT&amp; rect,
    CWnd* pParentWnd,
    UINT nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwExStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the extended style of the control being created. For a list of extended Windows styles, see the <parameterReference>dwExStyle</parameterReference> parameter for                                 <externalLink> <linkText>CreateWindowEx</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632680</linkUri>
                                </externalLink> in the <token>winSDK</token>.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the edit control's style. Apply a combination of the window styles listed in the <legacyBold>Remarks</legacyBold> section of <legacyLink xlink:href="#cricheditctrl__create">Create</legacyLink> and                                 <externalLink> <linkText>edit control styles</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775464</linkUri>
                                </externalLink>, described in the <token>winSDK</token>. </para>
                        </definition>
                        <definedTerm> <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a                                 <externalLink> <linkText>RECT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162897</linkUri>
                                </externalLink> structure describing the size and position of the window to be created, in client coordinates of <parameterReference>pParentWnd</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the window that is the control's parent.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The control's child-window ID.</para>
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
                    <para>Use <unmanagedCodeEntityReference>CreateEx</unmanagedCodeEntityReference> instead of <legacyBold>Create</legacyBold> to apply extended Windows styles, specified by the Windows extended style preface <legacyBold>WS_EX_</legacyBold>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__cricheditctrl">
        <!--2f41fa3d-dccf-4f02-b3dd-4b7bbcb55eca-->
        <title>CRichEditCtrl::CRichEditCtrl</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CRichEditCtrl();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use <legacyLink xlink:href="#cricheditctrl__create">Create</legacyLink> to construct the Windows rich edit control.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#6</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__cut">
        <!--ac84099b-dcdb-42ff-aff6-4e688d6807b7-->
        <title>CRichEditCtrl::Cut</title>
        <content>
            <para>Delete (cuts) the current selection (if any) in the rich edit control and copies the deleted text to the Clipboard.</para>
            <legacySyntax>void Cut();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The deletion performed by <legacyBold>Cut</legacyBold> can be undone by calling the <legacyLink xlink:href="#cricheditctrl__undo">Undo</legacyLink> member function.</para>
                    <para>To delete the current selection without placing the deleted text into the Clipboard, call the <legacyLink xlink:href="#cricheditctrl__clear">Clear</legacyLink> member function.</para>
                    <para>For more information, see                         <externalLink> <linkText>WM_CUT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms649023</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#7</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__displayband">
        <!--07d92086-5145-4002-9642-869147f1a3a2-->
        <title>CRichEditCtrl::DisplayBand</title>
        <content>
            <para>Displays a portion of the contents of the rich edit control (text and OLE items), as previously formatted by <legacyLink xlink:href="#cricheditctrl__formatrange">FormatRange</legacyLink>.</para>
            <legacySyntax>BOOL DisplayBand( LPRECT pDisplayRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDisplayRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a RECT or <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object specifying the area of the device to display the text.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the display of the formatted text succeeds, otherwise, 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The text and OLE items are clipped to the area specified by the pointer <parameterReference>pDisplayRect</parameterReference>.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_DISPLAYBAND</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787997</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__formatrange">CRichEditCtrl::FormatRange</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__emptyundobuffer">
        <!--c319bbb3-6606-450a-9d42-11afcf282c2e-->
        <title>CRichEditCtrl::EmptyUndoBuffer</title>
        <content>
            <para>Resets (clear) the undo flag of this rich edit control.</para>
            <legacySyntax>void EmptyUndoBuffer();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The control will now be unable to undo the last editing operation. The undo flag is set whenever an operation within the rich edit control can be undone.</para>
                    <para>The undo flag is automatically cleared whenever you call the <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink> member function <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__setwindowtext">SetWindowText</legacyLink>.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_EMPTYUNDOBUFFER</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761568</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#8</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__findtext">
        <!--d7eee081-412d-4def-a583-3bf0c48cb5e1-->
        <title>CRichEditCtrl::FindText</title>
        <content>
            <para>Finds text within the rich edit control.</para>
            <legacySyntax>long FindText(
    DWORD dwFlags,
    FINDTEXTEX* pFindText ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>For a list of possible values, see <parameterReference>wParam</parameterReference> in                                 <externalLink> <linkText>EM_FINDTEXTEXT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb788011</linkUri>
                                </externalLink> in the <token>winSDK</token>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>pFindText</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the                                 <externalLink> <linkText>FINDTEXTEX</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787909</linkUri>
                                </externalLink> structure giving the parameters for the search and returning the range where the match was found.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Zero-based character position of the next match; – 1 if there are no more matches.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can search either up or down by setting the proper range parameters in the                         <externalLink> <linkText>CHARRANGE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787885</linkUri>
                        </externalLink> structure within the <legacyBold>FINDTEXTEX</legacyBold> structure.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_FINDTEXTEX</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb788011</linkUri>
                        </externalLink> message and                         <externalLink> <linkText>FINDTEXTEX</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787909</linkUri>
                        </externalLink> structure in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#9</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__findwordbreak">
        <!--99439b22-bca0-4987-99fd-80f152bb25bc-->
        <title>CRichEditCtrl::FindWordBreak</title>
        <content>
            <para>Finds the next word break before or after the position specified by <parameterReference>nStart</parameterReference>.</para>
            <legacySyntax>DWORD FindWordBreak(
    UINT nCode,
    DWORD nStart ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nCode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates the action to take. For a list of possible values, see the description for the parameter <parameterReference>code</parameterReference> in <legacyBold>EM_FINDWORDBREAK</legacyBold> in the <token>winSDK</token>.</para>
                        </definition>
                        <definedTerm> <parameterReference>nStart</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The zero-based character position from which to start.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Based on the parameter <parameterReference>nCode</parameterReference>. For more information, see                         <externalLink> <linkText>EM_FINDWORDBREAK</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb788018</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can use this member function to retrieve information about a character at a given position.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__formatrange">
        <!--015661ef-66c9-408e-bc91-026165dbfa5a-->
        <title>CRichEditCtrl::FormatRange</title>
        <content>
            <para>Formats a range of text in a rich edit control for a specific device.</para>
            <legacySyntax>long FormatRange(
    FORMATRANGE* pfr,
    BOOL bDisplay = TRUE  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>pfr</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the                                 <externalLink> <linkText>FORMATRANGE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787911</linkUri>
                                </externalLink> structure which contains information about the output device. <legacyBold>NULL</legacyBold> indicates that cached information within the rich edit control can be freed.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>bDisplay</legacyItalic>
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
                    <para>The index of the last character that fits in the region plus one.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Typically, this call is followed by a call to <legacyLink xlink:href="#cricheditctrl__displayband">DisplayBand</legacyLink>.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_FORMATRANGE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb788020</linkUri>
                        </externalLink> message and                         <externalLink> <linkText>FORMATRANGE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787911</linkUri>
                        </externalLink> structure in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#10</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getcharpos">
        <!--9d627e8e-6837-44d8-af53-7b3626c3f954-->
        <title>CRichEditCtrl::GetCharPos</title>
        <content>
            <para>Gets the position (top-left corner) of a given character within this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CPoint GetCharPos( long lChar ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the character.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The location of the top-left corner of the character specified by <parameterReference>lChar</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The character is specified by giving its zero-based index value. If <parameterReference>lChar</parameterReference> is greater than the index of the last character in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object, the return value specifies the coordinates of the character position just past the last character in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_POSFROMCHAR</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761631</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getdefaultcharformat">
        <!--0c862a43-b47d-48a9-a7a9-c5e86e6ab826-->
        <title>CRichEditCtrl::GetDefaultCharFormat</title>
        <content>
            <para>Gets the default character formatting attributes of this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>DWORD GetDefaultCharFormat( CHARFORMAT&amp; cf ) const;

DWORD GetDefaultCharFormat( CHARFORMAT2&amp; cf ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>In the first version, a pointer to a <legacyBold>CHARFORMAT</legacyBold> structure holding the default character formatting attributes.</para>
                            <para>In the second version, a pointer to a <legacyBold>CHARFORMAT2</legacyBold> structure, which is a Rich Edit 2.0 extension to the <legacyBold>CHARFORMAT</legacyBold> structure, holding the default character formatting attributes. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The <legacyBold>dwMask</legacyBold> data member of <parameterReference>cf</parameterReference>. It specified the default character formatting attributes.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see the <legacyBold>EM_GETCHARFORMAT</legacyBold> message and the <legacyBold>CHARFORMAT</legacyBold> and <legacyBold>CHARFORMAT2</legacyBold> structures in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__setdefaultcharformat">SetDefaultCharFormat</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__geteventmask">
        <!--05345be6-e4cd-4106-81a8-92803f31459a-->
        <title>CRichEditCtrl::GetEventMask</title>
        <content>
            <para>Gets the event mask for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>long GetEventMask() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The event mask for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The event mask specifies which notification messages the <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object sends to its parent window.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_GETEVENTMASK</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb788032</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__seteventmask">CRichEditCtrl::SetEventMask</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getfirstvisibleline">
        <!--55d1d9b7-a76a-44d7-9bc4-ca4f729f0fff-->
        <title>CRichEditCtrl::GetFirstVisibleLine</title>
        <content>
            <para>Determines the topmost visible line in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>int GetFirstVisibleLine() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Zero-based index of the uppermost visible line in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see                         <externalLink> <linkText>EM_GETFIRSTVISIBLELINE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761574</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#11</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getiricheditole">
        <!--5e3015f0-ff73-4abf-91b8-38f64225fe9c-->
        <title>CRichEditCtrl::GetIRichEditOle</title>
        <content>
            <para>Accesses the <legacyBold>IRichEditOle</legacyBold> interface for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>IRichEditOle* GetIRichEditOle() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to the                         <externalLink> <linkText>IRichEditOle</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774306</linkUri>
                        </externalLink> interface that can be used to access this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object's OLE functionality; <legacyBold>NULL</legacyBold> if the interface is not accessible.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this interface to access this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object's OLE functionality.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_GETOLEINTERFACE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb788041</linkUri>
                        </externalLink> message and                         <externalLink> <linkText>IRichEditOle</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774306</linkUri>
                        </externalLink> interface in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getlimittext">
        <!--f2b960a1-60b2-48b5-aa5b-cfb919aaccf8-->
        <title>CRichEditCtrl::GetLimitText</title>
        <content>
            <para>Gets the text limit for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>long GetLimitText() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current text limit, in bytes, for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The text limit is the maximum amount of text, in bytes, the rich edit control can accept.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_GETLIMITTEXT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761582</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#12</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getline">
        <!--b033c987-e263-43f4-8bd7-cbac60d90796-->
        <title>CRichEditCtrl::GetLine</title>
        <content>
            <para>Retrieves a line of text from this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>int GetLine(
    int nIndex,
    LPTSTR lpszBuffer ) const;

int GetLine(
    int nIndex,
    LPTSTR lpszBuffer,
    int nMaxLength ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the line to retrieve.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszBuffer</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the buffer to receive the text. The first word of the buffer must specify the maximum number of bytes that can be copied into the buffer.</para>
                        </definition>
                        <definedTerm> <parameterReference>nMaxLength</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Maximum number of characters that can be copied into <parameterReference>lpszBuffer</parameterReference>. The second form of <unmanagedCodeEntityReference>GetLine</unmanagedCodeEntityReference> places this value into the first word of the buffer specified by <parameterReference>lpszBuffer</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of characters copied into <parameterReference>lpszBuffer</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The copied line does not contain a terminating null character.</para>
                    <alert class="note">
                        <para>Because the first word of the buffer stores the number of characters to be copied, make sure that your buffer is at least 4 bytes long.</para>
                    </alert>
                    <para>For more information, see                         <externalLink> <linkText>EM_GETLINE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761584</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__getlinecount">GetLineCount</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getlinecount">
        <!--8bdb0797-885e-4796-8adf-fb0a57b73d39-->
        <title>CRichEditCtrl::GetLineCount</title>
        <content>
            <para>Retrieves the number of lines in the <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>int GetLineCount() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of lines in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see                         <externalLink> <linkText>EM_GETLINECOUNT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761586</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#13</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getmodify">
        <!--d69e305f-ac4b-4333-a6ca-ac330d6e19dc-->
        <title>CRichEditCtrl::GetModify</title>
        <content>
            <para>Determines if the contents of this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object have been modified.</para>
            <legacySyntax>BOOL GetModify() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the text in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object has been modified; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Windows maintains an internal flag indicating whether the contents of the rich edit control have been changed. This flag is cleared when the edit control is first created and can also be cleared by calling the <legacyLink xlink:href="#cricheditctrl__setmodify">SetModify</legacyLink> member function.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_GETMODIFY</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761592</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#14</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getoptions">
        <!--862d86ec-2497-4efd-867a-5a0f96860085-->
        <title>CRichEditCtrl::GetOptions</title>
        <content>
            <para>Retrieves the options currently set for the rich edit control.</para>
            <legacySyntax>UINT GetOptions() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A combination of the current option flag values. For a list of these values, see the                         <legacyItalic>fOptions</legacyItalic> parameter in the                         <externalLink> <linkText>EM_SETOPTIONS</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774254</linkUri>
                        </externalLink> message, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getparaformat">
        <!--4006c6e5-0637-4586-89b9-35c3f19cd8a5-->
        <title>CRichEditCtrl::GetParaFormat</title>
        <content>
            <para>Gets the paragraph formatting attributes of the current selection.</para>
            <legacySyntax>DWORD GetParaFormat( PARAFORMAT&amp; pf ) const;

DWORD GetParaFormat( PARAFORMAT2&amp; pf ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>In the first version, a pointer to a                                 <externalLink> <linkText>PARAFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787940</linkUri>
                                </externalLink> structure to hold the paragraph formatting attributes of the current selection.</para>
                            <para>In the second version, a pointer to a                                 <externalLink> <linkText>PARAFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787942</linkUri>
                                </externalLink> structure, which is a Rich Edit 2.0 extension to the <legacyBold>PARAFORMAT</legacyBold> structure, holding the default character formatting attributes. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The <legacyBold>dwMask</legacyBold> data member of <parameterReference>pf</parameterReference>. It specifies the paragraph formatting attributes that are consistent throughout the current selection.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If more than one paragraph is selected, <parameterReference>pf</parameterReference> receives the attributes of the first selected paragraph. The return value specifies which attributes are consistent throughout the selection.</para>
                    <para>For more information, see the                         <externalLink> <linkText>EM_GETPARAFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774182</linkUri>
                        </externalLink> message and the <legacyBold>PARAFORMAT</legacyBold> and <legacyBold>PARAFORMAT2</legacyBold> structures in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__setparaformat">CRichEditCtrl::SetParaFormat</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getpunctuation">
        <!--951840fd-fe7b-441b-90cc-95c3483c4d24-->
        <title>CRichEditCtrl::GetPunctuation</title>
        <content>
            <para>Gets the current punctuation characters in a rich edit control.</para>
            <legacySyntax>BOOL GetPunctuation(
    UINT fType,
    PUNCTUATION* lpPunc ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>fType</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The punctuation type flag, as described in the <parameterReference>fType</parameterReference> parameter of                                 <externalLink> <linkText>EM_GETPUNCTUATION</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774184</linkUri>
                                </externalLink> in the <token>winSDK</token>.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpPunc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a                                 <externalLink> <linkText>PUNCTUATION</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787944</linkUri>
                                </externalLink> structure, as described in the <token>winSDK</token>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the operation succeeded, otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function is available with only the Asian-language versions of the operating system.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getrect">
        <!--0c5d02d2-1ce6-484a-ba26-a0f72f7bb1dd-->
        <title>CRichEditCtrl::GetRect</title>
        <content>
            <para>Retrieves the formatting rectangle for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>void GetRect( LPRECT lpRect ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> or pointer to a RECT to receive the formatting rectangle of this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The formatting rectangle is the bounding rectangle for the text. This value is independent of the size of the <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_GETRECT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761596</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__limittext">LimitText</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getredoname">
        <!--a8ffb63f-2cd8-404d-8dae-43e092948231-->
        <title>CRichEditCtrl::GetRedoName</title>
        <content>
            <para>Retrieves the type of the next available action in the redo queue, if any.</para>
            <legacySyntax>UNDONAMEID GetRedoName() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If successful, <unmanagedCodeEntityReference>GetRedoName</unmanagedCodeEntityReference> returns the                         <externalLink> <linkText>UNDONAMEID</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774365</linkUri>
                        </externalLink> enumeration type indicating the type of the next action in the control's redo queue. If the redo queue is empty, or if the redo action in the queue is of an unknown type, <unmanagedCodeEntityReference>GetRedoName</unmanagedCodeEntityReference> returns 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The types of actions that can be undone or redone include typing, delete, drag-drop, cut, and paste operations. This information can be useful for applications that provide an extended user interface for Undo and Redo operations, such as a drop-down list box of redoable actions. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getsel">
        <!--9d487125-c79d-4ff3-bcff-d93d14715a0a-->
        <title>CRichEditCtrl::GetSel</title>
        <content>
            <para>Retrieves the bounds of the current selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>void GetSel(
    CHARRANGE&amp; cr ) const;

void GetSel(
    long&amp; nStartChar,
    long&amp; nEndChar ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cr</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Reference to a                                 <externalLink> <linkText>CHARRANGE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787885</linkUri>
                                </externalLink> structure to receive the bounds of the current selection.</para>
                        </definition>
                        <definedTerm> <parameterReference>nStartChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the first character in the current selection.</para>
                        </definition>
                        <definedTerm> <parameterReference>nEndChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the last character in the current selection.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The two forms of this function provide alternate ways to get the bounds for the selection. Brief descriptions of these forms follow:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>GetSel( </legacyBold> <parameterReference>cr</parameterReference> <legacyBold> )</legacyBold>   This form uses the <legacyBold>CHARRANGE</legacyBold> structure with its <legacyBold>cpMin</legacyBold> and <legacyBold>cpMax</legacyBold> members to return the bounds. </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>GetSel( </legacyBold> <parameterReference>nStartChar</parameterReference> <legacyBold>, </legacyBold> <parameterReference>nEndChar</parameterReference> <legacyBold> )</legacyBold>   This form returns the bounds in the parameters <parameterReference>nStartChar</parameterReference> and <parameterReference>nEndChar</parameterReference>.</para>
                        </listItem>
                    </list>
                    <para>The selection includes everything if the beginning ( <legacyBold>cpMin</legacyBold> or <parameterReference>nStartChar</parameterReference>) is 0 and the end ( <legacyBold>cpMax</legacyBold> or <parameterReference>nEndChar</parameterReference>) is – 1.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_EXGETSEL</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb788001</linkUri>
                        </externalLink> message and                         <externalLink> <linkText>CHARRANGE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787885</linkUri>
                        </externalLink> structure in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#15</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getselectioncharformat">
        <!--baad3f45-f46d-4e8c-af45-7439d7175021-->
        <title>CRichEditCtrl::GetSelectionCharFormat</title>
        <content>
            <para>Gets the character formatting attributes of the current selection.</para>
            <legacySyntax>DWORD GetSelectionCharFormat( CHARFORMAT&amp; cf ) const;

DWORD GetSelectionCharFormat( CHARFORMAT2&amp; cf ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>In the first version, a pointer to a                                 <externalLink> <linkText>CHARFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787881</linkUri>
                                </externalLink> structure to receive the character formatting attributes of the current selection.</para>
                            <para>In the second version, a pointer to a                                 <externalLink> <linkText>CHARFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787883</linkUri>
                                </externalLink> structure, which is a Rich Edit 2.0 extension to the <legacyBold>CHARFORMAT</legacyBold> structure to receive the character formatting attributes of the current selection. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The <legacyBold>dwMask</legacyBold> data member of <parameterReference>cf</parameterReference>. It specifies the character formatting attributes that are consistent throughout the current selection.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <parameterReference>cf</parameterReference> parameter receives the attributes of the first character in the current selection. The return value specifies which attributes are consistent throughout the selection.</para>
                    <para>For more information, see the                         <externalLink> <linkText>EM_GETCHARFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb788026</linkUri>
                        </externalLink> message and the <legacyBold>CHARFORMAT</legacyBold> and <legacyBold>CHARFORMAT2</legacyBold> structures in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__setselectioncharformat">SetSelectionCharFormat</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getselectiontype">
        <!--527e2f24-4b82-4b61-ae98-616a48aeec87-->
        <title>CRichEditCtrl::GetSelectionType</title>
        <content>
            <para>Determines the selection type in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>WORD GetSelectionType() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Flags indicating the contents of the current selection. A combination of the following flags:  </para>
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
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see                         <externalLink> <linkText>EM_SELECTIONTYPE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774223</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#16</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getseltext">
        <!--e9468b9f-b80c-4ffd-a1cf-c54f31b100c1-->
        <title>CRichEditCtrl::GetSelText</title>
        <content>
            <para>Retrieves the text from the current selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>long GetSelText( LPSTR lpBuf ) const;

CString GetSelText() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpBuf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the buffer to receive the text in the current selection.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Depends on the form:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>GetSelText( </legacyBold> <parameterReference>lpBuf</parameterReference> <legacyBold> )</legacyBold>   The number of characters copied into <parameterReference>lpBuf</parameterReference>, not including the null termination.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>GetSelText( )</legacyBold>   The string containing the current selection.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If you use the first form, <legacyBold>GetSelText( </legacyBold> <parameterReference>lpBuf</parameterReference> <legacyBold> )</legacyBold>, you must ensure that the buffer is large enough for the text it will receive. Call <legacyLink xlink:href="#cricheditctrl__getsel">GetSel</legacyLink> to determine the number of characters in the current selection.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_GETSELTEXT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774190</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__getselectiontype">CRichEditCtrl::GetSelectionType</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__gettextlength">
        <!--453d3943-13df-4bc6-b52d-1d1168a726a3-->
        <title>CRichEditCtrl::GetTextLength</title>
        <content>
            <para>Retrieves the length of the text, in characters, in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object, not including the terminating null character.</para>
            <legacySyntax>long GetTextLength() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The length of the text in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see                         <externalLink> <linkText>WM_GETTEXTLENGTH</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632628</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#17</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__gettextlengthex">
        <!--248eae73-292f-401d-8d62-848ac5329410-->
        <title>CRichEditCtrl::GetTextLengthEx</title>
        <content>
            <para>Calculates the length of the text in the rich edit control.</para>
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
                    <para> <unmanagedCodeEntityReference>GetTextLengthEx</unmanagedCodeEntityReference> provides additional ways of determining the length of the text. It supports the Rich Edit 2.0 functionality. See                         <externalLink> <linkText>About Rich Edit Controls</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787873</linkUri>
                        </externalLink> in the <token>winSDK</token>
                        <legacyItalic> </legacyItalic>for more information.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__gettextmode">
        <!--ab1cf392-8770-4bb6-91d6-1410523595ab-->
        <title>CRichEditCtrl::GetTextMode</title>
        <content>
            <para>Retrieves the current text mode and undo level of a rich edit control.</para>
            <legacySyntax>UINT GetTextMode() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A set of bit flags from the                         <externalLink> <linkText>TEXTMODE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774364</linkUri>
                        </externalLink> enumeration type, as described in the <token>winSDK</token>. The flags indicate the current text mode and undo level of the control. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__gettextrange">
        <!--eca22cbe-da17-49ab-b7bb-45dbca44bef5-->
        <title>CRichEditCtrl::GetTextRange</title>
        <content>
            <para>Gets the specified range of characters. </para>
            <legacySyntax>int GetTextRange(
    int nFirst,
    int nLast,
    CString&amp; refString ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nFirst</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The character position index immediately preceding the first character in the range. </para>
                        </definition>
                        <definedTerm> <parameterReference>nLast</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The character position immediately following the last character in the range.</para>
                        </definition>
                        <definedTerm> <parameterReference>refString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object that will receive the text.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of characters copied, not including the terminating null character.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see                         <externalLink> <linkText>EM_GETTEXTRANGE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774199</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                    <para> <unmanagedCodeEntityReference>GetTextRange</unmanagedCodeEntityReference> supports the Rich Edit 2.0 functionality. See                         <externalLink> <linkText>About Rich Edit Controls</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787873</linkUri>
                        </externalLink> in the <token>winSDK</token>
                        <legacyItalic> </legacyItalic>for more information.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getundoname">
        <!--16294a52-255b-4eba-9a11-737e6d6587cb-->
        <title>CRichEditCtrl::GetUndoName</title>
        <content>
            <para>Retrieves the type of the next available action in the undo queue, if any.</para>
            <legacySyntax>UNDONAMEID GetUndoName() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If an undo action is in the control's undo queue, <unmanagedCodeEntityReference>GetUndoName</unmanagedCodeEntityReference> returns the                         <externalLink> <linkText>UNDONAMEID</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774365</linkUri>
                        </externalLink> enumeration type indicating the type of the next action in the queue. If the undo queue is empty, or if the undo action in the queue is of an unknown type, <unmanagedCodeEntityReference>GetUndoName</unmanagedCodeEntityReference> returns 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The types of actions that can be undone or redone include typing, delete, drag-drop, cut, and paste operations. This information can be useful for applications that provide an extended user interface for Undo and Redo operations, such as a drop-down list box of actions that can be undone. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__getwordwrapmode">
        <!--6e356a29-010f-44c0-97ca-3c42ff7cd900-->
        <title>CRichEditCtrl::GetWordWrapMode</title>
        <content>
            <para>Retrieves the current word wrapping and word breaking options for the rich edit control.</para>
            <legacySyntax>UINT GetWordWrapMode() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current word wrapping and word breaking options. These options are described in                         <externalLink> <linkText>EM_SETWORDWRAPMODE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774294</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function is available only for Asian-language versions of the operating system.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__hideselection">
        <!--1713a378-b7a1-4b14-9551-0ed0c9a2cd5e-->
        <title>CRichEditCtrl::HideSelection</title>
        <content>
            <para>Changes the visibility of the selection.</para>
            <legacySyntax>void HideSelection(
    BOOL bHide,
    BOOL bPerm );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bHide</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates if the selection should be shown or hidden, <legacyBold>TRUE</legacyBold> to hide the selection.</para>
                        </definition>
                        <definedTerm> <parameterReference>bPerm</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates if this change in visibility for the selection should be permanent.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When <parameterReference>bPerm</parameterReference> is <legacyBold>TRUE</legacyBold>, it changes the <unmanagedCodeEntityReference>ECO_NOHIDESEL</unmanagedCodeEntityReference> option for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object. For a brief description of this option, see <legacyLink xlink:href="#cricheditctrl__setoptions">SetOptions</legacyLink>. You can use this function to set all the options for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_HIDESELECTION</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774210</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#18</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__limittext">
        <!--c43d0522-484e-4474-b707-f04f63939488-->
        <title>CRichEditCtrl::LimitText</title>
        <content>
            <para>Limits the length of the text that the user can enter into an edit control.</para>
            <legacySyntax>void LimitText( long nChars = 0  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nChars</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the length (in bytes) of the text that the user can enter. If this parameter is 0 (the default value), the text length is set to 64K bytes.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Changing the text limit restricts only the text the user can enter. It has no effect on any text already in the edit control, nor does it affect the length of the text copied to the edit control by the <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__setwindowtext">SetWindowText</legacyLink> member function in <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference>. If an application uses the <unmanagedCodeEntityReference>SetWindowText</unmanagedCodeEntityReference> function to place more text into an edit control than is specified in the call to <unmanagedCodeEntityReference>LimitText</unmanagedCodeEntityReference>, the user can delete any of the text within the edit control. However, the text limit will prevent the user from replacing the existing text with new text, unless deleting the current selection causes the text to fall below the text limit.</para>
                    <alert class="note">
                        <para>For the text limit, each OLE item counts as a single character.</para>
                    </alert>
                    <para>For more information, see                         <externalLink> <linkText>EM_EXLIMITTEXT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb788003</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#19</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__linefromchar">
        <!--75c68013-fb59-43d3-a1d1-6f2216ec0289-->
        <title>CRichEditCtrl::LineFromChar</title>
        <content>
            <para>Retrieves the line number of the line that contains the specified character index.</para>
            <legacySyntax>long LineFromChar( long nIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the zero-based index value for the desired character in the text of the edit control, or contains –1. If <parameterReference>nIndex</parameterReference> is –1, it specifies the current line, that is, the line that contains the caret.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The zero-based line number of the line containing the character index specified by <parameterReference>nIndex</parameterReference>. If <parameterReference>nIndex</parameterReference> is –1, the number of the line that contains the first character of the selection is returned. If there is no selection, the current line number is returned.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A character index is the number of characters from the beginning of the rich edit control. For character counting, an OLE item is counted as a single character.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_EXLINEFROMCHAR</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb788005</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#20</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__lineindex">
        <!--4e4bc33d-93fb-4b0c-ae04-3fee60ae6179-->
        <title>CRichEditCtrl::LineIndex</title>
        <content>
            <para>Retrieves the character index of a line within this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>int LineIndex( int nLine = -1  ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nLine</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the index value for the desired line in the text of the edit control, or contains –1. If <parameterReference>nLine</parameterReference> is –1, it specifies the current line, that is, the line that contains the caret.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The character index of the line specified in <parameterReference>nLine</parameterReference> or –1 if the specified line number is greater then the number of lines in the edit control.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The character index is the number of characters from the beginning of the rich edit control to the specified line. </para>
                    <para>For more information, see                         <externalLink> <linkText>EM_LINEINDEX</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761611</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#21</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__linelength">
        <!--05d222fa-9be2-4bb6-b079-06e0335c2e31-->
        <title>CRichEditCtrl::LineLength</title>
        <content>
            <para>Retrieves the length of a line in a rich edit control.</para>
            <legacySyntax>int LineLength( int nLine = -1  ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nLine</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the character index of a character in the line whose length is to be retrieved. If this parameter is –1, the length of the current line (the line that contains the caret) is returned, not including the length of any selected text within the line. When <unmanagedCodeEntityReference>LineLength</unmanagedCodeEntityReference> is called for a single-line edit control, this parameter is ignored.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>When <unmanagedCodeEntityReference>LineLength</unmanagedCodeEntityReference> is called for a multiple-line edit control, the return value is the length (in bytes) of the line specified by <parameterReference>nLine</parameterReference>. When <unmanagedCodeEntityReference>LineLength</unmanagedCodeEntityReference> is called for a single-line edit control, the return value is the length (in bytes) of the text in the edit control.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use the <legacyLink xlink:href="#cricheditctrl__lineindex">LineIndex</legacyLink> member function to retrieve a character index for a given line number within this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_LINELENGTH</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761613</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__lineindex">LineIndex</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__linescroll">
        <!--fc117523-fd02-439e-8c96-a3452bf7071e-->
        <title>CRichEditCtrl::LineScroll</title>
        <content>
            <para>Scrolls the text of a multiple-line edit control.</para>
            <legacySyntax>void LineScroll(
    int nLines,
    int nChars = 0  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nLines</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of lines to scroll vertically.</para>
                        </definition>
                        <definedTerm> <parameterReference>nChars</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of character positions to scroll horizontally. This value is ignored if the rich edit control has either the <legacyBold>ES_RIGHT</legacyBold> or <legacyBold>ES_CENTER</legacyBold> style. <legacyLink xlink:href="e6291dd6-f2cb-4ce2-ac31-32272526625c">Edit styles</legacyLink> are specified in <legacyLink xlink:href="#cricheditctrl__create">Create</legacyLink>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The edit control does not scroll vertically past the last line of text in the edit control. If the current line plus the number of lines specified by <parameterReference>nLines</parameterReference> exceeds the total number of lines in the edit control, the value is adjusted so that the last line of the edit control is scrolled to the top of the edit-control window. </para>
                    <para> <unmanagedCodeEntityReference>LineScroll</unmanagedCodeEntityReference> can be used to scroll horizontally past the last character of any line.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_LINESCROLL</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761615</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__getfirstvisibleline">GetFirstVisibleLine</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__paste">
        <!--5b6c189a-fc3c-41e6-a648-807e6324b37a-->
        <title>CRichEditCtrl::Paste</title>
        <content>
            <para>Inserts the data from the Clipboard into the <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> at the insertion point, the location of the caret.</para>
            <legacySyntax>void Paste();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Data is inserted only if the Clipboard contains data in a recognized format.</para>
                    <para>For more information, see                         <externalLink> <linkText>WM_PASTE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms649028</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#22</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__pastespecial">
        <!--758f5360-2f2a-4ebc-93c4-450e9f268181-->
        <title>CRichEditCtrl::PasteSpecial</title>
        <content>
            <para>Pastes data in a specific Clipboard format into this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>void PasteSpecial(
    UINT nClipFormat,
    DWORD dvAspect = 0,
    HMETAFILE hMF = 0  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>nClipFormat</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Clipboard format to paste into this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>dvAspect</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Device aspect for the data to be retrieved from the Clipboard.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>hMF</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Handle to the metafile containing the iconic view of the object to be pasted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The new material is inserted at the insertion point, the location of the caret.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_PASTESPECIAL</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774214</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#23</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__posfromchar">
        <!--24e32ab7-fafd-4299-a035-daf279a437e9-->
        <title>CRichEditCtrl::PosFromChar</title>
        <content>
            <para>Retrieves the client area coordinates of a specified character in an edit control.</para>
            <legacySyntax>CPoint PosFromChar( UINT nChar ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The zero-based index of the character.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The position of the character, (x, y). For a single-line edit control, the y-coordinate is always zero. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see                         <externalLink> <linkText>EM_POSFROMCHAR</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761631</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__redo">
        <!--77005eab-1f42-4f1d-a240-56319b805df4-->
        <title>CRichEditCtrl::Redo</title>
        <content>
            <para>Redoes the next action in the control's redo queue.</para>
            <legacySyntax>BOOL Redo();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise, 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see                         <externalLink> <linkText>EM_REDO</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774218</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__replacesel">
        <!--9e27db0d-a46f-4479-8328-36f7ea1bbf18-->
        <title>CRichEditCtrl::ReplaceSel</title>
        <content>
            <para>Replaces the current selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object with the specified text.</para>
            <legacySyntax>void ReplaceSel(
    LPCTSTR lpszNewText,
    BOOL bCanUndo = FALSE  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszNewText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a null-terminated string containing the replacement text.</para>
                        </definition>
                        <definedTerm> <parameterReference>bCanUndo</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>To specify that this function can be undone, set the value of this parameter to <legacyBold>TRUE</legacyBold>. The default value is <legacyBold>FALSE</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To replace all the text in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object, use <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__setwindowtext">CWnd::SetWindowText</legacyLink>.</para>
                    <para>If there is no current selection, the replacement text is inserted at the insertion point, that is, the current caret location.</para>
                    <para>This function will format the inserted text with the existing character formatting. When replacing the entire range of text (by calling <unmanagedCodeEntityReference>SetSel</unmanagedCodeEntityReference>(0,-1) before calling <unmanagedCodeEntityReference>ReplaceSel</unmanagedCodeEntityReference>), there is an end of paragraph character that retains the previous paragraph's formatting, which in inherited by the newly inserted text.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_REPLACESEL</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761633</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__lineindex">LineIndex</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__requestresize">
        <!--07d75fb8-e5c3-4708-9303-0f9856302397-->
        <title>CRichEditCtrl::RequestResize</title>
        <content>
            <para>Forces this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object to send <legacyBold>EN_REQUESTRESIZE</legacyBold> notification messages to its parent window.</para>
            <legacySyntax>void RequestResize();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function is useful during <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onsize">CWnd::OnSize</legacyLink> processing for a bottomless <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                    <para>For more information, see the                         <externalLink> <linkText>EM_REQUESTRESIZE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774220</linkUri>
                        </externalLink> message and the <legacyBold>Bottomless Rich Edit Controls</legacyBold> section of                         <externalLink> <linkText>About Rich Edit Controls</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787873</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setautourldetect">
        <!--a6a613b1-6969-46da-a644-76464aeabf4b-->
        <title>CRichEditCtrl::SetAutoURLDetect</title>
        <content>
            <para>Sets the rich edit control to automatically detect a URL.</para>
            <legacySyntax>BOOL SetAutoURLDetect( BOOL bEnable = TRUE  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the control is set to automatically detect a URL. If <legacyBold>TRUE</legacyBold>, it is enabled. If <legacyBold>FALSE</legacyBold>, it is disabled.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Zero if successful, otherwise nonzero. For example, the message may fail due to insufficient memory.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If enabled, the rich edit control will scan the text to determine if it matches a standard URL format. For a list of these URL formats, see                         <externalLink> <linkText>EM_AUTOURLDETECT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787991</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                    <alert class="note">
                        <para>Do not set <unmanagedCodeEntityReference>SetAutoURLDetect</unmanagedCodeEntityReference> to <legacyBold>TRUE</legacyBold> if your edit control uses the <legacyBold>CFE_LINK</legacyBold> effect for text other than URLs. <unmanagedCodeEntityReference>SetAutoURLDetect</unmanagedCodeEntityReference> enables this effect for URLs and disables it for all other text. See                             <externalLink> <linkText>EN_LINK</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787970</linkUri>
                            </externalLink> for more information about the <legacyBold>CFE_LINK</legacyBold> effect.</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setbackgroundcolor">
        <!--e5f071de-fe4c-4fd3-8e2b-47a302d3a2d4-->
        <title>CRichEditCtrl::SetBackgroundColor</title>
        <content>
            <para>Sets the background color for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>COLORREF SetBackgroundColor(
    BOOL bSysColor,
    COLORREF cr );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bSysColor</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates if the background color should be set to the system value. If this value is <legacyBold>TRUE</legacyBold>, <parameterReference>cr</parameterReference> is ignored.</para>
                        </definition>
                        <definedTerm> <parameterReference>cr</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The requested background color. Used only if <parameterReference>bSysColor</parameterReference> is <legacyBold>FALSE</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous background color for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The background color can be set to the system value or to a specified                         <externalLink> <linkText>COLORREF</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183449</linkUri>
                        </externalLink> value.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_SETBKGNDCOLOR</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774228</linkUri>
                        </externalLink> message and                         <externalLink> <linkText>COLORREF</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183449</linkUri>
                        </externalLink> structure in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#24</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setdefaultcharformat">
        <!--5dafbd8b-d4a2-45b4-be43-f115a799d96e-->
        <title>CRichEditCtrl::SetDefaultCharFormat</title>
        <content>
            <para>Sets the character formatting attributes for new text in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>BOOL SetDefaultCharFormat( CHARFORMAT&amp; cf );

BOOL SetDefaultCharFormat( CHARFORMAT2&amp; cf );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>In the first version, a pointer to a                                 <externalLink> <linkText>CHARFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787881</linkUri>
                                </externalLink> structure containing the new default character formatting attributes.</para>
                            <para>In the second version, a pointer to a                                 <externalLink> <linkText>CHARFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787883</linkUri>
                                </externalLink> structure, which is a Rich Edit 2.0 extension to the <legacyBold>CHARFORMAT</legacyBold> structure, containing the default character formatting attributes. </para>
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
                    <para>Only the attributes specified by the <legacyBold>dwMask</legacyBold> member of <parameterReference>cf</parameterReference> are changed by this function.</para>
                    <para>For more information, see the                         <externalLink> <linkText>EM_SETCHARFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774230</linkUri>
                        </externalLink> message and the <legacyBold>CHARFORMAT</legacyBold> and <legacyBold>CHARFORMAT2</legacyBold> structures in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#25</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__seteventmask">
        <!--7d5c1ae5-f7ed-40f4-8c98-0ff1803a7e77-->
        <title>CRichEditCtrl::SetEventMask</title>
        <content>
            <para>Sets the event mask for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>DWORD SetEventMask( DWORD dwEventMask );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>dwEventMask</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The new event mask for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous event mask.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The event mask specifies which notification messages the <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object sends to its parent window.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_SETEVENTMASK</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774238</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#26</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setmodify">
        <!--c206730e-d761-4938-ac8c-a3293e4606cc-->
        <title>CRichEditCtrl::SetModify</title>
        <content>
            <para>Sets or clears the modified flag for an edit control.</para>
            <legacySyntax>void SetModify( BOOL bModified = TRUE  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bModified</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A value of <legacyBold>TRUE</legacyBold> indicates that the text has been modified, and a value of <legacyBold>FALSE</legacyBold> indicates it is unmodified. By default, the modified flag is set.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The modified flag indicates whether or not the text within the edit control has been modified. It is automatically set whenever the user changes the text. Its value can be retrieved with the <legacyLink xlink:href="#cricheditctrl__getmodify">GetModify</legacyLink> member function.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_SETMODIFY</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761651</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__getmodify">GetModify</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setolecallback">
        <!--56e9c467-2d12-4dc3-84a7-15827c735ea4-->
        <title>CRichEditCtrl::SetOLECallback</title>
        <content>
            <para>Gives this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object an <legacyBold>IRichEditOleCallback</legacyBold> object to use to access OLE-related resources and information.</para>
            <legacySyntax>BOOL SetOLECallback( IRichEditOleCallback* pCallback );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pCallback</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to an                                 <externalLink> <linkText>IRichEditOleCallback</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774308</linkUri>
                                </externalLink> object that this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object will use to get OLE-related resources and information.</para>
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
                    <para>This <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object will call                         <externalLink> <linkText>IUnknown::AddRef</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms691379</linkUri>
                        </externalLink> to increment the usage count for the COM object specified by <parameterReference>pCallback</parameterReference>.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_SETOLECALLBACK</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774252</linkUri>
                        </externalLink> message and                         <externalLink> <linkText>IRichEditOleCallback</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774308</linkUri>
                        </externalLink> interface in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setoptions">
        <!--fbe281fb-2b82-472c-ab31-e184f2fd1eb4-->
        <title>CRichEditCtrl::SetOptions</title>
        <content>
            <para>Sets the options for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>void SetOptions(
    WORD wOp,
    DWORD dwFlags );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>wOp</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Indicates the type of operation. One of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>ECOOP_SET</unmanagedCodeEntityReference>   Set the options to those specified by <parameterReference>dwFlags</parameterReference>.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>ECOOP_OR</unmanagedCodeEntityReference>   Combine the current options with those specified by <parameterReference>dwFlags</parameterReference>.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>ECOOP_AND</unmanagedCodeEntityReference>   Retain only those current options that are also specified by <parameterReference>dwFlags</parameterReference>.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>ECOOP_XOR</unmanagedCodeEntityReference>   Retain only those current options that are                                         <legacyItalic>not</legacyItalic> specified by <parameterReference>dwFlags</parameterReference>.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>dwFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Rich edit options. The flag values are listed in the Remarks section.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The options can be a combination of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ECO_AUTOWORDSELECTION</unmanagedCodeEntityReference>   Automatic word selection on double-click.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ECO_AUTOVSCROLL</unmanagedCodeEntityReference>   Automatically scrolls text to the right by 10 characters when the user types a character at the end of the line. When the user presses the ENTER key, the control scrolls all text back to position zero.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ECO_AUTOHSCROLL</unmanagedCodeEntityReference>   Automatically scrolls text up one page when the user presses the ENTER key on the last line.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ECO_NOHIDESEL</unmanagedCodeEntityReference>   Negates the default behavior for an edit control. The default behavior hides the selection when the control loses the input focus and shows the selection when the control receives the input focus. If you specify <unmanagedCodeEntityReference>ECO_NOHIDESEL</unmanagedCodeEntityReference>, the selected text is inverted, even if the control does not have the focus.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ECO_READONLY</unmanagedCodeEntityReference>   Prevents the user from typing or editing text in the edit control.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ECO_WANTRETURN</unmanagedCodeEntityReference>   Specifies that a carriage return be inserted when the user presses the ENTER key while entering text into a multiple-line rich edit control in a dialog box. If you do not specify this style, pressing the ENTER key sends a command to the rich edit control's parent window, which mimics clicking the parent window's default button (for example, the OK button in a dialog box). This style has no effect on a single-line edit control.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ECO_SAVESEL</unmanagedCodeEntityReference>   Preserves the selection when the control loses the focus. By default, the entire contents of the control are selected when it regains the focus.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>ECO_VERTICAL</unmanagedCodeEntityReference>   Draws text and objects in a vertical direction. Available for Asian languages only.</para>
                        </listItem>
                    </list>
                    <para>For more information, see                         <externalLink> <linkText>EM_SETOPTIONS</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774254</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#27</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setparaformat">
        <!--a5b4725c-5b2c-43ee-89cd-7bc41f352d9d-->
        <title>CRichEditCtrl::SetParaFormat</title>
        <content>
            <para>Sets the paragraph formatting attributes for the current selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>BOOL SetParaFormat( PARAFORMAT&amp; pf );

BOOL SetParaFormat( PARAFORMAT2&amp; pf );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>In the first version, a pointer to a                                 <externalLink> <linkText>PARAFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787940</linkUri>
                                </externalLink> structure containing the new default paragraph formatting attributes.</para>
                            <para>In the second version, a pointer to a                                 <externalLink> <linkText>PARAFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787942</linkUri>
                                </externalLink> structure, which is a Rich Edit 2.0 extension to the <legacyBold>PARAFORMAT</legacyBold> structure, holding the default character formatting attributes. </para>
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
                    <para>For more information, see the                         <externalLink> <linkText>EM_SETPARAFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774276</linkUri>
                        </externalLink> message and the <legacyBold>PARAFORMAT</legacyBold> and <legacyBold>PARAFORMAT2</legacyBold> structures in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#28</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setpunctuation">
        <!--f8ff1547-06e0-452a-8a9c-49f030f73548-->
        <title>CRichEditCtrl::SetPunctuation</title>
        <content>
            <para>Sets the punctuation in a rich edit control.</para>
            <legacySyntax>BOOL SetPunctuation(
    UINT fType,
    PUNCTUATION* lpPunc );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>fType</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The punctuation flag. For a list of possible values, see the <parameterReference>fType</parameterReference> parameter for                                 <externalLink> <linkText>EM_SETPUNCTUATION</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774278</linkUri>
                                </externalLink> in the <token>winSDK</token>.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpPunc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a                                 <externalLink> <linkText>PUNCTUATION</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787944</linkUri>
                                </externalLink> structure, as described in the <token>winSDK</token>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful, otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function is available for only Asian-language versions of the operating system.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setreadonly">
        <!--3fd897a6-ec1c-487a-8e44-b77a9a7c8ccb-->
        <title>CRichEditCtrl::SetReadOnly</title>
        <content>
            <para>Changes the <unmanagedCodeEntityReference>ECO_READONLY</unmanagedCodeEntityReference> option for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>BOOL SetReadOnly( BOOL bReadOnly = TRUE  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bReadOnly</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates if this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object should be read only.</para>
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
                    <para>For a brief description of this option, see <legacyLink xlink:href="#cricheditctrl__setoptions">SetOptions</legacyLink>. You can use this function to set all the options for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object. </para>
                    <para>For more information, see                         <externalLink> <linkText>EM_SETREADONLY</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761655</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#29</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setrect">
        <!--75c959ae-c11e-4e94-a1ff-b5f8259393a6-->
        <title>CRichEditCtrl::SetRect</title>
        <content>
            <para>Sets the formatting rectangle for this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>void SetRect( LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> or pointer to a RECT that indicates the new bounds for the formatting rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The formatting rectangle is the limiting rectangle for the text. The limiting rectangle is independent of the size of the rich edit control window. When this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object is first created, the formatting rectangle is the same size as the client area of the window. Use <unmanagedCodeEntityReference>SetRect</unmanagedCodeEntityReference> to make the formatting rectangle larger or smaller than the rich edit window.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_SETRECT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761657</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#30</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setsel">
        <!--cd42a64b-aa18-44a0-ad1e-2375dc207f47-->
        <title>CRichEditCtrl::SetSel</title>
        <content>
            <para>Sets the selection within this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>void SetSel(
    long nStartChar,
    long nEndChar );

void SetSel(
    CHARRANGE&amp; cr );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nStartChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the first character for the selection.</para>
                        </definition>
                        <definedTerm> <parameterReference>nEndChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the last character for the selection.</para>
                        </definition>
                        <definedTerm> <parameterReference>cr</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                <externalLink> <linkText>CHARRANGE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787885</linkUri>
                                </externalLink> structure which holds the bounds of the current selection.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The two forms of this function provide alternate ways to set the bounds for the selection. Brief descriptions of these forms follow:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>SetSel( </legacyBold> <parameterReference>cr</parameterReference> <legacyBold> )</legacyBold>   This form uses the <legacyBold>CHARRANGE</legacyBold> structure with its <legacyBold>cpMin</legacyBold> and <legacyBold>cpMax</legacyBold> members to set the bounds. </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SetSel( </legacyBold> <parameterReference>nStartChar</parameterReference> <legacyBold>, </legacyBold> <parameterReference>nEndChar</parameterReference> <legacyBold> )</legacyBold>   This form use the parameters <parameterReference>nStartChar</parameterReference> and <parameterReference>nEndChar</parameterReference> to set the bounds.</para>
                        </listItem>
                    </list>
                    <para>The caret is placed at the end of the selection indicated by the greater of the start ( <legacyBold>cpMin</legacyBold> or <parameterReference>nStartChar</parameterReference>) and end ( <legacyBold>cpMax</legacyBold> or <parameterReference>nEndChar</parameterReference>) indices. This function scrolls the contents of the <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> so that the caret is visible.</para>
                    <para>To select all the text in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object, call <unmanagedCodeEntityReference>SetSel</unmanagedCodeEntityReference> with a start index of 0 and an end index of – 1.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_EXSETSEL</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb788007</linkUri>
                        </externalLink> message and                         <externalLink> <linkText>CHARRANGE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787885</linkUri>
                        </externalLink> structure in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__getsel">GetSel</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setselectioncharformat">
        <!--9e3cfd5d-86f6-4a04-9bfc-740572df997d-->
        <title>CRichEditCtrl::SetSelectionCharFormat</title>
        <content>
            <para>Sets the character formatting attributes for the text in the current selection in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>BOOL SetSelectionCharFormat( CHARFORMAT&amp; cf );

BOOL SetSelectionCharFormat( CHARFORMAT2&amp; cf );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>In the first version, a pointer to a                                 <externalLink> <linkText>CHARFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787881</linkUri>
                                </externalLink> structure containing the new character formatting attributes for the current selection.</para>
                            <para>In the second version, a pointer to a                                 <externalLink> <linkText>CHARFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787883</linkUri>
                                </externalLink> structure, which is a Rich Edit 2.0 extension to the <legacyBold>CHARFORMAT</legacyBold> structure, containing the new character formatting attributes for the current selection. </para>
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
                    <para>Only the attributes specified by the <legacyBold>dwMask</legacyBold> member of <parameterReference>cf</parameterReference> are changed by this function.</para>
                    <para>For more information, see the                         <externalLink> <linkText>EM_SETCHARFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774230</linkUri>
                        </externalLink> and the <legacyBold>CHARFORMAT</legacyBold> and <legacyBold>CHARFORMAT2</legacyBold> structures in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#31</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__settargetdevice">
        <!--a9c2aa43-c21c-45bd-b64d-704fd2a74067-->
        <title>CRichEditCtrl::SetTargetDevice</title>
        <content>
            <para>Sets the target device and line width used for WYSIWYG (what you see is what you get) formatting in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>BOOL SetTargetDevice(
    HDC hDC,
    long lLineWidth );

BOOL SetTargetDevice(
    CDC&amp; dc,
    long lLineWidth );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Handle to the device context for the new target device.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lLineWidth</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Line width to use for formatting.</para>
                        </definition>
                        <definedTerm> <parameterReference>dc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2">CDC</legacyLink> for the new target device.</para>
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
                    <para>If this function is successful, the rich edit control owns the device context passed as a parameter. In that case, the calling function should not destroy the device context.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_SETTARGETDEVICE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774282</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#32</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__settextmode">
        <!--ce90c1a1-4ef1-42d2-932f-28d8d6064e7b-->
        <title>CRichEditCtrl::SetTextMode</title>
        <content>
            <para>Sets the text mode or undo and redo level for a rich edit control.</para>
            <legacySyntax>BOOL SetTextMode( UINT fMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>fMode</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new settings for the control's text mode and undo level parameters. For a list of the possible values, see the mode parameter for                                 <externalLink> <linkText>EM_SETTEXTMODE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774286</linkUri>
                                </externalLink> in the <token>winSDK</token>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Zero if successful, otherwise nonzero. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For a description of the text modes, see <legacyBold>EM_SETTEXTMODE</legacyBold> in the <token>winSDK</token>.</para>
                    <para>This member function fails if the control contains text. To make sure the control is empty, send a                         <externalLink> <linkText>WM_SETTEXT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632644</linkUri>
                        </externalLink> message with an empty string.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setundolimit">
        <!--f61f5e5c-b606-46d4-bf61-d55c3e65d733-->
        <title>CRichEditCtrl::SetUndoLimit</title>
        <content>
            <para>Sets the maximum number of actions that can stored in the undo queue.</para>
            <legacySyntax>UINT SetUndoLimit( UINT nLimit );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>nLimit</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the maximum number of actions that can be stored in the undo queue. Set to zero to disable Undo.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The new maximum number of undo actions for the rich edit control. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, the maximum number of actions in the undo queue is 100. If you increase this number, there must be enough available memory to accommodate the new number. For better performance, set the limit to the smallest possible value.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setwordcharformat">
        <!--5e996e21-3bab-49be-84ba-8e67acca7298-->
        <title>CRichEditCtrl::SetWordCharFormat</title>
        <content>
            <para>Sets the character formatting attributes for the currently selected word in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>BOOL SetWordCharFormat( CHARFORMAT&amp; cf );

BOOL SetWordCharFormat( CHARFORMAT2&amp; cf );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>In the first version, a pointer to a                                 <externalLink> <linkText>CHARFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787881</linkUri>
                                </externalLink> structure containing the new character formatting attributes for the currently selected word.</para>
                            <para>In the second version, a pointer to a                                 <externalLink> <linkText>CHARFORMAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787883</linkUri>
                                </externalLink> structure, which is a Rich Edit 2.0 extension to the <legacyBold>CHARFORMAT</legacyBold> structure, containing the new character formatting attributes for the currently selected word. </para>
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
                    <para>Only the attributes specified by the <legacyBold>dwMask</legacyBold> member of <parameterReference>cf</parameterReference> are changed by this function.</para>
                    <para>For more information, see the                         <externalLink> <linkText>EM_SETCHARFORMAT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774230</linkUri>
                        </externalLink> message and the <legacyBold>CHARFORMAT</legacyBold> and <legacyBold>CHARFORMAT2</legacyBold> structures in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#33</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__setwordwrapmode">
        <!--3eeae80e-dbcd-493b-b33f-4fb872526cb5-->
        <title>CRichEditCtrl::SetWordWrapMode</title>
        <content>
            <para>Sets the word-wrapping and word-breaking options for the rich edit control.</para>
            <legacySyntax>UINT SetWordWrapMode( UINT uFlags ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>uFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The options to set for word wrapping and word breaking. For a list of possible options, see                                 <externalLink> <linkText>EM_SETWORDWRAPMODE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774294</linkUri>
                                </externalLink> in the <token>winSDK</token>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current word-wrapping and word-breaking options.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This message is available only in Asian-language versions of the operating system.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__stopgrouptyping">
        <!--dc4b1c1e-97f2-4dc3-9ff9-17e676adf54f-->
        <title>CRichEditCtrl::StopGroupTyping</title>
        <content>
            <para>Stops the control from collecting additional typing actions into the current undo action.</para>
            <legacySyntax>void StopGroupTyping();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The control stores the next typing action, if any, into a new action in the undo queue.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_STOPGROUPTYPING</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774300</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__streamin">
        <!--baf64564-584d-43f4-9796-347880257244-->
        <title>CRichEditCtrl::StreamIn</title>
        <content>
            <para>Replaces text in this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object with text from the specified input stream.</para>
            <legacySyntax>long StreamIn(
    int nFormat,
    EDITSTREAM&amp; es );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nFormat</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Flags specifying the input data formats. See the Remarks section for more information.</para>
                        </definition>
                        <definedTerm> <parameterReference>es</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                <externalLink> <linkText>EDITSTREAM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787891</linkUri>
                                </externalLink> structure specifying the input stream. See the Remarks section for more information.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Number of characters read from the input stream.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The value of <parameterReference>nFormat</parameterReference> must be one of the following:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SF_TEXT</unmanagedCodeEntityReference>   Indicates reading text only.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SF_RTF</unmanagedCodeEntityReference>   Indicates reading text and formatting.</para>
                        </listItem>
                    </list>
                    <para>Either of these values can be combined with <unmanagedCodeEntityReference>SFF_SELECTION</unmanagedCodeEntityReference>. If <unmanagedCodeEntityReference>SFF_SELECTION</unmanagedCodeEntityReference> is specified, <unmanagedCodeEntityReference>StreamIn</unmanagedCodeEntityReference> replaces the current selection with the contents of the input stream. If it is not specified, <unmanagedCodeEntityReference>StreamIn</unmanagedCodeEntityReference> replaces the entire contents of this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                    <para>In the <legacyBold>EDITSTREAM</legacyBold> parameter <parameterReference>es</parameterReference>, you specify a callback function that fills a buffer with text. This callback function is called repeatedly, until the input stream is exhausted.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_STREAMIN</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774302</linkUri>
                        </externalLink> message and                         <externalLink> <linkText>EDITSTREAM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787891</linkUri>
                        </externalLink> structure in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#34</codeReference>
                    <codeReference>NVC_MFC_CRichEditCtrl#35</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__streamout">
        <!--8f60cd95-f368-4a0d-8c9c-12160dcdb0eb-->
        <title>CRichEditCtrl::StreamOut</title>
        <content>
            <para>Writes out the contents of this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object to the specified output stream.</para>
            <legacySyntax>long StreamOut(
    int nFormat,
    EDITSTREAM&amp; es );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nFormat</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Flags specifying the output data formats. See the Remarks section for more information.</para>
                        </definition>
                        <definedTerm> <parameterReference>es</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                <externalLink> <linkText>EDITSTREAM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787891</linkUri>
                                </externalLink> structure specifying the output stream. See the Remarks section for more information.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Number of characters written to the output stream.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The value of <parameterReference>nFormat</parameterReference> must be one of the following:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SF_TEXT</unmanagedCodeEntityReference>   Indicates writing text only.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SF_RTF</unmanagedCodeEntityReference>   Indicates writing text and formatting.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SF_RTFNOOBJS</unmanagedCodeEntityReference>   Indicates writing text and formatting, replacing OLE items with spaces.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SF_TEXTIZED</unmanagedCodeEntityReference>   Indicates writing text and formatting, with textual representations of OLE items.</para>
                        </listItem>
                    </list>
                    <para>Any of these values can be combined with <unmanagedCodeEntityReference>SFF_SELECTION</unmanagedCodeEntityReference>. If <unmanagedCodeEntityReference>SFF_SELECTION</unmanagedCodeEntityReference> is specified, <unmanagedCodeEntityReference>StreamOut</unmanagedCodeEntityReference> writes out the current selection into the output stream. If it is not specified, <unmanagedCodeEntityReference>StreamOut</unmanagedCodeEntityReference> writes out the entire contents of this <unmanagedCodeEntityReference>CRichEditCtrl</unmanagedCodeEntityReference> object.</para>
                    <para>In the <legacyBold>EDITSTREAM</legacyBold> parameter <parameterReference>es</parameterReference>, you specify a callback function which fills a buffer with text. This callback function is called repeatedly, until the output stream is exhausted.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_STREAMOUT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb774304</linkUri>
                        </externalLink> message and                         <externalLink> <linkText>EDITSTREAM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb787891</linkUri>
                        </externalLink> structure in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CRichEditCtrl#36</codeReference>
                    <codeReference>NVC_MFC_CRichEditCtrl#37</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cricheditctrl__undo">
        <!--66e8832b-b48d-4c3d-a1fb-3933b842f3fb-->
        <title>CRichEditCtrl::Undo</title>
        <content>
            <para>Undoes the last operation in the rich edit control.</para>
            <legacySyntax>BOOL Undo();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the undo operation is successful; otherwise, 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>An undo operation can also be undone. For example, you can restore deleted text with the first call to <legacyBold>Undo</legacyBold>. As long as there is no intervening edit operation, you can remove the text again with a second call to <legacyBold>Undo</legacyBold>.</para>
                    <para>For more information, see                         <externalLink> <linkText>EM_UNDO</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761670</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cricheditctrl__canundo">CanUndo</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample WORDPAD</legacyLink> <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="b1533c30-7f10-4663-88d3-8b7f2c9f7024">CEdit</link> <link xlink:href="bd576b10-4cc0-4050-8f76-e1a0548411e4">CRichEditView</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



