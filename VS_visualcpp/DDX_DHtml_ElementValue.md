---
title: "DDX_DHtml_ElementValue"
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
ms.assetid: a20263ca-bf3b-4255-ad9e-3647da64a807
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
# DDX_DHtml_ElementValue
Sets or retrieves the Value property from the selected control.  
  
## Syntax  
  
```  
  
  DDX_DHtml_ElementValue(  
CDataExchange* dx,  
LPCTSTR name, var )  
```  
  
#### Parameters  
 `dx`  
 A pointer to a [CDataExchange](../VS_visualcpp/CDataExchange-Class.md) object.  
  
 *name*  
 The value that you specified for the HTML control's ID parameter.  
  
 `var`  
 The value being exchanged. See *value* in [CDHtmlDialog::DDX_DHtml_ElementText](../Topic/CDHtmlDialog::DDX_DHtml_ElementText.md).  
  
## Remarks  
 This macro will only succeed when run on controls that have a Value property. Controls that have a Value property include edit boxes, list boxes, and combo boxes.  
  
 This macro calls the [CDHtmlDialog::DDX_DHtml_ElementText](../Topic/CDHtmlDialog::DDX_DHtml_ElementText.md) function using the DISPID_A_VALUE dispatch ID.  
  
## Requirements  
 **Header:** afxdhtml.h  
  
## See Also  
 [DDX_DHtml Helper Macros](../VS_visualcpp/DDX_DHtml-Helper-Macros.md)