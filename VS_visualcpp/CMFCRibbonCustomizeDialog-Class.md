---
title: "CMFCRibbonCustomizeDialog Class"
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
ms.assetid: ce67de7f-5eaa-4c75-9b94-f290f36df073
caps.latest.revision: 18
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
# CMFCRibbonCustomizeDialog Class
Displays the ribbon **Customize** page.  
  
## Syntax  
  
```  
class CMFCRibbonCustomizeDialog : public CMFCPropertySheet  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog](#cmfcribboncustomizedialog__cmfcribboncustomizedialog)|Constructs a `CMFCRibbonCustomizeDialog` object.|  
|`CMFCRibbonCustomizeDialog::~CMFCRibbonCustomizeDialog`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCRibbonCustomizeDialog::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../VS_visualcpp/CRuntimeClass-Structure.md) object that is associated with this class type.|  
  
## Remarks  
 MFC instantiates this class automatically if you do not process the AFX_WM_ON_RIBBON_CUSTOMIZE message, or if you return 0 from the message handler.  
  
 If you want to use this class in your application to display the ribbon **Customize** dialog box, just instantiate it and call the `DoModal` method.  
  
 Because this class is derived from [CMFCPropertySheet Class](../VS_visualcpp/CMFCPropertySheet-Class.md), you can add custom pages by using the `CMFCPropertySheet` API.  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CPropertySheet](../VS_visualcpp/CPropertySheet-Class.md)  
  
 [CMFCPropertySheet](../VS_visualcpp/CMFCPropertySheet-Class.md)  
  
 [CMFCRibbonCustomizeDialog](../VS_visualcpp/CMFCRibbonCustomizeDialog-Class.md)  
  
## Requirements  
 **Header:** afxribboncustomizedialog.h  
  
##  <a name="cmfcribboncustomizedialog__cmfcribboncustomizedialog"></a>  CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog  
 Constructs a `CMFCRibbonCustomizeDialog` object.  
  
```  
CMFCRibbonCustomizeDialog(  
   CWnd* pWndParent,  
   CMFCRibbonBar* pRibbon  
);  
```  
  
### Parameters  
 [in] `pWndParent`  
 A pointer to the parent window (usually the main frame).  
  
 [in] `pRibbon`  
 A pointer to the `CMFCRibbonBar` that is to be customized.  
  
### Example  
 The following example demonstrates how to construct a `CMFCRibbonCustomizeDialog` object.  
  
 [!CODE [NVC_MFC_RibbonApp#18](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_RibbonApp#18)]  
  
### Remarks  
 The constructor instantiates a [CMFCRibbonCustomizePropertyPage Class](../VS_visualcpp/CMFCRibbonCustomizePropertyPage-Class.md) object and adds it to the collection of property sheet pages.  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)