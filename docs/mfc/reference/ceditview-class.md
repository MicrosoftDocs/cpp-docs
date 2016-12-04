---
title: "CEditView Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CEditView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "text editors, CEditView class"
  - "text editors"
  - "edit controls, classes"
  - "views, classes"
  - "CEditView class"
ms.assetid: bf38255c-fcbe-450c-95b2-3c5e35f86c37
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CEditView Class
A type of view class that provides the functionality of a Windows edit control and can be used to implement simple text-editor functionality.  
  
## Syntax  
  
```  
class CEditView : public CCtrlView  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CEditView::CEditView](#ceditview__ceditview)|Constructs an object of type `CEditView`.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CEditView::FindText](#ceditview__findtext)|Searches for a string within the text.|  
|[CEditView::GetBufferLength](#ceditview__getbufferlength)|Obtains the length of the character buffer.|  
|[CEditView::GetEditCtrl](#ceditview__geteditctrl)|Provides access to the `CEdit` portion of a `CEditView` object (the Windows edit control).|  
|[CEditView::GetPrinterFont](#ceditview__getprinterfont)|Retrieves the current printer font.|  
|[CEditView::GetSelectedText](#ceditview__getselectedtext)|Retrieves the current text selection.|  
|[CEditView::LockBuffer](#ceditview__lockbuffer)|Locks the buffer.|  
|[CEditView::PrintInsideRect](#ceditview__printinsiderect)|Renders text inside a given rectangle.|  
|[CEditView::SerializeRaw](#ceditview__serializeraw)|Serializes a `CEditView` object to disk as raw text.|  
|[CEditView::SetPrinterFont](#ceditview__setprinterfont)|Sets a new printer font.|  
|[CEditView::SetTabStops](#ceditview__settabstops)|Sets tab stops for both screen display and printing.|  
|[CEditView::UnlockBuffer](#ceditview__unlockbuffer)|Unlocks the buffer.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CEditView::OnFindNext](#ceditview__onfindnext)|Finds next occurrence of a text string.|  
|[CEditView::OnReplaceAll](#ceditview__onreplaceall)|Replaces all occurrences of a given string with a new string.|  
|[CEditView::OnReplaceSel](#ceditview__onreplacesel)|Replaces current selection.|  
|[CEditView::OnTextNotFound](#ceditview__ontextnotfound)|Called when a find operation fails to match any further text.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CEditView::dwStyleDefault](#ceditview__dwstyledefault)|Default style for objects of type **CEditView.**|  
  
## Remarks  
 The `CEditView` class provides the following additional functions:  
  
-   Print.  
  
-   Find and replace.  
  
 Because class `CEditView` is a derivative of class `CView`, objects of class `CEditView` can be used with documents and document templates.  
  
 Each `CEditView` control's text is kept in its own global memory object. Your application can have any number of `CEditView` objects.  
  
 Create objects of type `CEditView` if you want an edit window with the added functionality listed above, or if you want simple text-editor functionality. A `CEditView` object can occupy the entire client area of a window. Derive your own classes from `CEditView` to add or modify the basic functionality, or to declare classes that can be added to a document template.  
  
 The default implementation of class `CEditView` handles the following commands: **ID_EDIT_SELECT_ALL**, **ID_EDIT_FIND**, **ID_EDIT_REPLACE**, **ID_EDIT_REPEAT**, and **ID_FILE_PRINT**.  
  
 The default character limit for `CEditView` is (1024 \* 1024 - 1 = 1048575). This can be changed by calling the **EM_LIMITTEXT** function of the underlying edit control. However, the limits are different depending on the operating system and the type of edit control (single or multiline). For more information on these limits, see [EM_LIMITTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761607).  
  
 To change this limit in your control, override the `OnCreate()` function for your `CEditView` class and insert the following line of code:  
  
 [!code-cpp[NVC_MFCDocView#65](../../mfc/codesnippet/cpp/ceditview-class_1.cpp)]  
  
 Objects of type `CEditView` (or of types derived from `CEditView`) have the following limitations:  
  
- `CEditView` does not implement true what you see is what you get (WYSIWYG) editing. Where there is a choice between readability on the screen and matching printed output, `CEditView` opts for screen readability.  
  
- `CEditView` can display text in only a single font. No special character formatting is supported. See class [CRichEditView](../../mfc/reference/cricheditview-class.md) for greater capabilities.  
  
-   The amount of text a `CEditView` can contain is limited. The limits are the same as for the `CEdit` control.  
  
 For more information on `CEditView`, see [Derived View Classes Available in MFC](../../mfc/derived-view-classes-available-in-mfc.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CCtrlView](../../mfc/reference/cctrlview-class.md)  
  
 `CEditView`  
  
## Requirements  
 **Header:** afxext.h  
  
##  <a name="ceditview__ceditview"></a>  CEditView::CEditView  
 Constructs an object of type `CEditView`.  
  
```  
CEditView();
```  
  
### Remarks  
 After constructing the object, you must call the [CWnd::Create](../../mfc/reference/cwnd-class.md#cwnd__create) function before the edit control is used. If you derive a class from `CEditView` and add it to the template using `CWinApp::AddDocTemplate`, the framework calls both this constructor and the **Create** function.  
  
##  <a name="ceditview__dwstyledefault"></a>  CEditView::dwStyleDefault  
 Contains the default style of the `CEditView` object.  
  
```  
static const DWORD dwStyleDefault;  
```  
  
### Remarks  
 Pass this static member as the `dwStyle` parameter of the **Create** function to obtain the default style for the `CEditView` object.  
  
##  <a name="ceditview__findtext"></a>  CEditView::FindText  
 Call the `FindText` function to search the `CEditView` object's text buffer.  
  
```  
BOOL FindText(
    LPCTSTR lpszFind,  
    BOOL bNext = TRUE,  
    BOOL bCase = TRUE);
