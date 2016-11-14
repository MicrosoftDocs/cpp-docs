---
title: "__outdword | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__outdword"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "out instruction"
  - "outdword instruction"
  - "__outdword intrinsic"
ms.assetid: ed1e4994-a84b-4759-8bf9-cd48fb073f4d
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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
|`__outdword`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)