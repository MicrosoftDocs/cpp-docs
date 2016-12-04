---
title: "CHtmlEditCtrlBase Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CHtmlEditCtrlBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHtmlEditCtrlBase class"
ms.assetid: e0cc74b4-8320-4570-b673-16c03d2ae266
caps.latest.revision: 21
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
# CHtmlEditCtrlBase Class
Represents an HTML editing component.  
  
## Syntax  
  
```  
template <class T> class CHtmlEditCtrlBase  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CHtmlEditCtrlBase::AddToGlyphTable](#chtmleditctrlbase__addtoglyphtable)|Adds an entry to the glyph table, which specifies images to display for specific tags in design mode.|  
|[CHtmlEditCtrlBase::Bold](#chtmleditctrlbase__bold)|Toggles the bold state of the selected text.|  
|[CHtmlEditCtrlBase::Button](#chtmleditctrlbase__button)|Overwrites a button control on the current selection.|  
|[CHtmlEditCtrlBase::CheckBox](#chtmleditctrlbase__checkbox)|Overwrites a check box control on the current selection.|  
|[CHtmlEditCtrlBase::ClearSelection](#chtmleditctrlbase__clearselection)|Clears the current selection.|  
|[CHtmlEditCtrlBase::Copy](#chtmleditctrlbase__copy)|Copies the current selection to the clipboard.|  
|[CHtmlEditCtrlBase::Cut](#chtmleditctrlbase__cut)|Copies the current selection to the clipboard and then deletes it.|  
|[CHtmlEditCtrlBase::Delete](#chtmleditctrlbase__delete)|Deletes the current selection.|  
|[CHtmlEditCtrlBase::DropDownBox](#chtmleditctrlbase__dropdownbox)|Overwrites a drop-down selection control on the current selection.|  
|[CHtmlEditCtrlBase::EmptyGlyphTable](#chtmleditctrlbase__emptyglyphtable)|Removes all entries from the glyph table, which hides all images displayed for tags in design mode.|  
|[CHtmlEditCtrlBase::ExecCommand](#chtmleditctrlbase__execcommand)|Executes a command.|  
|[CHtmlEditCtrlBase::Font](#chtmleditctrlbase__font)|Opens a font dialog box to enable the user to change the text color, font, and font size of the current selection.|  
|[CHtmlEditCtrlBase::GetAbsolutePosition](#chtmleditctrlbase__getabsoluteposition)|Returns whether an element's position property is "absolute."|  
|[CHtmlEditCtrlBase::GetBackColor](#chtmleditctrlbase__getbackcolor)|Retrieves the background color of the current selection.|  
|[CHtmlEditCtrlBase::GetBlockFormat](#chtmleditctrlbase__getblockformat)|Retrieves the current block format tag.|  
|[CHtmlEditCtrlBase::GetBlockFormatNames](#chtmleditctrlbase__getblockformatnames)|Retrieves the strings corresponding to the available block format tags.|  
|[CHtmlEditCtrlBase::GetBookMark](#chtmleditctrlbase__getbookmark)|Retrieves the name of a bookmark anchor.|  
|[CHtmlEditCtrlBase::GetDocument](#chtmleditctrlbase__getdocument)|Retrieves the document object.|  
|[CHtmlEditCtrlBase::GetDocumentHTML](#chtmleditctrlbase__getdocumenthtml)|Retrieves the HTML of the current document.|  
|[CHtmlEditCtrlBase::GetDocumentTitle](#chtmleditctrlbase__getdocumenttitle)|Retrieves the document's title.|  
|[CHtmlEditCtrlBase::GetEvent](#chtmleditctrlbase__getevent)|Retrieves an interface pointer to the event object that contains information relevant to the most recent event.|  
|[CHtmlEditCtrlBase::GetEventSrcElement](#chtmleditctrlbase__geteventsrcelement)|Retrieves the object that fired the event.|  
|[CHtmlEditCtrlBase::GetFontFace](#chtmleditctrlbase__getfontface)|Retrieves the font name for the current selection.|  
|[CHtmlEditCtrlBase::GetFontSize](#chtmleditctrlbase__getfontsize)|Retrieves the font size for the current selection.|  
|[CHtmlEditCtrlBase::GetForeColor](#chtmleditctrlbase__getforecolor)|Retrieves the foreground (text) color of the current selection.|  
|[CHtmlEditCtrlBase::GetFrameZone](#chtmleditctrlbase__getframezone)|Returns the security zone of the current page in the web browser.|  
|[CHtmlEditCtrlBase::GetIsDirty](#chtmleditctrlbase__getisdirty)|Indicates whether the HTML document has changed.|  
|[CHtmlEditCtrlBase::GetShowAlignedSiteTags](#chtmleditctrlbase__getshowalignedsitetags)|Returns whether a glyph is displayed for all elements that have a **styleFloat** property.|  
|[CHtmlEditCtrlBase::GetShowAllTags](#chtmleditctrlbase__getshowalltags)|Returns whether the WebBrowser displays glyphs to show the location of all tags in a document.|  
|[CHtmlEditCtrlBase::GetShowAreaTags](#chtmleditctrlbase__getshowareatags)|Retrieves whether the WebBrowser displays a glyph for area tags.|  
|[CHtmlEditCtrlBase::GetShowBRTags](#chtmleditctrlbase__getshowbrtags)|Retrieves whether the WebBrowser displays a glyph for br tags.|  
|[CHtmlEditCtrlBase::GetShowCommentTags](#chtmleditctrlbase__getshowcommenttags)|Retrieves whether the WebBrowser displays a glyph for comment tags.|  
|[CHtmlEditCtrlBase::GetShowMiscTags](#chtmleditctrlbase__getshowmisctags)|Retrieves whether the WebBrowser displays all the tags shown in Microsoft Internet Explorer 4.0.|  
|[CHtmlEditCtrlBase::GetShowScriptTags](#chtmleditctrlbase__getshowscripttags)|Retrieves whether the WebBrowser displays a glyph for all the script tags.|  
|[CHtmlEditCtrlBase::GetShowStyleTags](#chtmleditctrlbase__getshowstyletags)|Retrieves whether the WebBrowser displays a glyph for all the style tags.|  
|[CHtmlEditCtrlBase::GetShowUnknownTags](#chtmleditctrlbase__getshowunknowntags)|Retrieves whether the WebBrowser displays a glyph for all unknown tags.|  
|[CHtmlEditCtrlBase::HorizontalLine](#chtmleditctrlbase__horizontalline)|Overwrites a horizontal line on the current selection.|  
|[CHtmlEditCtrlBase::HyperLink](#chtmleditctrlbase__hyperlink)|Inserts a hyperlink on the current selection.|  
|[CHtmlEditCtrlBase::IE50Paste](#chtmleditctrlbase__ie50paste)|Performs a paste operation compatible with Microsoft Internet Explorer 5.|  
|[CHtmlEditCtrlBase::Iframe](#chtmleditctrlbase__iframe)|Overwrites an inline frame on the current selection.|  
|[CHtmlEditCtrlBase::Image](#chtmleditctrlbase__image)|Overwrites an image on the current selection.|  
|[CHtmlEditCtrlBase::Indent](#chtmleditctrlbase__indent)|Increases the indent of the selected text by one indentation increment.|  
|[CHtmlEditCtrlBase::InsFieldSet](#chtmleditctrlbase__insfieldset)|Overwrites a box on the current selection.|  
|[CHtmlEditCtrlBase::InsInputButton](#chtmleditctrlbase__insinputbutton)|Overwrites a button control on the current selection.|  
|[CHtmlEditCtrlBase::InsInputHidden](#chtmleditctrlbase__insinputhidden)|Inserts a hidden control on the current selection.|  
|[CHtmlEditCtrlBase::InsInputImage](#chtmleditctrlbase__insinputimage)|Overwrites an image control on the current selection.|  
|[CHtmlEditCtrlBase::InsInputPassword](#chtmleditctrlbase__insinputpassword)|Overwrites a password control on the current selection.|  
|[CHtmlEditCtrlBase::InsInputReset](#chtmleditctrlbase__insinputreset)|Overwrites a reset control on the current selection.|  
|[CHtmlEditCtrlBase::InsInputSubmit](#chtmleditctrlbase__insinputsubmit)|Overwrites a submit control on the current selection.|  
|[CHtmlEditCtrlBase::InsInputUpload](#chtmleditctrlbase__insinputupload)|Overwrites a file upload control on the current selection.|  
|[CHtmlEditCtrlBase::Is1DElement](#chtmleditctrlbase__is1delement)|Determines if an element is statically positioned.|  
|[CHtmlEditCtrlBase::Is2DElement](#chtmleditctrlbase__is2delement)|Determines if an element is absolutely positioned.|  
|[CHtmlEditCtrlBase::Italic](#chtmleditctrlbase__italic)|Toggles the current selection between italic and nonitalic.|  
|[CHtmlEditCtrlBase::JustifyCenter](#chtmleditctrlbase__justifycenter)|Centers the format block in which the current selection is located.|  
|[CHtmlEditCtrlBase::JustifyLeft](#chtmleditctrlbase__justifyleft)|Left-justifies the format block in which the current selection is located.|  
|[CHtmlEditCtrlBase::JustifyRight](#chtmleditctrlbase__justifyright)|Right-justifies the format block in which the current selection is located.|  
|[CHtmlEditCtrlBase::ListBox](#chtmleditctrlbase__listbox)|Overwrites a list box selection control on the current selection.|  
|[CHtmlEditCtrlBase::Marquee](#chtmleditctrlbase__marquee)|Overwrites an empty marquee on the current selection.|  
|[CHtmlEditCtrlBase::NewDocument](#chtmleditctrlbase__newdocument)|Creates a new document.|  
|[CHtmlEditCtrlBase::OrderList](#chtmleditctrlbase__orderlist)|Toggles the current selection between an ordered list and a normal format block.|  
|[CHtmlEditCtrlBase::Outdent](#chtmleditctrlbase__outdent)|Decreases by one increment the indentation of the format block in which the current selection is located.|  
|[CHtmlEditCtrlBase::Paragraph](#chtmleditctrlbase__paragraph)|Overwrites a line break on the current selection.|  
|[CHtmlEditCtrlBase::Paste](#chtmleditctrlbase__paste)|Overwrites the contents of the clipboard on the current selection.|  
|[CHtmlEditCtrlBase::PrintDocument](#chtmleditctrlbase__printdocument)|Prints the current document.|  
|[CHtmlEditCtrlBase::PrintPreview](#chtmleditctrlbase__printpreview)|Opens the Print Preview window for the current document using either the default print preview template or a custom template.|  
|[CHtmlEditCtrlBase::QueryStatus](#chtmleditctrlbase__querystatus)|Call this method to query the status of commands.|  
|[CHtmlEditCtrlBase::RadioButton](#chtmleditctrlbase__radiobutton)|Overwrites a radio control on the current selection.|  
|[CHtmlEditCtrlBase::RefreshDocument](#chtmleditctrlbase__refreshdocument)|Refreshes the current document.|  
|[CHtmlEditCtrlBase::RemoveFormat](#chtmleditctrlbase__removeformat)|Removes the formatting tags from the current selection.|  
|[CHtmlEditCtrlBase::SaveAs](#chtmleditctrlbase__saveas)|Saves the current Web page to a file.|  
|[CHtmlEditCtrlBase::SelectAll](#chtmleditctrlbase__selectall)|Selects the entire document.|  
|[CHtmlEditCtrlBase::Set2DPosition](#chtmleditctrlbase__set2dposition)|Allows absolutely positioned elements to be moved by dragging.|  
|[CHtmlEditCtrlBase::SetAbsolutePosition](#chtmleditctrlbase__setabsoluteposition)|Sets an element's position property to "absolute" or "static."|  
|[CHtmlEditCtrlBase::SetAtomicSelection](#chtmleditctrlbase__setatomicselection)|Set atomic selection mode.|  
|[CHtmlEditCtrlBase::SetAutoURLDetectMode](#chtmleditctrlbase__setautourldetectmode)|Turns automatic URL detection on and off.|  
|[CHtmlEditCtrlBase::SetBackColor](#chtmleditctrlbase__setbackcolor)|Sets the background color of the current selection.|  
|[CHtmlEditCtrlBase::SetBlockFormat](#chtmleditctrlbase__setblockformat)|Sets the current block format tag.|  
|[CHtmlEditCtrlBase::SetBookMark](#chtmleditctrlbase__setbookmark)|Creates a bookmark anchor for the current selection or insertion point.|  
|[CHtmlEditCtrlBase::SetCSSEditingLevel](#chtmleditctrlbase__setcsseditinglevel)|Selects which CSS level (CSS1 or CSS2) the editor will support, if any.|  
|[CHtmlEditCtrlBase::SetDefaultComposeSettings](#chtmleditctrlbase__setdefaultcomposesettings)|Call this method to set the default compose settings.|  
|[CHtmlEditCtrlBase::SetDesignMode](#chtmleditctrlbase__setdesignmode)|Set design mode.|  
|[CHtmlEditCtrlBase::SetDisableEditFocusUI](#chtmleditctrlbase__setdisableeditfocusui)|Disables the hatched border and handles around an element that has edit focus.|  
|[CHtmlEditCtrlBase::SetDocumentHTML](#chtmleditctrlbase__setdocumenthtml)|Sets the HTML of the current document.|  
|[CHtmlEditCtrlBase::SetFontFace](#chtmleditctrlbase__setfontface)|Sets the font for the current selection.|  
|[CHtmlEditCtrlBase::SetFontSize](#chtmleditctrlbase__setfontsize)|Sets the font size for the current selection.|  
|[CHtmlEditCtrlBase::SetForeColor](#chtmleditctrlbase__setforecolor)|Sets the foreground (text) color of the current selection.|  
|[CHtmlEditCtrlBase::SetIE5PasteMode](#chtmleditctrlbase__setie5pastemode)|Sets the paste operation to be compatible with Microsoft Internet Explorer 5.|  
|[CHtmlEditCtrlBase::SetLiveResize](#chtmleditctrlbase__setliveresize)|Causes the WebBrowser to update an element's appearance continuously during a resizing or moving operation.|  
|[CHtmlEditCtrlBase::SetMultiSelect](#chtmleditctrlbase__setmultiselect)|Enables multiple selection.|  
|[CHtmlEditCtrlBase::SetOverrideCursor](#chtmleditctrlbase__setoverridecursor)|Commands the WebBrowser never to change the mouse pointer.|  
|[CHtmlEditCtrlBase::SetOverwriteMode](#chtmleditctrlbase__setoverwritemode)|Toggles the text-entry mode between insert and overwrite.|  
|[CHtmlEditCtrlBase::SetRespectVisInDesign](#chtmleditctrlbase__setrespectvisindesign)|Hides invisible elements in design mode.|  
|[CHtmlEditCtrlBase::SetShowAlignedSiteTags](#chtmleditctrlbase__setshowalignedsitetags)|Displays a glyph for all elements that have a **styleFloat** property.|  
|[CHtmlEditCtrlBase::SetShowAllTags](#chtmleditctrlbase__setshowalltags)|Displays glyphs to show the location of all tags in a document.|  
|[CHtmlEditCtrlBase::SetShowAreaTags](#chtmleditctrlbase__setshowareatags)|Displays a glyph for all the area tags.|  
|[CHtmlEditCtrlBase::SetShowBRTags](#chtmleditctrlbase__setshowbrtags)|Displays a glyph for all the br tags.|  
|[CHtmlEditCtrlBase::SetShowCommentTags](#chtmleditctrlbase__setshowcommenttags)|Displays a glyph for all the comment tags.|  
|[CHtmlEditCtrlBase::SetShowMiscTags](#chtmleditctrlbase__setshowmisctags)|Displays all the tags shown in Microsoft Internet Explorer 4.0.|  
|[CHtmlEditCtrlBase::SetShowScriptTags](#chtmleditctrlbase__setshowscripttags)|Displays a glyph for all the script tags.|  
|[CHtmlEditCtrlBase::SetShowStyleTags](#chtmleditctrlbase__setshowstyletags)|Displays a glyph for all the style tags.|  
|[CHtmlEditCtrlBase::SetShowUnknownTags](#chtmleditctrlbase__setshowunknowntags)|Displays a glyph for all the unknown tags.|  
|[CHtmlEditCtrlBase::TextArea](#chtmleditctrlbase__textarea)|Overwrites a multiline text input control on the current selection.|  
|[CHtmlEditCtrlBase::TextBox](#chtmleditctrlbase__textbox)|Overwrites a text control on the current selection.|  
|[CHtmlEditCtrlBase::UnBookmark](#chtmleditctrlbase__unbookmark)|Removes any bookmark from the current selection.|  
|[CHtmlEditCtrlBase::Underline](#chtmleditctrlbase__underline)|Toggles the current selection between underlined and not underlined.|  
|[CHtmlEditCtrlBase::Unlink](#chtmleditctrlbase__unlink)|Removes any hyperlink from the current selection.|  
|[CHtmlEditCtrlBase::UnorderList](#chtmleditctrlbase__unorderlist)|Toggles the current selection between an ordered list and a normal format block.|  
  
#### Parameters  
 `T`  
 The name of the derived class.  
  
## Remarks  
 **CHtmlEditCtrlBase** provides member functions for the WebBrowser's HTML editing commands, such as [Bold](#chtmleditctrlbase__bold). (Alternately, you can call [ExecCommand](#chtmleditctrlbase__execcommand) to execute the **IDM_BOLD** command.)  
  
 **CHtmlEditCtrlBase** is not intended to stand on its own. It is designed to be a base class for derived classes that expose the HTML editing functionality of the WebBrowser (see [CHtmlEditCtrl](../../mfc/reference/chtmleditctrl-class.md) and [CHtmlEditView](../../mfc/reference/chtmleditview-class.md)).  
  
## Inheritance Hierarchy  
 `CHtmlEditCtrlBase`  
  
## Requirements  
 **Header:** afxhtml.h  
  
##  <a name="chtmleditctrlbase__addtoglyphtable"></a>  CHtmlEditCtrlBase::AddToGlyphTable  
 Adds an entry to the glyph table, which specifies images to display for specific tags in design mode.  
  
```  
HRESULT AddToGlyphTable(
    LPCTSTR szTag,  
    LPCTSTR szImgUrl,  
    unsigned short nTagType,  
    unsigned short nAlignment,  
    unsigned short nPosInfo,  
    unsigned short nDirection,  
    unsigned int nImgWidth,  
    unsigned int nImgHeight) const;

 
