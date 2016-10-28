---
title: "__readgsbyte, __readgsdword, __readgsqword, __readgsword"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "__readgsbyte"
  - "__readgsdword"
  - "__readgsqword"
  - "__readgsword"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__readgsword intrinsic"
  - "__readgsdword intrinsic"
  - "__readgsqword intrinsic"
  - "__readgsbyte intrinsic"
ms.assetid: f822632d-854c-4558-a71b-cdfc3eea2236
caps.latest.revision: 10
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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
|`__readgsbyte`|[!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)]|  
|`__readgsdword`|[!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)]|  
|`__readgsqword`|[!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)]|  
|`__readgsword`|[!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 These intrinsics are only available in kernel mode, and the routines are only available as intrinsics.  
  
## END Microsoft Specific  
  
## See Also  
 [__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../intrinsics/__writegsbyte--__writegsdword--__writegsqword--__writegsword.md)   
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)