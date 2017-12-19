---
title: "CRichEditCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["CRichEditCtrl", "AFXCMN/CRichEditCtrl", "AFXCMN/CRichEditCtrl::CRichEditCtrl", "AFXCMN/CRichEditCtrl::CanPaste", "AFXCMN/CRichEditCtrl::CanRedo", "AFXCMN/CRichEditCtrl::CanUndo", "AFXCMN/CRichEditCtrl::CharFromPos", "AFXCMN/CRichEditCtrl::Clear", "AFXCMN/CRichEditCtrl::Copy", "AFXCMN/CRichEditCtrl::Create", "AFXCMN/CRichEditCtrl::CreateEx", "AFXCMN/CRichEditCtrl::Cut", "AFXCMN/CRichEditCtrl::DisplayBand", "AFXCMN/CRichEditCtrl::EmptyUndoBuffer", "AFXCMN/CRichEditCtrl::FindText", "AFXCMN/CRichEditCtrl::FindWordBreak", "AFXCMN/CRichEditCtrl::FormatRange", "AFXCMN/CRichEditCtrl::GetCharPos", "AFXCMN/CRichEditCtrl::GetDefaultCharFormat", "AFXCMN/CRichEditCtrl::GetEventMask", "AFXCMN/CRichEditCtrl::GetFirstVisibleLine", "AFXCMN/CRichEditCtrl::GetIRichEditOle", "AFXCMN/CRichEditCtrl::GetLimitText", "AFXCMN/CRichEditCtrl::GetLine", "AFXCMN/CRichEditCtrl::GetLineCount", "AFXCMN/CRichEditCtrl::GetModify", "AFXCMN/CRichEditCtrl::GetOptions", "AFXCMN/CRichEditCtrl::GetParaFormat", "AFXCMN/CRichEditCtrl::GetPunctuation", "AFXCMN/CRichEditCtrl::GetRect", "AFXCMN/CRichEditCtrl::GetRedoName", "AFXCMN/CRichEditCtrl::GetSel", "AFXCMN/CRichEditCtrl::GetSelectionCharFormat", "AFXCMN/CRichEditCtrl::GetSelectionType", "AFXCMN/CRichEditCtrl::GetSelText", "AFXCMN/CRichEditCtrl::GetTextLength", "AFXCMN/CRichEditCtrl::GetTextLengthEx", "AFXCMN/CRichEditCtrl::GetTextMode", "AFXCMN/CRichEditCtrl::GetTextRange", "AFXCMN/CRichEditCtrl::GetUndoName", "AFXCMN/CRichEditCtrl::GetWordWrapMode", "AFXCMN/CRichEditCtrl::HideSelection", "AFXCMN/CRichEditCtrl::LimitText", "AFXCMN/CRichEditCtrl::LineFromChar", "AFXCMN/CRichEditCtrl::LineIndex", "AFXCMN/CRichEditCtrl::LineLength", "AFXCMN/CRichEditCtrl::LineScroll", "AFXCMN/CRichEditCtrl::Paste", "AFXCMN/CRichEditCtrl::PasteSpecial", "AFXCMN/CRichEditCtrl::PosFromChar", "AFXCMN/CRichEditCtrl::Redo", "AFXCMN/CRichEditCtrl::ReplaceSel", "AFXCMN/CRichEditCtrl::RequestResize", "AFXCMN/CRichEditCtrl::SetAutoURLDetect", "AFXCMN/CRichEditCtrl::SetBackgroundColor", "AFXCMN/CRichEditCtrl::SetDefaultCharFormat", "AFXCMN/CRichEditCtrl::SetEventMask", "AFXCMN/CRichEditCtrl::SetModify", "AFXCMN/CRichEditCtrl::SetOLECallback", "AFXCMN/CRichEditCtrl::SetOptions", "AFXCMN/CRichEditCtrl::SetParaFormat", "AFXCMN/CRichEditCtrl::SetPunctuation", "AFXCMN/CRichEditCtrl::SetReadOnly", "AFXCMN/CRichEditCtrl::SetRect", "AFXCMN/CRichEditCtrl::SetSel", "AFXCMN/CRichEditCtrl::SetSelectionCharFormat", "AFXCMN/CRichEditCtrl::SetTargetDevice", "AFXCMN/CRichEditCtrl::SetTextMode", "AFXCMN/CRichEditCtrl::SetUndoLimit", "AFXCMN/CRichEditCtrl::SetWordCharFormat", "AFXCMN/CRichEditCtrl::SetWordWrapMode", "AFXCMN/CRichEditCtrl::StopGroupTyping", "AFXCMN/CRichEditCtrl::StreamIn", "AFXCMN/CRichEditCtrl::StreamOut", "AFXCMN/CRichEditCtrl::Undo"]
dev_langs: ["C++"]
helpviewer_keywords: ["CRichEditCtrl [MFC], CRichEditCtrl", "CRichEditCtrl [MFC], CanPaste", "CRichEditCtrl [MFC], CanRedo", "CRichEditCtrl [MFC], CanUndo", "CRichEditCtrl [MFC], CharFromPos", "CRichEditCtrl [MFC], Clear", "CRichEditCtrl [MFC], Copy", "CRichEditCtrl [MFC], Create", "CRichEditCtrl [MFC], CreateEx", "CRichEditCtrl [MFC], Cut", "CRichEditCtrl [MFC], DisplayBand", "CRichEditCtrl [MFC], EmptyUndoBuffer", "CRichEditCtrl [MFC], FindText", "CRichEditCtrl [MFC], FindWordBreak", "CRichEditCtrl [MFC], FormatRange", "CRichEditCtrl [MFC], GetCharPos", "CRichEditCtrl [MFC], GetDefaultCharFormat", "CRichEditCtrl [MFC], GetEventMask", "CRichEditCtrl [MFC], GetFirstVisibleLine", "CRichEditCtrl [MFC], GetIRichEditOle", "CRichEditCtrl [MFC], GetLimitText", "CRichEditCtrl [MFC], GetLine", "CRichEditCtrl [MFC], GetLineCount", "CRichEditCtrl [MFC], GetModify", "CRichEditCtrl [MFC], GetOptions", "CRichEditCtrl [MFC], GetParaFormat", "CRichEditCtrl [MFC], GetPunctuation", "CRichEditCtrl [MFC], GetRect", "CRichEditCtrl [MFC], GetRedoName", "CRichEditCtrl [MFC], GetSel", "CRichEditCtrl [MFC], GetSelectionCharFormat", "CRichEditCtrl [MFC], GetSelectionType", "CRichEditCtrl [MFC], GetSelText", "CRichEditCtrl [MFC], GetTextLength", "CRichEditCtrl [MFC], GetTextLengthEx", "CRichEditCtrl [MFC], GetTextMode", "CRichEditCtrl [MFC], GetTextRange", "CRichEditCtrl [MFC], GetUndoName", "CRichEditCtrl [MFC], GetWordWrapMode", "CRichEditCtrl [MFC], HideSelection", "CRichEditCtrl [MFC], LimitText", "CRichEditCtrl [MFC], LineFromChar", "CRichEditCtrl [MFC], LineIndex", "CRichEditCtrl [MFC], LineLength", "CRichEditCtrl [MFC], LineScroll", "CRichEditCtrl [MFC], Paste", "CRichEditCtrl [MFC], PasteSpecial", "CRichEditCtrl [MFC], PosFromChar", "CRichEditCtrl [MFC], Redo", "CRichEditCtrl [MFC], ReplaceSel", "CRichEditCtrl [MFC], RequestResize", "CRichEditCtrl [MFC], SetAutoURLDetect", "CRichEditCtrl [MFC], SetBackgroundColor", "CRichEditCtrl [MFC], SetDefaultCharFormat", "CRichEditCtrl [MFC], SetEventMask", "CRichEditCtrl [MFC], SetModify", "CRichEditCtrl [MFC], SetOLECallback", "CRichEditCtrl [MFC], SetOptions", "CRichEditCtrl [MFC], SetParaFormat", "CRichEditCtrl [MFC], SetPunctuation", "CRichEditCtrl [MFC], SetReadOnly", "CRichEditCtrl [MFC], SetRect", "CRichEditCtrl [MFC], SetSel", "CRichEditCtrl [MFC], SetSelectionCharFormat", "CRichEditCtrl [MFC], SetTargetDevice", "CRichEditCtrl [MFC], SetTextMode", "CRichEditCtrl [MFC], SetUndoLimit", "CRichEditCtrl [MFC], SetWordCharFormat", "CRichEditCtrl [MFC], SetWordWrapMode", "CRichEditCtrl [MFC], StopGroupTyping", "CRichEditCtrl [MFC], StreamIn", "CRichEditCtrl [MFC], StreamOut", "CRichEditCtrl [MFC], Undo"]
ms.assetid: 2be52788-822c-4c27-aafd-2471231e74eb
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRichEditCtrl Class
Provides the functionality of the rich edit control.  
  
## Syntax  
  
