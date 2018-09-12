---
title: "__outwordstring | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__outwordstring"]
dev_langs: ["C++"]
helpviewer_keywords: ["rep outsw instruction", "__outwordstring intrinsic", "outsw instruction"]
ms.assetid: b470c7a0-1de9-4370-886a-b2c3a1f842f4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __outwordstring
**Microsoft Specific**  
  
 Generates the `rep outsw` instruction, which sends `Count` words starting at `Buffer` out the I/O port specified by `Port`.  
  
## Syntax  
  
```  
void __outwordstring(   
   unsigned short Port,   
   unsigned short* Buffer,   
   unsigned long Count   
);  
```  
  
#### Parameters  
`Port`<br/>
[in] The port to send the data to.  
  
`Buffer`<br/>
[in] A pointer to the data to be sent out the specified port.  
  
`Count`<br/>
[in] The number of words to send.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__outwordstring`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)