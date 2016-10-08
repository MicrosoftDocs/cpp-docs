---
title: "CMFCToolBarComboBoxEdit Class"
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
ms.assetid: 4789c34a-ce58-48ba-a26f-38748b601352
caps.latest.revision: 21
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
# CMFCToolBarComboBoxEdit Class
The framework uses the `CMFCToolBarComboBoxEdit` class to create a toolbar button that behaves like an editable combo box control.  
  
## Syntax  
  
```  
class CMFCToolBarComboBoxEdit : public CEdit  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarComboBoxEdit::CMFCToolBarComboBoxEdit](#cmfctoolbarcomboboxedit__cmfctoolbarcomboboxedit)|Constructs a `CMFCToolBarComboBoxEdit` object.|  
|`CMFCToolBarComboBoxEdit::~CMFCToolBarComboBoxEdit`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCToolBarComboBoxEdit::PreTranslateMessage`|Translates window messages before they are dispatched to the                                         [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and                                         [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. (Overrides [CWnd::PreTranslateMessage](../VS_visualcpp/CWnd-Class.md#cwnd__pretranslatemessage).)|  
  
### Remarks  
 Derive a class from the `CMFCToolBarComboBoxEdit` class to customize its edit operations.  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CEdit](../VS_visualcpp/CEdit-Class.md)  
  
 [CMFCToolBarComboBoxEdit](../VS_visualcpp/CMFCToolBarComboBoxEdit-Class.md)  
  
## Requirements  
 **Header:** afxtoolbarcomboboxbutton.h  
  
##  <a name="cmfctoolbarcomboboxedit__cmfctoolbarcomboboxedit"></a>  CMFCToolBarComboBoxEdit::CMFCToolBarComboBoxEdit  
 Constructs a `CMFCToolBarComboBoxEdit` object.  
  
```  
CMFCToolBarComboBoxEdit(  
   CMFCToolBarComboBoxButton& combo  
);  
```  
  
### Parameters  
 [in] `combo`  
 A reference to a [CMFCToolBarComboBoxButton](../VS_visualcpp/CMFCToolBarComboBoxButton-Class.md) object, which is a toolbar button that contains a combo box control.  
  
### Example  
 The following example demonstrates how to construct an object of the `CMFCToolBarComboBoxEdit` class. This code snippet is part of the [IE Demo sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_IEDemo#5](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_IEDemo#5)]  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCToolBarComboBoxButton Class](../VS_visualcpp/CMFCToolBarComboBoxButton-Class.md)   
 [CMFCToolBarComboBoxButton::CreateEdit](../VS_visualcpp/CMFCToolBarComboBoxButton-Class.md#cmfctoolbarcomboboxbutton__createedit)