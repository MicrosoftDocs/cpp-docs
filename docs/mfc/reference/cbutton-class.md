---
title: "CButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CButton class"
  - "checkbox buttons"
  - "pushbuttons"
  - "button control [MFC]"
  - "check boxes, button controls"
  - "button objects (CButton)"
  - "radio buttons, CButton class"
ms.assetid: cdc76d5b-31da-43c5-bc43-fde4cb39de5b
caps.latest.revision: 19
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
# CButton Class
Provides the functionality of Windows button controls.  
  
## Syntax  
  
```  
class CButton : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CButton::CButton](#cbutton__cbutton)|Constructs a `CButton` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CButton::Create](#cbutton__create)|Creates the Windows button control and attaches it to the `CButton` object.|  
|[CButton::DrawItem](#cbutton__drawitem)|Override to draw an owner-drawn `CButton` object.|  
|[CButton::GetBitmap](#cbutton__getbitmap)|Retrieves the handle of the bitmap previously set with [SetBitmap](#cbutton__setbitmap).|  
|[CButton::GetButtonStyle](#cbutton__getbuttonstyle)|Retrieves information about the button control style.|  
|[CButton::GetCheck](#cbutton__getcheck)|Retrieves the check state of a button control.|  
|[CButton::GetCursor](#cbutton__getcursor)|Retrieves the handle of the cursor image previously set with [SetCursor](#cbutton__setcursor).|  
|[CButton::GetIcon](#cbutton__geticon)|Retrieves the handle of the icon previously set with [SetIcon](#cbutton__seticon).|  
|[CButton::GetIdealSize](#cbutton__getidealsize)|Retrieves the ideal size of the button control.|  
|[CButton::GetImageList](#cbutton__getimagelist)|Retrieves the image list of the button control.|  
|[CButton::GetNote](#cbutton__getnote)|Retrieves the note component of the current command link control.|  
|[CButton::GetNoteLength](#cbutton__getnotelength)|Retrieves the length of the note text for the current command link control.|  
|[CButton::GetSplitGlyph](#cbutton__getsplitglyph)|Retrieves the glyph associated with the current split button control.|  
|[CButton::GetSplitImageList](#cbutton__getsplitimagelist)|Retrieves the image list for the current split button control.|  
|[CButton::GetSplitInfo](#cbutton__getsplitinfo)|Retrieves information that defines the current split button control.|  
|[CButton::GetSplitSize](#cbutton__getsplitsize)|Retrieves the bounding rectangle of the drop-down component of the current split button control.|  
|[CButton::GetSplitStyle](#cbutton__getsplitstyle)|Retrieves the split button styles that define the current split button control.|  
|[CButton::GetState](#cbutton__getstate)|Retrieves the check state, highlight state, and focus state of a button control.|  
|[CButton::GetTextMargin](#cbutton__gettextmargin)|Retrieves the text margin of the button control.|  
|[CButton::SetBitmap](#cbutton__setbitmap)|Specifies a bitmap to be displayed on the button.|  
|[CButton::SetButtonStyle](#cbutton__setbuttonstyle)|Changes the style of a button.|  
|[CButton::SetCheck](#cbutton__setcheck)|Sets the check state of a button control.|  
|[CButton::SetCursor](#cbutton__setcursor)|Specifies a cursor image to be displayed on the button.|  
|[CButton::SetDropDownState](#cbutton__setdropdownstate)|Sets the drop-down state of the current split button control.|  
|[CButton::SetIcon](#cbutton__seticon)|Specifies an icon to be displayed on the button.|  
|[CButton::SetImageList](#cbutton__setimagelist)|Sets the image list of the button control.|  
|[CButton::SetNote](#cbutton__setnote)|Sets the note on the current command link control.|  
|[CButton::SetSplitGlyph](#cbutton__setsplitglyph)|Associates a specified glyph with the current split button control.|  
|[CButton::SetSplitImageList](#cbutton__setsplitimagelist)|Associates an image list with the current split button control.|  
|[CButton::SetSplitInfo](#cbutton__setsplitinfo)|Specifies information that defines the current split button control.|  
|[CButton::SetSplitSize](#cbutton__setsplitsize)|Sets the bounding rectangle of the drop-down component of the current split button control.|  
|[CButton::SetSplitStyle](#cbutton__setsplitstyle)|Sets the style of the current split button control.|  
|[CButton::SetState](#cbutton__setstate)|Sets the highlighting state of a button control.|  
|[CButton::SetTextMargin](#cbutton__settextmargin)|Sets the text margin of the button control.|  
  
## Remarks  
 A button control is a small, rectangular child window that can be clicked on and off. Buttons can be used alone or in groups and can either be labeled or appear without text. A button typically changes appearance when the user clicks it.  
  
 Typical buttons are the check box, radio button, and pushbutton. A `CButton` object can become any of these, according to the [button style](../../mfc/reference/button-styles.md) specified at its initialization by the [Create](#cbutton__create) member function.  
  
 In addition, the [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md) class derived from `CButton` supports creation of button controls labeled with bitmap images instead of text. A `CBitmapButton` can have separate bitmaps for a button's up, down, focused, and disabled states.  
  
 You can create a button control either from a dialog template or directly in your code. In both cases, first call the constructor `CButton` to construct the `CButton` object; then call the **Create** member function to create the Windows button control and attach it to the `CButton` object.  
  
 Construction can be a one-step process in a class derived from `CButton`. Write a constructor for the derived class and call **Create** from within the constructor.  
  
 If you want to handle Windows notification messages sent by a button control to its parent (usually a class derived from [CDialog](../../mfc/reference/cdialog-class.md)), add a message-map entry and message-handler member function to the parent class for each message.  
  
 Each message-map entry takes the following form:  
  
 **ON_**Notification **(**`id`, `memberFxn`**)**  
  
 where `id` specifies the child window ID of the control sending the notification and `memberFxn` is the name of the parent member function you have written to handle the notification.  
  
 The parent's function prototype is as follows:  
  
 **afx_msg** `void` `memberFxn` **( );**  
  
 Potential message-map entries are as follows:  
  
|Map entry|Sent to parent when...|  
|---------------|----------------------------|  
|**ON_BN_CLICKED**|The user clicks a button.|  
|**ON_BN_DOUBLECLICKED**|The user double-clicks a button.|  
  
 If you create a `CButton` object from a dialog resource, the `CButton` object is automatically destroyed when the user closes the dialog box.  
  
 If you create a `CButton` object within a window, you may need to destroy it. If you create the `CButton` object on the heap by using the **new** function, you must call **delete** on the object to destroy it when the user closes the Windows button control. If you create the `CButton` object on the stack, or it is embedded in the parent dialog object, it is destroyed automatically.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CButton`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cbutton__cbutton"></a>  CButton::CButton  
 Constructs a `CButton` object.  
  
