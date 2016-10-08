---
title: "DDX_DHtml_Anchor_Href"
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
ms.assetid: 779d17d3-3bb2-4bba-9486-d4ba6ed22f4a
caps.latest.revision: 11
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
# DDX_DHtml_Anchor_Href
Sets or retrieves the destination URL or anchor point.  
  
## Syntax  
  
```  
  
  DDX_DHtml_Anchor_Href(  
CDataExchange* dx,  
LPCTSTR name,  
CString& var )  
```  
  
#### Parameters  
 `dx`  
 A pointer to a [CDataExchange](../VS_visualcpp/CDataExchange-Class.md) object.  
  
 *name*  
 The value that you specified for the HTML control's ID parameter.  
  
 `var`  
 The value being exchanged.  
  
## Remarks  
 This macro calls the [CDHtmlDialog::DDX_DHtml_ElementText](../Topic/CDHtmlDialog::DDX_DHtml_ElementText.md) function using the DISPID_IHTMLANCHORELEMENT_HREF dispatch ID.  
  
## Requirements  
 **Header:** afxdhtml.h  
  
## See Also  
 [DDX_DHtml Helper Macros](../VS_visualcpp/DDX_DHtml-Helper-Macros.md)   
 [href Property (IHTMLAnchorElement)](https://msdn.microsoft.com/en-us/library/aa741842.aspx)