---
title: "__indword | Microsoft Docs"
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
  - "__indword_cpp"
  - "__indword"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "in instruction"
  - "__indword intrinsic"
ms.assetid: 1068d686-586e-4e36-b962-d1d7c3315260
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __indword
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__indword](https://docs.microsoft.com/cpp/intrinsics/indword).  
  
  
Microsoft Specific**  
  
 Reads one double word of data from the specified port using the `in` instruction.  
  
## Syntax  
  
```  
unsigned long __indword(  
   unsigned short Port  
);  
```  
  
#### Parameters  
 [in] `Port`  
 The port to read from.  
  
## Return Value  
 The word read from the port.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__indword`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

