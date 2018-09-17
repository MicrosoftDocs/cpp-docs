---
title: "__outdwordstring | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__outdwordstring"]
dev_langs: ["C++"]
helpviewer_keywords: ["outsd instruction", "__outdwordstring intrinsic", "rep outsd instruction"]
ms.assetid: 55b31a65-aab7-4b5c-b61d-d9e2fb0c497a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __outdwordstring
**Microsoft Specific**  
  
 Generates the `rep outsd` instruction, which sends `Count` doublewords starting at `Buffer` out the I/O port specified by `Port`.  
  
## Syntax  
  
```  
void __outdwordstring(   
   unsigned short Port,   
   unsigned long* Buffer,   
   unsigned long Count   
);  
```  
  
#### Parameters  
*Port*<br/>
[in] The port to send the data to.  
  
*Buffer*<br/>
[in] A pointer to the data to be sent out the specified port.  
  
*Count*<br/>
[in] The number of doublewords to send.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__outdwordstring`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)