```  
  
### Parameters  
 `szTag`  
 The tag name (for example, "P" or "table").  
  
 *szImgUrl*  
 The image URL.  
  
 *nTagType*  
 Tag type: 0 means the image is for the opening tag only. 1 means the image is for the closing tag only. 2 means the image is for both the opening and closing tags. Single tags such as br and comment must be added with the tag type set to 0.  
  
 *nAlignment*  
 Alignment (rectangular elements only): This parameter indicates that the image is for an element with an alignment attribute. Left = 0, center = 1, right = 2, and undefined = 3. Left, right, or center attributes must be explicitly set on the element.  
  
 *nPosInfo*  
 Positioning information. Determines what cascading style sheets (CSS) positioning value the glyph applies to, where static positioning = 0, absolute positioning = 1, relative positioning = 2, and all = 3. This field enables you to specify one glyph for a tag when it is not positioned and another glyph to show an anchor point when the tag is positioned.  
  
 *nDirection*  
 The direction. This parameter specifies the image for a tag based on the reading order of the current language. 0 specifies left to right, 1 specifies right to left, 2 specifies top to bottom, 3 specifies bottom to top, and 4 specifies all. You normally set this field to 4.  
  
 *nImgWidth*  
 The image width in pixels.  
  
 *nImgHeight*  
 The image height in pixels.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 For more information on the parameters, see "Glyph Table String Format" in [Using Editing Glyphs](https://msdn.microsoft.com/library/aa969614.aspx).  
  
 This method sends the [IDM_ADDTOGLYPHTABLE command ID](https://msdn.microsoft.com/library/aa769891.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__bold"></a>  CHtmlEditCtrlBase::Bold  
 Toggles the bold state of the selected text.  
  
```  
HRESULT Bold() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_BOLD command ID](https://msdn.microsoft.com/library/aa769861.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__button"></a>  CHtmlEditCtrlBase::Button  
 Overwrites a button control on the current selection.  
  
```  
HRESULT Button(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID of the button control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_BUTTON command ID](https://msdn.microsoft.com/library/aa769966.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__checkbox"></a>  CHtmlEditCtrlBase::CheckBox  
 Overwrites a check box control on the current selection.  
  
```  
HRESULT CheckBox(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID of the check box control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_CHECKBOX command ID](https://msdn.microsoft.com/library/aa769972.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__clearselection"></a>  CHtmlEditCtrlBase::ClearSelection  
 Clears the current selection.  
  
```  
HRESULT ClearSelection() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_CLEARSELECTION command ID](https://msdn.microsoft.com/library/aa770038.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__copy"></a>  CHtmlEditCtrlBase::Copy  
 Copies the current selection to the clipboard.  
  
```  
HRESULT Copy() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_COPY command ID](https://msdn.microsoft.com/library/aa769872.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__cut"></a>  CHtmlEditCtrlBase::Cut  
 Copies the current selection to the clipboard and then deletes it.  
  
```  
HRESULT Cut() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_CUT command ID](https://msdn.microsoft.com/library/aa769875.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__delete"></a>  CHtmlEditCtrlBase::Delete  
 Deletes the current selection.  
  
```  
HRESULT Delete() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_DELETE command ID](https://msdn.microsoft.com/library/aa769876.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__dropdownbox"></a>  CHtmlEditCtrlBase::DropDownBox  
 Overwrites a drop-down selection control on the current selection.  
  
```  
HRESULT DropDownBox(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID of the drop-down selection control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_DROPDOWNBOX command ID](https://msdn.microsoft.com/library/aa769984.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__emptyglyphtable"></a>  CHtmlEditCtrlBase::EmptyGlyphTable  
 Removes all entries from the glyph table, which hides all images displayed for tags in design mode.  
  
```  
HRESULT EmptyGlyphTable() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_EMPTYGLYPHTABLE command ID](https://msdn.microsoft.com/library/aa769907.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__execcommand"></a>  CHtmlEditCtrlBase::ExecCommand  
 Executes a command.  
  
```  
HRESULT ExecCommand(
    long cmdID,  
    long cmdExecOpt,  
    VARIANT* pInVar = NULL,  
    VARIANT* pOutVar = NULL) const;

 
 
HRESULT ExecCommand(
    const GUID* pGuid,  
    long cmdID,  
    long cmdExecOpt,  
    VARIANT* pInVar = NULL,  
    VARIANT* pOutVar = NULL) const;

 
```  
  
### Parameters  
 `cmdID`  
 The command ID to be executed. For a list, see [MSHTML Command Identifiers](https://msdn.microsoft.com/library/aa741315.aspx).  
  
 `cmdExecOpt`  
 Values taken from the [OLECMDEXECOPT](http://msdn.microsoft.com/library/windows/desktop/ms683930) enumeration, which describe how the object should execute the command.  
  
 *pInVar*  
 The input arguments.  
  
 *pOutVar*  
 The command output.  
  
 *pGuid*  
 The GUID of the command group.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method provides the functionality of [IOleCommandTarget::Exec](http://msdn.microsoft.com/library/windows/desktop/ms690300).  
  
##  <a name="chtmleditctrlbase__font"></a>  CHtmlEditCtrlBase::Font  
 Opens a font dialog box to enable the user to change the text color, font, and font size of the current selection.  
  
```  
HRESULT Font() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_FONT command ID](https://msdn.microsoft.com/library/aa769913.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__getabsoluteposition"></a>  CHtmlEditCtrlBase::GetAbsolutePosition  
 Returns whether an element's position property is "absolute."  
  
```  
HRESULT GetAbsolutePosition(bool& bCurValue) const;

 
```  
  
### Parameters  
 `bCurValue`  
 True if the element's position property is set to "absolute."  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 For more information, see [IDM_ABSOLUTE_POSITION Command ID](https://msdn.microsoft.com/library/aa769889.aspx).  
  
##  <a name="chtmleditctrlbase__getbackcolor"></a>  CHtmlEditCtrlBase::GetBackColor  
 Retrieves the background color of the current selection.  
  
```  
HRESULT GetBackColor(int& nColor) const;

 
```  
  
### Parameters  
 `nColor`  
 The background color.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_BACKCOLOR Command ID](https://msdn.microsoft.com/library/aa769858.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__getblockformat"></a>  CHtmlEditCtrlBase::GetBlockFormat  
 Retrieves the current block format tag.  
  
```  
HRESULT GetBlockFormat(CString& strFormat) const;

 
```  
  
### Parameters  
 *strFormat*  
 The current block format tag.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_BLOCKFMT command ID](https://msdn.microsoft.com/library/aa769883.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__getblockformatnames"></a>  CHtmlEditCtrlBase::GetBlockFormatNames  
 Retrieves the strings corresponding to the available block format tags.  
  
```  
HRESULT GetBlockFormatNames(CStringArray& sa) const;

 
```  
  
### Parameters  
 *sa*  
 The available block format tags, as an array of strings.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_GETBLOCKFMTS command ID](https://msdn.microsoft.com/library/aa769884.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__getbookmark"></a>  CHtmlEditCtrlBase::GetBookMark  
 Retrieves the name of a bookmark anchor.  
  
```  
HRESULT GetBookMark(CString& strAnchor) const;

 
```  
  
### Parameters  
 *strAnchor*  
 The name of a bookmark anchor.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 For more information, see [IDM_BOOKMARK Command ID](https://msdn.microsoft.com/library/aa769873.aspx).  
  
##  <a name="chtmleditctrlbase__getdocument"></a>  CHtmlEditCtrlBase::GetDocument  
 Retrieves the document object.  
  
```  
HRESULT GetDocument(IHTMLDocument2** ppDoc) const;

 
```  
  
### Parameters  
 `ppDoc`  
 The document object.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="chtmleditctrlbase__getdocumenthtml"></a>  CHtmlEditCtrlBase::GetDocumentHTML  
 Retrieves the HTML of the current document.  
  
```  
HRESULT GetDocumentHTML(CString& szHTML) const;

 
```  
  
### Parameters  
 `szHTML`  
 The HTML.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="chtmleditctrlbase__getdocumenttitle"></a>  CHtmlEditCtrlBase::GetDocumentTitle  
 Retrieves the document's title.  
  
```  
HRESULT GetDocumentTitle(CString& szTitle) const;

 
```  
  
### Parameters  
 *szTitle*  
 The document's title.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="chtmleditctrlbase__getevent"></a>  CHtmlEditCtrlBase::GetEvent  
 Retrieves an interface pointer to the event object that contains information relevant to the most recent event.  
  
```  
HRESULT GetEvent(IHTMLEventObj** ppEventObj) const;

 
```  
  
### Parameters  
 `ppEventObj`  
 The event object.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="chtmleditctrlbase__geteventsrcelement"></a>  CHtmlEditCtrlBase::GetEventSrcElement  
 Retrieves the object that fired the event.  
  
```  
HRESULT GetEventSrcElement(IHTMLElement** ppSrcElement) const;

 
```  
  
### Parameters  
 *ppSrcElement*  
 The element that fired the event.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="chtmleditctrlbase__getfontface"></a>  CHtmlEditCtrlBase::GetFontFace  
 Retrieves the font name for the current selection.  
  
```  
HRESULT GetFontFace(CString& strFace) const;

 
```  
  
### Parameters  
 `strFace`  
 The font name.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 If the current selection uses more than one font, `strFace` will be an empty string.  
  
 This method sends the [IDM_FONTNAME command ID](https://msdn.microsoft.com/library/aa769880.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__getfontsize"></a>  CHtmlEditCtrlBase::GetFontSize  
 Retrieves the font size for the current selection.  
  
```  
HRESULT GetFontSize(short& nSize) const;

 
```  
  
### Parameters  
 `nSize`  
 The font size.  
  
### Return Value  
 Returns the HTML font size (1-7). Returns 0 if the selection contains multiple font sizes.  
  
### Remarks  
 This method sends the [IDM_FONTSIZE command ID](https://msdn.microsoft.com/library/aa769881.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__getforecolor"></a>  CHtmlEditCtrlBase::GetForeColor  
 Retrieves the foreground (text) color of the current selection.  
  
```  
HRESULT GetForeColor(int& nColor);
```  
  
### Parameters  
 `nColor`  
 The foreground color.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_FORECOLOR Command ID](https://msdn.microsoft.com/library/aa769882.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__getframezone"></a>  CHtmlEditCtrlBase::GetFrameZone  
 Returns the security zone of the current page in the web browser.  
  
```  
HRESULT GetFrameZone(short& nZone) const;

 
```  
  
### Parameters  
 *nZone*  
 The security zone.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_GETFRAMEZONE command ID](https://msdn.microsoft.com/library/aa769916.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__getisdirty"></a>  CHtmlEditCtrlBase::GetIsDirty  
 Indicates whether the HTML document has changed.  
  
```  
HRESULT GetIsDirty() const;

 
```  
  
### Remarks  
 Indicates whether the document has changed. `GetIsDirty` returns an `HRESULT` from [IPersistStorage::IsDirty](http://msdn.microsoft.com/library/windows/desktop/ms683910).  
  
##  <a name="chtmleditctrlbase__getshowalignedsitetags"></a>  CHtmlEditCtrlBase::GetShowAlignedSiteTags  
 Returns whether a glyph is displayed for all elements that have a **styleFloat** property.  
  
```  
HRESULT GetShowAlignedSiteTags(bool& bCurValue) const;

 
```  
  
### Parameters  
 `bCurValue`  
 True if a glyph is displayed for all elements that have a **styleFloat** property; false if no glyph is displayed.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 For more information, see [IDM_SHOWALIGNEDSITETAGS Command ID](https://msdn.microsoft.com/library/aa769947.aspx).  
  
##  <a name="chtmleditctrlbase__getshowalltags"></a>  CHtmlEditCtrlBase::GetShowAllTags  
 Returns whether the WebBrowser displays glyphs to show the location of all tags in a document.  
  
```  
HRESULT GetShowAllTags(bool& bCurValue) const;

 
```  
  
### Parameters  
 `bCurValue`  
 True if the WebBrowser displays glyphs to show the location of all tags in a document; false if it does not.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 For more information, see [IDM_SHOWALLTAGS Command ID](https://msdn.microsoft.com/library/aa769948.aspx).  
  
##  <a name="chtmleditctrlbase__getshowareatags"></a>  CHtmlEditCtrlBase::GetShowAreaTags  
 Retrieves whether the WebBrowser displays a glyph for area tags.  
  
```  
HRESULT GetShowAreaTags(bool& bCurValue) const;

 
```  
  
### Parameters  
 `bCurValue`  
 True if the WebBrowser displays a glyph for area tags, false if it does not.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 For more information, see [IDM_SHOWAREATAGS Command ID](https://msdn.microsoft.com/library/aa769949.aspx).  
  
##  <a name="chtmleditctrlbase__getshowbrtags"></a>  CHtmlEditCtrlBase::GetShowBRTags  
 Retrieves whether the WebBrowser displays a glyph for br tags.  
  
```  
HRESULT GetShowBRTags(bool& bCurValue) const;

 
```  
  
### Parameters  
 `bCurValue`  
 True if the WebBrowser displays a glyph for br tags, false if it doesn't.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 For more information, see [IDM_SHOWWBRTAGS Command ID](https://msdn.microsoft.com/library/aa769956.aspx).  
  
##  <a name="chtmleditctrlbase__getshowcommenttags"></a>  CHtmlEditCtrlBase::GetShowCommentTags  
 Retrieves whether the WebBrowser displays a glyph for comment tags.  
  
```  
HRESULT GetShowCommentTags(bool& bCurValue) const;

 
```  
  
### Parameters  
 `bCurValue`  
 True if the WebBrowser displays a glyph for comment tags, false if it doesn't.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 For more information, see [IDM_SHOWCOMMENTTAGS Command ID](https://msdn.microsoft.com/library/aa769950.aspx).  
  
##  <a name="chtmleditctrlbase__getshowmisctags"></a>  CHtmlEditCtrlBase::GetShowMiscTags  
 Retrieves whether the WebBrowser displays all the tags shown in Microsoft Internet Explorer 4.0.  
  
```  
HRESULT GetShowMiscTags(bool& bCurValue) const;

 
```  
  
### Parameters  
 `bCurValue`  
 True if the WebBrowser displays all the tags shown in Microsoft Internet Explorer 4.0, false if it does not.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 For more information, see [IDM_SHOWMISCTAGS Command ID](https://msdn.microsoft.com/library/aa769952.aspx).  
  
##  <a name="chtmleditctrlbase__getshowscripttags"></a>  CHtmlEditCtrlBase::GetShowScriptTags  
 Retrieves whether the WebBrowser displays a glyph for all the script tags.  
  
```  
HRESULT GetShowScriptTags(bool& bCurValue) const;

 
```  
  
### Parameters  
 `bCurValue`  
 True if the WebBrowser displays a glyph for all the script tags, false if it does not.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 For more information, see [IDM_SHOWSCRIPTTAGS Command ID](https://msdn.microsoft.com/library/aa769953.aspx).  
  
##  <a name="chtmleditctrlbase__getshowstyletags"></a>  CHtmlEditCtrlBase::GetShowStyleTags  
 Retrieves whether the WebBrowser displays a glyph for all the style tags.  
  
```  
HRESULT GetShowStyleTags(bool& bCurValue) const;

 
```  
  
### Parameters  
 `bCurValue`  
 True if the WebBrowser displays a glyph for all the style tags, false if it does not  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 For more information, see [IDM_SHOWSTYLETAGS Command ID](https://msdn.microsoft.com/library/aa769954.aspx).  
  
##  <a name="chtmleditctrlbase__getshowunknowntags"></a>  CHtmlEditCtrlBase::GetShowUnknownTags  
 Retrieves whether the WebBrowser displays a glyph for all unknown tags.  
  
```  
HRESULT GetShowUnknownTags(bool& bCurValue) const;

 
```  
  
### Parameters  
 `bCurValue`  
 True if the WebBrowser displays a glyph for all unknown tags, false if it does not.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 For more information, see [IDM_SHOWUNKNOWNTAGS Command ID](https://msdn.microsoft.com/library/aa769955.aspx).  
  
##  <a name="chtmleditctrlbase__horizontalline"></a>  CHtmlEditCtrlBase::HorizontalLine  
 Overwrites a horizontal line on the current selection.  
  
```  
HRESULT HorizontalLine(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 *szID*  
 The ID for the horizontal line.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_HORIZONTALLINE command ID](https://msdn.microsoft.com/library/aa769968.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__hyperlink"></a>  CHtmlEditCtrlBase::HyperLink  
 Inserts a hyperlink on the current selection.  
  
```  
HRESULT HyperLink(LPCTSTR szUrl = NULL) const;

 
```  
  
### Parameters  
 `szUrl`  
 The hyperlink URL.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_HYPERLINK command ID](https://msdn.microsoft.com/library/aa769874.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__ie50paste"></a>  CHtmlEditCtrlBase::IE50Paste  
 Performs a paste operation that's compatible with Internet Explorer 5.  
  
```  
HRESULT IE50Paste(LPCTSTR szData) const;

 
```  
  
### Parameters  
 `szData`  
 The string to paste.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_IE50_PASTE command ID](https://msdn.microsoft.com/library/aa769922.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__iframe"></a>  CHtmlEditCtrlBase::Iframe  
 Overwrites an inline frame on the current selection.  
  
```  
HRESULT Iframe(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID for the inline frame.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_IFRAME command ID](https://msdn.microsoft.com/library/aa769969.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__image"></a>  CHtmlEditCtrlBase::Image  
 Overwrites an image on the current selection.  
  
```  
HRESULT Image(LPCTSTR szUrl = NULL) const;

 
```  
  
### Parameters  
 `szUrl`  
 The path and file name of the image to be inserted.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_IMAGE command ID](https://msdn.microsoft.com/library/aa769970.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__indent"></a>  CHtmlEditCtrlBase::Indent  
 Increases the indent of the selected text by one indentation increment.  
  
```  
HRESULT Indent() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_INDENT command ID](https://msdn.microsoft.com/library/aa769963.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__insfieldset"></a>  CHtmlEditCtrlBase::InsFieldSet  
 Overwrites a box on the current selection.  
  
```  
HRESULT InsFieldSet(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID for the box.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_INSFIELDSET command ID](https://msdn.microsoft.com/library/aa769967.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__insinputbutton"></a>  CHtmlEditCtrlBase::InsInputButton  
 Overwrites a button control on the current selection.  
  
```  
HRESULT InsInputButton(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID for the button control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_INSINPUTBUTTON command ID](https://msdn.microsoft.com/library/aa769971.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__insinputhidden"></a>  CHtmlEditCtrlBase::InsInputHidden  
 Inserts a hidden control on the current selection.  
  
```  
HRESULT InsInputHidden(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID for the hidden control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_INSINPUTHIDDEN command ID](https://msdn.microsoft.com/library/aa769974.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__insinputimage"></a>  CHtmlEditCtrlBase::InsInputImage  
 Overwrites an image control on the current selection.  
  
```  
HRESULT InsInputImage(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID for the image control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_INSINPUTIMAGE command ID](https://msdn.microsoft.com/library/aa769975.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__insinputpassword"></a>  CHtmlEditCtrlBase::InsInputPassword  
 Overwrites a password control on the current selection.  
  
```  
HRESULT InsInputPassword(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID for the password control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_INSINPUTPASSWORD command ID](https://msdn.microsoft.com/library/aa769976.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__insinputreset"></a>  CHtmlEditCtrlBase::InsInputReset  
 Overwrites a reset control on the current selection.  
  
```  
HRESULT InsInputReset(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID for the reset control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_INSINPUTRESET command ID](https://msdn.microsoft.com/library/aa769978.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__insinputsubmit"></a>  CHtmlEditCtrlBase::InsInputSubmit  
 Overwrites a submit control on the current selection.  
  
```  
HRESULT InsInputSubmit(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID for the submit control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_INSINPUTSUBMIT command ID](https://msdn.microsoft.com/library/aa769979.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__insinputupload"></a>  CHtmlEditCtrlBase::InsInputUpload  
 Overwrites a file upload control on the current selection.  
  
```  
HRESULT InsInputUpload(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID for the file upload control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_INSINPUTUPLOAD command ID](https://msdn.microsoft.com/library/aa769973.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__is1delement"></a>  CHtmlEditCtrlBase::Is1DElement  
 Determines if an element is statically positioned.  
  
```  
HRESULT Is1DElement(bool& bValue) const;

 
```  
  
### Parameters  
 `bValue`  
 True if the element is statically positioned, false otherwise.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_1D_ELEMENT command ID](https://msdn.microsoft.com/library/aa769885.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__is2delement"></a>  CHtmlEditCtrlBase::Is2DElement  
 Determines if an element is absolutely positioned.  
  
```  
HRESULT Is2DElement(bool& bValue) const;

 
```  
  
### Parameters  
 `bValue`  
 True if the element is absolutely positioned, false otherwise.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_2D_ELEMENT command ID](https://msdn.microsoft.com/library/aa769886.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__italic"></a>  CHtmlEditCtrlBase::Italic  
 Toggles the current selection between italic and nonitalic.  
  
```  
HRESULT Italic() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_ITALIC command ID](https://msdn.microsoft.com/library/aa769988.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__justifycenter"></a>  CHtmlEditCtrlBase::JustifyCenter  
 Centers the format block in which the current selection is located.  
  
```  
HRESULT JustifyCenter() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_JUSTIFYCENTER command ID](https://msdn.microsoft.com/library/aa769989.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__justifyleft"></a>  CHtmlEditCtrlBase::JustifyLeft  
 Left-justifies the format block in which the current selection is located.  
  
```  
HRESULT JustifyLeft() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_JUSTIFYLEFT command ID](https://msdn.microsoft.com/library/aa770011.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__justifyright"></a>  CHtmlEditCtrlBase::JustifyRight  
 Right-justifies the format block in which the current selection is located.  
  
```  
HRESULT JustifyRight() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_JUSTIFYRIGHT command ID](https://msdn.microsoft.com/library/aa770013.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__listbox"></a>  CHtmlEditCtrlBase::ListBox  
 Overwrites a list box selection control on the current selection.  
  
```  
HRESULT ListBox(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID for the list box control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_LISTBOX command ID](https://msdn.microsoft.com/library/aa769985.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__marquee"></a>  CHtmlEditCtrlBase::Marquee  
 Overwrites an empty marquee on the current selection.  
  
```  
HRESULT Marquee(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID for the marquee.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_MARQUEE command ID](https://msdn.microsoft.com/library/aa769981.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__newdocument"></a>  CHtmlEditCtrlBase::NewDocument  
 Creates a new document.  
  
```  
HRESULT NewDocument() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="chtmleditctrlbase__orderlist"></a>  CHtmlEditCtrlBase::OrderList  
 Toggles the current selection between an ordered list and a normal format block.  
  
```  
HRESULT OrderList(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID for the ordered list.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_ORDERLIST command ID](https://msdn.microsoft.com/library/aa769982.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__outdent"></a>  CHtmlEditCtrlBase::Outdent  
 Decreases by one increment the indentation of the format block in which the current selection is located.  
  
```  
HRESULT Outdent() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_OUTDENT command ID](https://msdn.microsoft.com/library/aa770015.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__paragraph"></a>  CHtmlEditCtrlBase::Paragraph  
 Overwrites a line break on the current selection.  
  
```  
HRESULT Paragraph(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID for the paragraph.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_PARAGRAPH command ID](https://msdn.microsoft.com/library/aa769983.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__paste"></a>  CHtmlEditCtrlBase::Paste  
 Overwrites the contents of the clipboard on the current selection.  
  
```  
HRESULT Paste() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_PASTE command ID](https://msdn.microsoft.com/library/aa770017.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__printdocument"></a>  CHtmlEditCtrlBase::PrintDocument  
 Prints the current document.  
  
```  
HRESULT PrintDocument() const;

 
 
HRESULT PrintDocument(LPCTSTR szPrintTemplate) const;

 
 
HRESULT PrintDocument(bool bShowPrintDialog) const;

 
```  
  
### Parameters  
 `szPrintTemplate`  
 Path to a print template; if none is specified, the default print template is used.  
  
 *bShowPrintDialog*  
 If true, shows the Print dialog.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_PRINT command ID](https://msdn.microsoft.com/library/aa769937.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__printpreview"></a>  CHtmlEditCtrlBase::PrintPreview  
 Opens the Print Preview window for the current document using either the default print preview template or a custom template.  
  
```  
HRESULT PrintPreview() const;

 
 
HRESULT PrintPreview(LPCTSTR szPrintTemplate) const;

 
```  
  
### Parameters  
 `szPrintTemplate`  
 Path to a print template.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_PRINTPREVIEW command ID](https://msdn.microsoft.com/library/aa769938.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__querystatus"></a>  CHtmlEditCtrlBase::QueryStatus  
 Call this method to query the status of commands.  
  
```  
long QueryStatus(long cmdID) const;

 
```  
  
### Parameters  
 `cmdID`  
 The command ID. Command identifiers are taken from the `CGID_MSHTML`command group. These commands are defined in Mshtmcid.h. You can also find the list online at [MSHTML Command Identifiers](http://go.microsoft.com/fwlink/linkid=149220).  
  
### Return Value  
 Returns an [OLECMDF](http://msdn.microsoft.com/library/windows/desktop/ms695237) indicating the status for `cmdID`, or 0 on failure.  
  
##  <a name="chtmleditctrlbase__radiobutton"></a>  CHtmlEditCtrlBase::RadioButton  
 Overwrites a radio control on the current selection.  
  
```  
HRESULT RadioButton(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID of the radio button.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_RADIOBUTTON command ID](https://msdn.microsoft.com/library/aa769977.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__refreshdocument"></a>  CHtmlEditCtrlBase::RefreshDocument  
 Refreshes the current document.  
  
```  
HRESULT RefreshDocument() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_REFRESH Command ID](https://msdn.microsoft.com/library/aa770020.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__removeformat"></a>  CHtmlEditCtrlBase::RemoveFormat  
 Removes the formatting tags from the current selection.  
  
```  
HRESULT RemoveFormat() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_REMOVEFORMAT command ID](https://msdn.microsoft.com/library/aa770021.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__saveas"></a>  CHtmlEditCtrlBase::SaveAs  
 Saves the current Web page to a file.  
  
```  
HRESULT SaveAs(LPCTSTR szPath = NULL) const;

 
```  
  
### Parameters  
 `szPath`  
 The path and file name to which to save the Web page.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_SAVEAS command ID](https://msdn.microsoft.com/library/aa770024.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__selectall"></a>  CHtmlEditCtrlBase::SelectAll  
 Selects the entire document.  
  
```  
HRESULT SelectAll() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_SELECTALL command ID](https://msdn.microsoft.com/library/aa770025.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__set2dposition"></a>  CHtmlEditCtrlBase::Set2DPosition  
 Allows absolutely positioned elements to be moved by dragging.  
  
```  
HRESULT Set2DPosition(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, absolutely positioned elements can be moved by dragging.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_2D_POSITION command ID](https://msdn.microsoft.com/library/aa769887.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setabsoluteposition"></a>  CHtmlEditCtrlBase::SetAbsolutePosition  
 Sets an element's position property to "absolute" or "static."  
  
```  
HRESULT SetAbsolutePosition(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, the element's position property is "absolute"; if false, it is "static."  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_ABSOLUTE_POSITION command ID](https://msdn.microsoft.com/library/aa769889.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setatomicselection"></a>  CHtmlEditCtrlBase::SetAtomicSelection  
 Set atomic selection mode.  
  
```  
HRESULT SetAtomicSelection(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, any element that has an ATOMICSELECTION attribute set to TRUE will be selectable only as a unit.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_ATOMICSELECTION command ID](https://msdn.microsoft.com/library/aa769892.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setautourldetectmode"></a>  CHtmlEditCtrlBase::SetAutoURLDetectMode  
 Turns automatic URL detection on and off.  
  
```  
HRESULT SetAutoURLDetectMode(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, automatic URL detection is enabled.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_AUTOURLDETECT_MODE command ID](https://msdn.microsoft.com/library/aa769893.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setbackcolor"></a>  CHtmlEditCtrlBase::SetBackColor  
 Sets the background color of the current selection.  
  
```  
HRESULT SetBackColor(int nColor) const;

 
 
HRESULT SetBackColor(LPCTSTR szColor) const;

 
```  
  
### Parameters  
 `nColor`  
 The color. See `pvaIn` in [IDM_BACKCOLOR Command ID](https://msdn.microsoft.com/library/aa769858.aspx).  
  
 `szColor`  
 The color. See `pvaIn` in [IDM_BACKCOLOR Command ID](https://msdn.microsoft.com/library/aa769858.aspx).  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_BACKCOLOR_ command ID](https://msdn.microsoft.com/library/aa769858.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setblockformat"></a>  CHtmlEditCtrlBase::SetBlockFormat  
 Sets the current block format tag.  
  
```  
HRESULT SetBlockFormat(LPCTSTR szFormat) const;

 
```  
  
### Parameters  
 `szFormat`  
 The format tag.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_BLOCKFMT_command ID](https://msdn.microsoft.com/library/aa769883.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setbookmark"></a>  CHtmlEditCtrlBase::SetBookMark  
 Creates a bookmark anchor for the current selection or insertion point.  
  
```  
HRESULT SetBookMark(LPCTSTR szAnchorName) const;

 
```  
  
### Parameters  
 *szAnchorName*  
 The anchor name.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_BOOKMARK command ID](https://msdn.microsoft.com/library/aa769873.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setcsseditinglevel"></a>  CHtmlEditCtrlBase::SetCSSEditingLevel  
 Selects which CSS level (CSS1 or CSS2) the editor will support, if any.  
  
```  
HRESULT SetCSSEditingLevel(short nLevel) const;

 
```  
  
### Parameters  
 `nLevel`  
 The CSS level. Pass 0 if you do not want CSS support.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_CSSEDITING_LEVEL command ID](https://msdn.microsoft.com/library/aa769903.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setdefaultcomposesettings"></a>  CHtmlEditCtrlBase::SetDefaultComposeSettings  
 Call this method to set the default compose settings.  
  
```  
HRESULT SetDefaultComposeSettings(
    LPCSTR szFontName = NULL,  
    unsigned short nFontSize = 3,  
    COLORREF crFontColor = 0xFF000000,  
    COLORREF crFontBgColor = 0xFF000000,  
    bool bBold = false,  
    bool bItalic = false,  
    bool bUnderline = false) const;

 
```  
  
### Parameters  
 *szFontName*  
 The font name.  
  
 *nFontSize*  
 The font size.  
  
 *crFontColor*  
 The font color.  
  
 *crFontBgColor*  
 The font background color.  
  
 *bBold*  
 Pass true for bold text.  
  
 `bItalic`  
 Pass true for italic text.  
  
 `bUnderline`  
 Pass true for underlined text.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_COMPOSESETTINGS command ID](https://msdn.microsoft.com/library/aa769901.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setdesignmode"></a>  CHtmlEditCtrlBase::SetDesignMode  
 Set design mode.  
  
```  
BOOL SetDesignMode(BOOL bMode) const;

 
```  
  
### Parameters  
 `bMode`  
 If true, turns design mode on.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
##  <a name="chtmleditctrlbase__setdisableeditfocusui"></a>  CHtmlEditCtrlBase::SetDisableEditFocusUI  
 Disables the hatched border and handles around an element that has edit focus.  
  
```  
HRESULT SetDisableEditFocusUI(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, disables the hatched border and handles around a site selectable element when the element has "edit focus" in design mode; that is, when the text or contents of the element can be edited.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM_DISABLE_EDITFOCUS_UI command ID](https://msdn.microsoft.com/library/aa769905.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setdocumenthtml"></a>  CHtmlEditCtrlBase::SetDocumentHTML  
 Sets the HTML of the current document.  
  
```  
HRESULT SetDocumentHTML(LPCTSTR szHTML) const;

 
```  
  
### Parameters  
 `szHTML`  
 The HTML.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="chtmleditctrlbase__setfontface"></a>  CHtmlEditCtrlBase::SetFontFace  
 Sets the font for the current selection.  
  
```  
HRESULT SetFontFace(LPCTSTR szFace) const;

 
```  
  
### Parameters  
 `szFace`  
 The font name.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM FONTNAME Command ID](https://msdn.microsoft.com/library/aa769880.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setfontsize"></a>  CHtmlEditCtrlBase::SetFontSize  
 Sets the font size for the current selection.  
  
```  
HRESULT SetFontSize(unsigned short size) const;

 
```  
  
### Parameters  
 `size`  
 The HTML font size (1-7). A value of 0 sets the font size to 1.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM FONTSIZE command ID](https://msdn.microsoft.com/library/aa769881.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setforecolor"></a>  CHtmlEditCtrlBase::SetForeColor  
 Sets the foreground (text) color of the current selection.  
  
```  
HRESULT SetForeColor(LPCTSTR szColor) const;

 
 
HRESULT SetForeColor(int nColor) const;

 
```  
  
### Parameters  
 `szColor`  
 The color.  
  
 `nColor`  
 The color.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM FORECOLOR command ID](https://msdn.microsoft.com/library/aa769882.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setie5pastemode"></a>  CHtmlEditCtrlBase::SetIE5PasteMode  
 Sets the paste operation to be compatible with Microsoft Internet Explorer 5.  
  
```  
HRESULT SetIE5PasteMode(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, all paste operations are compatible with Internet Explorer 5; if false, paste operations are compatible with Internet Explorer 5.5.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM IE50_PASTE_MODE command ID](https://msdn.microsoft.com/library/aa769923.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setliveresize"></a>  CHtmlEditCtrlBase::SetLiveResize  
 Causes the WebBrowser to update an element's appearance continuously during a resizing or moving operation, rather than updating only at the completion of the move or resize.  
  
```  
HRESULT SetLiveResize(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, causes the WebBrowser to update an element's appearance continuously during a resizing or moving operation; if false, it updates only at the completion of the move or resize.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM LIVERESIZE command ID](https://msdn.microsoft.com/library/aa769928.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setmultiselect"></a>  CHtmlEditCtrlBase::SetMultiSelect  
 Enables multiple selection.  
  
```  
HRESULT SetMultiSelect(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, allows for the selection of more than one site-selectable element at a time when the user holds down the SHIFT or CTRL keys.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM MULTIPLESELECTION command ID](https://msdn.microsoft.com/library/aa769929.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setoverridecursor"></a>  CHtmlEditCtrlBase::SetOverrideCursor  
 Commands the WebBrowser never to change the mouse pointer.  
  
```  
HRESULT SetOverrideCursor(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, the WebBrowser will not change the mouse pointer.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM OVERRIDE_CURSOR command ID](https://msdn.microsoft.com/library/aa769932.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setoverwritemode"></a>  CHtmlEditCtrlBase::SetOverwriteMode  
 Toggles the text-entry mode between insert and overwrite.  
  
```  
HRESULT SetOverwriteMode(bool bMode) const;

 
```  
  
### Parameters  
 `bMode`  
 If true, text-entry mode is overwrite; if false, text-entry mode is insert.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM OVERWRITE command ID](https://msdn.microsoft.com/library/aa770016.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setrespectvisindesign"></a>  CHtmlEditCtrlBase::SetRespectVisInDesign  
 Hides invisible elements in design mode.  
  
```  
HRESULT SetRespectVisInDesign(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, any elements that have a visibility set to "hidden" or display property set to "none" will not be shown in both design mode and browse mode; if false, those elements will be displayed only in browse mode.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM RESPECTVISIBILITY_INDESIGN command ID](https://msdn.microsoft.com/library/aa770023.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setshowalignedsitetags"></a>  CHtmlEditCtrlBase::SetShowAlignedSiteTags  
 Displays a glyph for all elements that have a **styleFloat** property.  
  
```  
HRESULT SetShowAlignedSiteTags(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, displays a glyph for all elements that have a **styleFloat** property.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM SHOWALIGNEDSITETAGS command ID](https://msdn.microsoft.com/library/aa769947.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setshowalltags"></a>  CHtmlEditCtrlBase::SetShowAllTags  
 Displays glyphs to show the location of all tags in a document.  
  
```  
HRESULT SetShowAllTags(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, displays glyphs to show the location of all tags in a document.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM SHOWALLTAGS command ID](https://msdn.microsoft.com/library/aa769948.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setshowareatags"></a>  CHtmlEditCtrlBase::SetShowAreaTags  
 Displays a glyph for all the area tags.  
  
```  
HRESULT SetShowAreaTags(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, displays a glyph for all the area tags.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM SHOWAREATAGS command ID](https://msdn.microsoft.com/library/aa769949.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setshowbrtags"></a>  CHtmlEditCtrlBase::SetShowBRTags  
 Displays a glyph for all the br tags.  
  
```  
HRESULT SetShowBRTags(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, displays a glyph for all the br tags.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM SHOWWBRTAGS command ID](https://msdn.microsoft.com/library/aa769956.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setshowcommenttags"></a>  CHtmlEditCtrlBase::SetShowCommentTags  
 Displays a glyph for all the comment tags.  
  
```  
HRESULT SetShowCommentTags(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, displays a glyph for all the comment tags.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM SHOWCOMMENTTAGS command ID](https://msdn.microsoft.com/library/aa769950.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setshowmisctags"></a>  CHtmlEditCtrlBase::SetShowMiscTags  
 Displays all the tags shown in Microsoft Internet Explorer 4.0.  
  
```  
HRESULT SetShowMiscTags(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, displays all the tags shown in Microsoft Internet Explorer 4.0.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM SHOWMISCTAGS command ID](https://msdn.microsoft.com/library/aa769952.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setshowscripttags"></a>  CHtmlEditCtrlBase::SetShowScriptTags  
 Displays a glyph for all the script tags.  
  
```  
HRESULT SetShowScriptTags(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, displays a glyph for all the script tags.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM SHOWSCRIPTTAGS command ID](https://msdn.microsoft.com/library/aa769953.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setshowstyletags"></a>  CHtmlEditCtrlBase::SetShowStyleTags  
 Displays a glyph for all the style tags.  
  
```  
HRESULT SetShowStyleTags(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, displays a glyph for all the style tags.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM SHOWSTYLETAGS command ID](https://msdn.microsoft.com/library/aa769954.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__setshowunknowntags"></a>  CHtmlEditCtrlBase::SetShowUnknownTags  
 Displays a glyph for all the unknown tags.  
  
```  
HRESULT SetShowUnknownTags(bool bNewValue) const;

 
```  
  
### Parameters  
 `bNewValue`  
 If true, displays a glyph for all the unknown tags.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM SHOWUNKNOWNTAGS command ID](https://msdn.microsoft.com/library/aa769955.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__textarea"></a>  CHtmlEditCtrlBase::TextArea  
 Overwrites a multiline text input control on the current selection.  
  
```  
HRESULT TextArea(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID of the multiline text input control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM TEXTAREA command ID](https://msdn.microsoft.com/library/aa769986.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__textbox"></a>  CHtmlEditCtrlBase::TextBox  
 Overwrites a text control on the current selection.  
  
```  
HRESULT TextBox(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID of the text control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM TEXTBOX command ID](https://msdn.microsoft.com/library/aa769980.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__unbookmark"></a>  CHtmlEditCtrlBase::UnBookmark  
 Removes any bookmark from the current selection.  
  
```  
HRESULT UnBookmark() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM UNBOOKMARK command ID](https://msdn.microsoft.com/library/aa770034.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__underline"></a>  CHtmlEditCtrlBase::Underline  
 Toggles the current selection between underlined and not underlined.  
  
```  
HRESULT Underline() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM UNDERLINE command ID](https://msdn.microsoft.com/library/aa770035.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__unlink"></a>  CHtmlEditCtrlBase::Unlink  
 Removes any hyperlink from the current selection.  
  
```  
HRESULT Unlink() const;

 
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM UNLINK command ID](https://msdn.microsoft.com/library/aa770037.aspx) to the WebBrowser control.  
  
##  <a name="chtmleditctrlbase__unorderlist"></a>  CHtmlEditCtrlBase::UnorderList  
 Toggles the current selection between an ordered list and a normal format block.  
  
```  
HRESULT UnorderList(LPCTSTR szId = NULL) const;

 
```  
  
### Parameters  
 `szId`  
 The ID of the unordered list.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method sends the [IDM UNORDERLIST command ID](https://msdn.microsoft.com/library/aa769987.aspx) to the WebBrowser control.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [HTMLEdit Sample](../../visual-cpp-samples.md)

