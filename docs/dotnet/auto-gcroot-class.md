---
title: "auto_gcroot Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "msclr::auto_gcroot"
  - "msclr.auto_gcroot"
  - "auto_gcroot"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_gcroot"
ms.assetid: b5790912-265d-463e-a486-47302e91042a
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
# auto_gcroot Class
Automatic resource management (like [auto_ptr Class](../standard-library/auto-ptr-class.md)) which can be used to embed a virtual handle into a native type.  
  
## Syntax  
  
```  
template<typename _element_type>  
class auto_gcroot;  
```  
  
#### Parameters  
 `_element_type`  
 The managed type to be embedded.  
  
## Requirements  
 **Header file** \<msclr\auto_gcroot.h>  
  
 **Namespace** msclr  
  
## See Also  
 [auto_gcroot](../dotnet/auto-gcroot.md)   
 [auto_gcroot Members](../dotnet/auto-gcroot-members.md)   
 [How to: Declare Handles in Native Types](../dotnet/how-to-declare-handles-in-native-types.md)   
 [auto_handle Class](../dotnet/auto-handle-class.md)