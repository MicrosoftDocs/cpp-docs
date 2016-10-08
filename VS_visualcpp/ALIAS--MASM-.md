---
title: "ALIAS (MASM)"
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
ms.topic: article
ms.assetid: d9725c49-58de-41da-ab01-b06a56cf5cf2
caps.latest.revision: 6
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
# ALIAS (MASM)
The **ALIAS** directive creates an alternate name for a function.  This lets you create multiple names for a function, or create libraries that allow the linker (LINK.exe) to map an old function to a new function.  
  
## Syntax  
  
```  
  
ALIAS  <  
alias  
> = <  
actual-name  
>  
  
```  
  
#### Parameters  
 `actual-name`  
 The actual name of the function or procedure.  The angle brackets are required.  
  
 `alias`  
 The alternate or alias name.  The angle brackets are required.  
  
## See Also  
 [Directives Reference](../VS_visualcpp/Directives-Reference.md)