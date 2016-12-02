---
title: "CRichEditView Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CRichEditView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "document/view architecture, rich edit controls"
  - "OLE containers, rich edit"
  - "rich edit controls, OLE container"
  - "CRichEditView class"
ms.assetid: bd576b10-4cc0-4050-8f76-e1a0548411e4
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
# CRichEditView Class
With [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) and [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md), provides the functionality of the rich edit control within the context of MFC's document view architecture.  
  
## Syntax  
  
```  
class CRichEditView : public CCtrlView  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CRichEditView::CRichEditView](#cricheditview__cricheditview)|Constructs a `CRichEditView` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CRichEditView::AdjustDialogPosition](#cricheditview__adjustdialogposition)|Moves a dialog box so that it doesn't obscure the current selection.|  
|[CRichEditView::CanPaste](#cricheditview__canpaste)|Tells whether the Clipboard contains data that can be pasted into the rich edit view.|  
|[CRichEditView::DoPaste](#cricheditview__dopaste)|Pastes an OLE item into this rich edit view.|  
|[CRichEditView::FindText](#cricheditview__findtext)|Finds the specified text, invoking the wait cursor.|  
|[CRichEditView::FindTextSimple](#cricheditview__findtextsimple)|Finds the specified text.|  
|[CRichEditView::GetCharFormatSelection](#cricheditview__getcharformatselection)|Retrieves the character formatting attributes for the current selection.|  
|[CRichEditView::GetDocument](#cricheditview__getdocument)|Retrieves a pointer to the related [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md).|  
|[CRichEditView::GetInPlaceActiveItem](#cricheditview__getinplaceactiveitem)|Retrieves the OLE item that is currently in-place active in the rich edit view.|  
|[CRichEditView::GetMargins](#cricheditview__getmargins)|Retrieves the margins for this rich edit view.|  
|[CRichEditView::GetPageRect](#cricheditview__getpagerect)|Retrieves the page rectangle for this rich edit view.|  
|[CRichEditView::GetPaperSize](#cricheditview__getpapersize)|Retrieves the paper size for this rich edit view.|  
|[CRichEditView::GetParaFormatSelection](#cricheditview__getparaformatselection)|Retrieves the paragraph formatting attributes for the current selection.|  
|[CRichEditView::GetPrintRect](#cricheditview__getprintrect)|Retrieves the print rectangle for this rich edit view.|  
|[CRichEditView::GetPrintWidth](#cricheditview__getprintwidth)|Retrieves the print width for this rich edit view.|  
|[CRichEditView::GetRichEditCtrl](#cricheditview__getricheditctrl)|Retrieves the rich edit control.|  
|[CRichEditView::GetSelectedItem](#cricheditview__getselecteditem)|Retrieves the selected item from the rich edit view.|  
|[CRichEditView::GetTextLength](#cricheditview__gettextlength)|Retrieves the length of the text in the rich edit view.|  
|[CRichEditView::GetTextLengthEx](#cricheditview__gettextlengthex)|Retrieves the number of characters or bytes in the rich edit view. Expanded flag list for method of determining the length.|  
|[CRichEditView::InsertFileAsObject](#cricheditview__insertfileasobject)|Inserts a file as an OLE item.|  
|[CRichEditView::InsertItem](#cricheditview__insertitem)|Inserts a new item as an OLE item.|  
|[CRichEditView::IsRichEditFormat](#cricheditview__isricheditformat)|Tells whether the Clipboard contains data in a rich edit or text format.|  
|[CRichEditView::OnCharEffect](#cricheditview__onchareffect)|Toggles the character formatting for the current selection.|  
|[CRichEditView::OnParaAlign](#cricheditview__onparaalign)|Changes the alignment of paragraphs.|  
|[CRichEditView::OnUpdateCharEffect](#cricheditview__onupdatechareffect)|Updates the Command UI for character public member functions.|  
|[CRichEditView::OnUpdateParaAlign](#cricheditview__onupdateparaalign)|Updates the Command UI for paragraph public member functions.|  
|[CRichEditView::PrintInsideRect](#cricheditview__printinsiderect)|Formats the specified text within the given rectangle.|  
|[CRichEditView::PrintPage](#cricheditview__printpage)|Formats the specified text within the given page.|  
|[CRichEditView::SetCharFormat](#cricheditview__setcharformat)|Sets the character formatting attributes for the current selection.|  
|[CRichEditView::SetMargins](#cricheditview__setmargins)|Sets the margins for this rich edit view.|  
|[CRichEditView::SetPaperSize](#cricheditview__setpapersize)|Sets the paper size for this rich edit view.|  
|[CRichEditView::SetParaFormat](#cricheditview__setparaformat)|Sets the paragraph formatting attributes for the current selection.|  
|[CRichEditView::TextNotFound](#cricheditview__textnotfound)|Resets the internal search state of the control.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CRichEditView::GetClipboardData](#cricheditview__getclipboarddata)|Retrieves a Clipboard object for a range in this rich edit view.|  
|[CRichEditView::GetContextMenu](#cricheditview__getcontextmenu)|Retrieves a context menu to use on a right mouse-button down.|  
|[CRichEditView::IsSelected](#cricheditview__isselected)|Indicates if the given OLE item is selected or not.|  
|[CRichEditView::OnFindNext](#cricheditview__onfindnext)|Finds the next occurrence of a substring.|  
|[CRichEditView::OnInitialUpdate](#cricheditview__oninitialupdate)|Refreshes a view when it is first attached to a document.|  
|[CRichEditView::OnPasteNativeObject](#cricheditview__onpastenativeobject)|Retrieves native data from an OLE item.|  
|[CRichEditView::OnPrinterChanged](#cricheditview__onprinterchanged)|Sets the print characteristics to the given device.|  
|[CRichEditView::OnReplaceAll](#cricheditview__onreplaceall)|Replaces all occurrences of a given string with a new string.|  
|[CRichEditView::OnReplaceSel](#cricheditview__onreplacesel)|Replaces the current selection.|  
|[CRichEditView::OnTextNotFound](#cricheditview__ontextnotfound)|Handles user notification that the requested text was not found.|  
|[CRichEditView::QueryAcceptData](#cricheditview__queryacceptdata)|Queries to see about the data on the `IDataObject`.|  
|[CRichEditView::WrapChanged](#cricheditview__wrapchanged)|Adjusts the target output device for this rich edit view, based on the value of `m_nWordWrap`.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CRichEditView::m_nBulletIndent](#cricheditview__m_nbulletindent)|Indicates the amount of indent for bullet lists.|  
|[CRichEditView::m_nWordWrap](#cricheditview__m_nwordwrap)|Indicates the word wrap constraints.|  
  
## Remarks  
 A "rich edit control" is a window in which the user can enter and edit text. The text can be assigned character and paragraph formatting, and can include embedded OLE objects. Rich edit controls provide a programming interface for formatting text. However, an application must implement any user interface components necessary to make formatting operations available to the user.  
  
 `CRichEditView` maintains the text and formatting characteristic of text. `CRichEditDoc` maintains the list of OLE client items which are in the view. `CRichEditCntrItem` provides container-side access to the OLE client item.  
  
 This Windows Common control (and therefore the [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) and related classes) is available only to programs running under Windows 95/98 and Windows NT versions 3.51 and later.  
  
 For an example of using a rich edit view in an MFC application, see the [WORDPAD](../../visual-cpp-samples.md) sample application.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CCtrlView](../../mfc/reference/cctrlview-class.md)  
  
 `CRichEditView`  
  
## Requirements  
 **Header:** afxrich.h  
  
##  <a name="cricheditview__adjustdialogposition"></a>  CRichEditView::AdjustDialogPosition  
 Call this function to move the given dialog box so that it does not obscure the current selection.  
  
```  
void AdjustDialogPosition(CDialog* pDlg);
```  
  
### Parameters  
 *pDlg*  
 Pointer to a `CDialog` object.  
  
##  <a name="cricheditview__canpaste"></a>  CRichEditView::CanPaste  
 Call this function to determine if the Clipboard contains information that can be pasted into this rich edit view.  
  
```  
BOOL CanPaste() const;

 
```  
  
### Return Value  
 Nonzero if the Clipboard contains data in a format which this rich edit view can accept; otherwise, 0.  
  
##  <a name="cricheditview__cricheditview"></a>  CRichEditView::CRichEditView  
 Call this function to create a `CRichEditView` object.  
  
```  
CRichEditView();
```  
  
##  <a name="cricheditview__dopaste"></a>  CRichEditView::DoPaste  
 Call this function to paste the OLE item in `dataobj` into this rich edit document/view.  
  
```  
void DoPaste(
    COleDataObject& dataobj,  
    CLIPFORMAT cf,  
    HMETAFILEPICT hMetaPict);
