---
title: "DDX_DHtml_Img_Src"
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
ms.assetid: f8492d52-dc1c-4fdc-a293-282b56e6e31d
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
# DDX_DHtml_Img_Src
Gets or retrieves the name of an image or a video clip in the document.  
  
## Syntax  
  
```  
  
  DDX_DHtml_Img_Src(  
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
 When using the `DDX_DHtml_Img_Src` macro to retrieve the src property for an IMAGE element, the Internet Explorer image object will return the fully escaped URL for the image source. For example, if you use the `DDX_DHtml_Img_Src` macro to set the src property of an IMAGE element to the string "some interesting picture," when you retrieve that property, Internet Explorer will return the string "res://d:\myapplication\myapp.exe/some%20interesting%20picture."  
  
 This macro calls the [CDHtmlDialog::DDX_DHtml_ElementText](../Topic/CDHtmlDialog::DDX_DHtml_ElementText.md) function using the DISPID_IHTMLIMGELEMENT_SRC dispatch ID.  
  
## Requirements  
 **Header:** afxdhtml.h  
  
## See Also  
 [DDX_DHtml Helper Macros](../VS_visualcpp/DDX_DHtml-Helper-Macros.md)   
 [src Property (IHTMLFrameBase)](https://msdn.microsoft.com/en-us/library/aa752423.aspx)