```  
CButton();
```  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#1](../../mfc/reference/codesnippet/cpp/cbutton-class_1.cpp)]  
  
##  <a name="cbutton__create"></a>  CButton::Create  
 Creates the Windows button control and attaches it to the `CButton` object.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszCaption,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 `lpszCaption`  
 Specifies the button control's text.  
  
 `dwStyle`  
 Specifies the button control's style. Apply any combination of [button styles](../../mfc/reference/button-styles.md) to the button.  
  
 `rect`  
 Specifies the button control's size and position. It can be either a `CRect` object or a `RECT` structure.  
  
 `pParentWnd`  
 Specifies the button control's parent window, usually a `CDialog`. It must not be **NULL**.  
  
 `nID`  
 Specifies the button control's ID.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 You construct a `CButton` object in two steps. First, call the constructor and then call **Create**, which creates the Windows button control and attaches it to the `CButton` object.  
  
 If the **WS_VISIBLE** style is given, Windows sends the button control all the messages required to activate and show the button.  
  
 Apply the following [window styles](../../mfc/reference/window-styles.md) to a button control:  
  
- **WS_CHILD** Always  
  
- **WS_VISIBLE** Usually  
  
- **WS_DISABLED** Rarely  
  
- **WS_GROUP** To group controls  
  
- **WS_TABSTOP** To include the button in the tabbing order  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#2](../../mfc/reference/codesnippet/cpp/cbutton-class_2.cpp)]  
  
##  <a name="cbutton__drawitem"></a>  CButton::DrawItem  
 Called by the framework when a visual aspect of an owner-drawn button has changed.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### Parameters  
 `lpDrawItemStruct`  
 A long pointer to a [DRAWITEMSTRUCT](../../mfc/reference/drawitemstruct-structure.md) structure. The structure contains information about the item to be drawn and the type of drawing required.  
  
