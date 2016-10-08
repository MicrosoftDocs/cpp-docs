---
title: "__writegsbyte, __writegsdword, __writegsqword, __writegsword"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 7746cf6d-2259-4139-9aab-c07dd75c8037
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# __writegsbyte, __writegsdword, __writegsqword, __writegsword
**Microsoft Specific**  
  
 Write memory to a location specified by an offset relative to the beginning of the GS segment.  
  
## Syntax  
  
```  
void __writegsbyte(   
   unsigned long Offset,   
   unsigned char Data   
);  
void __writegsword(   
   unsigned long Offset,   
   unsigned short Data   
);  
void __writegsdword(   
   unsigned long Offset,   
   unsigned long Data   
);  
void __writegsqword(   
   unsigned long Offset,   
   unsigned __int64 Data   
);  
```  
  
#### Parameters  
 [in] `Offset`  
 The offset from the beginning of GS to write to.  
  
 [in] `Data`  
 The value to write.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__writegsbyte`|x64|  
|`__writegsdword`|x64|  
|`__writegsqword`|x64|  
|`__writegsword`|x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 These intrinsics are available in kernel mode only, and these routines are only available as intrinsics.  
  
## END Microsoft Specific  
  
## See Also  
 [__readgsbyte, \__readgsdword, \__readgsqword, \__readgsword](../VS_visualcpp/__readgsbyte--__readgsdword--__readgsqword--__readgsword.md)   
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)