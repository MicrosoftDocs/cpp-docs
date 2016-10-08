---
title: "__incgsbyte, __incgsword, __incgsdword, __incgsqword"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 06bfdf4f-7643-4fe0-8455-60ce3068073e
caps.latest.revision: 5
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# __incgsbyte, __incgsword, __incgsdword, __incgsqword
**Microsoft Specific**  
  
 Add one to the value at a memory location specified by an offset relative to the beginning of the `GS` segment.  
  
## Syntax  
  
```  
void __incgsbyte(   
   unsigned long Offset   
);  
void __incgsword(   
   unsigned long Offset   
);  
void __incgsdword(   
   unsigned long Offset  
);  
void __incgsqword(   
   unsigned long Offset   
);  
```  
  
#### Parameters  
 [in] `Offset`  
 The offset from the beginning of `GS`.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__incgsbyte`|x64|  
|`__incgsword`|x64|  
|`__incgsdword`|x64|  
|`__incgsqword`|x64|  
  
## Remarks  
 These intrinsics are only available in kernel mode, and the routines are only available as intrinsics.  
  
## END Microsoft Specific  
  
## See Also  
 [__addgsbyte, \__addgsword, \__addgsdword, \__addgsqword](../VS_visualcpp/__addgsbyte--__addgsword--__addgsdword--__addgsqword.md)   
 [__readgsbyte, \__readgsdword, \__readgsqword, \__readgsword](../VS_visualcpp/__readgsbyte--__readgsdword--__readgsqword--__readgsword.md)   
 [__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../VS_visualcpp/__writegsbyte--__writegsdword--__writegsqword--__writegsword.md)   
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)