---
title: "__writefsbyte, __writefsdword, __writefsqword, __writefsword"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 23ac6e8e-bc91-4e90-a4c6-da02993637ad
caps.latest.revision: 11
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
# __writefsbyte, __writefsdword, __writefsqword, __writefsword
**Microsoft Specific**  
  
 Write memory to a location specified by an offset relative to the beginning of the FS segment.  
  
## Syntax  
  
```  
void __writefsbyte(   
   unsigned long Offset,   
   unsigned char Data   
);  
void __writefsword(   
   unsigned long Offset,   
   unsigned short Data   
);  
void __writefsdword(   
   unsigned long Offset,   
   unsigned long Data   
);  
void __writefsqword(   
   unsigned long Offset,   
   unsigned __int64 Data   
);  
```  
  
#### Parameters  
 [in] `Offset`  
 The offset from the beginning of FS to write to.  
  
 [in] `Data`  
 The value to write.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__writefsbyte`|x86|  
|`__writefsword`|x86|  
|`__writefsdword`|x86|  
|`__writefsqword`|x86|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 These routines are available only as intrinsics.  
  
## END Microsoft Specific  
  
## See Also  
 [__readfsbyte, \__readfsdword, \__readfsqword, \__readfsword](../VS_visualcpp/__readfsbyte--__readfsdword--__readfsqword--__readfsword.md)   
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)