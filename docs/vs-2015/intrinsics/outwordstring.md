---
title: "__outwordstring | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__outwordstring"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rep outsw instruction"
  - "__outwordstring intrinsic"
  - "outsw instruction"
ms.assetid: b470c7a0-1de9-4370-886a-b2c3a1f842f4
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __outwordstring
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__outwordstring](https://docs.microsoft.com/cpp/intrinsics/outwordstring).  
  
  
Microsoft Specific**  
  
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
 [in] `Port`  
 The port to send the data to.  
  
 [in] `Buffer`  
 A pointer to the data to be sent out the specified port.  
  
 [in] `Count`  
 The number of words to send.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__outwordstring`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

