---
title: "CMFCToolBarFontSizeComboBox Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "CMFCToolBarFontSizeComboBox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarFontSizeComboBox class"
ms.assetid: 72e0c44c-6a0e-4194-a71f-ab64e3afb9b5
caps.latest.revision: 22
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
# CMFCToolBarFontSizeComboBox Class
A toolbar button that contains a combo box control that enables the user to select a font size.  
  
## Syntax  
  
```  
class CMFCToolBarFontSizeComboBox : public CMFCToolBarComboBoxButton  
```  
  
## Members  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarFontSizeComboBox::CMFCToolBarFontSizeComboBox](#cmfctoolbarfontsizecombobox__cmfctoolbarfontsizecombobox)|Constructs a `CMFCToolBarFontSizeComboBox` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarFontSizeComboBox::GetTwipSize](#cmfctoolbarfontsizecombobox__gettwipsize)|Returns the selected font size in twips.|  
|[CMFCToolBarFontSizeComboBox::RebuildFontSizes](#cmfctoolbarfontsizecombobox__rebuildfontsizes)|Fills the combo box list with all supported font sizes for a specified font.|  
|[CMFCToolBarFontSizeComboBox::SetTwipSize](#cmfctoolbarfontsizecombobox__settwipsize)|Sets the font size in twips.|  
  
## Remarks  
 You can use a `CMFCToolBarFontSizeComboBox` object together with a [CMFCToolBarFontComboBox Class](../mfcref/cmfctoolbarfontcombobox-class.md) object to enable a user to select a font and font size.  
  
 You can add a font size combo box button to a toolbar just as you add a font combo box button. For more information, see [CMFCToolBarFontComboBox Class](../mfcref/cmfctoolbarfontcombobox-class.md).  
  
 When the user selects a new font in a `CMFCToolBarFontComboBox` object, you can fill the font size combo box with the supported sizes for that font by using the [CMFCToolBarFontSizeComboBox::RebuildFontSizes](#cmfctoolbarfontsizecombobox__rebuildfontsizes) method.  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCToolBarFontSizeComboBox` class to configure a `CMFCToolBarFontSizeComboBox` object. The example illustrates how to retrieve the font size, in twips, from the text box, fill the font size combo box with all valid sizes of the given font, and specify the font size in twips. This code snippet is part of the [Word Pad sample](../top/visual-c---samples.md).  
  
 [!code[NVC_MFC_WordPad#8](../mfcref/codesnippet/CPP/cmfctoolbarfontsizecombobox-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CMFCToolBarButton](../mfcref/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarComboBoxButton](../mfcref/cmfctoolbarcomboboxbutton-class.md)  
  
 [CMFCToolBarFontSizeComboBox](../mfcref/cmfctoolbarfontsizecombobox-class.md)  
  
## Requirements  
 **Header:** afxtoolbarfontcombobox.h  
  
##  <a name="cmfctoolbarfontsizecombobox__cmfctoolbarfontsizecombobox"></a>  CMFCToolBarFontSizeComboBox::CMFCToolBarFontSizeComboBox  
 Constructs a `CMFCToolBarFontSizeComboBox` object.  
  
```  
CMFCToolBarFontSizeComboBox();  
```  
  
##  <a name="cmfctoolbarfontsizecombobox__gettwipsize"></a>  CMFCToolBarFontSizeComboBox::GetTwipSize  
 Retrieves the font size, in twips, from the text box of a font size combo box.  
  
```  
int GetTwipSize() const;  
```  
  
### Return Value  
 If the return value is positive, it is the font size in twips. It is -1 if the text box of the combo box is empty. It is -2 if an error occurs.  
  
##  <a name="cmfctoolbarfontsizecombobox__rebuildfontsizes"></a>  CMFCToolBarFontSizeComboBox::RebuildFontSizes  
 Fills a font size combo box with all valid sizes of the given font.  
  
```  
void RebuildFontSizes(  
   const CString& strFontName   
);  
```  
  
### Parameters  
 `[in] strFontName`  
 Specifies a font name.  
  
### Remarks  
 Call this function when you want to synchronize between selection in a font combo box and a font size combo box, such as a [CMFCToolBarFontComboBox Class](../mfcref/cmfctoolbarfontcombobox-class.md).  
  
##  <a name="cmfctoolbarfontsizecombobox__settwipsize"></a>  CMFCToolBarFontSizeComboBox::SetTwipSize  
 Rounds the specified size (in twips) to the nearest size in points, and then sets the selected size in the combo box to that value.  
  
```  
void SetTwipSize(  
   int nSize   
);  
```  
  
### Parameters  
 [in]  `nSize`  
 Specifies the font size (in twips) to set.  
  
### Remarks  
 You can retrieve the previous valid font size later by calling the [CMFCToolBarFontSizeComboBox::GetTwipSize](#cmfctoolbarfontsizecombobox__gettwipsize) method.  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Classes](../mfcref/mfc-classes.md)   
 [CMFCToolBar Class](../mfcref/cmfctoolbar-class.md)   
 [CMFCToolBarButton Class](../mfcref/cmfctoolbarbutton-class.md)   
 [CMFCToolBarComboBoxButton Class](../mfcref/cmfctoolbarcomboboxbutton-class.md)   
 [CMFCFontInfo Class](../mfcref/cmfcfontinfo-class.md)   
 [CMFCToolBar::ReplaceButton](../mfcref/cmfctoolbar-class.md#cmfctoolbar__replacebutton)   
 [Walkthrough: Putting Controls On Toolbars](../mfc/walkthrough--putting-controls-on-toolbars.md)