---
title: "CEdit Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CEdit", "AFXWIN/CEdit", "AFXWIN/CEdit::CEdit", "AFXWIN/CEdit::CanUndo", "AFXWIN/CEdit::CharFromPos", "AFXWIN/CEdit::Clear", "AFXWIN/CEdit::Copy", "AFXWIN/CEdit::Create", "AFXWIN/CEdit::Cut", "AFXWIN/CEdit::EmptyUndoBuffer", "AFXWIN/CEdit::FmtLines", "AFXWIN/CEdit::GetCueBanner", "AFXWIN/CEdit::GetFirstVisibleLine", "AFXWIN/CEdit::GetHandle", "AFXWIN/CEdit::GetHighlight", "AFXWIN/CEdit::GetLimitText", "AFXWIN/CEdit::GetLine", "AFXWIN/CEdit::GetLineCount", "AFXWIN/CEdit::GetMargins", "AFXWIN/CEdit::GetModify", "AFXWIN/CEdit::GetPasswordChar", "AFXWIN/CEdit::GetRect", "AFXWIN/CEdit::GetSel", "AFXWIN/CEdit::HideBalloonTip", "AFXWIN/CEdit::LimitText", "AFXWIN/CEdit::LineFromChar", "AFXWIN/CEdit::LineIndex", "AFXWIN/CEdit::LineLength", "AFXWIN/CEdit::LineScroll", "AFXWIN/CEdit::Paste", "AFXWIN/CEdit::PosFromChar", "AFXWIN/CEdit::ReplaceSel", "AFXWIN/CEdit::SetCueBanner", "AFXWIN/CEdit::SetHandle", "AFXWIN/CEdit::SetHighlight", "AFXWIN/CEdit::SetLimitText", "AFXWIN/CEdit::SetMargins", "AFXWIN/CEdit::SetModify", "AFXWIN/CEdit::SetPasswordChar", "AFXWIN/CEdit::SetReadOnly", "AFXWIN/CEdit::SetRect", "AFXWIN/CEdit::SetRectNP", "AFXWIN/CEdit::SetSel", "AFXWIN/CEdit::SetTabStops", "AFXWIN/CEdit::ShowBalloonTip", "AFXWIN/CEdit::Undo"]
dev_langs: ["C++"]
helpviewer_keywords: ["CEdit [MFC], CEdit", "CEdit [MFC], CanUndo", "CEdit [MFC], CharFromPos", "CEdit [MFC], Clear", "CEdit [MFC], Copy", "CEdit [MFC], Create", "CEdit [MFC], Cut", "CEdit [MFC], EmptyUndoBuffer", "CEdit [MFC], FmtLines", "CEdit [MFC], GetCueBanner", "CEdit [MFC], GetFirstVisibleLine", "CEdit [MFC], GetHandle", "CEdit [MFC], GetHighlight", "CEdit [MFC], GetLimitText", "CEdit [MFC], GetLine", "CEdit [MFC], GetLineCount", "CEdit [MFC], GetMargins", "CEdit [MFC], GetModify", "CEdit [MFC], GetPasswordChar", "CEdit [MFC], GetRect", "CEdit [MFC], GetSel", "CEdit [MFC], HideBalloonTip", "CEdit [MFC], LimitText", "CEdit [MFC], LineFromChar", "CEdit [MFC], LineIndex", "CEdit [MFC], LineLength", "CEdit [MFC], LineScroll", "CEdit [MFC], Paste", "CEdit [MFC], PosFromChar", "CEdit [MFC], ReplaceSel", "CEdit [MFC], SetCueBanner", "CEdit [MFC], SetHandle", "CEdit [MFC], SetHighlight", "CEdit [MFC], SetLimitText", "CEdit [MFC], SetMargins", "CEdit [MFC], SetModify", "CEdit [MFC], SetPasswordChar", "CEdit [MFC], SetReadOnly", "CEdit [MFC], SetRect", "CEdit [MFC], SetRectNP", "CEdit [MFC], SetSel", "CEdit [MFC], SetTabStops", "CEdit [MFC], ShowBalloonTip", "CEdit [MFC], Undo"]
ms.assetid: b1533c30-7f10-4663-88d3-8b7f2c9f7024
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CEdit Class
Provides the functionality of a Windows edit control.  
  
## Syntax  
  