```  
  
### Parameters  
 `dataobj`  
 The [COleDataObject](../../mfc/reference/coledataobject-class.md) containing the data to paste.  
  
 `cf`  
 The desired Clipboard format.  
  
 `hMetaPict`  
 The metafile that represents the item to be pasted.  
  
### Remarks  
 The framework calls this function as part of the default implementation of [QueryAcceptData](#cricheditview__queryacceptdata).  
  
 This function determines the type of paste based on the results of the handler for Paste Special. If `cf` is 0, the new item uses the current iconic representation. If `cf` is nonzero and `hMetaPict` is not **NULL**, the new item uses `hMetaPict` for its representation.  
  
##  <a name="cricheditview__findtext"></a>  CRichEditView::FindText  
 Call this function to find the specified text and set it to be the current selection.  
  
```  
BOOL FindText(
    LPCTSTR lpszFind,  
    BOOL bCase = TRUE,  
    BOOL bWord = TRUE,  
    BOOL bNext = TRUE);
```  
  
### Parameters  
 `lpszFind`  
 Contains the string to search for.  
  
 `bCase`  
 Indicates if the search is case sensitive.  
  
 `bWord`  
 Indicates if the search should match whole words only, not parts of words.  
  
 `bNext`  
 Indicates the direction of the search. If **TRUE**, the search direction is toward the end of the buffer. If **FALSE**, the search direction is toward the beginning of the buffer.  
  
### Return Value  
 Nonzero if the `lpszFind` text is found; otherwise 0.  
  
### Remarks  
 This function displays the wait cursor during the find operation.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#151](../../mfc/codesnippet/cpp/cricheditview-class_1.cpp)]  
  
##  <a name="cricheditview__findtextsimple"></a>  CRichEditView::FindTextSimple  
 Call this function to find the specified text and set it to be the current selection.  
  
```  
BOOL FindTextSimple(
    LPCTSTR lpszFind,  
    BOOL bCase = TRUE,  
    BOOL bWord = TRUE,  
    BOOL bNext = TRUE);