```  
  
### Parameters  
 `lpszFind`  
 The text to be found.  
  
 `bNext`  
 Specifies the direction of the search. If **TRUE**, the search direction is toward the end of the buffer. If **FALSE**, the search direction is toward the beginning of the buffer.  
  
 `bCase`  
 Specifies whether the search is case sensitive. If **TRUE**, the search is case sensitive. If **FALSE**, the search is not case sensitive.  
  
### Return Value  
 Nonzero if the search text is found; otherwise 0.  
  
### Remarks  
 This function searches the text in the buffer for the text specified by `lpszFind`, starting at the current selection, in the direction specified by `bNext`, and with case sensitivity specified by `bCase`. If the text is found, it sets the selection to the found text and returns a nonzero value. If the text is not found, the function returns 0.  
  
 You normally do not need to call the `FindText` function unless you override `OnFindNext`, which calls `FindText`.  
  
##  <a name="ceditview__getbufferlength"></a>  CEditView::GetBufferLength  
 Call this member function to obtain the number of characters currently in the edit control's buffer, not including the null terminator.  
  
```  
UINT GetBufferLength() const;

 
```  
  
### Return Value  
 The length of the string in the buffer.  
  
##  <a name="ceditview__geteditctrl"></a>  CEditView::GetEditCtrl  
 Call `GetEditCtrl` to get a reference to the edit control used by the edit view.  
  
```  
CEdit& GetEditCtrl() const;

 
```  
  
### Return Value  
 A reference to a `CEdit` object.  
  
### Remarks  
 This control is of type [CEdit](../../mfc/reference/cedit-class.md), so you can manipulate the Windows edit control directly using the `CEdit` member functions.  
  
> [!CAUTION]
>  Using the `CEdit` object can change the state of the underlying Windows edit control. For example, you should not change the tab settings using the [CEdit::SetTabStops](../../mfc/reference/cedit-class.md#cedit__settabstops) function because `CEditView` caches these settings for use both in the edit control and in printing. Instead, use [CEditView::SetTabStops](#ceditview__settabstops).  
  
### Example  
 [!code-cpp[NVC_MFCDocView#66](../../mfc/codesnippet/cpp/ceditview-class_2.cpp)]  
  
##  <a name="ceditview__getprinterfont"></a>  CEditView::GetPrinterFont  
 Call `GetPrinterFont` to get a pointer to a [CFont](../../mfc/reference/cfont-class.md) object that describes the current printer font.  
  
```  
CFont* GetPrinterFont() const;

 
```  
  
### Return Value  
 A pointer to a `CFont` object that specifies the current printer font; **NULL** if the printer font has not been set. The pointer may be temporary and should not be stored for later use.  
  
### Remarks  
 If the printer font has not been set, the default printing behavior of the `CEditView` class is to print using the same font used for display.  
  
 Use this function to determine the current printer font. If it is not the desired printer font, use [CEditView::SetPrinterFont](#ceditview__setprinterfont) to change it.  
  
##  <a name="ceditview__getselectedtext"></a>  CEditView::GetSelectedText  
 Call `GetSelectedText` to copy the selected text into a `CString` object, up to the end of the selection or the character preceding the first carriage-return character in the selection.  
  
```  
void GetSelectedText(CString& strResult) const;

 
```  
  
### Parameters  
 `strResult`  
 A reference to the `CString` object that is to receive the selected text.  
  
##  <a name="ceditview__lockbuffer"></a>  CEditView::LockBuffer  
 Call this member function to obtain a pointer to the buffer. The buffer should not be modified.  
  
```  
LPCTSTR LockBuffer() const;

 
```  
  
### Return Value  
 A pointer to the edit control's buffer.  
  
##  <a name="ceditview__onfindnext"></a>  CEditView::OnFindNext  
 Searches the text in the buffer for the text specified by `lpszFind`, in the direction specified by `bNext`, with case sensitivity specified by `bCase`.  
  
```  
virtual void OnFindNext(
    LPCTSTR lpszFind,  
    BOOL bNext,  
    BOOL bCase);