```  
class CEdit : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CEdit::CEdit](#cedit)|Constructs a `CEdit` control object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CEdit::CanUndo](#canundo)|Determines whether an edit-control operation can be undone.|  
|[CEdit::CharFromPos](#charfrompos)|Retrieves the line and character indexes for the character closest to a specified position.|  
|[CEdit::Clear](#clear)|Deletes (clears) the current selection (if any) in the edit control.|  
|[CEdit::Copy](#copy)|Copies the current selection (if any) in the edit control to the Clipboard in CF_TEXT format.|  
|[CEdit::Create](#create)|Creates the Windows edit control and attaches it to the `CEdit` object.|  
|[CEdit::Cut](#cut)|Deletes (cuts) the current selection (if any) in the edit control and copies the deleted text to the Clipboard in CF_TEXT format.|  
|[CEdit::EmptyUndoBuffer](#emptyundobuffer)|Resets (clears) the undo flag of an edit control.|  
|[CEdit::FmtLines](#fmtlines)|Sets the inclusion of soft line-break characters on or off within a multiple-line edit control.|  
|[CEdit::GetCueBanner](#getcuebanner)|Retrieves the text that is displayed as the text cue, or tip, in an edit control when the control is empty and does not have focus.|  
|[CEdit::GetFirstVisibleLine](#getfirstvisibleline)|Determines the topmost visible line in an edit control.|  
|[CEdit::GetHandle](#gethandle)|Retrieves a handle to the memory that is currently allocated for a multiple-line edit control.|  
|[CEdit::GetHighlight](#gethighlight)|Gets the indexes of the starting and ending characters in a range of text that is highlighted in the current edit control.|  
|[CEdit::GetLimitText](#getlimittext)|Gets the maximum amount of text this `CEdit` can contain.|  
|[CEdit::GetLine](#getline)|Retrieves a line of text from an edit control.|  
|[CEdit::GetLineCount](#getlinecount)|Retrieves the number of lines in a multiple-line edit control.|  
|[CEdit::GetMargins](#getmargins)|Gets the left and right margins for this `CEdit`.|  
|[CEdit::GetModify](#getmodify)|Determines whether the contents of an edit control have been modified.|  
|[CEdit::GetPasswordChar](#getpasswordchar)|Retrieves the password character displayed in an edit control when the user enters text.|  
|[CEdit::GetRect](#getrect)|Gets the formatting rectangle of an edit control.|  
|[CEdit::GetSel](#getsel)|Gets the first and last character positions of the current selection in an edit control.|  
|[CEdit::HideBalloonTip](#hideballoontip)|Hides any balloon tip associated with the current edit control.|  
|[CEdit::LimitText](#limittext)|Limits the length of the text that the user can enter into an edit control.|  
|[CEdit::LineFromChar](#linefromchar)|Retrieves the line number of the line that contains the specified character index.|  
|[CEdit::LineIndex](#lineindex)|Retrieves the character index of a line within a multiple-line edit control.|  
|[CEdit::LineLength](#linelength)|Retrieves the length of a line in an edit control.|  
|[CEdit::LineScroll](#linescroll)|Scrolls the text of a multiple-line edit control.|  
|[CEdit::Paste](#paste)|Inserts the data from the Clipboard into the edit control at the current cursor position. Data is inserted only if the Clipboard contains data in CF_TEXT format.|  
|[CEdit::PosFromChar](#posfromchar)|Retrieves the coordinates of the upper-left corner of a specified character index.|  
|[CEdit::ReplaceSel](#replacesel)|Replaces the current selection in an edit control with the specified text.|  
|[CEdit::SetCueBanner](#setcuebanner)|Sets the text that is displayed as the text cue, or tip, in an edit control when the control is empty and does not have focus.|  
|[CEdit::SetHandle](#sethandle)|Sets the handle to the local memory that will be used by a multiple-line edit control.|  
|[CEdit::SetHighlight](#sethighlight)|Highlights a range of text that is displayed in the current edit control.|  
|[CEdit::SetLimitText](#setlimittext)|Sets the maximum amount of text this `CEdit` can contain.|  
|[CEdit::SetMargins](#setmargins)|Sets the left and right margins for this `CEdit`.|  
|[CEdit::SetModify](#setmodify)|Sets or clears the modification flag for an edit control.|  
|[CEdit::SetPasswordChar](#setpasswordchar)|Sets or removes a password character displayed in an edit control when the user enters text.|  
|[CEdit::SetReadOnly](#setreadonly)|Sets the read-only state of an edit control.|  
|[CEdit::SetRect](#setrect)|Sets the formatting rectangle of a multiple-line edit control and updates the control.|  
|[CEdit::SetRectNP](#setrectnp)|Sets the formatting rectangle of a multiple-line edit control without redrawing the control window.|  
|[CEdit::SetSel](#setsel)|Selects a range of characters in an edit control.|  
|[CEdit::SetTabStops](#settabstops)|Sets the tab stops in a multiple-line edit control.|  
|[CEdit::ShowBalloonTip](#showballoontip)|Displays a balloon tip that is associated with the current edit control.|  
|[CEdit::Undo](#undo)|Reverses the last edit-control operation.|  
  
## Remarks  
 An edit control is a rectangular child window in which the user can enter text.  
  
 You can create an edit control either from a dialog template or directly in your code. In both cases, first call the constructor `CEdit` to construct the `CEdit` object, then call the [Create](#create) member function to create the Windows edit control and attach it to the `CEdit` object.  
  
 Construction can be a one-step process in a class derived from `CEdit`. Write a constructor for the derived class and call `Create` from within the constructor.  
  
 `CEdit` inherits significant functionality from `CWnd`. To set and retrieve text from a `CEdit` object, use the `CWnd` member functions [SetWindowText](cwnd-class.md#setwindowtext) and [GetWindowText](cwnd-class.md#getwindowtext), which set or get the entire contents of an edit control, even if it is a multiline control. Text lines in a multiline control are separated by '\r\n' character sequences. Also, if an edit control is multiline, get and set part of the control's text by calling the `CEdit` member functions [GetLine](#getline), [SetSel](#setsel), [GetSel](#getsel), and [ReplaceSel](#replacesel).  
  
 If you want to handle Windows notification messages sent by an edit control to its parent (usually a class derived from `CDialog`), add a message-map entry and message-handler member function to the parent class for each message.  
  
 Each message-map entry takes the following form:  
  
  **ON_**_NOTIFICATION_**(** _id_**,** _memberFxn_ **)**
  
 where `id` specifies the child window ID of the edit control sending the notification, and `memberFxn` is the name of the parent member function you have written to handle the notification.  
  
 The parent's function prototype is as follows:  
  
 **afx_msg** void memberFxn **( );**  
  
 Following is a list of potential message-map entries and a description of the cases in which they would be sent to the parent:  
  
- ON_EN_CHANGE The user has taken an action that may have altered text in an edit control. Unlike the EN_UPDATE notification message, this notification message is sent after Windows updates the display.  
  
- ON_EN_ERRSPACE The edit control cannot allocate enough memory to meet a specific request.  
  
- ON_EN_HSCROLL The user clicks an edit control's horizontal scroll bar. The parent window is notified before the screen is updated.  
  
- ON_EN_KILLFOCUS The edit control loses the input focus.  
  
- ON_EN_MAXTEXT The current insertion has exceeded the specified number of characters for the edit control and has been truncated. Also sent when an edit control does not have the ES_AUTOHSCROLL style and the number of characters to be inserted would exceed the width of the edit control. Also sent when an edit control does not have the ES_AUTOVSCROLL style and the total number of lines resulting from a text insertion would exceed the height of the edit control.  
  
- ON_EN_SETFOCUS Sent when an edit control receives the input focus.  
  
- ON_EN_UPDATE The edit control is about to display altered text. Sent after the control has formatted the text but before it screens the text so that the window size can be altered, if necessary.  
  
- ON_EN_VSCROLL The user clicks an edit control's vertical scroll bar. The parent window is notified before the screen is updated.  
  
 If you create a `CEdit` object within a dialog box, the `CEdit` object is automatically destroyed when the user closes the dialog box.  
  
 If you create a `CEdit` object from a dialog resource using the dialog editor, the `CEdit` object is automatically destroyed when the user closes the dialog box.  
  
 If you create a `CEdit` object within a window, you may also need to destroy it. If you create the `CEdit` object on the stack, it is destroyed automatically. If you create the `CEdit` object on the heap by using the **new** function, you must call **delete** on the object to destroy it when the user terminates the Windows edit control. If you allocate any memory in the `CEdit` object, override the `CEdit` destructor to dispose of the allocations.  
  
 To modify certain styles in an edit control (such as ES_READONLY) you must send specific messages to the control instead of using [ModifyStyle](cwnd-class.md#modifystyle). See [Edit Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb775464) in the Windows SDK.  
  
 For more information on `CEdit`, see:  
  
- [Controls](../../mfc/controls-mfc.md)  
  
-   Knowledge Base article Q259949 : INFO: SetCaretPos() Is Not Appropriate with CEdit or CRichEditCtrl Controls  
  
## Inheritance Hierarchy  
 [CObject](cobject-class.md)  
  
 [CCmdTarget](ccmdtarget-class.md)  
  
 [CWnd](cwnd-class.md)  
  
 `CEdit`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="canundo"></a>  CEdit::CanUndo  
 Call this function to determine if the last edit operation can be undone.  
  
```  
BOOL CanUndo() const;  
```  
  
### Return Value  
 Nonzero if the last edit operation can be undone by a call to the `Undo` member function; 0 if it cannot be undone.  
  
### Remarks  
 For more information, see [EM_CANUNDO](http://msdn.microsoft.com/library/windows/desktop/bb775468) in the Windows SDK.  
  
### Example  
  See the example for [CEdit::Undo](#undo).  
  
##  <a name="cedit"></a>  CEdit::CEdit  
 Constructs a `CEdit` object.  
  
```  
CEdit();
```  
  
### Remarks  
 Use [Create](#create) to construct the Windows edit control.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#1](../../mfc/reference/codesnippet/cpp/cedit-class_1.cpp)]  
  
##  <a name="charfrompos"></a>  CEdit::CharFromPos  
 Call this function to retrieve the zero-based line and character indices of the character nearest the specified point in this `CEdit` control  
  
```  
int CharFromPos(CPoint pt) const;  
```  
  
### Parameters  
 *pt*  
 The coordinates of a point in the client area of this `CEdit` object.  
  
### Return Value  
 The character index in the low-order WORD, and the line index in the high-order WORD.  
  
### Remarks  
  
> [!NOTE]
>  This member function is available beginning with Windows 95 and Windows NT 4.0.  
  
 For more information, see [EM_CHARFROMPOS](http://msdn.microsoft.com/library/windows/desktop/bb761566) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#3](../../mfc/reference/codesnippet/cpp/cedit-class_2.cpp)]  
  
##  <a name="clear"></a>  CEdit::Clear  
 Call this function to delete (clear) the current selection (if any) in the edit control.  
  
```  
void Clear();
```  
  
### Remarks  
 The deletion performed by `Clear` can be undone by calling the [Undo](#undo) member function.  
  
 To delete the current selection and place the deleted contents into the Clipboard, call the [Cut](#cut) member function.  
  
 For more information, see [WM_CLEAR](http://msdn.microsoft.com/library/windows/desktop/ms649020) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#4](../../mfc/reference/codesnippet/cpp/cedit-class_3.cpp)]  
  
##  <a name="copy"></a>  CEdit::Copy  
 Call this function to coy the current selection (if any) in the edit control to the Clipboard in CF_TEXT format.  
  
```  
void Copy();
```  
  
### Remarks  
 For more information, see [WM_COPY](http://msdn.microsoft.com/library/windows/desktop/ms649022) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#5](../../mfc/reference/codesnippet/cpp/cedit-class_4.cpp)]  
  
##  <a name="create"></a>  CEdit::Create  
 Creates the Windows edit control and attaches it to the `CEdit` object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 *dwStyle*  
 Specifies the edit control's style. Apply any combination of [edit styles](styles-used-by-mfc.md#edit-styles) to the control.  
  
 *rect*  
 Specifies the edit control's size and position. Can be a `CRect` object or `RECT` structure.  
  
 *pParentWnd*  
 Specifies the edit control's parent window (usually a `CDialog`). It must not be NULL.  
  
 *nID*  
 Specifies the edit control's ID.  
  
### Return Value  
 Nonzero if initialization is successful; otherwise 0.  
  
### Remarks  
 You construct a `CEdit` object in two steps. First, call the `CEdit` constructor and then call `Create`, which creates the Windows edit control and attaches it to the `CEdit` object.  
  
 When `Create` executes, Windows sends the [WM_NCCREATE](http://msdn.microsoft.com/library/windows/desktop/ms632635), [WM_NCCALCSIZE](http://msdn.microsoft.com/library/windows/desktop/ms632634), [WM_CREATE](http://msdn.microsoft.com/library/windows/desktop/ms632619), and [WM_GETMINMAXINFO](http://msdn.microsoft.com/library/windows/desktop/ms632626) messages to the edit control.  
  
 These messages are handled by default by the [OnNcCreate](cwnd-class.md#onnccreate), [OnNcCalcSize](cwnd-class.md#onnccalcsize), [OnCreate](cwnd-class.md#oncreate), and [OnGetMinMaxInfo](cwnd-class.md#ongetminmaxinfo) member functions in the `CWnd` base class. To extend the default message handling, derive a class from `CEdit`, add a message map to the new class, and override the above message-handler member functions. Override `OnCreate`, for example, to perform needed initialization for the new class.  
  
 Apply the following [window styles](styles-used-by-mfc.md#window-styles) to an edit control.  
  
- WS_CHILD Always  
  
- WS_VISIBLE Usually  
  
- WS_DISABLED Rarely  
  
- WS_GROUP To group controls  
  
- WS_TABSTOP To include edit control in the tabbing order  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#2](../../mfc/reference/codesnippet/cpp/cedit-class_5.cpp)]  
  
##  <a name="cut"></a>  CEdit::Cut  
 Call this function to delete (cut) the current selection (if any) in the edit control and copy the deleted text to the Clipboard in CF_TEXT format.  
  
```  
void Cut();
```  
  
### Remarks  
 The deletion performed by `Cut` can be undone by calling the [Undo](#undo) member function.  
  
 To delete the current selection without placing the deleted text into the Clipboard, call the [Clear](#clear) member function.  
  
 For more information, see [WM_CUT](http://msdn.microsoft.com/library/windows/desktop/ms649023) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#6](../../mfc/reference/codesnippet/cpp/cedit-class_6.cpp)]  
  
##  <a name="emptyundobuffer"></a>  CEdit::EmptyUndoBuffer  
 Call this function to reset (clear) the undo flag of an edit control.  
  
```  
void EmptyUndoBuffer();
```  
  
### Remarks  
 The edit control will now be unable to undo the last operation. The undo flag is set whenever an operation within the edit control can be undone.  
  
 The undo flag is automatically cleared whenever the [SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext) or [SetHandle](#sethandle)`CWnd` member functions are called.  
  
 For more information, see [EM_EMPTYUNDOBUFFER](http://msdn.microsoft.com/library/windows/desktop/bb761568) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#7](../../mfc/reference/codesnippet/cpp/cedit-class_7.cpp)]  
  
##  <a name="fmtlines"></a>  CEdit::FmtLines  
 Call this function to set the inclusion of soft line-break characters on or off within a multiple-line edit control.  
  
```  
BOOL FmtLines(BOOL bAddEOL);
```  
  
### Parameters  
 *bAddEOL*  
 Specifies whether soft line-break characters are to be inserted. A value of TRUE inserts the characters; a value of FALSE removes them.  
  
### Return Value  
 Nonzero if any formatting occurs; otherwise 0.  
  
### Remarks  
 A soft line break consists of two carriage returns and a linefeed inserted at the end of a line that is broken because of word wrapping. A hard line break consists of one carriage return and a linefeed. Lines that end with a hard line break are not affected by `FmtLines`.  
  
 Windows will only respond if the `CEdit` object is a multiple-line edit control.  
  
 `FmtLines` only affects the buffer returned by [GetHandle](#gethandle) and the text returned by [WM_GETTEXT](http://msdn.microsoft.com/library/windows/desktop/ms632627). It has no impact on the display of the text within the edit control.  
  
 For more information, see [EM_FMTLINES](http://msdn.microsoft.com/library/windows/desktop/bb761570) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#8](../../mfc/reference/codesnippet/cpp/cedit-class_8.cpp)]  
  
##  <a name="getcuebanner"></a>  CEdit::GetCueBanner  
 Retrieves the text that is displayed as the text cue, or tip, in an edit control when the control is empty.  
  
```  
BOOL GetCueBanner(
    LPWSTR lpszText,  
    int cchText) const;  
  
