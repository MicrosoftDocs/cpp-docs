---
title: "__inwordstring | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__inwordstring", "__inwordstring_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["__inwordstring intrinsic", "rep insw instruction"]
ms.assetid: 6de37939-017a-4740-9e3d-7de78a30daba
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __inwordstring
**Microsoft Specific**  
  
 Reads data from the specified port using the `rep insw` instruction.  
  
## Syntax  
  
```  
void __inwordstring(  
   unsigned short Port,  
   unsigned short* Buffer,  
   unsigned long Count  
);  
```  
  
#### Parameters  
 [in] `Port`  
 The port to read from.  
  
 [out] `Buffer`  
 The data read from the port is written here.  
  
 [in] `Count`  
 The number of words of data to read.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__inwordstring`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)