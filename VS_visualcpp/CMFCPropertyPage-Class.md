---
title: "CMFCPropertyPage Class"
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
ms.assetid: d279d7f2-2d81-418d-9f23-6147d6e8df09
caps.latest.revision: 26
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
# CMFCPropertyPage Class
The `CMFCPropertyPage` class supports the display of pop-up menus on a property page.  
  
## Syntax  
  
```  
class CMFCPropertyPage : public CPropertyPage  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertyPage::CMFCPropertyPage](#cmfcpropertypage__cmfcpropertypage)|Constructs a `CMFCPropertyPage` object.|  
|`CMFCPropertyPage::~CMFCPropertyPage`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCPropertyPage::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|`CMFCPropertyPage::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../VS_visualcpp/CRuntimeClass-Structure.md) object that is associated with this class type.|  
|`CMFCPropertyPage::OnSetActive`|This member function is called by the framework when the page is chosen by the user and becomes the active page. (Overrides [CPropertyPage::OnSetActive](../VS_visualcpp/CPropertyPage-Class.md#cpropertypage__onsetactive).)|  
|`CMFCPropertyPage::PreTranslateMessage`|Translates window messages before they are dispatched to the                                         [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and                                         [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. For more information and method syntax, see [CWnd::PreTranslateMessage](../VS_visualcpp/CWnd-Class.md#cwnd__pretranslatemessage). (Overrides `CPropertyPage::PreTranslateMessage`.)|  
  
## Remarks  
 The `CMFCPropertyPage` class represents individual pages of a property sheet, otherwise known as a tab dialog box.  
  
 Use the `CMFCPropertyPage` class together with the [CMFCPropertySheet](../VS_visualcpp/CMFCPropertySheet-Class.md) class. To use menus on a property page, replace all occurrences of the `CPropertyPage` class with the `CMFCPropertyPage` class.  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CDialog](../VS_visualcpp/CDialog-Class.md)  
  
 [CPropertyPage](../VS_visualcpp/CPropertyPage-Class.md)  
  
 [CMFCPropertyPage](../VS_visualcpp/CMFCPropertyPage-Class.md)  
  
## Requirements  
 **Header:** afxpropertypage.h  
  
##  <a name="cmfcpropertypage__cmfcpropertypage"></a>  CMFCPropertyPage::CMFCPropertyPage  
 Constructs a `CMFCPropertyPage` object.  
  
```  
CMFCPropertyPage(  
    UINT nIDTemplate,  
    UINT nIDCaption=0 );  
  
CMFCPropertyPage(  
    LPCTSTR lpszTemplateName,  
    UINT nIDCaption=0 );  
```  
  
### Parameters  
 `nIDTemplate`  
 Resource ID of the template for this page.  
  
 `nIDCaption`  
 Resource ID of the label to put in the tab for this page. If 0, the name is obtained from the dialog box template for this page. The default value is 0.  
  
 `lpszTemplateName`  
 Points to the name of the template for this page. Cannot be `NULL`.  
  
### Return Value  
  
### Remarks  
 For more information about the constructor parameters, see [CPropertyPage::CPropertyPage](../VS_visualcpp/CPropertyPage-Class.md#cpropertypage__cpropertypage).  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCPropertySheet Class](../VS_visualcpp/CMFCPropertySheet-Class.md)