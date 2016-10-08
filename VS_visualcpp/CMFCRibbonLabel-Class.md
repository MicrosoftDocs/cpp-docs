---
title: "CMFCRibbonLabel Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 0346c891-83bf-4f20-b8a1-c84cf2aadced
caps.latest.revision: 17
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
# CMFCRibbonLabel Class
Implements a non-clickable text label for a ribbon.  
  
## Syntax  
  
```  
class CMFCRibbonLabel : public CMFCRibbonButton  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonLabel::CMFCRibbonLabel](#cmfcribbonlabel__cmfcribbonlabel)|Constructs and initializes a `CMFCRibbonLabel` object with the specified text string.|  
|`CMFCRibbonLabel::~CMFCRibbonLabel`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCRibbonLabel::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|`CMFCRibbonLabel::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../VS_visualcpp/CRuntimeClass-Structure.md) object that is associated with this class type.|  
|[CMFCRibbonLabel::SetACCData](#cmfcribbonlabel__setaccdata)|Determines the accessibility data for the current ribbon label element. (Overrides [CMFCRibbonButton::SetACCData](../VS_visualcpp/CMFCRibbonButton-Class.md#cmfcribbonbutton__setaccdata).)|  
  
### Remarks  
 After you create a ribbon label, add it to a panel by calling [CMFCRibbonPanel::Add](../VS_visualcpp/CMFCRibbonPanel-Class.md#cmfcribbonpanel__add).  
  
 You cannot add a ribbon label to the Quick Access Toolbar.  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CMFCRibbonBaseElement](../VS_visualcpp/CMFCRibbonBaseElement-Class.md)  
  
 [CMFCRibbonButton](../VS_visualcpp/CMFCRibbonButton-Class.md)  
  
 [CMFCRibbonLabel](../VS_visualcpp/CMFCRibbonLabel-Class.md)  
  
## Requirements  
 **Header:** afxRibbonLabel.h  
  
##  <a name="cmfcribbonlabel__cmfcribbonlabel"></a>  CMFCRibbonLabel::CMFCRibbonLabel  
 Constructs and initializes a [CMFCRibbonLabel](../VS_visualcpp/CMFCRibbonLabel-Class.md) object that displays the specified text string.  
  
```  
CMFCRibbonLabel(  
    LPCTSTR lpszText,  
    BOOL bIsMultiLine = FALSE);  
```  
  
### Parameters  
 [in] `lpszText`  
 The text to appear in the label.  
  
 [in] `bIsMultiLine`  
 `TRUE` to specify that the label is a multi-line label; otherwise, `FALSE`.  
  
##  <a name="cmfcribbonlabel__setaccdata"></a>  CMFCRibbonLabel::SetACCData  
 Determines the accessibility data for the current ribbon label element.  
  
```  
virtual BOOL SetACCData(  
    CWnd* pParent,  
    CAccessibilityData& data );  
```  
  
### Parameters  
 [in] `pParent`  
 Represents the parent window of the current ribbon label.  
  
 [out] `data`  
 An object of type `CAccessibilityData` that is populated with the accessibility data of the current ribbon label.  
  
### Return Value  
 `TRUE` if the `data` parameter was successfully populated with the accessibility data of the current ribbon label; otherwise, `FALSE`.  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCRibbonButton Class](../VS_visualcpp/CMFCRibbonButton-Class.md)