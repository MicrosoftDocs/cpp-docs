---
title: "__writegsbyte, __writegsdword, __writegsqword, __writegsword | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__writegsbyte", "__writegsqword", "__writegsdword", "__writegsword"]
dev_langs: ["C++"]
helpviewer_keywords: ["__writegsqword intrinsic", "__writegsbyte intrinsic", "__writegsword intrinsic", "__writegsdword intrinsic"]
ms.assetid: 7746cf6d-2259-4139-9aab-c07dd75c8037
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __writegsbyte, __writegsdword, __writegsqword, __writegsword
**Microsoft Specific**  
  
 Write memory to a location specified by an offset relative to the beginning of the GS segment.  
  
## Syntax  
  
```  
void __writegsbyte(   
   unsigned long Offset,   
   unsigned char Data   
);  
void __writegsword(   
   unsigned long Offset,   
   unsigned short Data   
);  
void __writegsdword(   
   unsigned long Offset,   
   unsigned long Data   
);  
void __writegsqword(   
   unsigned long Offset,   
   unsigned __int64 Data   
);  
```  
  
#### Parameters  
 [in] `Offset`  
 The offset from the beginning of GS to write to.  
  
 [in] `Data`  
 The value to write.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__writegsbyte`|x64|  
|`__writegsdword`|x64|  
|`__writegsqword`|x64|  
|`__writegsword`|x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 These intrinsics are available in kernel mode only, and these routines are only available as intrinsics.  
  
**END Microsoft Specific**  
  
## See Also  
 [__readgsbyte, \__readgsdword, \__readgsqword, \__readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)   
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)