```  
  
### Parameters  
 `lpszFind`  
 The text to be found.  
  
 `bNext`  
 Specifies the direction of the search. If **TRUE**, the search direction is toward the end of the buffer. If **FALSE**, the search direction is toward the beginning of the buffer.  
  
 `bCase`  
 Specifies whether the search is case sensitive. If **TRUE**, the search is case sensitive. If **FALSE**, the search is not case sensitive.  
  
### Remarks  
 The search starts at the beginning of the current selection and is accomplished through a call to [FindText](#ceditview__findtext). In the default implementation, `OnFindNext` calls [OnTextNotFound](#ceditview__ontextnotfound) if the text is not found.  
  
 Override `OnFindNext` to change the way a `CEditView`-derived object searches text. `CEditView` calls `OnFindNext` when the user chooses the Find Next button in the standard Find dialog box.  
  
##  <a name="ceditview__onreplaceall"></a>  CEditView::OnReplaceAll  
 `CEditView` calls `OnReplaceAll` when the user selects the Replace All button in the standard Replace dialog box.  
  
```  
virtual void OnReplaceAll(
    LPCTSTR lpszFind,  
    LPCTSTR lpszReplace,  
    BOOL bCase);
```  
  
### Parameters  
 `lpszFind`  
 The text to be found.  
  
 `lpszReplace`  
 The text to replace the search text.  
  
 `bCase`  
 Specifies whether search is case sensitive. If **TRUE**, the search is case sensitive. If **FALSE**, the search is not case sensitive.  
  
### Remarks  
 `OnReplaceAll` searches the text in the buffer for the text specified by `lpszFind`, with case sensitivity specified by `bCase`. The search starts at the beginning of the current selection. Each time the search text is found, this function replaces that occurrence of the text with the text specified by `lpszReplace`. The search is accomplished through a call to [FindText](#ceditview__findtext). In the default implementation, [OnTextNotFound](#ceditview__ontextnotfound) is called if the text is not found.  
  
 If the current selection does not match `lpszFind`, the selection is updated to the first occurrence of the text specified by `lpszFind` and a replace is not performed. This allows the user to confirm that this is what they want to do when the selection does not match the text to be replaced.  
  
 Override `OnReplaceAll` to change the way a `CEditView`-derived object replaces text.  
  
##  <a name="ceditview__onreplacesel"></a>  CEditView::OnReplaceSel  
 `CEditView` calls `OnReplaceSel` when the user selects the Replace button in the standard Replace dialog box.  
  
```  
virtual void OnReplaceSel(
    LPCTSTR lpszFind,  
    BOOL bNext,  
    BOOL bCase,  
    LPCTSTR lpszReplace);
```  
  
### Parameters  
 `lpszFind`  
 The text to be found.  
  
 `bNext`  
 Specifies the direction of the search. If **TRUE**, the search direction is toward the end of the buffer. If **FALSE**, the search direction is toward the beginning of the buffer.  
  
 `bCase`  
 Specifies whether the search is case sensitive. If **TRUE**, the search is case sensitive. If **FALSE**, the search is not case sensitive.  
  
 `lpszReplace`  
 The text to replace the found text.  
  
### Remarks  
 After replacing the selection, this function searches the text in the buffer for the next occurrence of the text specified by `lpszFind`, in the direction specified by `bNext`, with case sensitivity specified by `bCase`. The search is accomplished through a call to [FindText](#ceditview__findtext). If the text is not found, [OnTextNotFound](#ceditview__ontextnotfound) is called.  
  
 Override `OnReplaceSel` to change the way a `CEditView`-derived object replaces the selected text.  
  
##  <a name="ceditview__ontextnotfound"></a>  CEditView::OnTextNotFound  
 Override this function to change the default implementation, which calls the Windows function **MessageBeep**.  
  
```  
virtual void OnTextNotFound(LPCTSTR lpszFind);
```  
  
### Parameters  
 `lpszFind`  
 The text to be found.  
  
##  <a name="ceditview__printinsiderect"></a>  CEditView::PrintInsideRect  
 Call `PrintInsideRect` to print text in the rectangle specified by *rectLayout*.  
  
```  
UINT PrintInsideRect(
    CDC *pDC,  
    RECT& rectLayout,  
    UINT nIndexStart,  
    UINT nIndexStop);
