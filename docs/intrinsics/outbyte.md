---
title: "__outbyte | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__outbyte"]
dev_langs: ["C++"]
helpviewer_keywords: ["out instruction", "__outbyte intrinsic"]
ms.assetid: c4cd1a34-8a02-4e37-993d-3201bc17901a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __outbyte
**Microsoft Specific**  
  
 Generates the `out` instruction, which sends 1 byte specified by `Data` out the I/O port specified by `Port`.  
  
## Syntax  
  
```  
void __outbyte(   
   unsigned short Port,   
   unsigned char Data   
);  
```  
  
#### Parameters  
 [in] `Port`  
 The port to send the data to.  
  
 [in] `Data`  
 The byte to be sent out the specified port.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__outbyte`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)