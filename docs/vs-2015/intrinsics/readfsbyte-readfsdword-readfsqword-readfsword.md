---
title: "__readfsbyte, __readfsdword, __readfsqword, __readfsword | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__readfsword"
  - "__readfsdword"
  - "__readfsbyte"
  - "__readfsqword"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__readfsword intrinsic"
  - "readfsword intrinsic"
  - "__readfsdword intrinsic"
  - "readfsbyte intrinsic"
  - "__readfsbyte intrinsic"
  - "readfsdword intrinsic"
  - "readfsqword intrinsic"
  - "__readfsqword intrinsic"
ms.assetid: f6ee7203-4179-402c-a464-0746c84ce6ac
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __readfsbyte, __readfsdword, __readfsqword, __readfsword
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__readfsbyte, __readfsdword, __readfsqword, __readfsword](https://docs.microsoft.com/cpp/intrinsics/readfsbyte-readfsdword-readfsqword-readfsword).  
  
  
Microsoft Specific**  
  
 Read memory from a location specified by an offset relative to the beginning of the FS segment.  
  
## Syntax  
  
```  
unsigned char __readfsbyte(   
   unsigned long Offset   
);  
unsigned short __readfsword(   
   unsigned long Offset   
);  
unsigned long __readfsdword(   
   unsigned long Offset  
);  
unsigned __int64 __readfsqword(   
   unsigned long Offset   
);  
```  
  
#### Parameters  
 [in] `Offset`  
 The offset from the beginning of `FS` to read from.  
  
## Return Value  
 The memory contents of the byte, word, doubleword, or quadword (as indicated by the name of the function called) at the location `FS:[``Offset``]`.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readfsbyte`|x86|  
|`__readfsdword`|x86|  
|`__readfsqword`|x86|  
|`__readfsword`|x86|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 These routines are available only as intrinsics.  
  
## END Microsoft Specific  
  
## See Also  
 [__writefsbyte, \__writefsdword, \__writefsqword, \__writefsword](../intrinsics/writefsbyte-writefsdword-writefsqword-writefsword.md)   
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