CString GetCueBanner() const;  
```  
  
### Parameters  
 [out] *lpszText*  
 A pointer to a string that contains the cue text.  
  
 [in] *cchText*  
 The number of characters that can be received. This number includes the terminating NULL character.  
  
### Return Value  
 For the first overload, TRUE if the method is successful; otherwise FALSE.  
  
 For the second overload, a [CString](../../atl-mfc-shared/using-cstring.md) that contains the cue text if the method is successful; otherwise, the empty string ("").  
  
### Remarks  
 This method sends the [EM_GETCUEBANNER](http://msdn.microsoft.com/library/windows/desktop/bb761572) message, which is described in the Windows SDK. For more information, see the [Edit_GetCueBannerText](http://msdn.microsoft.com/library/windows/desktop/bb761695) macro.  
  
##  <a name="getfirstvisibleline"></a>  CEdit::GetFirstVisibleLine  
 Call this function to determine the topmost visible line in an edit control.  
  
```  
int GetFirstVisibleLine() const;  
```  
  
### Return Value  
 The zero-based index of the topmost visible line. For single-line edit controls, the return value is 0.  
  
### Remarks  
 For more information, see [EM_GETFIRSTVISIBLELINE](http://msdn.microsoft.com/library/windows/desktop/bb761574) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#9](../../mfc/reference/codesnippet/cpp/cedit-class_9.cpp)]  
  
##  <a name="gethandle"></a>  CEdit::GetHandle  
 Call this function to retrieve a handle to the memory currently allocated for a multiple-line edit control.  
  
```  
HLOCAL GetHandle() const;  
```  
  
### Return Value  
 A local memory handle that identifies the buffer holding the contents of the edit control. If an error occurs, such as sending the message to a single-line edit control, the return value is 0.  
  
### Remarks  
 The handle is a local memory handle and may be used by any of the **Local** Windows memory functions that take a local memory handle as a parameter.  
  
 `GetHandle` is processed only by multiple-line edit controls.  
  
 Call `GetHandle` for a multiple-line edit control in a dialog box only if the dialog box was created with the DS_LOCALEDIT style flag set. If the DS_LOCALEDIT style is not set, you will still get a nonzero return value, but you will not be able to use the returned value.  
  
> [!NOTE]
> `GetHandle` will not work with Windows 95/98. If you call `GetHandle` in Windows 95/98, it will return NULL. `GetHandle` will work as documented under Windows NT, versions 3.51 and later.  
  
 For more information, see [EM_GETHANDLE](http://msdn.microsoft.com/library/windows/desktop/bb761576) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#10](../../mfc/reference/codesnippet/cpp/cedit-class_10.cpp)]  
  
##  <a name="gethighlight"></a>  CEdit::GetHighlight  
 Gets the indexes of the first and last characters in a range of text that is highlighted in the current edit control.  
  
```  
BOOL GetHighlight(
    int* pichStart,   
    int* pichEnd) const;  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[out] *pichStart*|Zero-based index of the first character in the range of text that is highlighted.|  
