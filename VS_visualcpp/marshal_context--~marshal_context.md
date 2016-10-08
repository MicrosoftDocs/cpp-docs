---
title: "marshal_context::~marshal_context"
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
ms.assetid: 34c41b38-4c33-4f61-b74e-831ac46b4ab5
caps.latest.revision: 8
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
# marshal_context::~marshal_context
Destroys a `marshal_context` object.  
  
## Syntax  
  
```  
~marshal_context();  
```  
  
## Remarks  
 Some data conversions require a marshal context. See [Overview of Marshaling in C++](../VS_visualcpp/Overview-of-Marshaling-in-C--.md) for more information about which translations require a context and which marshaling file has to be included in your application.  
  
 Deleting a `marshal_context` object will invalidate the data converted by that context. If you want to preserve your data after a `marshal_context` object is destroyed, you must manually copy the data to a variable that will persist.  
  
## Requirements  
 **Header file:** <msclr\marshal.h>, <msclr\marshal_windows.h>, <msclr\marshal_cppstd.h>, or <msclr\marshal_atl.h>  
  
 **Namespace:** msclr::interop  
  
## See Also  
 [Overview of Marshaling in C++](../VS_visualcpp/Overview-of-Marshaling-in-C--.md)   
 [marshal_as](../VS_visualcpp/marshal_as.md)   
 [marshal_context Class](../VS_visualcpp/marshal_context-Class.md)