---
title: "__indwordstring | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__indwordstring", "__indwordstring_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["__indwordstring intrinsic", "rep insd instruction"]
ms.assetid: 96a1cf33-f691-4916-99e4-fa849b61e3a9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __indwordstring
**Microsoft Specific**  
  
 Reads data from the specified port using the `rep insd` instruction.  
  
## Syntax  
  
```  
void __indwordstring(  
   unsigned short Port,  
   unsigned long* Buffer,  
   unsigned long Count  
);  
```  
  
#### Parameters  
 [in] `Port`  
 The port to read from.  
  
 [out] `Buffer`  
 The data read from the port is written here.  
  
 [in] `Count`  
 The number of bytes of data to read.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__indwordstring`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)