|[out] *pichEnd*|Zero-based index of the last character in the range of text that is highlighted.|  
  
### Return Value  
 TRUE if this method is successful; otherwise, FALSE.  
  
### Remarks  
 This method sends the [EM_GETHILITE](http://msdn.microsoft.com/library/windows/desktop/bb761578) message, which is described in the Windows SDK.  
  
##  <a name="getlimittext"></a>  CEdit::GetLimitText  
 Call this member function to get the text limit for this `CEdit` object.  
  
```  
UINT GetLimitText() const;  
```  
  
### Return Value  
 The current text limit, in bytes, for this `CEdit` object.  
  
### Remarks  
 The text limit is the maximum amount of text, in bytes, that the edit control can accept.  
  
> [!NOTE]
>  This member function is available beginning with Windows 95 and Windows NT 4.0.  
  
 For more information, see [EM_GETLIMITTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761582) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#11](../../mfc/reference/codesnippet/cpp/cedit-class_11.cpp)]  
  
##  <a name="getline"></a>  CEdit::GetLine  
 Call this function to retrieve a line of text from an edit control and places it in *lpszBuffer*.  
  
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
 *nIndex*  
 Specifies the line number to retrieve from a multiple-line edit control. Line numbers are zero-based; a value of 0 specifies the first line. This parameter is ignored by a single-line edit control.  
  
 *lpszBuffer*  
 Points to the buffer that receives a copy of the line. The first word of the buffer must specify the maximum number of characters that can be copied to the buffer.  
  
 *nMaxLength*  
 Specifies the maximum number of bytes that can be copied to the buffer. `GetLine` places this value in the first word of *lpszBuffer* before making the call to Windows.  
  
### Return Value  
 The number of bytes actually copied. The return value is 0 if the line number specified by *nIndex* is greater than the number of lines in the edit control.  
  
### Remarks  
 The copied line does not contain a null-termination character.  
  
 For more information, see [EM_GETLINE](http://msdn.microsoft.com/library/windows/desktop/bb761584) in the Windows SDK.  
  
### Example  
  See the example for [CEdit::GetLineCount](#getlinecount).  
  
##  <a name="getlinecount"></a>  CEdit::GetLineCount  
 Call this function to retrieve the number of lines in a multiple-line edit control.  
  
```  
int GetLineCount() const;  
```  
  
### Return Value  
 An integer containing the number of lines in the multiple-line edit control. If no text has been entered into the edit control, the return value is 1.  
  
### Remarks  
 `GetLineCount` is only processed by multiple-line edit controls.  
  
 For more information, see [EM_GETLINECOUNT](http://msdn.microsoft.com/library/windows/desktop/bb761586) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#12](../../mfc/reference/codesnippet/cpp/cedit-class_12.cpp)]  
  
##  <a name="getmargins"></a>  CEdit::GetMargins  
 Call this member function to retrieve the left and right margins of this edit control.  
  
```  
DWORD GetMargins() const;  
```  
  
### Return Value  
 The width of the left margin in the low-order WORD and the width of the right margin in the high-order WORD.  
  
### Remarks  
 Margins are measured in pixels.  
  
> [!NOTE]
>  This member function is available beginning with Windows 95 and Windows NT 4.0.  
  
 For more information, see [EM_GETMARGINS](http://msdn.microsoft.com/library/windows/desktop/bb761590) in the Windows SDK.  
  
### Example  
  See the example for [CEditView::GetEditCtrl](ceditview-class.md#geteditctrl).  
  
##  <a name="getmodify"></a>  CEdit::GetModify  
 Call this function to determine whether the contents of an edit control have been modified.  
  
```  
BOOL GetModify() const;  
```  
  
### Return Value  
 Nonzero if the edit-control contents have been modified; 0 if they have remained unchanged.  
  
### Remarks  
 Windows maintains an internal flag indicating whether the contents of the edit control have been changed. This flag is cleared when the edit control is first created and may also be cleared by calling the [SetModify](#setmodify) member function.  
  
 For more information, see [EM_GETMODIFY](http://msdn.microsoft.com/library/windows/desktop/bb761592) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#13](../../mfc/reference/codesnippet/cpp/cedit-class_13.cpp)]  
  
##  <a name="getpasswordchar"></a>  CEdit::GetPasswordChar  
 Call this function to retrieve the password character that is displayed in an edit control when the user enters text.  
  
```  
TCHAR GetPasswordChar() const;  
```  
  
### Return Value  
 Specifies the character to be displayed instead of the character that the user typed. The return value is NULL if no password character exists.  
  
### Remarks  
 If you create the edit control with the ES_PASSWORD style, the DLL that supports the control determines the default password character. The manifest or the [InitCommonControlsEx](http://msdn.microsoft.com/library/windows/desktop/bb775697) method determines which DLL supports the edit control. If user32.dll supports the edit control, the default password character is ASTERISK ('*', U+002A). If comctl32.dll version 6 supports the edit control, the default character is BLACK CIRCLE ('●', U+25CF). For more information about which DLL and version supports the common controls, see [Shell and Common Controls Versions](http://msdn.microsoft.com/library/windows/desktop/bb776779).  
  
 This method sends the [EM_GETPASSWORDCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761594) message, which is described in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#14](../../mfc/reference/codesnippet/cpp/cedit-class_14.cpp)]  
  
##  <a name="getrect"></a>  CEdit::GetRect  
 Call this function to get the formatting rectangle of an edit control.  
  
```  
void GetRect(LPRECT lpRect) const;  
```  
  
### Parameters  
 *lpRect*  
 Points to the `RECT` structure that receives the formatting rectangle.  
  
### Remarks  
 The formatting rectangle is the limiting rectangle of the text, which is independent of the size of the edit-control window.  
  
 The formatting rectangle of a multiple-line edit control can be modified by the [SetRect](#setrect) and [SetRectNP](#setrectnp) member functions.  
  
 For more information, see [EM_GETRECT](http://msdn.microsoft.com/library/windows/desktop/bb761596) in the Windows SDK.  
  
### Example  
  See the example for [CEdit::LimitText](#limittext).  
  
##  <a name="getsel"></a>  CEdit::GetSel  
 Call this function to get the starting and ending character positions of the current selection (if any) in an edit control, using either the return value or the parameters.  
  
```  
DWORD GetSel() const;  
  
void GetSel(
    int& nStartChar,  
    int& nEndChar) const;  
```  
  
### Parameters  
 *nStartChar*  
 Reference to an integer that will receive the position of the first character in the current selection.  
  
 *nEndChar*  
 Reference to an integer that will receive the position of the first nonselected character past the end of the current selection.  
  
### Return Value  
 The version that returns a DWORD returns a value that contains the starting position in the low-order word and the position of the first nonselected character after the end of the selection in the high-order word.  
  
### Remarks  
 For more information, see [EM_GETSEL](http://msdn.microsoft.com/library/windows/desktop/bb761598) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#15](../../mfc/reference/codesnippet/cpp/cedit-class_15.cpp)]  
  
##  <a name="hideballoontip"></a>  CEdit::HideBalloonTip  
 Hides any balloon tip associated with the current edit control.  
  
```  
BOOL HideBalloonTip();
```  
  
### Return Value  
 TRUE if this method is successful; otherwise, FALSE.  
  
### Remarks  
 This function sends the [EM_HIDEBALLOONTIP](http://msdn.microsoft.com/library/windows/desktop/bb761604) message, which is described in the Windows SDK.  
  
##  <a name="limittext"></a>  CEdit::LimitText  
 Call this function to limit the length of the text that the user may enter into an edit control.  
  
```  
void LimitText(int nChars = 0);
```  
  
### Parameters  
 *nChars*  
 Specifies the length (in bytes) of the text that the user can enter. If this parameter is 0, the text length is set to UINT_MAX bytes. This is the default behavior.  
  
### Remarks  
 Changing the text limit restricts only the text the user can enter. It has no effect on any text already in the edit control, nor does it affect the length of the text copied to the edit control by the [SetWindowText](cwnd-class.md#setwindowtext) member function in `CWnd`. If an application uses the `SetWindowText` function to place more text into an edit control than is specified in the call to `LimitText`, the user can delete any of the text within the edit control. However, the text limit will prevent the user from replacing the existing text with new text, unless deleting the current selection causes the text to fall below the text limit.  
  
> [!NOTE]
>  In Win32 (Windows NT and Windows 95/98), [SetLimitText](#setlimittext) replaces this function.  
  
 For more information, see [EM_LIMITTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761607) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#17](../../mfc/reference/codesnippet/cpp/cedit-class_16.cpp)]  
  
##  <a name="linefromchar"></a>  CEdit::LineFromChar  
 Call this function to retrieve the line number of the line that contains the specified character index.  
  
```  
int LineFromChar(int nIndex = -1) const;  
```  
  
### Parameters  
 *nIndex*  
 Contains the zero-based index value for the desired character in the text of the edit control, or contains -1. If *nIndex* is -1, it specifies the current line, that is, the line that contains the caret.  
  
### Return Value  
 The zero-based line number of the line containing the character index specified by *nIndex*. If *nIndex* is -1, the number of the line that contains the first character of the selection is returned. If there is no selection, the current line number is returned.  
  
### Remarks  
 A character index is the number of characters from the beginning of the edit control.  
  
 This member function is only used by multiple-line edit controls.  
  
 For more information, see [EM_LINEFROMCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761609) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#18](../../mfc/reference/codesnippet/cpp/cedit-class_17.cpp)]  
  
##  <a name="lineindex"></a>  CEdit::LineIndex  
 Call this function to retrieve the character index of a line within a multiple-line edit control.  
  
```  
int LineIndex(int nLine = -1) const;  
```  
  
### Parameters  
 *nLine*  
 Contains the index value for the desired line in the text of the edit control, or contains -1. If *nLine* is -1, it specifies the current line, that is, the line that contains the caret.  
  
### Return Value  
 The character index of the line specified in *nLine* or -1 if the specified line number is greater than the number of lines in the edit control.  
  
### Remarks  
 The character index is the number of characters from the beginning of the edit control to the specified line.  
  
 This member function is only processed by multiple-line edit controls.  
  
 For more information, see [EM_LINEINDEX](http://msdn.microsoft.com/library/windows/desktop/bb761611) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#19](../../mfc/reference/codesnippet/cpp/cedit-class_18.cpp)]  
  
##  <a name="linelength"></a>  CEdit::LineLength  
 Retrieves the length of a line in an edit control.  
  
```  
int LineLength(int nLine = -1) const;  
```  
  
### Parameters  
 *nLine*  
 The zero-based index of a character in the line whose length is to be retrieved. The default value is -1.  
  
### Return Value  
 For single-line edit controls, the return value is the length, in TCHARs, of the text in the edit control.  
  
 For multiline edit controls, the return value is the length, in TCHARs, of the line specified by the *nLine* parameter. For ANSI text, the length is the number of bytes in the line; for Unicode text, the length is the number of characters in the line. The length does not include the carriage-return character at the end of the line.  
  
 If the *nLine* parameter is more than the number of characters in the control, the return value is zero.  
  
 If the *nLine* parameter is -1, the return value is the number of unselected characters in the lines that contain selected characters. For example, if the selection extends from the fourth character of one line through the eighth character from the end of the next line, the return value is 10. That is, three characters on the first line and seven on the next.  
  
 For more information about the TCHAR type, see the TCHAR row in the table in [Windows Data Types](http://msdn.microsoft.com/library/windows/desktop/aa383751).  
  
### Remarks  
 This method is supported by the [EM_LINELENGTH](http://msdn.microsoft.com/library/windows/desktop/bb761613) message, which is described in the Windows SDK.  
  
### Example  
  See the example for [CEdit::LineIndex](#lineindex).  
  
##  <a name="linescroll"></a>  CEdit::LineScroll  
 Call this function to scroll the text of a multiple-line edit control.  
  
```  
void LineScroll(
    int nLines,  
    int nChars = 0);
```  
  
### Parameters  
 *nLines*  
 Specifies the number of lines to scroll vertically.  
  
 *nChars*  
 Specifies the number of character positions to scroll horizontally. This value is ignored if the edit control has either the ES_RIGHT or ES_CENTER style.  
  
### Remarks  
 This member function is processed only by multiple-line edit controls.  
  
 The edit control does not scroll vertically past the last line of text in the edit control. If the current line plus the number of lines specified by *nLines* exceeds the total number of lines in the edit control, the value is adjusted so that the last line of the edit control is scrolled to the top of the edit-control window.  
  
 `LineScroll` can be used to scroll horizontally past the last character of any line.  
  
 For more information, see [EM_LINESCROLL](http://msdn.microsoft.com/library/windows/desktop/bb761615) in the Windows SDK.  
  
### Example  
  See the example for [CEdit::GetFirstVisibleLine](#getfirstvisibleline).  
  
##  <a name="paste"></a>  CEdit::Paste  
 Call this function to insert the data from the Clipboard into the `CEdit` at the insertion point.  
  
```  
void Paste();
```  
  
### Remarks  
 Data is inserted only if the Clipboard contains data in CF_TEXT format.  
  
 For more information, see [WM_PASTE](http://msdn.microsoft.com/library/windows/desktop/ms649028) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#20](../../mfc/reference/codesnippet/cpp/cedit-class_19.cpp)]  
  
##  <a name="posfromchar"></a>  CEdit::PosFromChar  
 Call this function to get the position (top-left corner) of a given character within this `CEdit` object.  
  
```  
CPoint PosFromChar(UINT nChar) const;  
```  
  
### Parameters  
 *nChar*  
 The zero-based index of the specified character.  
  
### Return Value  
 The coordinates of the top-left corner of the character specified by *nChar*.  
  
### Remarks  
 The character is specified by giving its zero-based index value. If *nChar* is greater than the index of the last character in this `CEdit` object, the return value specifies the coordinates of the character position just past the last character in this `CEdit` object.  
  
> [!NOTE]
>  This member function is available beginning with Windows 95 and Windows NT 4.0.  
  
 For more information, see [EM_POSFROMCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761631) in the Windows SDK.  
  
### Example  
  See the example for [CEdit::LineFromChar](#linefromchar).  
  
##  <a name="replacesel"></a>  CEdit::ReplaceSel  
 Call this function to replace the current selection in an edit control with the text specified by *lpszNewText*.  
  
```  
void ReplaceSel(LPCTSTR lpszNewText, BOOL bCanUndo = FALSE);
```  
  
### Parameters  
 *lpszNewText*  
 Points to a null-terminated string containing the replacement text.  
  
 *bCanUndo*  
 To specify that this function can be undone, set the value of this parameter to TRUE . The default value is FALSE.  
  
### Remarks  
 Replaces only a portion of the text in an edit control. If you want to replace all of the text, use the [CWnd::SetWindowText](cwnd-class.md#setwindowtext) member function.  
  
 If there is no current selection, the replacement text is inserted at the current cursor location.  
  
 For more information, see [EM_REPLACESEL](http://msdn.microsoft.com/library/windows/desktop/bb761633) in the Windows SDK.  
  
### Example  
  See the example for [CEdit::LineIndex](#lineindex).  
  
##  <a name="setcuebanner"></a>  CEdit::SetCueBanner  
 Sets the text that is displayed as the text cue, or tip, in an edit control when the control is empty.  
  
```  
BOOL SetCueBanner(LPCWSTR lpszText);

 
BOOL SetCueBanner(
    LPCWSTR lpszText,   
    BOOL fDrawWhenFocused = FALSE);
```  
  
### Parameters  
 [in] *lpszText*  
 Pointer to a string that contains the cue to display in the edit control.  
  
 [in] *fDrawWhenFocused*  
 If FALSE, the cue banner is not drawn when the user clicks in the edit control and gives the control the focus.  
  
 If TRUE, the cue banner is drawn even when the control has focus. The cue banner disappears when the user starts to type in the control.  
  
 The default value is FALSE.  
  
### Return Value  
 TRUE if the method is successful; otherwise FALSE.  
  
### Remarks  
 This method sends the [EM_SETCUEBANNER](http://msdn.microsoft.com/library/windows/desktop/bb761639) message, which is described in the Windows SDK. For more information, see the [Edit_SetCueBannerTextFocused](http://msdn.microsoft.com/library/windows/desktop/bb761703) macro.  
  
### Example  
 The following example demonstrates the [CEdit::SetCueBanner](#setcuebanner) method.  
  
 [!code-cpp[NVC_MFC_CEdit_s1#2](../../mfc/reference/codesnippet/cpp/cedit-class_20.cpp)]  
  
##  <a name="sethandle"></a>  CEdit::SetHandle  
 Call this function to set the handle to the local memory that will be used by a multiple-line edit control.  
  
```  
void SetHandle(HLOCAL hBuffer);
```  
  
### Parameters  
 *hBuffer*  
 Contains a handle to the local memory. This handle must have been created by a previous call to the [LocalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366723) Windows function using the LMEM_MOVEABLE flag. The memory is assumed to contain a null-terminated string. If this is not the case, the first byte of the allocated memory should be set to 0.  
  
### Remarks  
 The edit control will then use this buffer to store the currently displayed text instead of allocating its own buffer.  
  
 This member function is processed only by multiple-line edit controls.  
  
 Before an application sets a new memory handle, it should use the [GetHandle](#gethandle) member function to get the handle to the current memory buffer and free that memory using the `LocalFree` Windows function.  
  
 `SetHandle` clears the undo buffer (the [CanUndo](#canundo) member function then returns 0) and the internal modification flag (the [GetModify](#getmodify) member function then returns 0). The edit-control window is redrawn.  
  
 You can use this member function in a multiple-line edit control in a dialog box only if you have created the dialog box with the DS_LOCALEDIT style flag set.  
  
> [!NOTE]
> `GetHandle` will not work with Windows 95/98. If you call `GetHandle` in Windows 95/98, it will return NULL. `GetHandle` will work as documented under Windows NT, versions 3.51 and later.  
  
 For more information, see [EM_SETHANDLE](http://msdn.microsoft.com/library/windows/desktop/bb761641), [LocalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366723), and [LocalFree](http://msdn.microsoft.com/library/windows/desktop/aa366730) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#22](../../mfc/reference/codesnippet/cpp/cedit-class_21.cpp)]  
  
##  <a name="sethighlight"></a>  CEdit::SetHighlight  
 Highlights a range of text that is displayed in the current edit control.  
  
```  
void SetHighlight(
    int ichStart,   
    int ichEnd);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] *ichStart*|Zero-based index of the first character in the range of text to highlight.|  
|[in] *ichEnd*|Zero-based index of the last character in the range of text to highlight.|  
  
### Remarks  
 This method sends the [EM_SETHILITE](http://msdn.microsoft.com/library/windows/desktop/bb761643) message, which is described in the Windows SDK.  
  
##  <a name="setlimittext"></a>  CEdit::SetLimitText  
 Call this member function to set the text limit for this `CEdit` object.  
  
```  
void SetLimitText(UINT nMax);
```  
  
### Parameters  
 *nMax*  
 The new text limit, in characters.  
  
### Remarks  
 The text limit is the maximum amount of text, in characters, that the edit control can accept.  
  
 Changing the text limit restricts only the text the user can enter. It has no effect on any text already in the edit control, nor does it affect the length of the text copied to the edit control by the [SetWindowText](cwnd-class.md#setwindowtext) member function in `CWnd`. If an application uses the `SetWindowText` function to place more text into an edit control than is specified in the call to `LimitText`, the user can delete any of the text within the edit control. However, the text limit will prevent the user from replacing the existing text with new text, unless deleting the current selection causes the text to fall below the text limit.  
  
 This function replaces [LimitText](#limittext) in Win32.  
  
 For more information, see [EM_SETLIMITTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761647) in the Windows SDK.  
  
### Example  
  See the example for [CEditView::GetEditCtrl](ceditview-class.md#geteditctrl).  
  
##  <a name="setmargins"></a>  CEdit::SetMargins  
 Call this method to set the left and right margins of this edit control.  
  
```  
void SetMargins(
    UINT nLeft,  
    UINT nRight);
```  
  
### Parameters  
 *nLeft*  
 The width of the new left margin, in pixels.  
  
 *nRight*  
 The width of the new right margin, in pixels.  
  
### Remarks  
  
> [!NOTE]
>  This member function is available beginning with Windows 95 and Windows NT 4.0.  
  
 For more information, see [EM_SETMARGINS](http://msdn.microsoft.com/library/windows/desktop/bb761649) in the Windows SDK.  
  
### Example  
  See the example for [CEditView::GetEditCtrl](ceditview-class.md#geteditctrl).  
  
##  <a name="setmodify"></a>  CEdit::SetModify  
 Call this function to set or clear the modified flag for an edit control.  
  
```  
void SetModify(BOOL bModified = TRUE);
```  
  
### Parameters  
 *bModified*  
 A value of TRUE indicates that the text has been modified, and a value of FALSE indicates it is unmodified. By default, the modified flag is set.  
  
### Remarks  
 The modified flag indicates whether or not the text within the edit control has been modified. It is automatically set whenever the user changes the text. Its value may be retrieved with the [GetModify](#getmodify) member function.  
  
 For more information, see [EM_SETMODIFY](http://msdn.microsoft.com/library/windows/desktop/bb761651) in the Windows SDK.  
  
### Example  
  See the example for [CEdit::GetModify](#getmodify).  
  
##  <a name="setpasswordchar"></a>  CEdit::SetPasswordChar  
 Call this function to set or remove a password character displayed in an edit control when the user types text.  
  
```  
void SetPasswordChar(TCHAR ch);
```  
  
### Parameters  
 *ch*  
 Specifies the character to be displayed in place of the character typed by the user. If *ch* is 0, the actual characters typed by the user are displayed.  
  
### Remarks  
 When a password character is set, that character is displayed for each character the user types.  
  
 This member function has no effect on a multiple-line edit control.  
  
 When the `SetPasswordChar` member function is called, `CEdit` will redraw all visible characters using the character specified by *ch*.  
  
 If the edit control is created with the [ES_PASSWORD](styles-used-by-mfc.md#edit-styles) style, the default password character is set to an asterisk ( <strong>\*</strong>). This style is removed if `SetPasswordChar` is called with *ch* set to 0.  
  
 For more information, see [EM_SETPASSWORDCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761653) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#16](../../mfc/reference/codesnippet/cpp/cedit-class_22.cpp)]  
  
##  <a name="setreadonly"></a>  CEdit::SetReadOnly  
 Calls this function to set the read-only state of an edit control.  
  
```  
BOOL SetReadOnly(BOOL bReadOnly = TRUE);
```  
  
### Parameters  
 *bReadOnly*  
 Specifies whether to set or remove the read-only state of the edit control. A value of TRUE sets the state to read-only; a value of FALSE sets the state to read/write.  
  
### Return Value  
 Nonzero if the operation is successful, or 0 if an error occurs.  
  
### Remarks  
 The current setting can be found by testing the [ES_READONLY](styles-used-by-mfc.md#edit-styles) flag in the return value of [CWnd::GetStyle](cwnd-class.md#getstyle).  
  
 For more information, see [EM_SETREADONLY](http://msdn.microsoft.com/library/windows/desktop/bb761655) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#23](../../mfc/reference/codesnippet/cpp/cedit-class_23.cpp)]  
  
##  <a name="setrect"></a>  CEdit::SetRect  
 Call this function to set the dimensions of a rectangle using the specified coordinates.  
  
```  
void SetRect(LPCRECT lpRect);
```  
  
### Parameters  
 *lpRect*  
 Points to the `RECT` structure or `CRect` object that specifies the new dimensions of the formatting rectangle.  
  
### Remarks  
 This member is processed only by multiple-line edit controls.  
  
 Use `SetRect` to set the formatting rectangle of a multiple-line edit control. The formatting rectangle is the limiting rectangle of the text, which is independent of the size of the edit-control window. When the edit control is first created, the formatting rectangle is the same as the client area of the edit-control window. By using the `SetRect` member function, an application can make the formatting rectangle larger or smaller than the edit-control window.  
  
 If the edit control has no scroll bar, text will be clipped, not wrapped, if the formatting rectangle is made larger than the window. If the edit control contains a border, the formatting rectangle is reduced by the size of the border. If you adjust the rectangle returned by the `GetRect` member function, you must remove the size of the border before you pass the rectangle to `SetRect`.  
  
 When `SetRect` is called, the edit control's text is also reformatted and redisplayed.  
  
 For more information, see [EM_SETRECT](http://msdn.microsoft.com/library/windows/desktop/bb761657) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#24](../../mfc/reference/codesnippet/cpp/cedit-class_24.cpp)]  
  
##  <a name="setrectnp"></a>  CEdit::SetRectNP  
 Call this function to set the formatting rectangle of a multiple-line edit control.  
  
```  
void SetRectNP(LPCRECT lpRect);
```  
  
### Parameters  
 *lpRect*  
 Points to a `RECT` structure or `CRect` object that specifies the new dimensions of the rectangle.  
  
### Remarks  
 The formatting rectangle is the limiting rectangle of the text, which is independent of the size of the edit-control window.  
  
 `SetRectNP` is identical to the `SetRect` member function except that the edit-control window is not redrawn.  
  
 When the edit control is first created, the formatting rectangle is the same as the client area of the edit-control window. By calling the `SetRectNP` member function, an application can make the formatting rectangle larger or smaller than the edit-control window.  
  
 If the edit control has no scroll bar, text will be clipped, not wrapped, if the formatting rectangle is made larger than the window.  
  
 This member is processed only by multiple-line edit controls.  
  
 For more information, see [EM_SETRECTNP](http://msdn.microsoft.com/library/windows/desktop/bb761659) in the Windows SDK.  
  
### Example  
  See the example for [CEdit::SetRect](#setrect).  
  
##  <a name="setsel"></a>  CEdit::SetSel  
 Call this function to select a range of characters in an edit control.  
  
```  
void SetSel(
    DWORD dwSelection,  
    BOOL bNoScroll = FALSE);

 
void SetSel(
    int nStartChar,  
    int nEndChar,  
    BOOL bNoScroll = FALSE);
```  
  
### Parameters  
 *dwSelection*  
 Specifies the starting position in the low-order word and the ending position in the high-order word. If the low-order word is 0 and the high-order word is -1, all the text in the edit control is selected. If the low-order word is -1, any current selection is removed.  
  
 *bNoScroll*  
 Indicates whether the caret should be scrolled into view. If FALSE, the caret is scrolled into view. If TRUE, the caret is not scrolled into view.  
  
 *nStartChar*  
 Specifies the starting position. If *nStartChar* is 0 and *nEndChar* is -1, all the text in the edit control is selected. If *nStartChar* is -1, any current selection is removed.  
  
 *nEndChar*  
 Specifies the ending position.  
  
### Remarks  
 For more information, see [EM_SETSEL](http://msdn.microsoft.com/library/windows/desktop/bb761661) in the Windows SDK.  
  
### Example  
  See the example for [CEdit::GetSel](#getsel).  
  
##  <a name="settabstops"></a>  CEdit::SetTabStops  
 Call this function to set the tab stops in a multiple-line edit control.  
  
```  
void SetTabStops();  
BOOL SetTabStops(const int& cxEachStop);

 
BOOL SetTabStops(
    int nTabStops,  
    LPINT rgTabStops);
```  
  
### Parameters  
 *cxEachStop*  
 Specifies that tab stops are to be set at every *cxEachStop* dialog units.  
  
 *nTabStops*  
 Specifies the number of tab stops contained in *rgTabStops*. This number must be greater than 1.  
  
 *rgTabStops*  
 Points to an array of unsigned integers specifying the tab stops in dialog units. A dialog unit is a horizontal or vertical distance. One horizontal dialog unit is equal to one-fourth of the current dialog base width unit, and 1 vertical dialog unit is equal to one-eighth of the current dialog base height unit. The dialog base units are computed based on the height and width of the current system font. The `GetDialogBaseUnits` Windows function returns the current dialog base units in pixels.  
  
### Return Value  
 Nonzero if the tabs were set; otherwise 0.  
  
### Remarks  
 When text is copied to a multiple-line edit control, any tab character in the text will cause space to be generated up to the next tab stop.  
  
 To set tab stops to the default size of 32 dialog units, call the parameterless version of this member function. To set tab stops to a size other than 32, call the version with the *cxEachStop* parameter. To set tab stops to an array of sizes, use the version with two parameters.  
  
 This member function is only processed by multiple-line edit controls.  
  
 `SetTabStops` does not automatically redraw the edit window. If you change the tab stops for text already in the edit control, call [CWnd::InvalidateRect](cwnd-class.md#invalidaterect) to redraw the edit window.  
  
 For more information, see [EM_SETTABSTOPS](http://msdn.microsoft.com/library/windows/desktop/bb761663) and [GetDialogBaseUnits](http://msdn.microsoft.com/library/windows/desktop/ms645475) in the Windows SDK.  
  
### Example  
  See the example for [CEditView::SetTabStops](ceditview-class.md#settabstops).  
  
##  <a name="showballoontip"></a>  CEdit::ShowBalloonTip  
 Displays a balloon tip that is associated with the current edit control.  
  
```  
BOOL ShowBalloonTip(PEDITBALLOONTIP pEditBalloonTip);

 
BOOL ShowBalloonTip(
    LPCWSTR lpszTitle,   
    LPCWSTR lpszText,   
    INT ttiIcon = TTI_NONE);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] *pEditBalloonTip*|Pointer to an [EDITBALLOONTIP](http://msdn.microsoft.com/library/windows/desktop/bb775466) structure that describes the balloon tip.|  
|[in] *lpszTitle*|Pointer to a Unicode string that contains the title of the balloon tip.|  
|[in] *lpszText*|Pointer to a Unicode string that contains the balloon tip text.|  
|[in] *ttiIcon*|An **INT** that specifies the type of icon to associate with the balloon tip. The default value is TTI_NONE. For more information, see the `ttiIcon` member of the [EDITBALLOONTIP](http://msdn.microsoft.com/library/windows/desktop/bb775466) structure.|  
  
### Return Value  
 TRUE if this method is successful; otherwise, FALSE.  
  
### Remarks  
 This function sends the [EM_SHOWBALLOONTIP](http://msdn.microsoft.com/library/windows/desktop/bb761668) message, which is described in the Windows SDK. For more information, see the [Edit_ShowBalloonTip](http://msdn.microsoft.com/library/windows/desktop/bb761707) macro.  
  
### Example  
 The following code example defines a variable, `m_cedit`, that is used to access the current edit control. This variable is used in the next example.  
  
 [!code-cpp[NVC_MFC_CEdit_s1#1](../../mfc/reference/codesnippet/cpp/cedit-class_25.h)]  
  
### Example  
 The following code example displays a balloon tip for an edit control. The [CEdit::ShowBalloonTip](#showballoontip) method specifies a title and balloon tip text.  
  
 [!code-cpp[NVC_MFC_CEdit_s1#3](../../mfc/reference/codesnippet/cpp/cedit-class_26.cpp)]  
  
##  <a name="undo"></a>  CEdit::Undo  
 Call this function to undo the last edit-control operation.  
  
```  
BOOL Undo();
```  
  
### Return Value  
 For a single-line edit control, the return value is always nonzero. For a multiple-line edit control, the return value is nonzero if the undo operation is successful, or 0 if the undo operation fails.  
  
### Remarks  
 An undo operation can also be undone. For example, you can restore deleted text with the first call to `Undo`. As long as there is no intervening edit operation, you can remove the text again with a second call to `Undo`.  
  
 For more information, see [EM_UNDO](http://msdn.microsoft.com/library/windows/desktop/bb761670) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CEdit#25](../../mfc/reference/codesnippet/cpp/cedit-class_27.cpp)]  
  
## See Also  
 [MFC Sample CALCDRIV](../../visual-cpp-samples.md)   
 [MFC Sample CMNCTRL2](../../visual-cpp-samples.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CWnd Class](cwnd-class.md)   
 [CButton Class](cbutton-class.md)   
 [CComboBox Class](ccombobox-class.md)   
 [CListBox Class](clistbox-class.md)   
 [CScrollBar Class](cscrollbar-class.md)   
 [CStatic Class](cstatic-class.md)   
 [CDialog Class](cdialog-class.md)
