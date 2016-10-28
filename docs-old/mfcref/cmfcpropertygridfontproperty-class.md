---
title: "CMFCPropertyGridFontProperty Class"
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
  - "CMFCPropertyGridFontProperty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPropertyGridFontProperty::OnClickButton method"
  - "CMFCPropertyGridFontProperty class"
  - "CMFCPropertyGridFontProperty::FormatProperty method"
ms.assetid: 83693f33-bbd3-4fcb-a9ad-fa79fcf2ca24
caps.latest.revision: 19
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
# CMFCPropertyGridFontProperty Class
The `CMFCPropertyGridFileProperty` class supports a property list control item that opens a font selection dialog box.  
  
## Syntax  
  
```  
class CMFCPropertyGridFontProperty : public CMFCPropertyGridProperty  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertyGridFontProperty::CMFCPropertyGridFontProperty](#cmfcpropertygridfontproperty__cmfcpropertygridfontproperty)|Constructs a `CMFCPropertyGridFontProperty` object.|  
|`CMFCPropertyGridFontProperty::~CMFCPropertyGridFontProperty`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCPropertyGridFontProperty::FormatProperty`|Formats the text representation of a property value. (Overrides [CMFCPropertyGridProperty::FormatProperty](../mfcref/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__formatproperty).)|  
|[CMFCPropertyGridFontProperty::GetColor](#cmfcpropertygridfontproperty__getcolor)|Retrieves the font color that the user selects from the font dialog box.|  
|[CMFCPropertyGridFontProperty::GetLogFont](#cmfcpropertygridfontproperty__getlogfont)|Retrieves the font that the user selects from the font dialog box.|  
|`CMFCPropertyGridFontProperty::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../mfcref/cruntimeclass-structure.md) object that is associated with this class type.|  
|`CMFCPropertyGridFontProperty::OnClickButton`|Called by the framework when the user clicks a button that is contained in a property. (Overrides [CMFCPropertyGridProperty::OnClickButton](../mfcref/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__onclickbutton).)|  
  
## Remarks  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CMFCPropertyGridProperty](../mfcref/cmfcpropertygridproperty-class.md)  
  
 [CMFCPropertyGridFontProperty](../mfcref/cmfcpropertygridfontproperty-class.md)  
  
## Requirements  
 **Header:** afxpropertygridctrl.h  
  
##  <a name="cmfcpropertygridfontproperty__cmfcpropertygridfontproperty"></a>  CMFCPropertyGridFontProperty::CMFCPropertyGridFontProperty  
 Constructs a `CMFCPropertyGridFontProperty` object.  
  
```  
CMFCPropertyGridFontProperty(  
    const CString& strName,  
    LOGFONT& lf,  
    DWORD dwFontDialogFlags = CF_EFFECTS | CF_SCREENFONTS,  
    LPCTSTR lpszDescr = NULL,  
    DWORD_PTR dwData = 0,  
    COLORREF color = (COLORREF)-1);  
```  
  
### Parameters  
 [in] `strName`  
 The name of the property.  
  
 [in] `lf`  
 A logical font structure that specifies the attributes of the font.  
  
 [in] `dwFontDialogFlags`  
 Styles that are applied to the font dialog box that is displayed when you click the property value drop-down button. The default value is the bitwise combination (OR) of CF_EFFECTS and CF_SCREENFONTS. For more information, see the `Flags` parameter of the                                 [CHOOSEFONT Structure](http://msdn.microsoft.com/library/windows/desktop/ms646832).  
  
 [in] `lpszDescr`  
 Description of the font property. The default value is `NULL`.  
  
 [in] `dwData`  
 Application-specific data, such as an integer or a pointer to other data that is associated with the property. The default value is 0.  
  
 [in] `color`  
 The color of the font. The default value is the default color.  
  
### Remarks  
 A `CMFCPropertyGridFontProperty` object represents a font property in a property grid font control.  
  
### Example  
 The following example demonstrates how construct an object of the `CMFCPropertyGridFontProperty` class. This example is part of the [New Controls sample](../top/visual-c---samples.md).  
  
 [!code[NVC_MFC_NewControls#26](../mfcref/codesnippet/CPP/cmfcpropertygridfontproperty-class_1.cpp)]  
  
##  <a name="cmfcpropertygridfontproperty__getcolor"></a>  CMFCPropertyGridFontProperty::GetColor  
 Retrieves the font color that the user selects from the font dialog box.  
  
```  
COLORREF GetColor() const;  
```  
  
### Return Value  
 An RGB color value that represents the selected font color.  
  
### Remarks  
  
##  <a name="cmfcpropertygridfontproperty__getlogfont"></a>  CMFCPropertyGridFontProperty::GetLogFont  
 Retrieves the font that the user selects from the font dialog box.  
  
```  
LPLOGFONT GetLogFont();  
```  
  
### Return Value  
 A pointer to a                         [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) structure that describes the selected font.  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Classes](../mfcref/mfc-classes.md)   
 [CMFCPropertyGridCtrl Class](../mfcref/cmfcpropertygridctrl-class.md)   
 [CMFCPropertyGridProperty Class](../mfcref/cmfcpropertygridproperty-class.md)