```  
  
### Parameters  
 `lpszFind`  
 Contains the string to search for.  
  
 `bCase`  
 Indicates if the search is case sensitive.  
  
 `bWord`  
 Indicates if the search should match whole words only, not parts of words.  
  
 `bNext`  
 Indicates the direction of the search. If **TRUE**, the search direction is toward the end of the buffer. If **FALSE**, the search direction is toward the beginning of the buffer.  
  
### Return Value  
 Nonzero if the `lpszFind` text is found; otherwise 0.  
  
### Example  
  See the example for [CRichEditView::FindText](#cricheditview__findtext).  
  
##  <a name="cricheditview__getcharformatselection"></a>  CRichEditView::GetCharFormatSelection  
 Call this function to get the character formatting attributes of the current selection.  
  
```  
CHARFORMAT2& GetCharFormatSelection();
```  
  
### Return Value  
 A [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) structure which contains the character formatting attributes of the current selection.  
  
### Remarks  
 For more information, see the [EM_GETCHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb788026) message and the [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_MFCDocView#152](../../mfc/codesnippet/cpp/cricheditview-class_2.cpp)]  
  
##  <a name="cricheditview__getclipboarddata"></a>  CRichEditView::GetClipboardData  
 The framework calls this function as part of the processing of [IRichEditOleCallback::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/bb774315).  
  
```  
virtual HRESULT GetClipboardData(
    CHARRANGE* lpchrg,  
    DWORD dwReco,  
    LPDATAOBJECT lpRichDataObj,  
    LPDATAOBJECT* lplpdataobj);
```  
  
### Parameters  
 `lpchrg`  
 Pointer to the [CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) structure specifying the range of characters (and OLE items) to copy to the data object specified by `lplpdataobj`.  
  
 `dwReco`  
 Clipboard operation flag. Can be one of these values.  
  
- **RECO_COPY** Copy to the Clipboard.  
  
- **RECO_CUT** Cut to the Clipboard.  
  
- **RECO_DRAG** Drag operation (drag and drop).  
  
- **RECO_DROP** Drop operation (drag and drop).  
  
- **RECO_PASTE** Paste from the Clipboard.  
  
 `lpRichDataObj`  
 Pointer to an [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) object containing the Clipboard data from the rich edit control ( [IRichEditOle::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/bb774341)).  
  
 `lplpdataobj`  
 Pointer to the pointer variable that receives the address of the `IDataObject` object representing the range specified in the `lpchrg` parameter. The value of `lplpdataobj` is ignored if an error is returned.  
  
### Return Value  
 An `HRESULT` value reporting the success of the operation. For more information on `HRESULT`, see [Structure of COM Error Codes](http://msdn.microsoft.com/library/windows/desktop/ms690088) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Remarks  
 If the return value indicates success, **IRichEditOleCallback::GetClipboardData** returns the `IDataObject` accessed by `lplpdataobj`; otherwise, it returns the one accessed by `lpRichDataObj`. Override this function to supply your own Clipboard data. The default implementation of this function returns **E_NOTIMPL**.  
  
 This is an advanced overridable.  
  
 For more information, see [IRichEditOle::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/bb774341), [IRichEditOleCallback::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/bb774315), and [CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] and see [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) in the [!INCLUDE[winsdkshort](../../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
##  <a name="cricheditview__getcontextmenu"></a>  CRichEditView::GetContextMenu  
 The framework calls this function as part of the processing of [IRichEditOleCallback::GetContextMenu](http://msdn.microsoft.com/library/windows/desktop/bb774317).  
  
```  
virtual HMENU GetContextMenu(
    WORD seltyp,  
    LPOLEOBJECT lpoleobj,  
    CHARRANGE* lpchrg);
