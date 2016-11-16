---
title: "marshal_context::~marshal_context | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "marshal_context::~marshal_context"
  - "msclr.interop.marshal_context.~marshal_context"
  - "marshal_context.~marshal_context"
  - "msclr::interop::marshal_context::~marshal_context"
  - "~marshal_context"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "marshal_context class [C++], operations"
ms.assetid: 34c41b38-4c33-4f61-b74e-831ac46b4ab5
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# marshal_context::~marshal_context
Destroys a `marshal_context` object.  
  
## Syntax  
  
```  
~marshal_context();  
```  
  
## Remarks  
 Some data conversions require a marshal context. See [Overview of Marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md) for more information about which translations require a context and which marshaling file has to be included in your application.  
  
 Deleting a `marshal_context` object will invalidate the data converted by that context. If you want to preserve your data after a `marshal_context` object is destroyed, you must manually copy the data to a variable that will persist.  
  
## Requirements  
 **Header file:** \<msclr\marshal.h>, \<msclr\marshal_windows.h>, \<msclr\marshal_cppstd.h>, or \<msclr\marshal_atl.h>  
  
 **Namespace:** msclr::interop  
  
## See Also  
 [Overview of Marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md)   
 [marshal_as](../dotnet/marshal-as.md)   
 [marshal_context Class](../dotnet/marshal-context-class.md)