---
title: "__outdword | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__outdword"]
dev_langs: ["C++"]
helpviewer_keywords: ["out instruction", "outdword instruction", "__outdword intrinsic"]
ms.assetid: ed1e4994-a84b-4759-8bf9-cd48fb073f4d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __outdword
**Microsoft Specific**  
  
 Generates the `out` instruction to send a doubleword `Data` out the port `Port`.  
  
## Syntax  
  
```  
void __outdword(   
   unsigned short Port,   
   unsigned long Data   
);  
```  
  
#### Parameters  
 [in] `Port`  
 The port to send the data to.  
  
 [in] `Data`  
 The doubleword to be sent.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__outdword`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)