```  
  
### Parameters  
 *seltyp*  
 The selection type. The selection type values are described in the Remarks section.  
  
 `lpoleobj`  
 Pointer to a **OLEOBJECT** structure specifying the first selected OLE object if the selection contains one or more OLE items. If the selection contains no items, `lpoleobj` is **NULL**. The **OLEOBJECT** structure holds a pointer to an OLE object v-table.  
  
 `lpchrg`  
 Pointer to a [CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) structure containing the current selection.  
  
### Return Value  
 Handle to the context menu.  
  
### Remarks  
 This function is a typical part of right mouse-button down processing.  
  
 The selection type can be any combination of the following flags:  
  
- `SEL_EMPTY` Indicates that there is no current selection.  
  
- `SEL_TEXT` Indicates that the current selection contains text.  
  
- `SEL_OBJECT` Indicates that the current selection contains at least one OLE item.  
  
- `SEL_MULTICHAR` Indicates that the current selection contains more than one character of text.  
  
- `SEL_MULTIOBJECT` Indicates that the current selection contains more than one OLE object.  
  
 The default implementation returns **NULL**. This is an advanced overridable.  
  
 For more information, see [IRichEditOleCallback::GetContextMenu](http://msdn.microsoft.com/library/windows/desktop/bb774317) and [CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 For more information on the **OLEOBJECT** type, see the OLE Data Structures and Structure Allocation article in the *OLE Knowledge Base*.  
  
##  <a name="cricheditview__getdocument"></a>  CRichEditView::GetDocument  
 Call this function to get a pointer to the `CRichEditDoc` associated with this view.  
  
```  
CRichEditDoc* GetDocument() const;

 
```  
  
### Return Value  
 Pointer to a [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) object associated with your `CRichEditView` object.  
  
##  <a name="cricheditview__getinplaceactiveitem"></a>  CRichEditView::GetInPlaceActiveItem  
 Call this function to get the OLE item that is currently activated in place in this `CRichEditView` object.  
  
```  
CRichEditCntrItem* GetInPlaceActiveItem() const;

 
```  
  
### Return Value  
 A pointer to the single, in-place active [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) object in this rich edit view; **NULL** if there is no OLE item currently in the in-place active state.  
  
##  <a name="cricheditview__getmargins"></a>  CRichEditView::GetMargins  
 Call this function to retrieve the current margins used in printing.  
  
```  
CRect GetMargins() const;

 
```  
  
### Return Value  
 The margins used in printing, measured in `MM_TWIPS`.  
  
##  <a name="cricheditview__getpagerect"></a>  CRichEditView::GetPageRect  
 Call this function to get the dimensions of the page used in printing.  
  
```  
CRect GetPageRect() const;

 
```  
  
### Return Value  
 The bounds of the page used in printing, measured in `MM_TWIPS`.  
  
### Remarks  
 This value is based on the paper size.  
  
##  <a name="cricheditview__getpapersize"></a>  CRichEditView::GetPaperSize  
 Call this function to retrieve the current paper size.  
  
```  
CSize GetPaperSize() const;

 
```  
  
### Return Value  
 The size of the paper used in printing, measured in `MM_TWIPS`.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#153](../../mfc/codesnippet/cpp/cricheditview-class_3.cpp)]  
  
##  <a name="cricheditview__getparaformatselection"></a>  CRichEditView::GetParaFormatSelection  
 Call this function to get the paragraph formatting attributes of the current selection.  
  
```  
PARAFORMAT2& GetParaFormatSelection();
```  
  
### Return Value  
 A [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) structure which contains the paragraph formatting attributes of the current selection.  
  
### Remarks  
 For more information, see [EM_GETPARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774182) message and [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cricheditview__getprintrect"></a>  CRichEditView::GetPrintRect  
 Call this function to retrieve the bounds of the printing area within the page rectangle.  
  
```  
CRect GetPrintRect() const;

 
```  
  
### Return Value  
 The bounds of the image area used in printing, measured in `MM_TWIPS`.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#154](../../mfc/codesnippet/cpp/cricheditview-class_4.cpp)]  
  
##  <a name="cricheditview__getprintwidth"></a>  CRichEditView::GetPrintWidth  
 Call this function to determine the width of the printing area.  
  
```  
int GetPrintWidth() const;

 
```  
  
### Return Value  
 The width of the printing area, measured in `MM_TWIPS`.  
  
##  <a name="cricheditview__getricheditctrl"></a>  CRichEditView::GetRichEditCtrl  
 Call this function to retrieve the [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) object associated with the `CRichEditView` object.  
  
```  
CRichEditCtrl& GetRichEditCtrl() const;

 
```  
  
### Return Value  
 The `CRichEditCtrl` object for this view.  
  
### Example  
  See the example for [CRichEditView::FindText](#cricheditview__findtext).  
  
##  <a name="cricheditview__getselecteditem"></a>  CRichEditView::GetSelectedItem  
 Call this function to retrieve the OLE item (a `CRichEditCntrItem` object) currently selected in this `CRichEditView` object.  
  
```  
CRichEditCntrItem* GetSelectedItem() const;

 
```  
  
### Return Value  
 Pointer to a [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) object selected in the `CRichEditView` object; **NULL** if no item is selected in this view.  
  
##  <a name="cricheditview__gettextlength"></a>  CRichEditView::GetTextLength  
 Call this function to retrieve the length of the text in this `CRichEditView` object.  
  
```  
long GetTextLength() const;

 
```  
  
### Return Value  
 The length of the text in this `CRichEditView` object.  
  
##  <a name="cricheditview__gettextlengthex"></a>  CRichEditView::GetTextLengthEx  
 Call this member function to calculate the length of the text in this `CRichEditView` object.  
  
```  
long GetTextLengthEx(
    DWORD dwFlags,  
    UINT uCodePage = -1) const;

 
