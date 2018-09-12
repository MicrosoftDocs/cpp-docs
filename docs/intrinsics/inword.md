---
title: "__inword | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__indword_cpp", "__indword"]
dev_langs: ["C++"]
helpviewer_keywords: ["in instruction", "__inword intrinsic"]
ms.assetid: 5c617edd-6709-40a1-aad2-40d5e39283c6
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __inword
**Microsoft Specific**  
  
 Reads data from the specified port using the `in` instruction.  
  
## Syntax  
  
```  
unsigned short __inword(  
   unsigned short Port  
);  
```  
  
#### Parameters  
`Port`<br/>
[in] The port to read from.  
  
## Return Value  
 The word of data read.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__inword`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)