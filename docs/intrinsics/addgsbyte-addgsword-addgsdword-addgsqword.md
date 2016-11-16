---
title: "__addgsbyte, __addgsword, __addgsdword, __addgsqword | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__addgsdword"
  - "__addgsqword"
  - "__addgsword_cpp"
  - "__addgsword"
  - "__addgsbyte_cpp"
  - "__addgsqword_cpp"
  - "__addgsbyte"
  - "__addgsdword_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__addgsword intrinsic"
  - "__addgsqword intrinsic"
  - "__addgsdword intrinsic"
  - "__addgsbyte intrinsic"
ms.assetid: 4fa03e69-d849-49ed-ba37-1d3aa23c2a21
caps.latest.revision: 5
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
# __addgsbyte, __addgsword, __addgsdword, __addgsqword
**Microsoft Specific**  
  
 Add a value to a memory location specified by an offset relative to the beginning of the `GS` segment.  
  
## Syntax  
  
```  
void __addgsbyte(   
   unsigned long Offset,   
   unsigned char Data   
);  
void __addgsword(   
   unsigned long Offset,   
   unsigned short Data   
);  
void __addgsdword(   
   unsigned long Offset,   
   unsigned long Data   
);  
void __addgsqword(   
   unsigned long Offset,   
   unsigned __int64 Data   
);  
```  
  
#### Parameters  
 [in] `Offset`  
 The offset from the beginning of `GS`.  
  
 [in] `Data`  
 The value to add to the memory location.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__addgsbyte`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__addgsword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__addgsdword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__addgsqword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
## Remarks  
 These intrinsics are available in kernel mode only, and these routines are only available as intrinsics.  
  
## END Microsoft Specific  
  
## See Also  
 [__incgsbyte, \__incgsword, \__incgsdword, \__incgsqword](../intrinsics/incgsbyte-incgsword-incgsdword-incgsqword.md)   
 [__readgsbyte, \__readgsdword, \__readgsqword, \__readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)   
 [__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)   
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)