```  
  
### Parameters  
 `dwFlags`  
 Value specifying the method to be used in determining the text length. This member can be one or more of the values listed in the flags member of [GETTEXTLENGTHEX](http://msdn.microsoft.com/library/windows/desktop/bb787915) described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `uCodePage`  
 Code page for translation (CP_ACP for ANSI Code Page, 1200 for Unicode).  
  
### Return Value  
 The number of characters or bytes in the edit control. If incompatible flags were set in `dwFlags`, this member function returns `E_INVALIDARG`.  
  
### Remarks  
 `GetTextLengthEx` provides additional ways of determining the length of the text. It supports the Rich Edit 2.0 functionality. For more information, see [About Rich Edit Controls](http://msdn.microsoft.com/library/windows/desktop/bb787873) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cricheditview__insertfileasobject"></a>  CRichEditView::InsertFileAsObject  
 Call this function to insert the specified file (as a [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) object) into a rich edit view.  
  
```  
void InsertFileAsObject(LPCTSTR lpszFileName);
```  
  
### Parameters  
 `lpszFileName`  
 String containing the name of the file to be inserted.  
  
##  <a name="cricheditview__insertitem"></a>  CRichEditView::InsertItem  
 Call this function to insert a [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) object into a rich edit view.  
  
```  
HRESULT InsertItem(CRichEditCntrItem* pItem);
```  
  
### Parameters  
 `pItem`  
 Pointer to the item to be inserted.  
  
### Return Value  
 An `HRESULT` value indicating the success of the insertion.  
  
### Remarks  
 For more information on `HRESULT`, see [Structure of COM Error Codes](http://msdn.microsoft.com/library/windows/desktop/ms690088) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cricheditview__isricheditformat"></a>  CRichEditView::IsRichEditFormat  
 Call this function to determine if `cf` is a Clipboard format which is text, rich text, or rich text with OLE items.  
  
```  
static BOOL AFX_CDECL IsRichEditFormat(CLIPFORMAT cf);
```  
  
### Parameters  
 `cf`  
 The Clipboard format of interest.  
  
### Return Value  
 Nonzero if `cf` is a rich edit or text Clipboard format.  
  
##  <a name="cricheditview__isselected"></a>  CRichEditView::IsSelected  
 Call this function to determine if the specified OLE item is currently selected in this view.  
  
```  
virtual BOOL IsSelected(const CObject* pDocItem) const;

 
```  
  
### Parameters  
 `pDocItem`  
 Pointer to an object in the view.  
  
### Return Value  
 Nonzero if the object is selected; otherwise 0.  
  
### Remarks  
 Override this function if your derived view class has a different method for handling selection of OLE items.  
  
##  <a name="cricheditview__m_nbulletindent"></a>  CRichEditView::m_nBulletIndent  
 The indentation for bullet items in a list; by default, 720 units, which is 1/2 inch.  
  
```  
int m_nBulletIndent;  
```  
  
##  <a name="cricheditview__m_nwordwrap"></a>  CRichEditView::m_nWordWrap  
 Indicates the type of word wrap for this rich edit view.  
  
```  
int m_nWordWrap;  
```  
  
### Remarks  
 One of the following values:  
  
- `WrapNone` Indicates no automatic word wrapping.  
  
- `WrapToWindow` Indicates word wrapping based on the width of the window.  
  
- `WrapToTargetDevice` Indicates word wrapping based on the characteristics of the target device.  
  
### Example  
  See the example for [CRichEditView::WrapChanged](#cricheditview__wrapchanged).  
  
##  <a name="cricheditview__onchareffect"></a>  CRichEditView::OnCharEffect  
 Call this function to toggle the character formatting effects for the current selection.  
  
```  
void OnCharEffect(
    DWORD dwMask,  
    DWORD dwEffect);
```  
  
### Parameters  
 `dwMask`  
 The character formatting effects to modify in the current selection.  
  
 `dwEffect`  
 The desired list of character formatting effects to toggle.  
  
### Remarks  
 Each call to this function toggles the specified formatting effects for the current selection.  
  
 For more information on the `dwMask` and `dwEffect` parameters and their potential values, see the corresponding data members of [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_MFCDocView#155](../../mfc/codesnippet/cpp/cricheditview-class_5.cpp)]  
  
##  <a name="cricheditview__onfindnext"></a>  CRichEditView::OnFindNext  
 Called by the framework when processing commands from the Find/Replace dialog box.  
  
```  
virtual void OnFindNext(
    LPCTSTR lpszFind,  
    BOOL bNext,  
    BOOL bCase,  
    BOOL bWord);
