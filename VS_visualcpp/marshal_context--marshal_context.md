---
title: "marshal_context::marshal_context"
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
ms.assetid: 5f08c895-60b0-4f72-97ff-7ae37c68e853
caps.latest.revision: 9
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
# marshal_context::marshal_context
Constructs a `marshal_context` object to use for data conversion between managed and native data types.  
  
## Syntax  
  
```  
marshal_context();  
```  
  
## Remarks  
 Some data conversions require a marshal context. See [Overview of Marshaling in C++](../VS_visualcpp/Overview-of-Marshaling-in-C--.md) for more information about which translations require a context and which marshaling file has to be included in your application.  
  
## Example  
 See the example for [marshal_context::marshal_as](../VS_visualcpp/marshal_context--marshal_as.md).  
  
## Requirements  
 **Header file:** <msclr\marshal.h>, <msclr\marshal_windows.h>, <msclr\marshal_cppstd.h>, or <msclr\marshal_atl.h>  
  
 **Namespace:** msclr::interop  
  
## See Also  
 [Overview of Marshaling in C++](../VS_visualcpp/Overview-of-Marshaling-in-C--.md)   
 [marshal_as](../VS_visualcpp/marshal_as.md)   
 [marshal_context Class](../VS_visualcpp/marshal_context-Class.md)