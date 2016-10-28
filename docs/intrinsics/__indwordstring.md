---
title: "__indwordstring"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "__indwordstring"
  - "__indwordstring_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__indwordstring intrinsic"
  - "rep insd instruction"
ms.assetid: 96a1cf33-f691-4916-99e4-fa849b61e3a9
caps.latest.revision: 11
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
|`__indwordstring`|x86, [!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)