```  
  
### Parameters  
 `lpszFind`  
 The string to find.  
  
 `bNext`  
 The direction to search: **TRUE** indicates down; **FALSE**, up.  
  
 `bCase`  
 Indicates whether the search is to be case sensitive.  
  
 `bWord`  
 Indicates whether the search is to match whole words only or not.  
  
### Remarks  
 Call this function to find text within the `CRichEditView`. Override this function to alter search characteristics for your derived view class.  
  
##  <a name="cricheditview__oninitialupdate"></a>  CRichEditView::OnInitialUpdate  
 Called by the framework after the view is first attached to the document, but before the view is initially displayed.  
  
```  
virtual void OnInitialUpdate();
```  
  
### Remarks  
 The default implementation of this function calls the [CView::OnUpdate](../../mfc/reference/cview-class.md#cview__onupdate) member function with no hint information (that is, using the default values of 0 for the `lHint` parameter and **NULL** for the `pHint` parameter). Override this function to perform any one-time initialization that requires information about the document. For example, if your application has fixed-sized documents, you can use this function to initialize a view's scrolling limits based on the document size. If your application supports variable-sized documents, use `OnUpdate` to update the scrolling limits every time the document changes.  
  
### Example  
  See the example for [CRichEditView::m_nWordWrap](#cricheditview__m_nwordwrap).  
  
##  <a name="cricheditview__onpastenativeobject"></a>  CRichEditView::OnPasteNativeObject  
 Use this function to load native data from an embedded item.  
  
```  
virtual BOOL OnPasteNativeObject(LPSTORAGE lpStg);
```  
  
### Parameters  
 *lpStg*  
 Pointer to an [IStorage](http://msdn.microsoft.com/library/windows/desktop/aa380015) object.  
  
### Return Value  
 Nonzero if successful; otherwise, 0;  
  
### Remarks  
 Typically, you would do this by creating a [COleStreamFile](../../mfc/reference/colestreamfile-class.md) around the `IStorage`. The `COleStreamFile` can be attached to an archive and [CObject::Serialize](../../mfc/reference/cobject-class.md#cobject__serialize) called to load the data.  
  
 This is an advanced overridable.  
  
 For more information, see [IStorage](http://msdn.microsoft.com/library/windows/desktop/aa380015) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cricheditview__onparaalign"></a>  CRichEditView::OnParaAlign  
 Call this function to change the paragraph alignment for the selected paragraphs.  
  
```  
void OnParaAlign(WORD wAlign);
```  
  
### Parameters  
 `wAlign`  
 Desired paragraph alignment. One of the following values:  
  
- `PFA_LEFT` Align the paragraphs with the left margin.  
  
- `PFA_RIGHT` Align the paragraphs with the right margin.  
  
- `PFA_CENTER` Center the paragraphs between the margins.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#156](../../mfc/codesnippet/cpp/cricheditview-class_6.cpp)]  
  
##  <a name="cricheditview__onprinterchanged"></a>  CRichEditView::OnPrinterChanged  
 Override this function to change characteristics for this rich edit view when the printer changes.  
  
```  
virtual void OnPrinterChanged(const CDC& dcPrinter);
```  
  
### Parameters  
 `dcPrinter`  
 A [CDC](../../mfc/reference/cdc-class.md) object for the new printer.  
  
### Remarks  
 The default implementation sets the paper size to the physical height and width for the output device (printer). If there is no device context associated with `dcPrinter`, the default implementation sets the paper size to 8.5 by 11 inches.  
  
##  <a name="cricheditview__onreplaceall"></a>  CRichEditView::OnReplaceAll  
 Called by the framework when processing Replace All commands from the Replace dialog box.  
  
```  
virtual void OnReplaceAll(
    LPCTSTR lpszFind,  
    LPCTSTR lpszReplace,  
    BOOL bCase,  
    BOOL bWord);
```  
  
### Parameters  
 `lpszFind`  
 The text to be replaced.  
  
 `lpszReplace`  
 The replacement text.  
  
 `bCase`  
 Indicates if the search is case sensitive.  
  
 `bWord`  
 Indicates if the search must select whole words or not.  
  
### Remarks  
 Call this function to replace all occurrences of some given text with another string. Override this function to alter search characteristics for this view.  
  
### Example  
  See the example for [CRichEditView::FindText](#cricheditview__findtext).  
  
##  <a name="cricheditview__onreplacesel"></a>  CRichEditView::OnReplaceSel  
 Called by the framework when processing Replace commands from the Replace dialog box.  
  
```  
virtual void OnReplaceSel(
    LPCTSTR lpszFind,  
    BOOL bNext,  
    BOOL bCase,  
    BOOL bWord,  
    LPCTSTR lpszReplace);
```  
  
### Parameters  
 `lpszFind`  
 The text to be replaced.  
  
 `bNext`  
 Indicates the direction of the search: **TRUE** is down; **FALSE**, up.  
  
 `bCase`  
 Indicates if the search is case sensitive.  
  
 `bWord`  
 Indicates if the search must select whole words or not.  
  
 `lpszReplace`  
 The replacement text.  
  
### Remarks  
 Call this function to replace one occurrence of some given text with another string. Override this function to alter search characteristics for this view.  
  
##  <a name="cricheditview__ontextnotfound"></a>  CRichEditView::OnTextNotFound  
 Called by the framework whenever a search fails.  
  
```  
virtual void OnTextNotFound(LPCTSTR lpszFind);
```  
  
### Parameters  
 `lpszFind`  
 The text which was not found.  
  
### Remarks  
 Override this function to change the output notification from a [MessageBeep](http://msdn.microsoft.com/library/windows/desktop/ms680356).  
  
 For more information, see [MessageBeep](http://msdn.microsoft.com/library/windows/desktop/ms680356) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_MFCDocView#157](../../mfc/codesnippet/cpp/cricheditview-class_7.cpp)]  
  
##  <a name="cricheditview__onupdatechareffect"></a>  CRichEditView::OnUpdateCharEffect  
 The framework calls this function to update the command UI for character effect commands.  
  
```  
void OnUpdateCharEffect(
    CCmdUI* pCmdUI,  
    DWORD dwMask,  
    DWORD dwEffect);
