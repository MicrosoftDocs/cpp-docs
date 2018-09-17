---
title: "__inbytestring | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__inbytestring", "__inbytestring_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["rep insb instruction", "__inbytestring intrinsic"]
ms.assetid: fe549556-e7a3-4af3-8ebf-8a7dc3cb233b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __inbytestring
**Microsoft Specific**  
  
 Reads data from the specified port using the `rep insb` instruction.  
  
## Syntax  
  
```  
void __inbytestring(  
   unsigned short Port,  
   unsigned char* Buffer,  
   unsigned long Count  
);  
```  
  
#### Parameters  
*Port*<br/>
[in] The port to read from.  
  
*Buffer*<br/>
[out] The data read from the port is written here.  
  
*Count*<br/>
[in] The number of bytes of data to read.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__inbytestring`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)