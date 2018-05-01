---
title: "__outword | Microsoft Docs"
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
  - "__outword"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__outword intrinsic"
  - "out instruction"
ms.assetid: 995f8834-0f50-4b4f-a7a2-af0e7c371cda
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __outword
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__outword](https://docs.microsoft.com/cpp/intrinsics/outword).  
  
  
Microsoft Specific**  
  
 Generates the `out` instruction, which sends the word `Data` out the I/O port specified by `Port`.  
  
## Syntax  
  
```  
void __outword(   
   unsigned short Port,   
   unsigned short Data   
);  
```  
  
#### Parameters  
 [in] `Port`  
 The port to send the data to.  
  
 [in] `Data`  
 The data to be sent.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__outword`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