### Remarks  
 An owner-drawn button has the **BS_OWNERDRAW** style set. Override this member function to implement drawing for an owner-drawn `CButton` object. The application should restore all graphics device interface (GDI) objects selected for the display context supplied in `lpDrawItemStruct` before the member function terminates.  
  
 Also see the [BS_](../../mfc/reference/button-styles.md) style values.  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#3](../../mfc/reference/codesnippet/cpp/cbutton-class_3.cpp)]  
  
##  <a name="cbutton__getbitmap"></a>  CButton::GetBitmap  
 Call this member function to get the handle of a bitmap, previously set with [SetBitmap](#cbutton__setbitmap), that is associated with a button.  
  
```  
HBITMAP GetBitmap() const;

 
```  
  
### Return Value  
 A handle to a bitmap. **NULL** if no bitmap is previously specified.  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#4](../../mfc/reference/codesnippet/cpp/cbutton-class_4.cpp)]  
  
##  <a name="cbutton__getbuttonstyle"></a>  CButton::GetButtonStyle  
 Retrieves information about the button control style.  
  
```  
UINT GetButtonStyle() const;

 
```  
  
### Return Value  
 Returns the button styles for this `CButton` object. This function returns only the [BS_](../../mfc/reference/button-styles.md) style values, not any of the other window styles.  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#5](../../mfc/reference/codesnippet/cpp/cbutton-class_5.cpp)]  
  
##  <a name="cbutton__getcheck"></a>  CButton::GetCheck  
 Retrieves the check state of a radio button or check box.  
  
```  
int GetCheck() const;

 
```  
  
### Return Value  
 The return value from a button control created with the **BS_AUTOCHECKBOX**, **BS_AUTORADIOBUTTON**, **BS_AUTO3STATE**, **BS_CHECKBOX**, **BS_RADIOBUTTON**, or **BS_3STATE** style is one of the following values:  
  
|Value|Meaning|  
|-----------|-------------|  
|**BST_UNCHECKED**|Button state is unchecked.|  
|**BST_CHECKED**|Button state is checked.|  
|**BST_INDETERMINATE**|Button state is indeterminate (applies only if the button has the **BS_3STATE** or **BS_AUTO3STATE** style).|  
  
 If the button has any other style, the return value is **BST_UNCHECKED**.  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#6](../../mfc/reference/codesnippet/cpp/cbutton-class_6.cpp)]  
  
##  <a name="cbutton__getcursor"></a>  CButton::GetCursor  
 Call this member function to get the handle of a cursor, previously set with [SetCursor](#cbutton__setcursor), that is associated with a button.  
  
```  
HCURSOR GetCursor();

 
```  
  
### Return Value  
 A handle to a cursor image. **NULL** if no cursor is previously specified.  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#7](../../mfc/reference/codesnippet/cpp/cbutton-class_7.cpp)]  
  
##  <a name="cbutton__geticon"></a>  CButton::GetIcon  
 Call this member function to get the handle of an icon, previously set with [SetIcon](#cbutton__seticon), that is associated with a button.  
  
```  
HICON GetIcon() const;

 
```  
  
### Return Value  
 A handle to an icon. **NULL** if no icon is previously specified.  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#8](../../mfc/reference/codesnippet/cpp/cbutton-class_8.cpp)]  
  
##  <a name="cbutton__getidealsize"></a>  CButton::GetIdealSize  
 Retrieves the ideal size for the button control.  
  
```  
BOOL GetIdealSize(SIZE* psize);
```  
  
### Parameters  
 *psize*  
 A pointer to the current size of the button.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This member function emulates the functionality of the **BCM_GETIDEALSIZE** message, as described in the [Buttons](http://msdn.microsoft.com/library/windows/desktop/bb775943) section of the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cbutton__getimagelist"></a>  CButton::GetImageList  
 Call this method to get the image list from the button control.  
  
```  
BOOL GetImageList(PBUTTON_IMAGELIST pbuttonImagelist);
```  
  
### Parameters  
 `pbuttonImagelist`  
 A pointer to the image list of the `CButton` object.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This member function emulates the functionality of the **BCM_GETIMAGELIST** message, as described in the [Buttons](http://msdn.microsoft.com/library/windows/desktop/bb775943) section of the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cbutton__getnote"></a>  CButton::GetNote  
 Retrieves the note text associated with the current command link control.  
  
```  
CString GetNote() const;

 
BOOL GetNote(
    LPTSTR lpszNote,   
    UINT* cchNote) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[out] `lpszNote`|Pointer to a buffer, which the caller is responsible for allocating and deallocating. If the return value is `true`, the buffer contains the note text that is associated with the current command link control; otherwise, the buffer is unchanged.|  
|[in, out] `cchNote`|A pointer to an unsigned integer variable.<br /><br /> When this method is called, the variable contains the size of the buffer specified by the `lpszNote` parameter.<br /><br /> When this method returns, if the return value is `true` the variable contains the size of the note associated with the current command link control. If the return value is `false`, the variable contains the buffer size required to contain the note.|  
  
### Return Value  
 In the first overload, a [CString](../../atl-mfc-shared/using-cstring.md) object that contains the note text associated with the current command link control.  
  
 -or-  
  
 In the second overload, `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 Use this method only with controls whose button style is `BS_COMMANDLINK` or `BS_DEFCOMMANDLINK`.  
  
 This method sends the [BCM_GETNOTE](http://msdn.microsoft.com/library/windows/desktop/bb775965) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cbutton__getnotelength"></a>  CButton::GetNoteLength  
 Retrieves the length of the note text for the current command link control.  
  
```  
UINT GetNoteLength() const;

 
```  
  
### Return Value  
 The length of the note text, in 16-bit Unicode characters, for the current command link control.  
  
### Remarks  
 Use this method only with controls whose button style is `BS_COMMANDLINK` or `BS_DEFCOMMANDLINK`.  
  
 This method sends the [BCM_GETNOTELENGTH](http://msdn.microsoft.com/library/windows/desktop/bb775967) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cbutton__getsplitglyph"></a>  CButton::GetSplitGlyph  
 Retrieves the glyph associated with the current split button control.  
  
```  
TCHAR GetSplitGlyph() const;

 
```  
  
### Return Value  
 The glyph character associated with the current split button control.  
  
### Remarks  
 A glyph is the physical representation of a character in a particular font. For example, a split button control might be decorated with the glyph of the Unicode check mark character (U+2713).  
  
 Use this method only with controls whose button style is `BS_SPLITBUTTON` or `BS_DEFSPLITBUTTON`.  
  
 This method initializes the `mask` member of a [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) structure with the `BCSIF_GLYPH` flag, and then sends that structure in the [BCM_GETSPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775969) message that is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. When the message function returns, this method retrieves the glyph from the `himlGlyph` member of the structure.  
  
##  <a name="cbutton__getsplitimagelist"></a>  CButton::GetSplitImageList  
 Retrieves the [image list](../../mfc/reference/cimagelist-class.md) for the current split button control.  
  
```  
CImageList* GetSplitImageList() const;

 
```  
  
### Return Value  
 A pointer to a [CImageList](../../mfc/reference/cimagelist-class.md) object.  
  
### Remarks  
 Use this method only with controls whose button style is `BS_SPLITBUTTON` or `BS_DEFSPLITBUTTON`.  
  
 This method initializes the `mask` member of a [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) structure with the `BCSIF_IMAGE` flag, and then sends that structure in the [BCM_GETSPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775969) message that is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. When the message function returns, this method retrieves the image list from the `himlGlyph` member of the structure.  
  
##  <a name="cbutton__getsplitinfo"></a>  CButton::GetSplitInfo  
 Retrieves parameters that determine how Windows draws the current split button control.  
  
```  
BOOL GetSplitInfo(PBUTTON_SPLITINFO pInfo) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[out] `pInfo`|Pointer to a [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) structure that receives information about the current split button control. The caller is responsible for allocating the structure.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 Use this method only with controls whose button style is `BS_SPLITBUTTON` or `BS_DEFSPLITBUTTON`.  
  
 This method sends the [BCM_GETSPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775969) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cbutton__getsplitsize"></a>  CButton::GetSplitSize  
 Retrieves the bounding rectangle of the drop-down component of the current split button control.  
  
```  
BOOL GetSplitSize(LPSIZE pSize) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[out] `pSize`|Pointer to a [SIZE](http://msdn.microsoft.com/library/windows/desktop/dd145106) structure that receives the description of a rectangle.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 Use this method only with controls whose button style is `BS_SPLITBUTTON` or `BS_DEFSPLITBUTTON`.  
  
 When the split button control is expanded, it can display a drop-down component such as a list control or pager control. This method retrieves the bounding rectangle that contains the drop-down component.  
  
 This method initializes the `mask` member of a [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) structure with the `BCSIF_SIZE` flag, and then sends that structure in the [BCM_GETSPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775969) message that is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. When the message function returns, this method retrieves the bounding rectangle from the `size` member of the structure.  
  
##  <a name="cbutton__getsplitstyle"></a>  CButton::GetSplitStyle  
 Retrieves the split button styles that define the current split button control.  
  
```  
UINT GetSplitStyle() const;

 
```  
  
### Return Value  
 A bitwise combination of split button styles. For more information, see the `uSplitStyle` member of the [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) structure.  
  
### Remarks  
 Use this method only with controls whose button style is `BS_SPLITBUTTON` or `BS_DEFSPLITBUTTON`.  
  
 The split button styles specify the alignment, aspect ratio, and graphical format with which Windows draws a split button icon.  
  
 This method initializes the `mask` member of a [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) structure with the `BCSIF_STYLE` flag, and then sends that structure in the [BCM_GETSPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775969) message that is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. When the message function returns, this method retrieves the split button styles from the `uSplitStyle` member of the structure.  
  
##  <a name="cbutton__getstate"></a>  CButton::GetState  
 Retrieves the state of a button control.  
  
```  
UINT GetState() const;

 
```  
  
### Return Value  
 A bit field that contains the combination of values that indicate the current state of a button control. The following table lists possible values.  
  
|Button State|Value|Description|  
|------------------|-----------|-----------------|  
|`BST_UNCHECKED`|0x0000|The initial state.|  
|`BST_CHECKED`|0x0001|The button control is checked.|  
|`BST_INDETERMINATE`|0x0002|The state is indeterminate (only possible when the button control has three states).|  
|`BST_PUSHED`|0x0004|The button control is pressed.|  
|`BST_FOCUS`|0x0008|The button control has the focus.|  
  
### Remarks  
 A button control with the `BS_3STATE` or `BS_AUTO3STATE` button style creates a check box that has a third state that is named the indeterminate state. The indeterminate state indicates that the check box is neither checked nor unchecked.  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#9](../../mfc/reference/codesnippet/cpp/cbutton-class_9.cpp)]  
  
##  <a name="cbutton__gettextmargin"></a>  CButton::GetTextMargin  
 Call this method to get the text margin of the `CButton` object.  
  
```  
BOOL GetTextMargin(RECT* pmargin);
```  
  
### Parameters  
 `pmargin`  
 A pointer to the text margin of the `CButton` object.  
  
### Return Value  
 Returns the text margin.  
  
### Remarks  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This member function emulates the functionality of the **BCM_GETTEXTMARGIN** message, as described in the [Buttons](http://msdn.microsoft.com/library/windows/desktop/bb775943) section of the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cbutton__setbitmap"></a>  CButton::SetBitmap  
 Call this member function to associate a new bitmap with the button.  
  
```  
HBITMAP SetBitmap(HBITMAP hBitmap);
```  
  
### Parameters  
 `hBitmap`  
 The handle of a bitmap.  
  
### Return Value  
 The handle of a bitmap previously associated with the button.  
  
### Remarks  
 The bitmap will be automatically placed on the face of the button, centered by default. If the bitmap is too large for the button, it will be clipped on either side. You can choose other alignment options, including the following:  
  
- **BS_TOP**  
  
- **BS_LEFT**  
  
- **BS_RIGHT**  
  
- **BS_CENTER**  
  
- **BS_BOTTOM**  
  
- **BS_VCENTER**  
  
 Unlike [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), which uses four bitmaps per button, `SetBitmap` uses only one bitmap per the button. When the button is pressed, the bitmap appears to shift down and to the right.  
  
 You are responsible for releasing the bitmap when you are done with it.  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#4](../../mfc/reference/codesnippet/cpp/cbutton-class_4.cpp)]  
  
##  <a name="cbutton__setbuttonstyle"></a>  CButton::SetButtonStyle  
 Changes the style of a button.  
  
```  
void SetButtonStyle(
    UINT nStyle,  
    BOOL bRedraw = TRUE);
```  
  
### Parameters  
 `nStyle`  
 Specifies the [button style](../../mfc/reference/button-styles.md).  
  
 `bRedraw`  
 Specifies whether the button is to be redrawn. A nonzero value redraws the button. A 0 value does not redraw the button. The button is redrawn by default.  
  
### Remarks  
 Use the `GetButtonStyle` member function to retrieve the button style. The low-order word of the complete button style is the button-specific style.  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#5](../../mfc/reference/codesnippet/cpp/cbutton-class_5.cpp)]  
  
##  <a name="cbutton__setcheck"></a>  CButton::SetCheck  
 Sets or resets the check state of a radio button or check box.  
  
```  
void SetCheck(int nCheck);
```  
  
### Parameters  
 `nCheck`  
 Specifies the check state. This parameter can be one of the following:  
  
|Value|Meaning|  
|-----------|-------------|  
|**BST_UNCHECKED**|Set the button state to unchecked.|  
|**BST_CHECKED**|Set the button state to checked.|  
|**BST_INDETERMINATE**|Set the button state to indeterminate. This value can be used only if the button has the **BS_3STATE** or **BS_AUTO3STATE** style.|  
  
### Remarks  
 This member function has no effect on a pushbutton.  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#6](../../mfc/reference/codesnippet/cpp/cbutton-class_6.cpp)]  
  
##  <a name="cbutton__setcursor"></a>  CButton::SetCursor  
 Call this member function to associate a new cursor with the button.  
  
```  
HCURSOR SetCursor(HCURSOR hCursor);
```  
  
### Parameters  
 `hCursor`  
 The handle of a cursor.  
  
### Return Value  
 The handle of a cursor previously associated with the button.  
  
### Remarks  
 The cursor will be automatically placed on the face of the button, centered by default. If the cursor is too large for the button, it will be clipped on either side. You can choose other alignment options, including the following:  
  
- **BS_TOP**  
  
- **BS_LEFT**  
  
- **BS_RIGHT**  
  
- **BS_CENTER**  
  
- **BS_BOTTOM**  
  
- **BS_VCENTER**  
  
 Unlike [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), which uses four bitmaps per button, `SetCursor` uses only one cursor per the button. When the button is pressed, the cursor appears to shift down and to the right.  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#7](../../mfc/reference/codesnippet/cpp/cbutton-class_7.cpp)]  
  
##  <a name="cbutton__setdropdownstate"></a>  CButton::SetDropDownState  
 Sets the drop-down state of the current split button control.  
  
```  
BOOL SetDropDownState(BOOL fDropDown);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `fDropDown`|`true` to set `BST_DROPDOWNPUSHED` state; otherwise, `false`.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 A split button control has a style of `BS_SPLITBUTTON` or `BS_DEFSPLITBUTTON` and consists of a button and a drop-down arrow to its right. For more information, see [Button Styles](http://msdn.microsoft.com/library/windows/desktop/bb775951). Usually, the drop-down state is set when the user clicks the drop-down arrow. Use this method to programmatically set the drop-down state of the control. The drop-down arrow is drawn shaded to indicate the state.  
  
 This method sends the [BCM_SETDROPDOWNSTATE](http://msdn.microsoft.com/library/windows/desktop/bb775973) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_splitButton`, that is used to programmatically access the split button control. This variable is used in the following example.  
  
 [!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]  
  
### Example  
 The following code example sets the state of the split button control to indicate that the drop-down arrow is pushed.  
  
 [!code-cpp[NVC_MFC_CButton_s1#6](../../mfc/reference/codesnippet/cpp/cbutton-class_11.cpp)]  
  
##  <a name="cbutton__setelevationrequired"></a>  CButton::SetElevationRequired  
 Sets the state of the current button control to `elevation required`, which is necessary for the control to display an elevated security icon.  
  
```  
BOOL SetElevationRequired(BOOL fElevationRequired);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `fElevationRequired`|`true` to set `elevation required` state; otherwise, `false`.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 If a button or command link control requires elevated security permission to perform an action, set the control to `elevation required` state. Subsequently, Windows displays the User Account Control (UAC) shield icon on the control. For more information, see "User Account Control" at [MSDN](http://go.microsoft.com/fwlink/linkid=18507).  
  
 This method sends the [BCM_SETSHIELD](http://msdn.microsoft.com/library/windows/desktop/bb775979) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cbutton__seticon"></a>  CButton::SetIcon  
 Call this member function to associate a new icon with the button.  
  
```  
HICON SetIcon(HICON hIcon);
```  
  
### Parameters  
 `hIcon`  
 The handle of an icon.  
  
### Return Value  
 The handle of an icon previously associated with the button.  
  
### Remarks  
 The icon will be automatically placed on the face of the button, centered by default. If the icon is too large for the button, it will be clipped on either side. You can choose other alignment options, including the following:  
  
- **BS_TOP**  
  
- **BS_LEFT**  
  
- **BS_RIGHT**  
  
- **BS_CENTER**  
  
- **BS_BOTTOM**  
  
- **BS_VCENTER**  
  
 Unlike [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), which uses four bitmaps per button, `SetIcon` uses only one icon per the button. When the button is pressed, the icon appears to shift down and to the right.  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#8](../../mfc/reference/codesnippet/cpp/cbutton-class_8.cpp)]  
  
##  <a name="cbutton__setimagelist"></a>  CButton::SetImageList  
 Call this method to set the image list of the `CButton` object.  
  
```  
BOOL SetImageList(PBUTTON_IMAGELIST pbuttonImagelist);
```  
  
### Parameters  
 `pbuttonImagelist`  
 A pointer to the new image list.  
  
### Return Value  
 Returns **TRUE** on success, **FALSE** on failure.  
  
### Remarks  
 This member function emulates the functionality of the **BCM_SETIMAGELIST** message, as described in the [Buttons](http://msdn.microsoft.com/library/windows/desktop/bb775943) section of the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cbutton__setnote"></a>  CButton::SetNote  
 Sets the note text for the current command link control.  
  
```  
BOOL SetNote(LPCTSTR lpszNote);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `lpszNote`|Pointer to a Unicode string that is set as the note text for the command link control.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 Use this method only with controls whose button style is `BS_COMMANDLINK` or `BS_DEFCOMMANDLINK`.  
  
 This method sends the [BCM_SETNOTE](http://msdn.microsoft.com/library/windows/desktop/bb775977) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_cmdLink`, that is used to programmatically access the command link control. This variable is used in the following example.  
  
 [!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]  
  
### Example  
 The following code example sets the note text for the command link control.  
  
 [!code-cpp[NVC_MFC_CButton_s1#7](../../mfc/reference/codesnippet/cpp/cbutton-class_12.cpp)]  
  
##  <a name="cbutton__setsplitglyph"></a>  CButton::SetSplitGlyph  
 Associates a specified glyph with the current split button control.  
  
```  
BOOL SetSplitGlyph(TCHAR chGlyph);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `chGlyph`|A character that specifies the glyph to use as the split button drop-down arrow.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 Use this method only with controls that have the button style `BS_SPLITBUTTON` or `BS_DEFSPLITBUTTON`.  
  
 A glyph is the physical representation of a character in a particular font. The `chGlyph`parameter is not used as the glyph, but is instead used to select a glyph from a set of system-defined glyphs. The default drop-down arrow glyph is specified by a character '6', and resembles the Unicode character BLACK DOWN-POINTING TRIANGLE (U+25BC).  
  
 This method initializes the `mask` member of a [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) structure with the `BCSIF_GLYPH` flag and the `himlGlyph` member with the `chGlyph` parameter, and then sends that structure in the [BCM_GETSPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775969) message that is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cbutton__setsplitimagelist"></a>  CButton::SetSplitImageList  
 Associates an [image list](../../mfc/reference/cimagelist-class.md) with the current split button control.  
  
```  
BOOL SetSplitImageList(CImageList* pSplitImageList);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `pSplitImageList`|Pointer to a [CImageList](../../mfc/reference/cimagelist-class.md) object to assign to the current split button control.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 Use this method only with controls whose button style is `BS_SPLITBUTTON` or `BS_DEFSPLITBUTTON`.  
  
 This method initializes the `mask` member of a [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) structure with the `BCSIF_IMAGE` flag and the `himlGlyph` member with the `pSplitImageList` parameter, and then sends that structure in the [BCM_GETSPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775969) message that is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cbutton__setsplitinfo"></a>  CButton::SetSplitInfo  
 Specifies parameters that determine how Windows draws the current split button control.  
  
```  
BOOL SetSplitInfo(PBUTTON_SPLITINFO pInfo);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `pInfo`|Pointer to a [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) structure that defines the current split button control.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 Use this method only with controls whose button style is `BS_SPLITBUTTON` or `BS_DEFSPLITBUTTON`.  
  
 This method sends the [BCM_SETSPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775981) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_splitButton`, that is used to programmatically access the split button control.  
  
 [!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]  
  
### Example  
 The following code example changes the glyph that is used for the split button drop-down arrow. The example substitutes an up-pointing triangle glyph for the default down-pointing triangle glyph. The glyph that is displayed depends on the character that you specify in the `himlGlyph` member of the `BUTTON_SPLITINFO` structure. The down-pointing triangle glyph is specified by a character '6' and the up-pointing triangle glyph is specified by a character '5'. For comparison, see the convenience method, [CButton::SetSplitGlyph](#cbutton__setsplitglyph).  
  
 [!code-cpp[NVC_MFC_CButton_s1#4](../../mfc/reference/codesnippet/cpp/cbutton-class_13.cpp)]  
  
##  <a name="cbutton__setsplitsize"></a>  CButton::SetSplitSize  
 Sets the bounding rectangle of the drop-down component of the current split button control.  
  
```  
BOOL SetSplitSize(LPSIZE pSize);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `pSize`|Pointer to a [SIZE](http://msdn.microsoft.com/library/windows/desktop/dd145106) structure that describes a bounding rectangle.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 Use this method only with controls whose button style is `BS_SPLITBUTTON` or `BS_DEFSPLITBUTTON`.  
  
 When the split button control is expanded, it can display a drop-down component such as a list control or pager control. This method specifies the size of the bounding rectangle that contains the drop-down component.  
  
 This method initializes the `mask` member of a [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) structure with the `BCSIF_SIZE` flag and the `size` member with the `pSize` parameter, and then sends that structure in the [BCM_GETSPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775969) message that is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_splitButton`, that is used to programmatically access the split button control. This variable is used in the following example.  
  
 [!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]  
  
### Example  
 The following code example doubles the size of the split button drop-down arrow.  
  
 [!code-cpp[NVC_MFC_CButton_s1#5](../../mfc/reference/codesnippet/cpp/cbutton-class_14.cpp)]  
  
##  <a name="cbutton__setsplitstyle"></a>  CButton::SetSplitStyle  
 Sets the style of the current split button control.  
  
```  
BOOL SetSplitStyle(UINT uSplitStyle);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `uSplitStyle`|A bitwise combination of split button styles. For more information, see the `uSplitStyle` member of the [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) structure.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 Use this method only with controls whose button style is `BS_SPLITBUTTON` or `BS_DEFSPLITBUTTON`.  
  
 The split button styles specify the alignment, aspect ratio, and graphical format with which Windows draws a split button icon. For more information, see the `uSplitStyle` member of the [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) structure.  
  
 This method initializes the `mask` member of a [BUTTON_SPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775955) structure with the `BCSIF_STYLE` flag and the `uSplitStyle` member with the `uSplitStyle` parameter, and then sends that structure in the [BCM_GETSPLITINFO](http://msdn.microsoft.com/library/windows/desktop/bb775969) message that is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_splitButton`, that is used to programmatically access the split button control.  
  
 [!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]  
  
### Example  
 The following code example sets the style of the split button drop-down arrow. The `BCSS_ALIGNLEFT` style displays the arrow on the left side of the button, and the `BCSS_STRETCH` style retains the drop-down arrow's proportions when you resize the button.  
  
 [!code-cpp[NVC_MFC_CButton_s1#3](../../mfc/reference/codesnippet/cpp/cbutton-class_15.cpp)]  
  
##  <a name="cbutton__setstate"></a>  CButton::SetState  
 Sets whether a button control is highlighted or not.  
  
```  
void SetState(BOOL bHighlight);
```  
  
### Parameters  
 *bHighlight*  
 Specifies whether the button is to be highlighted. A nonzero value highlights the button; a 0 value removes any highlighting.  
  
### Remarks  
 Highlighting affects the exterior of a button control. It has no effect on the check state of a radio button or check box.  
  
 A button control is automatically highlighted when the user clicks and holds the left mouse button. The highlighting is removed when the user releases the mouse button.  
  
### Example  
 [!code-cpp[NVC_MFC_CButton#9](../../mfc/reference/codesnippet/cpp/cbutton-class_9.cpp)]  
  
##  <a name="cbutton__settextmargin"></a>  CButton::SetTextMargin  
 Call this method to set the text margin of the `CButton` object.  
  
```  
BOOL SetTextMargin(RECT* pmargin);
```  
  
### Parameters  
 `pmargin`  
 A pointer to the new text margin.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 This member function emulates the functionality of the **BCM_SETTEXTMARGIN** message, as described in the [Buttons](http://msdn.microsoft.com/library/windows/desktop/bb775943) section of the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [CComboBox Class](../../mfc/reference/ccombobox-class.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)   
 [CListBox Class](../../mfc/reference/clistbox-class.md)   
 [CScrollBar Class](../../mfc/reference/cscrollbar-class.md)   
 [CStatic Class](../../mfc/reference/cstatic-class.md)   
 [CBitmapButton Class](../../mfc/reference/cbitmapbutton-class.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)
