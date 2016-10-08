---
title: "__readgsbyte, __readgsdword, __readgsqword, __readgsword"
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
ms.assetid: f822632d-854c-4558-a71b-cdfc3eea2236
caps.latest.revision: 10
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
# __readgsbyte, __readgsdword, __readgsqword, __readgsword
**Microsoft Specific**  
  
 Read memory from a location specified by an offset relative to the beginning of the GS segment.  
  
## Syntax  
  
```  
unsigned char __readgsbyte(   
   unsigned long Offset   
);  
unsigned short __readgsword(   
   unsigned long Offset   
);  
unsigned long __readgsdword(   
   unsigned long Offset  
);  
unsigned __int64 __readgsqword(   
   unsigned long Offset   
);  
```  
  
#### Parameters  
 [in] `Offset`  
 The offset from the beginning of `GS` to read from.  
  
## Return Value  
 The memory contents of the byte, word, double word, or quadword (as indicated by the name of the function called) at the location `GS:[``Offset``]`.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readgsbyte`|x64|  
|`__readgsdword`|x64|  
|`__readgsqword`|x64|  
|`__readgsword`|x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 These intrinsics are only available in kernel mode, and the routines are only available as intrinsics.  
  
## END Microsoft Specific  
  
## See Also  
 [__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../VS_visualcpp/__writegsbyte--__writegsdword--__writegsqword--__writegsword.md)   
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)