```  
  
### Parameters  
 `pDC`  
 Pointer to the printer device context.  
  
 *rectLayout*  
 Reference to a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or [RECT structure](../../mfc/reference/rect-structure1.md) specifying the rectangle in which the text is to be rendered.  
  
 `nIndexStart`  
 Index within the buffer of the first character to be rendered.  
  
 `nIndexStop`  
 Index within the buffer of the character following the last character to be rendered.  
  
### Return Value  
 The index of the next character to be printed (that is, the character following the last character rendered).  
  
### Remarks  
 If the `CEditView` control does not have the style **ES_AUTOHSCROLL**, text is wrapped within the rendering rectangle. If the control does have the style **ES_AUTOHSCROLL**, the text is clipped at the right edge of the rectangle.  
  
 The **rect.bottom** element of the *rectLayout* object is changed so that the rectangle's dimensions define the part of the original rectangle that is occupied by the text.  
  
##  <a name="ceditview__serializeraw"></a>  CEditView::SerializeRaw  
 Call `SerializeRaw` to have a `CArchive` object read or write the text in the `CEditView` object to a text file.  
  
```  
void SerializeRaw(CArchive& ar);
```  
  
### Parameters  
 `ar`  
 Reference to the `CArchive` object that stores the serialized text.  
  
### Remarks  
 `SerializeRaw` differs from `CEditView`'s internal implementation of `Serialize` in that it reads and writes only the text, without preceding object-description data.  
  
##  <a name="ceditview__setprinterfont"></a>  CEditView::SetPrinterFont  
 Call `SetPrinterFont` to set the printer font to the font specified by `pFont`.  
  
```  
void SetPrinterFont(CFont* pFont);
```  
  
### Parameters  
 `pFont`  
 A pointer to an object of type `CFont`. If **NULL**, the font used for printing is based on the display font.  
  
### Remarks  
 If you want your view to always use a particular font for printing, include a call to `SetPrinterFont` in your class's `OnPreparePrinting` function. This virtual function is called before printing occurs, so the font change takes place before the view's contents are printed.  
  
##  <a name="ceditview__settabstops"></a>  CEditView::SetTabStops  
 Call this function to set the tab stops used for display and printing.  
  
```  
void SetTabStops(int nTabStops);
```  
  
### Parameters  
 `nTabStops`  
 Width of each tab stop, in dialog units.  
  
### Remarks  
 Only a single tab-stop width is supported. ( `CEdit` objects support multiple tab widths.) Widths are in dialog units, which equal one-fourth of the average character width (based on uppercase and lowercase alphabetic characters only) of the font used at the time of printing or displaying. You should not use `CEdit::SetTabStops` because `CEditView` must cache the tab-stop value.  
  
 This function modifies only the tabs of the object for which it is called. To change the tab stops for each `CEditView` object in your application, call each object's `SetTabStops` function.  
  
### Example  
 This code fragment sets the tab stops in the control to every fourth character by carefully measuring the font the control uses.  
  
 [!code-cpp[NVC_MFCDocView#67](../../mfc/codesnippet/cpp/ceditview-class_3.cpp)]  
  
##  <a name="ceditview__unlockbuffer"></a>  CEditView::UnlockBuffer  
 Call this member function to unlock the buffer.  
  
```  
void UnlockBuffer() const;

 
```  
  
### Remarks  
 Call `UnlockBuffer` after you have finished using the pointer returned by [LockBuffer](#ceditview__lockbuffer).  
  
## See Also  
 [MFC Sample SUPERPAD](../../visual-cpp-samples.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)   
 [CDocument Class](../../mfc/reference/cdocument-class.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [CRichEditView Class](../../mfc/reference/cricheditview-class.md)
