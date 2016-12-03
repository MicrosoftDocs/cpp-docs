---
title: "CMFCPropertyGridColorProperty Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCPropertyGridColorProperty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPropertyGridColorProperty class"
  - "CMFCPropertyGridColorProperty::OnClickButton method"
  - "CMFCPropertyGridColorProperty::FormatProperty method"
  - "CMFCPropertyGridColorProperty::OnDrawValue method"
  - "CMFCPropertyGridColorProperty::OnUpdateValue method"
  - "CMFCPropertyGridColorProperty::OnEdit method"
ms.assetid: af37be93-a91e-40a2-9a65-0f3412c6f0f8
caps.latest.revision: 33
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
# CMFCPropertyGridColorProperty Class
The `CMFCPropertyGridColorProperty` class supports a property list control item that opens a color selection dialog box.  
  
## Syntax  
  
```  
class CMFCPropertyGridColorProperty : public CMFCPropertyGridProperty  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertyGridColorProperty::CMFCPropertyGridColorProperty](#cmfcpropertygridcolorproperty__cmfcpropertygridcolorproperty)|Constructs a `CMFCPropertyGridColorProperty` object.|  
|`CMFCPropertyGridColorProperty::~CMFCPropertyGridColorProperty`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertyGridColorProperty::EnableAutomaticButton](#cmfcpropertygridcolorproperty__enableautomaticbutton)|Enables the *automatic* button on the color selection dialog box. (The standard automatic button is labeled **Automatic**.)|  
|[CMFCPropertyGridColorProperty::EnableOtherButton](#cmfcpropertygridcolorproperty__enableotherbutton)|Enables the *other* button on the color selection dialog box. (The standard other button is labeled **More Colors…**.)|  
|`CMFCPropertyGridColorProperty::FormatProperty`|Formats the text representation of a property value. (Overrides [CMFCPropertyGridProperty::FormatProperty](../../mfc/reference/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__formatproperty).)|  
|[CMFCPropertyGridColorProperty::GetColor](#cmfcpropertygridcolorproperty__getcolor)|Gets the current color of the property.|  
|`CMFCPropertyGridColorProperty::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|`CMFCPropertyGridColorProperty::OnClickButton`|Called by the framework when the user clicks a button that is contained in a property. (Overrides [CMFCPropertyGridProperty::OnClickButton](../../mfc/reference/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__onclickbutton).)|  
|`CMFCPropertyGridColorProperty::OnDrawValue`|Called by the framework to display the property value. (Overrides [CMFCPropertyGridProperty::OnDrawValue](../../mfc/reference/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__ondrawvalue).)|  
|`CMFCPropertyGridColorProperty::OnEdit`|Called by the framework when the user is about to modify a property value. (Overrides [CMFCPropertyGridProperty::OnEdit](../../mfc/reference/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__onedit).)|  
|`CMFCPropertyGridColorProperty::OnUpdateValue`|Called by the framework when the value of an editable property has changed. (Overrides [CMFCPropertyGridProperty::OnUpdateValue](../../mfc/reference/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__onupdatevalue).)|  
|[CMFCPropertyGridColorProperty::SetColor](#cmfcpropertygridcolorproperty__setcolor)|Sets a new color for the property.|  
|[CMFCPropertyGridColorProperty::SetColumnsNumber](#cmfcpropertygridcolorproperty__setcolumnsnumber)|Specifies the number of columns in the current color property grid.|  
|[CMFCPropertyGridColorProperty::SetOriginalValue](#cmfcpropertygridcolorproperty__setoriginalvalue)|Sets the original value of an editable property.|  
  
## Remarks  
 The `CMFCPropertyGridColorProperty` class supports a color property that can be added to a property list control. For more information, see the [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md).  
  
## Example  
 The following example demonstrates how to construct an object of the `CMFCPropertyGridColorProperty` class and configure this object by using various methods of the `CMFCPropertyGridColorProperty` class. The code explains how to enable the automatic and other buttons, and how to set the color and the columns number. This example is part of the [New Controls sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#13](../../mfc/reference/codesnippet/cpp/cmfcpropertygridcolorproperty-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)  
  
 [CMFCPropertyGridColorProperty](../../mfc/reference/cmfcpropertygridcolorproperty-class.md)  
  
## Requirements  
 **Header:** afxpropertygridctrl.h  
  
##  <a name="cmfcpropertygridcolorproperty__cmfcpropertygridcolorproperty"></a>  CMFCPropertyGridColorProperty::CMFCPropertyGridColorProperty  
 Constructs a `CMFCPropertyGridColorProperty` object.  
  
```  
CMFCPropertyGridColorProperty(
    const CString& strName,  
    const COLORREF& color,  
    CPalette* pPalette = NULL,  
    LPCTSTR lpszDescr = NULL,  
    DWORD_PTR dwData = 0);
```  
  
### Parameters  
 [in] `strName`  
 The name of the property.  
  
 [in] `color`  
 The color value of the property.  
  
 [in] `pPalette`  
 Pointer to a palette of colors. The default value is `NULL`.  
  
 [in] `lpszDescr`  
 The property description. The default value is `NULL`.  
  
 [in] `dwData`  
 Application-specific data, such as an integer or a pointer to other data that is associated with the property. The default value is 0.  
  
##  <a name="cmfcpropertygridcolorproperty__enableautomaticbutton"></a>  CMFCPropertyGridColorProperty::EnableAutomaticButton  
 Enables the *automatic* button on the color selection dialog box. (The standard automatic button is labeled **Automatic**.)  
  
```  
void EnableAutomaticButton(
    LPCTSTR lpszLabel,  
    COLORREF colorAutomatic,  
    BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `lpszLabel`  
 The label text of the automatic button.  
  
 [in] `colorAutomatic`  
 The RGB color value of the automatic (default) color.  
  
 [in] `bEnable`  
 `TRUE` to enable the automatic button; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridcolorproperty__enableotherbutton"></a>  CMFCPropertyGridColorProperty::EnableOtherButton  
 Enables the *other* button on the color selection dialog box. (The standard other button is labeled **More Colors…**.)  
  
```  
void EnableOtherButton(
    LPCTSTR lpszLabel,  
    BOOL bAltColorDlg = TRUE,  
    BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `lpszLabel`  
 The label text of the other button.  
  
 [in] `bAltColorDlg`  
 `TRUE` to display the `CMFCColorDialog` dialog box; `FALSE` to display the standard color selection dialog box. The default value is `TRUE`.  
  
 [in] `bEnable`  
 `TRUE` to display the other button; otherwise, `FALSE`.  The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridcolorproperty__getcolor"></a>  CMFCPropertyGridColorProperty::GetColor  
 Gets the current color of the property.  
  
```  
COLORREF GetColor() const;

 
```  
  
### Return Value  
 An RGB color value.  
  
### Remarks  
  
##  <a name="cmfcpropertygridcolorproperty__setcolor"></a>  CMFCPropertyGridColorProperty::SetColor  
 Sets a new color for the property.  
  
```  
void SetColor(COLORREF color);
```  
  
### Parameters  
 [in] `color`  
 An RGB color value.  
  
### Remarks  
  
##  <a name="cmfcpropertygridcolorproperty__setcolumnsnumber"></a>  CMFCPropertyGridColorProperty::SetColumnsNumber  
 Specifies the number of columns in the current color property grid.  
  
```  
void SetColumnsNumber(int nColumnsNumber);
```  
  
### Parameters  
 [in] `nColumnsNumber`  
 The preferred number of columns in the color property grid.  
  
### Remarks  
 This method sets the value of the `m_nColumnsNumber` protected data member.  
  
##  <a name="cmfcpropertygridcolorproperty__setoriginalvalue"></a>  CMFCPropertyGridColorProperty::SetOriginalValue  
 Sets the original value of an editable property.  
  
```  
virtual void SetOriginalValue(const COleVariant& varValue);
```  
  
### Parameters  
 [in] `varValue`  
 A value.  
  
### Remarks  
 Use the [CMFCPropertyGridProperty::ResetOriginalValue](../../mfc/reference/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__resetoriginalvalue) method to reset the original value of an edited property.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md)   
 [CMFCPropertyGridProperty Class](../../mfc/reference/cmfcpropertygridproperty-class.md)