```  
  
### Parameters  
 `pCmdUI`  
 Pointer to a [CCmdUI](../../mfc/reference/ccmdui-class.md) object.  
  
 `dwMask`  
 Indicates the character formatting mask.  
  
 `dwEffect`  
 Indicates the character formatting effect.  
  
### Remarks  
 The mask `dwMask` specifies which character formatting attributes to check. The flags `dwEffect` list the character formatting attributes to set/clear.  
  
 For more information on the `dwMask` and `dwEffect` parameters and their potential values, see the corresponding data members of [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_MFCDocView#158](../../mfc/codesnippet/cpp/cricheditview-class_8.cpp)]  
  
##  <a name="cricheditview__onupdateparaalign"></a>  CRichEditView::OnUpdateParaAlign  
 The framework calls this function to update the command UI for paragraph effect commands.  
  
```  
void OnUpdateParaAlign(
    CCmdUI* pCmdUI,  
    WORD wAlign);
```  
  
### Parameters  
 `pCmdUI`  
 Pointer to a [CCmdUI](../../mfc/reference/ccmdui-class.md) object.  
  
 `wAlign`  
 The paragraph alignment to check. One of the following values:  
  
- `PFA_LEFT` Align the paragraphs with the left margin.  
  
- `PFA_RIGHT` Align the paragraphs with the right margin.  
  
- `PFA_CENTER` Center the paragraphs between the margins.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#159](../../mfc/codesnippet/cpp/cricheditview-class_9.cpp)]  
  
##  <a name="cricheditview__printinsiderect"></a>  CRichEditView::PrintInsideRect  
 Call this function to format a range of text in a rich edit control to fit within *rectLayout* for the device specified by `pDC`.  
  
```  
long PrintInsideRect(
    CDC* pDC,  
    RECT& rectLayout,  
    long nIndexStart,  
    long nIndexStop,  
    BOOL bOutput);
```  
  
### Parameters  
 `pDC`  
 Pointer to a device context for the output area.  
  
 *rectLayout*  
 [RECT](../../mfc/reference/rect-structure1.md) or [CRect](../../atl-mfc-shared/reference/crect-class.md) which defines the output area.  
  
 `nIndexStart`  
 Zero-based index of the first character to be formatted.  
  
 `nIndexStop`  
 Zero-based index of the last character to be formatted.  
  
 *bOutput*  
 Indicates if the text should be rendered. If **FALSE**, the text is just measured.  
  
### Return Value  
 The index of the last character that fits in the output area plus one.  
  
### Remarks  
 Typically, this call is followed by a call to [CRichEditCtrl::DisplayBand](../../mfc/reference/cricheditctrl-class.md#cricheditctrl__displayband) which generates the output.  
  
### Example  
  See the example for [CRichEditView::GetPaperSize](#cricheditview__getpapersize).  
  
##  <a name="cricheditview__printpage"></a>  CRichEditView::PrintPage  
 Call this function to format a range of text in a rich edit control for the output device specified by `pDC`.  
  
```  
long PrintPage(
    CDC* pDC,  
    long nIndexStart,  
    long nIndexStop);
```  
  
### Parameters  
 `pDC`  
 Pointer to a device context for page output.  
  
 `nIndexStart`  
 Zero-based index of the first character to be formatted.  
  
 `nIndexStop`  
 Zero-based index of the last character to be formatted.  
  
### Return Value  
 The index of the last character that fits on the page plus one.  
  
### Remarks  
 The layout of each page is controlled by [GetPageRect](#cricheditview__getpagerect) and [GetPrintRect](#cricheditview__getprintrect). Typically, this call is followed by a call to [CRichEditCtrl::DisplayBand](../../mfc/reference/cricheditctrl-class.md#cricheditctrl__displayband) which generates the output.  
  
 Note that margins are relative to the physical page, not the logical page. Thus, margins of zero will often clip the text since many printers have unprintable areas on the page. To avoid clipping your text, you should call [SetMargins](#cricheditview__setmargins) and set reasonable margins before printing.  
  
##  <a name="cricheditview__queryacceptdata"></a>  CRichEditView::QueryAcceptData  
 Called by the framework to paste an object into the rich edit.  
  
```  
virtual HRESULT QueryAcceptData(
    LPDATAOBJECT lpdataobj,  
    CLIPFORMAT* lpcfFormat,  
    DWORD dwReco,  
    BOOL bReally,  
    HGLOBAL hMetaFile);