```  
class CRichEditCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CRichEditCtrl::CRichEditCtrl](#cricheditctrl)|Constructs a `CRichEditCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CRichEditCtrl::CanPaste](#canpaste)|Determines if the contents of the Clipboard can be pasted into this rich edit control.|  
|[CRichEditCtrl::CanRedo](#canredo)|Determines whether there are any actions in the control's redo queue.|  
|[CRichEditCtrl::CanUndo](#canundo)|Determines if an editing operation can be undone.|  
|[CRichEditCtrl::CharFromPos](#charfrompos)|Retrieves information about the character closest to a specified point in the client area of an edit control.|  
|[CRichEditCtrl::Clear](#clear)|Clears the current selection.|  
|[CRichEditCtrl::Copy](#copy)|Copies the current selection to the Clipboard.|  
|[CRichEditCtrl::Create](#create)|Creates the Windows rich edit control and associates it with this `CRichEditCtrl` object.|  
|[CRichEditCtrl::CreateEx](#createex)|Creates the Windows rich edit control with the specified extended Windows styles and associates it with this `CRichEditCtrl` object.|  
|[CRichEditCtrl::Cut](#cut)|Cuts the current selection to the Clipboard.|  
|[CRichEditCtrl::DisplayBand](#displayband)|Displays a portion of the contents of this `CRichEditCtrl` object.|  
|[CRichEditCtrl::EmptyUndoBuffer](#emptyundobuffer)|Resets (clears) the undo flag of this `CRichEditCtrl` object.|  
|[CRichEditCtrl::FindText](#findtext)|Locates text within this `CRichEditCtrl` object.|  
|[CRichEditCtrl::FindWordBreak](#findwordbreak)|Finds the next word break before or after the specified character position, or retrieves information about the character at that position.|  
|[CRichEditCtrl::FormatRange](#formatrange)|Formats a range of text for the target output device.|  
|[CRichEditCtrl::GetCharPos](#getcharpos)|Determines the location of a given character within this `CRichEditCtrl` object.|  
|[CRichEditCtrl::GetDefaultCharFormat](#getdefaultcharformat)|Retrieves the current default character formatting attributes in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::GetEventMask](#geteventmask)|Retrieves the event mask for this `CRichEditCtrl` object.|  
|[CRichEditCtrl::GetFirstVisibleLine](#getfirstvisibleline)|Determines the topmost visible line in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::GetIRichEditOle](#getiricheditole)|Retrieves a pointer to the `IRichEditOle` interface for this rich edit control.|  
|[CRichEditCtrl::GetLimitText](#getlimittext)|Gets the limit on the amount of text a user can enter into this `CRichEditCtrl` object.|  
|[CRichEditCtrl::GetLine](#getline)|Retrieves a line of text from this `CRichEditCtrl` object.|  
|[CRichEditCtrl::GetLineCount](#getlinecount)|Retrieves the number of lines in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::GetModify](#getmodify)|Determines if the contents of this `CRichEditCtrl` object have changed since the last save.|  
|[CRichEditCtrl::GetOptions](#getoptions)|Retrieves the rich edit control options.|  
|[CRichEditCtrl::GetParaFormat](#getparaformat)|Retrieves the paragraph formatting attributes in the current selection in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::GetPunctuation](#getpunctuation)|Retrieves the current punctuation characters for the rich edit control. This message is available only in Asian-language versions of the operating system.|  
|[CRichEditCtrl::GetRect](#getrect)|Retrieves the formatting rectangle for this `CRichEditCtrl` object.|  
|[CRichEditCtrl::GetRedoName](#getredoname)|Retrieves the type of the next action, if any, in the control's redo queue.|  
|[CRichEditCtrl::GetSel](#getsel)|Gets the starting and ending positions of the current selection in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::GetSelectionCharFormat](#getselectioncharformat)|Retrieves the character formatting attributes in the current selection in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::GetSelectionType](#getselectiontype)|Retrieves the type of contents in the current selection in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::GetSelText](#getseltext)|Gets the text of the current selection in this `CRichEditCtrl` object|  
|[CRichEditCtrl::GetTextLength](#gettextlength)|Retrieves the length of the text, in characters, in this `CRichEditCtrl` object. Does not include the terminating null character.|  
|[CRichEditCtrl::GetTextLengthEx](#gettextlengthex)|Retrieves the number of characters or bytes in the rich edit view. Accepts a list of flags to indicate the method of determining length of the text in a rich edit control|  
|[CRichEditCtrl::GetTextMode](#gettextmode)|Retrieves the current text mode and undo level of a rich edit control.|  
|[CRichEditCtrl::GetTextRange](#gettextrange)|Retrieves the specified range of text.|  
|[CRichEditCtrl::GetUndoName](#getundoname)|Retrieves the type of the next undo action, if any.|  
|[CRichEditCtrl::GetWordWrapMode](#getwordwrapmode)|Retrieves the current word wrapping and word breaking options for the rich edit control. This message is available only in Asian-language versions of the operating system.|  
|[CRichEditCtrl::HideSelection](#hideselection)|Shows or hides the current selection.|  
|[CRichEditCtrl::LimitText](#limittext)|Limits the amount of text a user can enter into the `CRichEditCtrl` object.|  
|[CRichEditCtrl::LineFromChar](#linefromchar)|Determines which line contains the given character.|  
|[CRichEditCtrl::LineIndex](#lineindex)|Retrieves the character index of a given line in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::LineLength](#linelength)|Retrieves the length of a given line in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::LineScroll](#linescroll)|Scrolls the text in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::Paste](#paste)|Inserts the contents of the Clipboard into this rich edit control.|  
|[CRichEditCtrl::PasteSpecial](#pastespecial)|Inserts the contents of the Clipboard into this rich edit control in the specified data format.|  
|[CRichEditCtrl::PosFromChar](#posfromchar)|Retrieves the client area coordinates of a specified character in an edit control.|  
|[CRichEditCtrl::Redo](#redo)|Redoes the next action in the control's redo queue.|  
|[CRichEditCtrl::ReplaceSel](#replacesel)|Replaces the current selection in this `CRichEditCtrl` object with specified text.|  
|[CRichEditCtrl::RequestResize](#requestresize)|Forces this `CRichEditCtrl` object to send request resize notifications.|  
|[CRichEditCtrl::SetAutoURLDetect](#setautourldetect)|Indicates if the auto URL detection is active in a rich edit control.|  
|[CRichEditCtrl::SetBackgroundColor](#setbackgroundcolor)|Sets the background color in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::SetDefaultCharFormat](#setdefaultcharformat)|Sets the current default character formatting attributes in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::SetEventMask](#seteventmask)|Sets the event mask for this `CRichEditCtrl` object.|  
|[CRichEditCtrl::SetModify](#setmodify)|Sets or clears the modification flag for this `CRichEditCtrl` object.|  
|[CRichEditCtrl::SetOLECallback](#setolecallback)|Sets the `IRichEditOleCallback` COM object for this rich edit control.|  
|[CRichEditCtrl::SetOptions](#setoptions)|Sets the options for this `CRichEditCtrl` object.|  
|[CRichEditCtrl::SetParaFormat](#setparaformat)|Sets the paragraph formatting attributes in the current selection in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::SetPunctuation](#setpunctuation)|Sets the punctuation characters for a rich edit control. This message is available only in Asian-language versions of the operating system.|  
|[CRichEditCtrl::SetReadOnly](#setreadonly)|Sets the read-only option for this `CRichEditCtrl` object.|  
|[CRichEditCtrl::SetRect](#setrect)|Sets the formatting rectangle for this `CRichEditCtrl` object.|  
|[CRichEditCtrl::SetSel](#setsel)|Sets the selection in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::SetSelectionCharFormat](#setselectioncharformat)|Sets the character formatting attributes in the current selection in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::SetTargetDevice](#settargetdevice)|Sets the target output device for this `CRichEditCtrl` object.|  
|[CRichEditCtrl::SetTextMode](#settextmode)|Sets the text mode or undo level of a rich edit control. The message fails if the control contains text.|  
|[CRichEditCtrl::SetUndoLimit](#setundolimit)|Sets the maximum number of actions that can stored in the undo queue.|  
|[CRichEditCtrl::SetWordCharFormat](#setwordcharformat)|Sets the character formatting attributes in the current word in this `CRichEditCtrl` object.|  
|[CRichEditCtrl::SetWordWrapMode](#setwordwrapmode)|Sets the word-wrapping and word-breaking options for the rich edit control. This message is available only in Asian-language versions of the operating system.|  
|[CRichEditCtrl::StopGroupTyping](#stopgrouptyping)|Stops the control from collecting additional typing actions into the current undo action. The control stores the next typing action, if any, into a new action in the undo queue.|  
|[CRichEditCtrl::StreamIn](#streamin)|Inserts text from an input stream into this `CRichEditCtrl` object.|  
|[CRichEditCtrl::StreamOut](#streamout)|Stores text from this `CRichEditCtrl` object into an output stream.|  
|[CRichEditCtrl::Undo](#undo)|Reverses the last editing operation.|  
  
## Remarks  
 A "rich edit control" is a window in which the user can enter and edit text. The text can be assigned character and paragraph formatting, and can include embedded OLE objects. Rich edit controls provide a programming interface for formatting text. However, an application must implement any user interface components necessary to make formatting operations available to the user.  
  
 This Windows Common control (and therefore the `CRichEditCtrl` class) is available only to programs running under Windows 95/98 and Windows NT versions 3.51 and later. The `CRichEditCtrl` class supports versions 2.0 and 3.0 of the Windows SDK rich edit control.  
  
> [!CAUTION]
>  If you are using a rich edit control in a dialog box (regardless whether your application is SDI, MDI, or dialog-based), you must call [AfxInitRichEdit](application-information-and-management.md#afxinitrichedit) once before the dialog box is displayed. A typical place to call this function is in your program's `InitInstance` member function. You do not need to call it for each time you display the dialog box, only the first time. You do not have to call `AfxInitRichEdit` if you are working with `CRichEditView`.  
  
 For more information on using `CRichEditCtrl`, see:  
  
- [Controls](../../mfc/controls-mfc.md)  
  
- [Using CRichEditCtrl](../../mfc/using-cricheditctrl.md)  
  
-   Knowledge Base article Q259949 : INFO: SetCaretPos() Is Not Appropriate with CEdit or CRichEditCtrl Controls  
  
 For an example of using a rich edit control in an MFC application, see the [WORDPAD](../../visual-cpp-samples.md) sample application.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CRichEditCtrl`  
  
## Requirements  
 **Header:** afxcmn.h  
  
##  <a name="canpaste"></a>  CRichEditCtrl::CanPaste  
 Determines if the rich edit control can paste the specified Clipboard format.  
  
```  
BOOL CanPaste(UINT nFormat = 0) const;  
```  
  
### Parameters  
 `nFormat`  
 The Clipboard data format to query. This parameter can be one of the predefined Clipboard formats or the value returned by [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049).  
  
### Return Value  
 Nonzero if the Clipboard format can be pasted; otherwise 0.  
  
### Remarks  
 If `nFormat` is 0, `CanPaste` will try any format currently on the Clipboard.  
  
 For more information, see [EM_CANPASTE](http://msdn.microsoft.com/library/windows/desktop/bb787993) message and [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) function in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#1](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_1.cpp)]  
  
##  <a name="canredo"></a>  CRichEditCtrl::CanRedo  
 Determines if the redo queue contains any actions.  
  
```  
BOOL CanRedo() const;  
```  
  
### Return Value  
 Nonzero if the redo queue contains actions, otherwise 0.  
  
### Remarks  
 To discover the name of the operation in the redo queue, call [CRichEditCtrl::GetRedoName](#getredoname). To redo the most recent Undo operation, call [Redo](#redo).  
  
 For more information, see [EM_CANREDO](http://msdn.microsoft.com/library/windows/desktop/bb787995) in the Windows SDK.  
  
##  <a name="canundo"></a>  CRichEditCtrl::CanUndo  
 Determines if the last editing operation can be undone.  
  
```  
BOOL CanUndo() const;  
```  
  
### Return Value  
 Nonzero if the last edit operation can be undone by a call to the [Undo](#undo) member function; 0 if it cannot be undone.  
  
### Remarks  
 For more information, see [EM_CANUNDO](http://msdn.microsoft.com/library/windows/desktop/bb775468) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#2](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_2.cpp)]  
  
##  <a name="charfrompos"></a>  CRichEditCtrl::CharFromPos  
 Retrieves information about the character at the point specified by the parameter `pt`.  
  
```  
int CharFromPos(CPoint pt) const;  
```  
  
### Parameters  
 `pt`  
 A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object containing the coordinates of the specified point.  
  
### Return Value  
 The zero-based character index of the character nearest the specified point. If the specified point is beyond the last character in the control, the return value indicates the last character in the control.  
  
### Remarks  
 This member function works with a rich edit control. To get the information for an edit control, call [CEdit::CharFromPos](../../mfc/reference/cedit-class.md#charfrompos).  
  
 For more information, see [EM_CHARFROMPOS](http://msdn.microsoft.com/library/windows/desktop/bb761566) in the Windows SDK.  
  
##  <a name="clear"></a>  CRichEditCtrl::Clear  
 Deletes (clears) the current selection (if any) in the rich edit control.  
  
```  
void Clear();
```  
  
### Remarks  
 The deletion performed by **Clear** can be undone by calling the [Undo](#undo) member function.  
  
 To delete the current selection and place the deleted contents onto the Clipboard, call the [Cut](#cut) member function.  
  
 For more information, see [WM_CLEAR](http://msdn.microsoft.com/library/windows/desktop/ms649020) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#3](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_3.cpp)]  
  
##  <a name="copy"></a>  CRichEditCtrl::Copy  
 Copies the current selection (if any) in the rich edit control to the Clipboard.  
  
```  
void Copy();
```  
  
### Remarks  
 For more information, see [WM_COPY](http://msdn.microsoft.com/library/windows/desktop/ms649022) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#4](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_4.cpp)]  
  
##  <a name="create"></a>  CRichEditCtrl::Create  
 Creates the Windows rich edit control and associates it with this `CRichEditCtrl` object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 `dwStyle`  
 Specifies the edit control's style. Apply a combination of the window styles listed in the **Remarks** section below, and [edit control styles](http://msdn.microsoft.com/library/windows/desktop/bb775464), described in the Windows SDK.  
  
 `rect`  
 Specifies the edit control's size and position. Can be a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or [RECT](../../mfc/reference/rect-structure1.md) structure.  
  
 `pParentWnd`  
 Specifies the edit control's parent window (often a [CDialog](../../mfc/reference/cdialog-class.md)). It must not be **NULL**.  
  
 `nID`  
 Specifies the edit control's ID.  
  
### Return Value  
 Nonzero if initialization is successful; otherwise, 0.  
  
### Remarks  
 You construct a `CRichEditCtrl` object in two steps. First, call the [CRichEditCtrl](#cricheditctrl) constructor, then call **Create**, which creates the Windows edit control and attaches it to the `CRichEditCtrl` object.  
  
 When you create a rich edit control with this function, first you must load the necessary common controls library. To load the libary, call the global function [AfxInitRichEdit](application-information-and-management.md#afxinitrichedit), which in turn initializes the common controls library. You need to call `AfxInitRichEdit` only once in your process.  
  
 When **Create** executes, Windows sends the [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize), [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate), and [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) messages to the edit control.  
  
 These messages are handled by default by the [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate), [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize), [OnCreate](../../mfc/reference/cwnd-class.md#oncreate), and [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) member functions in the `CWnd` base class. To extend the default message handling, derive a class from `CRichEditCtrl`, add a message map to the new class, and override the above message-handler member functions. Override `OnCreate`, for example, to perform needed initialization for the new class.  
  
 Apply the following [window styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) to an edit control.  
  
- **WS_CHILD** Always.  
  
- **WS_VISIBLE** Usually.  
  
- **WS_DISABLED** Rarely.  
  
- **WS_GROUP** To group controls.  
  
- **WS_TABSTOP** To include edit control in the tabbing order.  
  
 For more information about window styles, see [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#5](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_5.cpp)]  
  
##  <a name="createex"></a>  CRichEditCtrl::CreateEx  
 Creates a control (a child window) and associates it with the `CRichEditCtrl` object.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 `dwExStyle`  
 Specifies the extended style of the control being created. For a list of extended Windows styles, see the `dwExStyle` parameter for [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in the Windows SDK.  
  
 `dwStyle`  
 Specifies the edit control's style. Apply a combination of the window styles listed in the **Remarks** section of [Create](#create) and [edit control styles](http://msdn.microsoft.com/library/windows/desktop/bb775464), described in the Windows SDK.  
  
 `rect`  
 A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure describing the size and position of the window to be created, in client coordinates of `pParentWnd`.  
  
 `pParentWnd`  
 A pointer to the window that is the control's parent.  
  
 `nID`  
 The control's child-window ID.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Use `CreateEx` instead of **Create** to apply extended Windows styles, specified by the Windows extended style preface **WS_EX_**.  
  
##  <a name="cricheditctrl"></a>  CRichEditCtrl::CRichEditCtrl  
 Constructs a `CRichEditCtrl` object.  
  
```  
CRichEditCtrl();
```  
  
### Remarks  
 Use [Create](#create) to construct the Windows rich edit control.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#6](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_6.cpp)]  
  
##  <a name="cut"></a>  CRichEditCtrl::Cut  
 Delete (cuts) the current selection (if any) in the rich edit control and copies the deleted text to the Clipboard.  
  
```  
void Cut();
```  
  
### Remarks  
 The deletion performed by **Cut** can be undone by calling the [Undo](#undo) member function.  
  
 To delete the current selection without placing the deleted text into the Clipboard, call the [Clear](#clear) member function.  
  
 For more information, see [WM_CUT](http://msdn.microsoft.com/library/windows/desktop/ms649023) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#7](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_7.cpp)]  
  
##  <a name="displayband"></a>  CRichEditCtrl::DisplayBand  
 Displays a portion of the contents of the rich edit control (text and OLE items), as previously formatted by [FormatRange](#formatrange).  
  
```  
BOOL DisplayBand(LPRECT pDisplayRect);
```  
  
### Parameters  
 `pDisplayRect`  
 Pointer to a [RECT](../../mfc/reference/rect-structure1.md) or [CRect](../../atl-mfc-shared/reference/crect-class.md) object specifying the area of the device to display the text.  
  
### Return Value  
 Nonzero if the display of the formatted text succeeds, otherwise, 0.  
  
### Remarks  
 The text and OLE items are clipped to the area specified by the pointer `pDisplayRect`.  
  
 For more information, see [EM_DISPLAYBAND](http://msdn.microsoft.com/library/windows/desktop/bb787997) in the Windows SDK.  
  
### Example  
  See the example for [CRichEditCtrl::FormatRange](#formatrange).  
  
##  <a name="emptyundobuffer"></a>  CRichEditCtrl::EmptyUndoBuffer  
 Resets (clear) the undo flag of this rich edit control.  
  
```  
void EmptyUndoBuffer();
```  
  
### Remarks  
 The control will now be unable to undo the last editing operation. The undo flag is set whenever an operation within the rich edit control can be undone.  
  
 The undo flag is automatically cleared whenever you call the [CWnd](../../mfc/reference/cwnd-class.md) member function [SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext).  
  
 For more information, see [EM_EMPTYUNDOBUFFER](http://msdn.microsoft.com/library/windows/desktop/bb761568) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#8](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_8.cpp)]  
  
##  <a name="findtext"></a>  CRichEditCtrl::FindText  
 Finds text within the rich edit control.  
  
```  
long FindText(
    DWORD dwFlags,  
    FINDTEXTEX* pFindText) const;  
```  
  
### Parameters  
 `dwFlags`  
 For a list of possible values, see `wParam` in [EM_FINDTEXTEXT](http://msdn.microsoft.com/library/windows/desktop/bb788011) in the Windows SDK.  
  
 *pFindText*  
 Pointer to the [FINDTEXTEX](http://msdn.microsoft.com/library/windows/desktop/bb787909) structure giving the parameters for the search and returning the range where the match was found.  
  
### Return Value  
 Zero-based character position of the next match; - 1 if there are no more matches.  
  
### Remarks  
 You can search either up or down by setting the proper range parameters in the [CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) structure within the **FINDTEXTEX** structure.  
  
 For more information, see [EM_FINDTEXTEX](http://msdn.microsoft.com/library/windows/desktop/bb788011) message and [FINDTEXTEX](http://msdn.microsoft.com/library/windows/desktop/bb787909) structure in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#9](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_9.cpp)]  
  
##  <a name="findwordbreak"></a>  CRichEditCtrl::FindWordBreak  
 Finds the next word break before or after the position specified by `nStart`.  
  
```  
DWORD FindWordBreak(
    UINT nCode,  
    DWORD nStart) const;  
```  
  
### Parameters  
 `nCode`  
 Indicates the action to take. For a list of possible values, see the description for the parameter `code` in **EM_FINDWORDBREAK** in the Windows SDK.  
  
 `nStart`  
 The zero-based character position from which to start.  
  
### Return Value  
 Based on the parameter `nCode`. For more information, see [EM_FINDWORDBREAK](http://msdn.microsoft.com/library/windows/desktop/bb788018) in the Windows SDK.  
  
### Remarks  
 You can use this member function to retrieve information about a character at a given position.  
  
##  <a name="formatrange"></a>  CRichEditCtrl::FormatRange  
 Formats a range of text in a rich edit control for a specific device.  
  
```  
long FormatRange(
    FORMATRANGE* pfr,  
    BOOL bDisplay = TRUE);
```  
  
### Parameters  
 *pfr*  
 Pointer to the [FORMATRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787911) structure which contains information about the output device. **NULL** indicates that cached information within the rich edit control can be freed.  
  
 *bDisplay*  
 Indicates if the text should be rendered. If **FALSE**, the text is just measured.  
  
### Return Value  
 The index of the last character that fits in the region plus one.  
  
### Remarks  
 Typically, this call is followed by a call to [DisplayBand](#displayband).  
  
 For more information, see [EM_FORMATRANGE](http://msdn.microsoft.com/library/windows/desktop/bb788020) message and [FORMATRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787911) structure in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#10](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_10.cpp)]  
  
##  <a name="getcharpos"></a>  CRichEditCtrl::GetCharPos  
 Gets the position (top-left corner) of a given character within this `CRichEditCtrl` object.  
  
```  
CPoint GetCharPos(long lChar) const;  
```  
  
### Parameters  
 `lChar`  
 Zero-based index of the character.  
  
### Return Value  
 The location of the top-left corner of the character specified by `lChar`.  
  
### Remarks  
 The character is specified by giving its zero-based index value. If `lChar` is greater than the index of the last character in this `CRichEditCtrl` object, the return value specifies the coordinates of the character position just past the last character in this `CRichEditCtrl` object.  
  
 For more information, see [EM_POSFROMCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761631) in the Windows SDK.  
  
##  <a name="getdefaultcharformat"></a>  CRichEditCtrl::GetDefaultCharFormat  
 Gets the default character formatting attributes of this `CRichEditCtrl` object.  
  
```  
DWORD GetDefaultCharFormat(CHARFORMAT& cf) const;  DWORD GetDefaultCharFormat(CHARFORMAT2& cf) const;  
```  
  
### Parameters  
 `cf`  
 In the first version, a pointer to a **CHARFORMAT** structure holding the default character formatting attributes.  
  
 In the second version, a pointer to a **CHARFORMAT2** structure, which is a Rich Edit 2.0 extension to the **CHARFORMAT** structure, holding the default character formatting attributes.  
  
### Return Value  
 The **dwMask** data member of `cf`. It specified the default character formatting attributes.  
  
### Remarks  
 For more information, see the **EM_GETCHARFORMAT** message and the **CHARFORMAT** and **CHARFORMAT2** structures in the Windows SDK.  
  
### Example  
  See the example for [SetDefaultCharFormat](#setdefaultcharformat).  
  
##  <a name="geteventmask"></a>  CRichEditCtrl::GetEventMask  
 Gets the event mask for this `CRichEditCtrl` object.  
  
```  
long GetEventMask() const;  
```  
  
### Return Value  
 The event mask for this `CRichEditCtrl` object.  
  
### Remarks  
 The event mask specifies which notification messages the `CRichEditCtrl` object sends to its parent window.  
  
 For more information, see [EM_GETEVENTMASK](http://msdn.microsoft.com/library/windows/desktop/bb788032) in the Windows SDK.  
  
### Example  
  See the example for [CRichEditCtrl::SetEventMask](#seteventmask).  
  
##  <a name="getfirstvisibleline"></a>  CRichEditCtrl::GetFirstVisibleLine  
 Determines the topmost visible line in this `CRichEditCtrl` object.  
  
```  
int GetFirstVisibleLine() const;  
```  
  
### Return Value  
 Zero-based index of the uppermost visible line in this `CRichEditCtrl` object.  
  
### Remarks  
 For more information, see [EM_GETFIRSTVISIBLELINE](http://msdn.microsoft.com/library/windows/desktop/bb761574) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#11](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_11.cpp)]  
  
##  <a name="getiricheditole"></a>  CRichEditCtrl::GetIRichEditOle  
 Accesses the **IRichEditOle** interface for this `CRichEditCtrl` object.  
  
```  
IRichEditOle* GetIRichEditOle() const;  
```  
  
### Return Value  
 Pointer to the [IRichEditOle](http://msdn.microsoft.com/library/windows/desktop/bb774306) interface that can be used to access this `CRichEditCtrl` object's OLE functionality; **NULL** if the interface is not accessible.  
  
### Remarks  
 Use this interface to access this `CRichEditCtrl` object's OLE functionality.  
  
 For more information, see [EM_GETOLEINTERFACE](http://msdn.microsoft.com/library/windows/desktop/bb788041) message and [IRichEditOle](http://msdn.microsoft.com/library/windows/desktop/bb774306) interface in the Windows SDK.  
  
##  <a name="getlimittext"></a>  CRichEditCtrl::GetLimitText  
 Gets the text limit for this `CRichEditCtrl` object.  
  
```  
long GetLimitText() const;  
```  
  
### Return Value  
 The current text limit, in bytes, for this `CRichEditCtrl` object.  
  
### Remarks  
 The text limit is the maximum amount of text, in bytes, the rich edit control can accept.  
  
 For more information, see [EM_GETLIMITTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761582) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#12](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_12.cpp)]  
  
##  <a name="getline"></a>  CRichEditCtrl::GetLine  
 Retrieves a line of text from this `CRichEditCtrl` object.  
  
```  
int GetLine(
    int nIndex,  
    LPTSTR lpszBuffer) const;  
  
int GetLine(
    int nIndex,  
    LPTSTR lpszBuffer,  
    int nMaxLength) const;  
```  
  
### Parameters  
 `nIndex`  
 Zero-based index of the line to retrieve.  
  
 `lpszBuffer`  
 Points to the buffer to receive the text. The first word of the buffer must specify the maximum number of bytes that can be copied into the buffer.  
  
 `nMaxLength`  
 Maximum number of characters that can be copied into `lpszBuffer`. The second form of `GetLine` places this value into the first word of the buffer specified by `lpszBuffer`.  
  
### Return Value  
 The number of characters copied into `lpszBuffer`.  
  
### Remarks  
 The copied line does not contain a terminating null character.  
  
> [!NOTE]
>  Because the first word of the buffer stores the number of characters to be copied, make sure that your buffer is at least 4 bytes long.  
  
 For more information, see [EM_GETLINE](http://msdn.microsoft.com/library/windows/desktop/bb761584) in the Windows SDK.  
  
### Example  
  See the example for [GetLineCount](#getlinecount).  
  
##  <a name="getlinecount"></a>  CRichEditCtrl::GetLineCount  
 Retrieves the number of lines in the `CRichEditCtrl` object.  
  
```  
int GetLineCount() const;  
```  
  
### Return Value  
 The number of lines in this `CRichEditCtrl` object.  
  
### Remarks  
 For more information, see [EM_GETLINECOUNT](http://msdn.microsoft.com/library/windows/desktop/bb761586) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#13](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_13.cpp)]  
  
##  <a name="getmodify"></a>  CRichEditCtrl::GetModify  
 Determines if the contents of this `CRichEditCtrl` object have been modified.  
  
```  
BOOL GetModify() const;  
```  
  
### Return Value  
 Nonzero if the text in this `CRichEditCtrl` object has been modified; otherwise 0.  
  
### Remarks  
 Windows maintains an internal flag indicating whether the contents of the rich edit control have been changed. This flag is cleared when the edit control is first created and can also be cleared by calling the [SetModify](#setmodify) member function.  
  
 For more information, see [EM_GETMODIFY](http://msdn.microsoft.com/library/windows/desktop/bb761592) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#14](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_14.cpp)]  
  
##  <a name="getoptions"></a>  CRichEditCtrl::GetOptions  
 Retrieves the options currently set for the rich edit control.  
  
```  
UINT GetOptions() const;  
```  
  
### Return Value  
 A combination of the current option flag values. For a list of these values, see the *fOptions* parameter in the [EM_SETOPTIONS](http://msdn.microsoft.com/library/windows/desktop/bb774254) message, as described in the Windows SDK.  
  
##  <a name="getparaformat"></a>  CRichEditCtrl::GetParaFormat  
 Gets the paragraph formatting attributes of the current selection.  
  
```  
DWORD GetParaFormat(PARAFORMAT& pf) const;  DWORD GetParaFormat(PARAFORMAT2& pf) const;  
```  
  
### Parameters  
 `pf`  
 In the first version, a pointer to a [PARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787940) structure to hold the paragraph formatting attributes of the current selection.  
  
 In the second version, a pointer to a [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) structure, which is a Rich Edit 2.0 extension to the **PARAFORMAT** structure, holding the default character formatting attributes.  
  
### Return Value  
 The **dwMask** data member of `pf`. It specifies the paragraph formatting attributes that are consistent throughout the current selection.  
  
### Remarks  
 If more than one paragraph is selected, `pf` receives the attributes of the first selected paragraph. The return value specifies which attributes are consistent throughout the selection.  
  
 For more information, see the [EM_GETPARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774182) message and the **PARAFORMAT** and **PARAFORMAT2** structures in the Windows SDK.  
  
### Example  
  See the example for [CRichEditCtrl::SetParaFormat](#setparaformat).  
  
##  <a name="getpunctuation"></a>  CRichEditCtrl::GetPunctuation  
 Gets the current punctuation characters in a rich edit control.  
  
```  
BOOL GetPunctuation(
    UINT fType,  
    PUNCTUATION* lpPunc) const;  
```  
  
### Parameters  
 `fType`  
 The punctuation type flag, as described in the `fType` parameter of [EM_GETPUNCTUATION](http://msdn.microsoft.com/library/windows/desktop/bb774184) in the Windows SDK.  
  
 `lpPunc`  
 A pointer to a [PUNCTUATION](http://msdn.microsoft.com/library/windows/desktop/bb787944) structure, as described in the Windows SDK.  
  
### Return Value  
 Nonzero if the operation succeeded, otherwise 0.  
  
### Remarks  
 This member function is available with only the Asian-language versions of the operating system.  
  
##  <a name="getrect"></a>  CRichEditCtrl::GetRect  
 Retrieves the formatting rectangle for this `CRichEditCtrl` object.  
  
```  
void GetRect(LPRECT lpRect) const;  
```  
  
### Parameters  
 `lpRect`  
 [CRect](../../atl-mfc-shared/reference/crect-class.md) or pointer to a [RECT](../../mfc/reference/rect-structure1.md) to receive the formatting rectangle of this `CRichEditCtrl` object.  
  
### Remarks  
 The formatting rectangle is the bounding rectangle for the text. This value is independent of the size of the `CRichEditCtrl` object.  
  
 For more information, see [EM_GETRECT](http://msdn.microsoft.com/library/windows/desktop/bb761596) in the Windows SDK.  
  
### Example  
  See the example for [LimitText](#limittext).  
  
##  <a name="getredoname"></a>  CRichEditCtrl::GetRedoName  
 Retrieves the type of the next available action in the redo queue, if any.  
  
```  
UNDONAMEID GetRedoName() const;  
```  
  
### Return Value  
 If successful, `GetRedoName` returns the [UNDONAMEID](http://msdn.microsoft.com/library/windows/desktop/bb774365) enumeration type indicating the type of the next action in the control's redo queue. If the redo queue is empty, or if the redo action in the queue is of an unknown type, `GetRedoName` returns 0.  
  
### Remarks  
 The types of actions that can be undone or redone include typing, delete, drag-drop, cut, and paste operations. This information can be useful for applications that provide an extended user interface for Undo and Redo operations, such as a drop-down list box of redoable actions.  
  
##  <a name="getsel"></a>  CRichEditCtrl::GetSel  
 Retrieves the bounds of the current selection in this `CRichEditCtrl` object.  
  
```  
void GetSel(CHARRANGE& cr) const;  
  
void GetSel(
    long& nStartChar,  
    long& nEndChar) const;  
```  
  
### Parameters  
 `cr`  
 Reference to a [CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) structure to receive the bounds of the current selection.  
  
 `nStartChar`  
 Zero-based index of the first character in the current selection.  
  
 `nEndChar`  
 Zero-based index of the last character in the current selection.  
  
### Remarks  
 The two forms of this function provide alternate ways to get the bounds for the selection. Brief descriptions of these forms follow:  
  
- **GetSel(** `cr` **)** This form uses the **CHARRANGE** structure with its **cpMin** and **cpMax** members to return the bounds.  
  
- **GetSel(** `nStartChar` **,** `nEndChar` **)** This form returns the bounds in the parameters `nStartChar` and `nEndChar`.  
  
 The selection includes everything if the beginning ( **cpMin** or `nStartChar`) is 0 and the end ( **cpMax** or `nEndChar`) is - 1.  
  
 For more information, see [EM_EXGETSEL](http://msdn.microsoft.com/library/windows/desktop/bb788001) message and [CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) structure in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#15](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_15.cpp)]  
  
##  <a name="getselectioncharformat"></a>  CRichEditCtrl::GetSelectionCharFormat  
 Gets the character formatting attributes of the current selection.  
  
```  
DWORD GetSelectionCharFormat(CHARFORMAT& cf) const;  DWORD GetSelectionCharFormat(CHARFORMAT2& cf) const;  
```  
  
### Parameters  
 `cf`  
 In the first version, a pointer to a [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) structure to receive the character formatting attributes of the current selection.  
  
 In the second version, a pointer to a [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) structure, which is a Rich Edit 2.0 extension to the **CHARFORMAT** structure to receive the character formatting attributes of the current selection.  
  
### Return Value  
 The **dwMask** data member of `cf`. It specifies the character formatting attributes that are consistent throughout the current selection.  
  
### Remarks  
 The `cf` parameter receives the attributes of the first character in the current selection. The return value specifies which attributes are consistent throughout the selection.  
  
 For more information, see the [EM_GETCHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb788026) message and the **CHARFORMAT** and **CHARFORMAT2** structures in the Windows SDK.  
  
### Example  
  See the example for [SetSelectionCharFormat](#setselectioncharformat).  
  
##  <a name="getselectiontype"></a>  CRichEditCtrl::GetSelectionType  
 Determines the selection type in this `CRichEditCtrl` object.  
  
```  
WORD GetSelectionType() const;  
```  
  
### Return Value  
 Flags indicating the contents of the current selection. A combination of the following flags:  
  
- `SEL_EMPTY` Indicates that there is no current selection.  
  
- `SEL_TEXT` Indicates that the current selection contains text.  
  
- `SEL_OBJECT` Indicates that the current selection contains at least one OLE item.  
  
- `SEL_MULTICHAR` Indicates that the current selection contains more than one character of text.  
  
- `SEL_MULTIOBJECT` Indicates that the current selection contains more than one OLE object.  
  
### Remarks  
 For more information, see [EM_SELECTIONTYPE](http://msdn.microsoft.com/library/windows/desktop/bb774223) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#16](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_16.cpp)]  
  
##  <a name="getseltext"></a>  CRichEditCtrl::GetSelText  
 Retrieves the text from the current selection in this `CRichEditCtrl` object.  
  
```  
long GetSelText(LPSTR lpBuf) const;  CString GetSelText() const;  
```  
  
### Parameters  
 `lpBuf`  
 Pointer to the buffer to receive the text in the current selection.  
  
### Return Value  
 Depends on the form:  
  
- **GetSelText(** `lpBuf` **)** The number of characters copied into `lpBuf`, not including the null termination.  
  
- **GetSelText( )** The string containing the current selection.  
  
### Remarks  
 If you use the first form, **GetSelText(** `lpBuf` **)**, you must ensure that the buffer is large enough for the text it will receive. Call [GetSel](#getsel) to determine the number of characters in the current selection.  
  
 For more information, see [EM_GETSELTEXT](http://msdn.microsoft.com/library/windows/desktop/bb774190) in the Windows SDK.  
  
### Example  
  See the example for [CRichEditCtrl::GetSelectionType](#getselectiontype).  
  
##  <a name="gettextlength"></a>  CRichEditCtrl::GetTextLength  
 Retrieves the length of the text, in characters, in this `CRichEditCtrl` object, not including the terminating null character.  
  
```  
long GetTextLength() const;  
```  
  
### Return Value  
 The length of the text in this `CRichEditCtrl` object.  
  
### Remarks  
 For more information, see [WM_GETTEXTLENGTH](http://msdn.microsoft.com/library/windows/desktop/ms632628) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#17](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_17.cpp)]  
  
##  <a name="gettextlengthex"></a>  CRichEditCtrl::GetTextLengthEx  
 Calculates the length of the text in the rich edit control.  
  
```  
long GetTextLengthEx(
    DWORD dwFlags,  
    UINT uCodePage = -1) const;  
```  
  
### Parameters  
 `dwFlags`  
 Value specifying the method to be used in determining the text length. This member can be one or more of the values listed in the flags member of [GETTEXTLENGTHEX](http://msdn.microsoft.com/library/windows/desktop/bb787915) described in the Windows SDK.  
  
 `uCodePage`  
 Code page for translation (CP_ACP for ANSI Code Page, 1200 for Unicode).  
  
### Return Value  
 The number of characters or bytes in the edit control. If incompatible flags were set in `dwFlags`, this member function returns `E_INVALIDARG`.  
  
### Remarks  
 `GetTextLengthEx` provides additional ways of determining the length of the text. It supports the Rich Edit 2.0 functionality. See [About Rich Edit Controls](http://msdn.microsoft.com/library/windows/desktop/bb787873) in the Windows SDKfor more information.  
  
##  <a name="gettextmode"></a>  CRichEditCtrl::GetTextMode  
 Retrieves the current text mode and undo level of a rich edit control.  
  
```  
UINT GetTextMode() const;  
```  
  
### Return Value  
 A set of bit flags from the [TEXTMODE](http://msdn.microsoft.com/library/windows/desktop/bb774364) enumeration type, as described in the Windows SDK. The flags indicate the current text mode and undo level of the control.  
  
##  <a name="gettextrange"></a>  CRichEditCtrl::GetTextRange  
 Gets the specified range of characters.  
  
```  
int GetTextRange(
    int nFirst,  
    int nLast,  
    CString& refString) const;  
```  
  
### Parameters  
 `nFirst`  
 The character position index immediately preceding the first character in the range.  
  
 `nLast`  
 The character position immediately following the last character in the range.  
  
 `refString`  
 A reference to a [CString](../../atl-mfc-shared/reference/cstringt-class.md) object that will receive the text.  
  
### Return Value  
 The number of characters copied, not including the terminating null character.  
  
### Remarks  
 For more information, see [EM_GETTEXTRANGE](http://msdn.microsoft.com/library/windows/desktop/bb774199) in the Windows SDK.  
  
 `GetTextRange` supports the Rich Edit 2.0 functionality. See [About Rich Edit Controls](http://msdn.microsoft.com/library/windows/desktop/bb787873) in the Windows SDKfor more information.  
  
##  <a name="getundoname"></a>  CRichEditCtrl::GetUndoName  
 Retrieves the type of the next available action in the undo queue, if any.  
  
```  
UNDONAMEID GetUndoName() const;  
```  
  
### Return Value  
 If an undo action is in the control's undo queue, `GetUndoName` returns the [UNDONAMEID](http://msdn.microsoft.com/library/windows/desktop/bb774365) enumeration type indicating the type of the next action in the queue. If the undo queue is empty, or if the undo action in the queue is of an unknown type, `GetUndoName` returns 0.  
  
### Remarks  
 The types of actions that can be undone or redone include typing, delete, drag-drop, cut, and paste operations. This information can be useful for applications that provide an extended user interface for Undo and Redo operations, such as a drop-down list box of actions that can be undone.  
  
##  <a name="getwordwrapmode"></a>  CRichEditCtrl::GetWordWrapMode  
 Retrieves the current word wrapping and word breaking options for the rich edit control.  
  
```  
UINT GetWordWrapMode() const;  
```  
  
### Return Value  
 The current word wrapping and word breaking options. These options are described in [EM_SETWORDWRAPMODE](http://msdn.microsoft.com/library/windows/desktop/bb774294) in the Windows SDK.  
  
### Remarks  
 This member function is available only for Asian-language versions of the operating system.  
  
##  <a name="hideselection"></a>  CRichEditCtrl::HideSelection  
 Changes the visibility of the selection.  
  
```  
void HideSelection(
    BOOL bHide,  
    BOOL bPerm);
```  
  
### Parameters  
 `bHide`  
 Indicates if the selection should be shown or hidden, **TRUE** to hide the selection.  
  
 `bPerm`  
 Indicates if this change in visibility for the selection should be permanent.  
  
### Remarks  
 When `bPerm` is **TRUE**, it changes the `ECO_NOHIDESEL` option for this `CRichEditCtrl` object. For a brief description of this option, see [SetOptions](#setoptions). You can use this function to set all the options for this `CRichEditCtrl` object.  
  
 For more information, see [EM_HIDESELECTION](http://msdn.microsoft.com/library/windows/desktop/bb774210) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#18](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_18.cpp)]  
  
##  <a name="limittext"></a>  CRichEditCtrl::LimitText  
 Limits the length of the text that the user can enter into an edit control.  
  
```  
void LimitText(long nChars = 0);
```  
  
### Parameters  
 `nChars`  
 Specifies the length (in bytes) of the text that the user can enter. If this parameter is 0 (the default value), the text length is set to 64K bytes.  
  
### Remarks  
 Changing the text limit restricts only the text the user can enter. It has no effect on any text already in the edit control, nor does it affect the length of the text copied to the edit control by the [SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext) member function in `CWnd`. If an application uses the `SetWindowText` function to place more text into an edit control than is specified in the call to `LimitText`, the user can delete any of the text within the edit control. However, the text limit will prevent the user from replacing the existing text with new text, unless deleting the current selection causes the text to fall below the text limit.  
  
> [!NOTE]
>  For the text limit, each OLE item counts as a single character.  
  
 For more information, see [EM_EXLIMITTEXT](http://msdn.microsoft.com/library/windows/desktop/bb788003) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#19](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_19.cpp)]  
  
##  <a name="linefromchar"></a>  CRichEditCtrl::LineFromChar  
 Retrieves the line number of the line that contains the specified character index.  
  
```  
long LineFromChar(long nIndex) const;  
```  
  
### Parameters  
 `nIndex`  
 Contains the zero-based index value for the desired character in the text of the edit control, or contains -1. If `nIndex` is -1, it specifies the current line, that is, the line that contains the caret.  
  
### Return Value  
 The zero-based line number of the line containing the character index specified by `nIndex`. If `nIndex` is -1, the number of the line that contains the first character of the selection is returned. If there is no selection, the current line number is returned.  
  
### Remarks  
 A character index is the number of characters from the beginning of the rich edit control. For character counting, an OLE item is counted as a single character.  
  
 For more information, see [EM_EXLINEFROMCHAR](http://msdn.microsoft.com/library/windows/desktop/bb788005) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#20](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_20.cpp)]  
  
##  <a name="lineindex"></a>  CRichEditCtrl::LineIndex  
 Retrieves the character index of a line within this `CRichEditCtrl` object.  
  
```  
int LineIndex(int nLine = -1) const;  
```  
  
### Parameters  
 `nLine`  
 Contains the index value for the desired line in the text of the edit control, or contains -1. If `nLine` is -1, it specifies the current line, that is, the line that contains the caret.  
  
### Return Value  
 The character index of the line specified in `nLine` or -1 if the specified line number is greater then the number of lines in the edit control.  
  
### Remarks  
 The character index is the number of characters from the beginning of the rich edit control to the specified line.  
  
 For more information, see [EM_LINEINDEX](http://msdn.microsoft.com/library/windows/desktop/bb761611) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#21](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_21.cpp)]  
  
##  <a name="linelength"></a>  CRichEditCtrl::LineLength  
 Retrieves the length of a line in a rich edit control.  
  
```  
int LineLength(int nLine = -1) const;  
```  
  
### Parameters  
 `nLine`  
 Specifies the character index of a character in the line whose length is to be retrieved. If this parameter is -1, the length of the current line (the line that contains the caret) is returned, not including the length of any selected text within the line. When `LineLength` is called for a single-line edit control, this parameter is ignored.  
  
### Return Value  
 When `LineLength` is called for a multiple-line edit control, the return value is the length (in charactors) of the line specified by `nLine`. When `LineLength` is called for a single-line edit control, the return value is the length (in charactors) of the text in the edit control.  
  
### Remarks  
 Use the [LineIndex](#lineindex) member function to retrieve a character index for a given line number within this `CRichEditCtrl` object.  
  
 For more information, see [EM_LINELENGTH](http://msdn.microsoft.com/library/windows/desktop/bb761613) in the Windows SDK.  
  
### Example  
  See the example for [LineIndex](#lineindex).  
  
##  <a name="linescroll"></a>  CRichEditCtrl::LineScroll  
 Scrolls the text of a multiple-line edit control.  
  
```  
void LineScroll(
    int nLines,  
    int nChars = 0);
```  
  
### Parameters  
 `nLines`  
 Specifies the number of lines to scroll vertically.  
  
 `nChars`  
 Specifies the number of character positions to scroll horizontally. This value is ignored if the rich edit control has either the **ES_RIGHT** or **ES_CENTER** style. [Edit styles](../../mfc/reference/styles-used-by-mfc.md#edit-styles) are specified in [Create](#create).  
  
### Remarks  
 The edit control does not scroll vertically past the last line of text in the edit control. If the current line plus the number of lines specified by `nLines` exceeds the total number of lines in the edit control, the value is adjusted so that the last line of the edit control is scrolled to the top of the edit-control window.  
  
 `LineScroll` can be used to scroll horizontally past the last character of any line.  
  
 For more information, see [EM_LINESCROLL](http://msdn.microsoft.com/library/windows/desktop/bb761615) in the Windows SDK.  
  
### Example  
  See the example for [GetFirstVisibleLine](#getfirstvisibleline).  
  
##  <a name="paste"></a>  CRichEditCtrl::Paste  
 Inserts the data from the Clipboard into the `CRichEditCtrl` at the insertion point, the location of the caret.  
  
```  
void Paste();
```  
  
### Remarks  
 Data is inserted only if the Clipboard contains data in a recognized format.  
  
 For more information, see [WM_PASTE](http://msdn.microsoft.com/library/windows/desktop/ms649028) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#22](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_22.cpp)]  
  
##  <a name="pastespecial"></a>  CRichEditCtrl::PasteSpecial  
 Pastes data in a specific Clipboard format into this `CRichEditCtrl` object.  
  
```  
void PasteSpecial(
    UINT nClipFormat,  
    DWORD dvAspect = 0,  
    HMETAFILE hMF = 0);
```  
  
### Parameters  
 *nClipFormat*  
 Clipboard format to paste into this `CRichEditCtrl` object.  
  
 *dvAspect*  
 Device aspect for the data to be retrieved from the Clipboard.  
  
 *hMF*  
 Handle to the metafile containing the iconic view of the object to be pasted.  
  
### Remarks  
 The new material is inserted at the insertion point, the location of the caret.  
  
 For more information, see [EM_PASTESPECIAL](http://msdn.microsoft.com/library/windows/desktop/bb774214) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#23](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_23.cpp)]  
  
##  <a name="posfromchar"></a>  CRichEditCtrl::PosFromChar  
 Retrieves the client area coordinates of a specified character in an edit control.  
  
```  
CPoint PosFromChar(UINT nChar) const;  
```  
  
### Parameters  
 `nChar`  
 The zero-based index of the character.  
  
### Return Value  
 The position of the character, (x, y). For a single-line edit control, the y-coordinate is always zero.  
  
### Remarks  
 For more information, see [EM_POSFROMCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761631) in the Windows SDK.  
  
##  <a name="redo"></a>  CRichEditCtrl::Redo  
 Redoes the next action in the control's redo queue.  
  
```  
BOOL Redo();
```  
  
### Return Value  
 Nonzero if successful; otherwise, 0.  
  
### Remarks  
 For more information, see [EM_REDO](http://msdn.microsoft.com/library/windows/desktop/bb774218) in the Windows SDK.  
  
##  <a name="replacesel"></a>  CRichEditCtrl::ReplaceSel  
 Replaces the current selection in this `CRichEditCtrl` object with the specified text.  
  
```  
void ReplaceSel(
    LPCTSTR lpszNewText,  
    BOOL bCanUndo = FALSE);
```  
  
### Parameters  
 `lpszNewText`  
 Pointer to a null-terminated string containing the replacement text.  
  
 `bCanUndo`  
 To specify that this function can be undone, set the value of this parameter to **TRUE**. The default value is **FALSE**.  
  
### Remarks  
 To replace all the text in this `CRichEditCtrl` object, use [CWnd::SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext).  
  
 If there is no current selection, the replacement text is inserted at the insertion point, that is, the current caret location.  
  
 This function will format the inserted text with the existing character formatting. When replacing the entire range of text (by calling `SetSel`(0,-1) before calling `ReplaceSel`), there is an end of paragraph character that retains the previous paragraph's formatting, which in inherited by the newly inserted text.  
  
 For more information, see [EM_REPLACESEL](http://msdn.microsoft.com/library/windows/desktop/bb761633) in the Windows SDK.  
  
### Example  
  See the example for [LineIndex](#lineindex).  
  
##  <a name="requestresize"></a>  CRichEditCtrl::RequestResize  
 Forces this `CRichEditCtrl` object to send **EN_REQUESTRESIZE** notification messages to its parent window.  
  
```  
void RequestResize();
```  
  
### Remarks  
 This function is useful during [CWnd::OnSize](../../mfc/reference/cwnd-class.md#onsize) processing for a bottomless `CRichEditCtrl` object.  
  
 For more information, see the [EM_REQUESTRESIZE](http://msdn.microsoft.com/library/windows/desktop/bb774220) message and the **Bottomless Rich Edit Controls** section of [About Rich Edit Controls](http://msdn.microsoft.com/library/windows/desktop/bb787873) in the Windows SDK.  
  
##  <a name="setautourldetect"></a>  CRichEditCtrl::SetAutoURLDetect  
 Sets the rich edit control to automatically detect a URL.  
  
```  
BOOL SetAutoURLDetect(BOOL bEnable = TRUE);
```  
  
### Parameters  
 `bEnable`  
 Specifies whether the control is set to automatically detect a URL. If **TRUE**, it is enabled. If **FALSE**, it is disabled.  
  
### Return Value  
 Zero if successful, otherwise nonzero. For example, the message may fail due to insufficient memory.  
  
### Remarks  
 If enabled, the rich edit control will scan the text to determine if it matches a standard URL format. For a list of these URL formats, see [EM_AUTOURLDETECT](http://msdn.microsoft.com/library/windows/desktop/bb787991) in the Windows SDK.  
  
> [!NOTE]
>  Do not set `SetAutoURLDetect` to **TRUE** if your edit control uses the **CFE_LINK** effect for text other than URLs. `SetAutoURLDetect` enables this effect for URLs and disables it for all other text. See [EN_LINK](http://msdn.microsoft.com/library/windows/desktop/bb787970) for more information about the **CFE_LINK** effect.  
  
##  <a name="setbackgroundcolor"></a>  CRichEditCtrl::SetBackgroundColor  
 Sets the background color for this `CRichEditCtrl` object.  
  
```  
COLORREF SetBackgroundColor(
    BOOL bSysColor,  
    COLORREF cr);
```  
  
### Parameters  
 `bSysColor`  
 Indicates if the background color should be set to the system value. If this value is **TRUE**, `cr` is ignored.  
  
 `cr`  
 The requested background color. Used only if `bSysColor` is **FALSE**.  
  
### Return Value  
 The previous background color for this `CRichEditCtrl` object.  
  
### Remarks  
 The background color can be set to the system value or to a specified [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value.  
  
 For more information, see [EM_SETBKGNDCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb774228) message and [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) structure in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#24](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_24.cpp)]  
  
##  <a name="setdefaultcharformat"></a>  CRichEditCtrl::SetDefaultCharFormat  
 Sets the character formatting attributes for new text in this `CRichEditCtrl` object.  
  
```  
BOOL SetDefaultCharFormat(CHARFORMAT& cf);  
BOOL SetDefaultCharFormat(CHARFORMAT2& cf);
```  
  
### Parameters  
 `cf`  
 In the first version, a pointer to a [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) structure containing the new default character formatting attributes.  
  
 In the second version, a pointer to a [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) structure, which is a Rich Edit 2.0 extension to the **CHARFORMAT** structure, containing the default character formatting attributes.  
  
### Return Value  
 Nonzero if successful; otherwise, 0.  
  
### Remarks  
 Only the attributes specified by the **dwMask** member of `cf` are changed by this function.  
  
 For more information, see the [EM_SETCHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774230) message and the **CHARFORMAT** and **CHARFORMAT2** structures in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#25](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_25.cpp)]  
  
##  <a name="seteventmask"></a>  CRichEditCtrl::SetEventMask  
 Sets the event mask for this `CRichEditCtrl` object.  
  
```  
DWORD SetEventMask(DWORD dwEventMask);
```  
  
### Parameters  
 *dwEventMask*  
 The new event mask for this `CRichEditCtrl` object.  
  
### Return Value  
 The previous event mask.  
  
### Remarks  
 The event mask specifies which notification messages the `CRichEditCtrl` object sends to its parent window.  
  
 For more information, see [EM_SETEVENTMASK](http://msdn.microsoft.com/library/windows/desktop/bb774238) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#26](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_26.cpp)]  
  
##  <a name="setmodify"></a>  CRichEditCtrl::SetModify  
 Sets or clears the modified flag for an edit control.  
  
```  
void SetModify(BOOL bModified = TRUE);
```  
  
### Parameters  
 `bModified`  
 A value of **TRUE** indicates that the text has been modified, and a value of **FALSE** indicates it is unmodified. By default, the modified flag is set.  
  
### Remarks  
 The modified flag indicates whether or not the text within the edit control has been modified. It is automatically set whenever the user changes the text. Its value can be retrieved with the [GetModify](#getmodify) member function.  
  
 For more information, see [EM_SETMODIFY](http://msdn.microsoft.com/library/windows/desktop/bb761651) in the Windows SDK.  
  
### Example  
  See the example for [GetModify](#getmodify).  
  
##  <a name="setolecallback"></a>  CRichEditCtrl::SetOLECallback  
 Gives this `CRichEditCtrl` object an **IRichEditOleCallback** object to use to access OLE-related resources and information.  
  
```  
BOOL SetOLECallback(IRichEditOleCallback* pCallback);
```  
  
### Parameters  
 `pCallback`  
 Pointer to an [IRichEditOleCallback](http://msdn.microsoft.com/library/windows/desktop/bb774308) object that this `CRichEditCtrl` object will use to get OLE-related resources and information.  
  
### Return Value  
 Nonzero if successful; otherwise, 0.  
  
### Remarks  
 This `CRichEditCtrl` object will call [IUnknown::AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) to increment the usage count for the COM object specified by `pCallback`.  
  
 For more information, see [EM_SETOLECALLBACK](http://msdn.microsoft.com/library/windows/desktop/bb774252) message and [IRichEditOleCallback](http://msdn.microsoft.com/library/windows/desktop/bb774308) interface in the Windows SDK.  
  
##  <a name="setoptions"></a>  CRichEditCtrl::SetOptions  
 Sets the options for this `CRichEditCtrl` object.  
  
```  
void SetOptions(
    WORD wOp,  
    DWORD dwFlags);
```  
  
### Parameters  
 *wOp*  
 Indicates the type of operation. One of the following values:  
  
- `ECOOP_SET` Set the options to those specified by `dwFlags`.  
  
- `ECOOP_OR` Combine the current options with those specified by `dwFlags`.  
  
- `ECOOP_AND` Retain only those current options that are also specified by `dwFlags`.  
  
- `ECOOP_XOR` Logically exclusive OR the current options with those specified by `dwFlags`.  
  
 `dwFlags`  
 Rich edit options. The flag values are listed in the Remarks section.  
  
### Remarks  
 The options can be a combination of the following values:  
  
- `ECO_AUTOWORDSELECTION` Automatic word selection on double-click.  
  
- `ECO_AUTOVSCROLL` Automatically scrolls text to the right by 10 characters when the user types a character at the end of the line. When the user presses the ENTER key, the control scrolls all text back to position zero.  
  
- `ECO_AUTOHSCROLL` Automatically scrolls text up one page when the user presses the ENTER key on the last line.  
  
- `ECO_NOHIDESEL` Negates the default behavior for an edit control. The default behavior hides the selection when the control loses the input focus and shows the selection when the control receives the input focus. If you specify `ECO_NOHIDESEL`, the selected text is inverted, even if the control does not have the focus.  
  
- `ECO_READONLY` Prevents the user from typing or editing text in the edit control.  
  
- `ECO_WANTRETURN` Specifies that a carriage return be inserted when the user presses the ENTER key while entering text into a multiple-line rich edit control in a dialog box. If you do not specify this style, pressing the ENTER key sends a command to the rich edit control's parent window, which mimics clicking the parent window's default button (for example, the OK button in a dialog box). This style has no effect on a single-line edit control.  
  
- `ECO_SAVESEL` Preserves the selection when the control loses the focus. By default, the entire contents of the control are selected when it regains the focus.  
  
- `ECO_VERTICAL` Draws text and objects in a vertical direction. Available for Asian languages only.  
  
 For more information, see [EM_SETOPTIONS](http://msdn.microsoft.com/library/windows/desktop/bb774254) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#27](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_27.cpp)]  
  
##  <a name="setparaformat"></a>  CRichEditCtrl::SetParaFormat  
 Sets the paragraph formatting attributes for the current selection in this `CRichEditCtrl` object.  
  
```  
BOOL SetParaFormat(PARAFORMAT& pf);  
BOOL SetParaFormat(PARAFORMAT2& pf);
```  
  
### Parameters  
 `pf`  
 In the first version, a pointer to a [PARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787940) structure containing the new default paragraph formatting attributes.  
  
 In the second version, a pointer to a [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) structure, which is a Rich Edit 2.0 extension to the **PARAFORMAT** structure, holding the default character formatting attributes.  
  
### Return Value  
 Nonzero if successful; otherwise, 0.  
  
### Remarks  
 Only the attributes specified by the **dwMask** member of `pf` are changed by this function.  
  
 For more information, see the [EM_SETPARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774276) message and the **PARAFORMAT** and **PARAFORMAT2** structures in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#28](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_28.cpp)]  
  
##  <a name="setpunctuation"></a>  CRichEditCtrl::SetPunctuation  
 Sets the punctuation in a rich edit control.  
  
```  
BOOL SetPunctuation(
    UINT fType,  
    PUNCTUATION* lpPunc);
```  
  
### Parameters  
 `fType`  
 The punctuation flag. For a list of possible values, see the `fType` parameter for [EM_SETPUNCTUATION](http://msdn.microsoft.com/library/windows/desktop/bb774278) in the Windows SDK.  
  
 `lpPunc`  
 A pointer to a [PUNCTUATION](http://msdn.microsoft.com/library/windows/desktop/bb787944) structure, as described in the Windows SDK.  
  
### Return Value  
 Nonzero if successful, otherwise 0.  
  
### Remarks  
 This member function is available for only Asian-language versions of the operating system.  
  
##  <a name="setreadonly"></a>  CRichEditCtrl::SetReadOnly  
 Changes the `ECO_READONLY` option for this `CRichEditCtrl` object.  
  
```  
BOOL SetReadOnly(BOOL bReadOnly = TRUE);
```  
  
### Parameters  
 `bReadOnly`  
 Indicates if this `CRichEditCtrl` object should be read only.  
  
### Return Value  
 Nonzero if successful; otherwise, 0.  
  
### Remarks  
 For a brief description of this option, see [SetOptions](#setoptions). You can use this function to set all the options for this `CRichEditCtrl` object.  
  
 For more information, see [EM_SETREADONLY](http://msdn.microsoft.com/library/windows/desktop/bb761655) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#29](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_29.cpp)]  
  
##  <a name="setrect"></a>  CRichEditCtrl::SetRect  
 Sets the formatting rectangle for this `CRichEditCtrl` object.  
  
```  
void SetRect(LPCRECT lpRect);
```  
  
### Parameters  
 `lpRect`  
 [CRect](../../atl-mfc-shared/reference/crect-class.md) or pointer to a [RECT](../../mfc/reference/rect-structure1.md) that indicates the new bounds for the formatting rectangle.  
  
### Remarks  
 The formatting rectangle is the limiting rectangle for the text. The limiting rectangle is independent of the size of the rich edit control window. When this `CRichEditCtrl` object is first created, the formatting rectangle is the same size as the client area of the window. Use `SetRect` to make the formatting rectangle larger or smaller than the rich edit window.  
  
 For more information, see [EM_SETRECT](http://msdn.microsoft.com/library/windows/desktop/bb761657) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#30](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_30.cpp)]  
  
##  <a name="setsel"></a>  CRichEditCtrl::SetSel  
 Sets the selection within this `CRichEditCtrl` object.  
  
```  
void SetSel(
    long nStartChar,  
    long nEndChar);  
  
void SetSel(CHARRANGE& cr);
```  
  
### Parameters  
 `nStartChar`  
 Zero-based index of the first character for the selection.  
  
 `nEndChar`  
 Zero-based index of the last character for the selection.  
  
 `cr`  
 [CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) structure which holds the bounds of the current selection.  
  
### Remarks  
 The two forms of this function provide alternate ways to set the bounds for the selection. Brief descriptions of these forms follow:  
  
- **SetSel(** `cr` **)** This form uses the **CHARRANGE** structure with its **cpMin** and **cpMax** members to set the bounds.  
  
- **SetSel(** `nStartChar` **,** `nEndChar` **)** This form use the parameters `nStartChar` and `nEndChar` to set the bounds.  
  
 The caret is placed at the end of the selection indicated by the greater of the start ( **cpMin** or `nStartChar`) and end ( **cpMax** or `nEndChar`) indices. This function scrolls the contents of the `CRichEditCtrl` so that the caret is visible.  
  
 To select all the text in this `CRichEditCtrl` object, call `SetSel` with a start index of 0 and an end index of - 1.  
  
 For more information, see [EM_EXSETSEL](http://msdn.microsoft.com/library/windows/desktop/bb788007) message and [CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) structure in the Windows SDK.  
  
### Example  
  See the example for [GetSel](#getsel).  
  
##  <a name="setselectioncharformat"></a>  CRichEditCtrl::SetSelectionCharFormat  
 Sets the character formatting attributes for the text in the current selection in this `CRichEditCtrl` object.  
  
```  
BOOL SetSelectionCharFormat(CHARFORMAT& cf);  
BOOL SetSelectionCharFormat(CHARFORMAT2& cf);
```  
  
### Parameters  
 `cf`  
 In the first version, a pointer to a [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) structure containing the new character formatting attributes for the current selection.  
  
 In the second version, a pointer to a [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) structure, which is a Rich Edit 2.0 extension to the **CHARFORMAT** structure, containing the new character formatting attributes for the current selection.  
  
### Return Value  
 Nonzero if successful; otherwise, 0.  
  
### Remarks  
 Only the attributes specified by the **dwMask** member of `cf` are changed by this function.  
  
 For more information, see the [EM_SETCHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774230) and the **CHARFORMAT** and **CHARFORMAT2** structures in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#31](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_31.cpp)]  
  
##  <a name="settargetdevice"></a>  CRichEditCtrl::SetTargetDevice  
 Sets the target device and line width used for WYSIWYG (what you see is what you get) formatting in this `CRichEditCtrl` object.  
  
```  
BOOL SetTargetDevice(
    HDC hDC,  
    long lLineWidth);

 
BOOL SetTargetDevice(
    CDC& dc,  
    long lLineWidth);
```  
  
### Parameters  
 `hDC`  
 Handle to the device context for the new target device.  
  
 *lLineWidth*  
 Line width to use for formatting.  
  
 `dc`  
 [CDC](../../mfc/reference/cdc-class.md) for the new target device.  
  
### Return Value  
 Nonzero if successful; otherwise, 0.  
  
### Remarks  
 If this function is successful, the rich edit control owns the device context passed as a parameter. In that case, the calling function should not destroy the device context.  
  
 For more information, see [EM_SETTARGETDEVICE](http://msdn.microsoft.com/library/windows/desktop/bb774282) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#32](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_32.cpp)]  
  
##  <a name="settextmode"></a>  CRichEditCtrl::SetTextMode  
 Sets the text mode or undo and redo level for a rich edit control.  
  
```  
BOOL SetTextMode(UINT fMode);
```  
  
### Parameters  
 *fMode*  
 Specifies the new settings for the control's text mode and undo level parameters. For a list of the possible values, see the mode parameter for [EM_SETTEXTMODE](http://msdn.microsoft.com/library/windows/desktop/bb774286) in the Windows SDK.  
  
### Return Value  
 Zero if successful, otherwise nonzero.  
  
### Remarks  
 For a description of the text modes, see **EM_SETTEXTMODE** in the Windows SDK.  
  
 This member function fails if the control contains text. To make sure the control is empty, send a [WM_SETTEXT](http://msdn.microsoft.com/library/windows/desktop/ms632644) message with an empty string.  
  
##  <a name="setundolimit"></a>  CRichEditCtrl::SetUndoLimit  
 Sets the maximum number of actions that can stored in the undo queue.  
  
```  
UINT SetUndoLimit(UINT nLimit);
```  
  
### Parameters  
 *nLimit*  
 Specifies the maximum number of actions that can be stored in the undo queue. Set to zero to disable Undo.  
  
### Return Value  
 The new maximum number of undo actions for the rich edit control.  
  
### Remarks  
 By default, the maximum number of actions in the undo queue is 100. If you increase this number, there must be enough available memory to accommodate the new number. For better performance, set the limit to the smallest possible value.  
  
##  <a name="setwordcharformat"></a>  CRichEditCtrl::SetWordCharFormat  
 Sets the character formatting attributes for the currently selected word in this `CRichEditCtrl` object.  
  
```  
BOOL SetWordCharFormat(CHARFORMAT& cf);  
BOOL SetWordCharFormat(CHARFORMAT2& cf);
```  
  
### Parameters  
 `cf`  
 In the first version, a pointer to a [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) structure containing the new character formatting attributes for the currently selected word.  
  
 In the second version, a pointer to a [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) structure, which is a Rich Edit 2.0 extension to the **CHARFORMAT** structure, containing the new character formatting attributes for the currently selected word.  
  
### Return Value  
 Nonzero if successful; otherwise, 0.  
  
### Remarks  
 Only the attributes specified by the **dwMask** member of `cf` are changed by this function.  
  
 For more information, see the [EM_SETCHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774230) message and the **CHARFORMAT** and **CHARFORMAT2** structures in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#33](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_33.cpp)]  
  
##  <a name="setwordwrapmode"></a>  CRichEditCtrl::SetWordWrapMode  
 Sets the word-wrapping and word-breaking options for the rich edit control.  
  
```  
UINT SetWordWrapMode(UINT uFlags) const;  
```  
  
### Parameters  
 `uFlags`  
 The options to set for word wrapping and word breaking. For a list of possible options, see [EM_SETWORDWRAPMODE](http://msdn.microsoft.com/library/windows/desktop/bb774294) in the Windows SDK.  
  
### Return Value  
 The current word-wrapping and word-breaking options.  
  
### Remarks  
 This message is available only in Asian-language versions of the operating system.  
  
##  <a name="stopgrouptyping"></a>  CRichEditCtrl::StopGroupTyping  
 Stops the control from collecting additional typing actions into the current undo action.  
  
```  
void StopGroupTyping();
```  
  
### Remarks  
 The control stores the next typing action, if any, into a new action in the undo queue.  
  
 For more information, see [EM_STOPGROUPTYPING](http://msdn.microsoft.com/library/windows/desktop/bb774300) in the Windows SDK.  
  
##  <a name="streamin"></a>  CRichEditCtrl::StreamIn  
 Replaces text in this `CRichEditCtrl` object with text from the specified input stream.  
  
```  
long StreamIn(
    int nFormat,  
    EDITSTREAM& es);
```  
  
### Parameters  
 `nFormat`  
 Flags specifying the input data formats. See the Remarks section for more information.  
  
 `es`  
 [EDITSTREAM](http://msdn.microsoft.com/library/windows/desktop/bb787891) structure specifying the input stream. See the Remarks section for more information.  
  
### Return Value  
 Number of characters read from the input stream.  
  
### Remarks  
 The value of `nFormat` must be one of the following:  
  
- `SF_TEXT` Indicates reading text only.  
  
- `SF_RTF` Indicates reading text and formatting.  
  
 Either of these values can be combined with `SFF_SELECTION`. If `SFF_SELECTION` is specified, `StreamIn` replaces the current selection with the contents of the input stream. If it is not specified, `StreamIn` replaces the entire contents of this `CRichEditCtrl` object.  
  
 In the **EDITSTREAM** parameter `es`, you specify a callback function that fills a buffer with text. This callback function is called repeatedly, until the input stream is exhausted.  
  
 For more information, see [EM_STREAMIN](http://msdn.microsoft.com/library/windows/desktop/bb774302) message and [EDITSTREAM](http://msdn.microsoft.com/library/windows/desktop/bb787891) structure in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#34](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_34.cpp)]  
  
 [!code-cpp[NVC_MFC_CRichEditCtrl#35](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_35.cpp)]  
  
##  <a name="streamout"></a>  CRichEditCtrl::StreamOut  
 Writes out the contents of this `CRichEditCtrl` object to the specified output stream.  
  
```  
long StreamOut(
    int nFormat,  
    EDITSTREAM& es);
```  
  
### Parameters  
 `nFormat`  
 Flags specifying the output data formats. See the Remarks section for more information.  
  
 `es`  
 [EDITSTREAM](http://msdn.microsoft.com/library/windows/desktop/bb787891) structure specifying the output stream. See the Remarks section for more information.  
  
### Return Value  
 Number of characters written to the output stream.  
  
### Remarks  
 The value of `nFormat` must be one of the following:  
  
- `SF_TEXT` Indicates writing text only.  
  
- `SF_RTF` Indicates writing text and formatting.  
  
- `SF_RTFNOOBJS` Indicates writing text and formatting, replacing OLE items with spaces.  
  
- `SF_TEXTIZED` Indicates writing text and formatting, with textual representations of OLE items.  
  
 Any of these values can be combined with `SFF_SELECTION`. If `SFF_SELECTION` is specified, `StreamOut` writes out the current selection into the output stream. If it is not specified, `StreamOut` writes out the entire contents of this `CRichEditCtrl` object.  
  
 In the **EDITSTREAM** parameter `es`, you specify a callback function which fills a buffer with text. This callback function is called repeatedly, until the output stream is exhausted.  
  
 For more information, see [EM_STREAMOUT](http://msdn.microsoft.com/library/windows/desktop/bb774304) message and [EDITSTREAM](http://msdn.microsoft.com/library/windows/desktop/bb787891) structure in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CRichEditCtrl#36](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_36.cpp)]  
  
 [!code-cpp[NVC_MFC_CRichEditCtrl#37](../../mfc/reference/codesnippet/cpp/cricheditctrl-class_37.cpp)]  
  
##  <a name="undo"></a>  CRichEditCtrl::Undo  
 Undoes the last operation in the rich edit control.  
  
```  
BOOL Undo();
```  
  
### Return Value  
 Nonzero if the undo operation is successful; otherwise, 0.  
  
### Remarks  
 An undo operation can also be undone. For example, you can restore deleted text with the first call to **Undo**. As long as there is no intervening edit operation, you can remove the text again with a second call to **Undo**.  
  
 For more information, see [EM_UNDO](http://msdn.microsoft.com/library/windows/desktop/bb761670) in the Windows SDK.  
  
### Example  
  See the example for [CanUndo](#canundo).  
  
## See Also  
 [MFC Sample WORDPAD](../../visual-cpp-samples.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)   
 [CRichEditView Class](../../mfc/reference/cricheditview-class.md)
