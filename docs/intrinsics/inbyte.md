---
title: "__inbyte | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__inbyte", "__inbyte_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["in instruction", "__inbyte intrinsic"]
ms.assetid: 03b61799-2a08-474d-adc4-2cbf7c81a4d5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __inbyte
**Microsoft Specific**  
  
 Generates the `in` instruction, returning one byte read from the port specified by `Port`.  
  
## Syntax  
  
```  
unsigned char __inbyte(  
   unsigned short Port  
);  
```  
  
#### Parameters  
 [in] `Port`  
 The port to read from.  
  
## Return Value  
 The byte read from the specified port.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__inbyte`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
**END Microsoft Specific**  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)