```  
  
### Parameters  
 *lpdataobj*  
 Pointer to the [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) to query.  
  
 *lpcfFormat*  
 Pointer to the acceptable data format.  
  
 `dwReco`  
 Not used.  
  
 *bReally*  
 Indicates if the paste operation should continue or not.  
  
 `hMetaFile`  
 A handle to the metafile used for drawing the item's icon.  
  
### Return Value  
 An `HRESULT` value reporting the success of the operation.  
  
### Remarks  
 Override this function to handle different organization of COM items in your derived document class. This is an advanced overridable.  
  
 For more information on `HRESULT` and `IDataObject`, see [Structure of COM Error Codes](http://msdn.microsoft.com/library/windows/desktop/ms690088) and [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421), respectively, in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_MFCDocView#160](../../mfc/codesnippet/cpp/cricheditview-class_10.cpp)]  
  
##  <a name="cricheditview__setcharformat"></a>  CRichEditView::SetCharFormat  
 Call this function to set the character formatting attributes for new text in this `CRichEditView` object.  
  
```  
void SetCharFormat(CHARFORMAT2 cf);
```  
  
### Parameters  
 `cf`  
 [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) structure containing the new default character formatting attributes.  
  
### Remarks  
 Only the attributes specified by the **dwMask** member of `cf` are changed by this function.  
  
 For more information, see [EM_SETCHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774230) message and [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_MFCDocView#152](../../mfc/codesnippet/cpp/cricheditview-class_2.cpp)]  
  
##  <a name="cricheditview__setmargins"></a>  CRichEditView::SetMargins  
 Call this function to set the printing margins for this rich edit view.  
  
```  
void SetMargins(const CRect& rectMargin);
```  
  
### Parameters  
 *rectMargin*  
 The new margin values for printing, measured in `MM_TWIPS`.  
  
### Remarks  
 If [m_nWordWrap](#cricheditview__m_nwordwrap) is `WrapToTargetDevice`, you should call [WrapChanged](#cricheditview__wrapchanged) after using this function to adjust printing characteristics.  
  
 Note that the margins used by [PrintPage](#cricheditview__printpage) are relative to the physical page, not the logical page. Thus, margins of zero will often clip the text since many printers have unprintable areas on the page. To avoid clipping your text, you should call use `SetMargins` to set reasonable printer margins before printing.  
  
### Example  
  See the example for [CRichEditView::GetPaperSize](#cricheditview__getpapersize).  
  
##  <a name="cricheditview__setpapersize"></a>  CRichEditView::SetPaperSize  
 Call this function to set the paper size for printing this rich edit view.  
  
```  
void SetPaperSize(CSize sizePaper);
```  
  
### Parameters  
 *sizePaper*  
 The new paper size values for printing, measured in `MM_TWIPS`.  
  
### Remarks  
 If [m_nWordWrap](#cricheditview__m_nwordwrap) is `WrapToTargetDevice`, you should call [WrapChanged](#cricheditview__wrapchanged) after using this function to adjust printing characteristics.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#161](../../mfc/codesnippet/cpp/cricheditview-class_11.cpp)]  
  
##  <a name="cricheditview__setparaformat"></a>  CRichEditView::SetParaFormat  
 Call this function to set the paragraph formatting attributes for the current selection in this `CRichEditView` object.  
  
```  
BOOL SetParaFormat(PARAFORMAT2& pf);
```  
  
### Parameters  
 `pf`  
 [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) structure containing the new default paragraph formatting attributes.  
  
### Return Value  
 Nonzero if successful; otherwise, 0.  
  
### Remarks  
 Only the attributes specified by the **dwMask** member of `pf` are changed by this function.  
  
 For more information, see [EM_SETPARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774276) message and [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_MFCDocView#162](../../mfc/codesnippet/cpp/cricheditview-class_12.cpp)]  
  
##  <a name="cricheditview__textnotfound"></a>  CRichEditView::TextNotFound  
 Call this function to reset the internal search state of the [CRichEditView](../../mfc/reference/cricheditview-class.md) control after a failed call to [FindText](#cricheditview__findtext).  
  
```  
void TextNotFound(LPCTSTR lpszFind);
```  
  
### Parameters  
 `lpszFind`  
 Contains the text string that was not found.  
  
### Remarks  
 It is recommended that this method be called immediately after failed calls to [FindText](#cricheditview__findtext) so that the internal search state of the control is properly reset.  
  
 The `lpszFind` parameter should include the same content as the string provided to [FindText](#cricheditview__findtext). After resetting the internal search state, this method will call the [OnTextNotFound](#cricheditview__ontextnotfound) method with the provided search string.  
  
### Example  
  See the example for [CRichEditView::FindText](#cricheditview__findtext).  
  
##  <a name="cricheditview__wrapchanged"></a>  CRichEditView::WrapChanged  
 Call this function when the printing characteristics have changed ( [SetMargins](#cricheditview__setmargins) or [SetPaperSize](#cricheditview__setpapersize)).  
  
```  
virtual void WrapChanged();
```  
  
### Remarks  
 Override this function to modify the way the rich edit view responds to changes in [m_nWordWrap](#cricheditview__m_nwordwrap) or the printing characteristics ( [OnPrinterChanged](#cricheditview__onprinterchanged)).  
  
### Example  
 [!code-cpp[NVC_MFCDocView#163](../../mfc/codesnippet/cpp/cricheditview-class_13.cpp)]  
  
## See Also  
 [MFC Sample WORDPAD](../../visual-cpp-samples.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CRichEditDoc Class](../../mfc/reference/cricheditdoc-class.md)   
 [CRichEditCntrItem Class](../../mfc/reference/cricheditcntritem-class.md)
