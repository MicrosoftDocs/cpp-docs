---
title: "CHtmlEditDoc Class"
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
ms.assetid: b2cca61f-e5d6-4099-b0d1-46bf85f0bd64
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
# CHtmlEditDoc Class
With [CHtmlEditView](../VS_visualcpp/CHtmlEditView-Class.md), provides the functionality of the WebBrowser editing platform within the context of the MFC document-view architecture.  
  
## Syntax  
  
```  
class AFX_NOVTABLE CHtmlEditDoc : public CDocument  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CHtmlEditDoc::CHtmlEditDoc](#chtmleditdoc__chtmleditdoc)|Constructs a `CHtmlEditDoc` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CHtmlEditDoc::GetView](#chtmleditdoc__getview)|Retrieves the `CHtmlEditView` object attached to this document.|  
|[CHtmlEditDoc::IsModified](#chtmleditdoc__ismodified)|Returns whether the associated view's WebBrowser control contains a document that has been modified by the user.|  
|[CHtmlEditDoc::OpenURL](#chtmleditdoc__openurl)|Opens a URL.|  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CDocument](../VS_visualcpp/CDocument-Class.md)  
  
 `CHtmlEditDoc`  
  
## Requirements  
 **Header:** afxhtml.h  
  
##  <a name="chtmleditdoc__chtmleditdoc"></a>  CHtmlEditDoc::CHtmlEditDoc  
 Constructs a **CHtmlEditDoc** object.  
  
```  
CHtmlEditDoc();  
```  
  
##  <a name="chtmleditdoc__getview"></a>  CHtmlEditDoc::GetView  
 Retrieves the [CHtmlEditView](../VS_visualcpp/CHtmlEditView-Class.md) object attached to this document.  
  
```  
virtual CHtmlEditView * GetView() const;  
```  
  
### Return Value  
 Returns a pointer to the document's **CHtmlEditView** object.  
  
##  <a name="chtmleditdoc__ismodified"></a>  CHtmlEditDoc::IsModified  
 Returns whether the associated view's WebBrowser control contains a document that has been modified by the user.  
  
```  
virtual BOOL IsModified();  
```  
  
##  <a name="chtmleditdoc__openurl"></a>  CHtmlEditDoc::OpenURL  
 Opens a URL.  
  
```  
virtual BOOL OpenURL( LPCTSTR lpszURL );  
```  
  
### Parameters  
 `lpszURL`  
 The URL to open.  
  
### Return Value  
 Returns **TRUE** on success, **FALSE** on failure.  
  
## See Also  
 [HTMLEdit Sample](../VS_visualcpp/Visual-C---Samples.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)