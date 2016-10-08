---
title: "__outbyte"
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
ms.assetid: c4cd1a34-8a02-4e37-993d-3201bc17901a
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
# __outbyte
**Microsoft Specific**  
  
 Generates the `out` instruction, which sends 1 byte specified by `Data` out the I/O port specified by `Port`.  
  
## Syntax  
  
```  
void __outbyte(   
   unsigned short Port,   
   unsigned char Data   
);  
```  
  
#### Parameters  
 [in] `Port`  
 The port to send the data to.  
  
 [in] `Data`  
 The byte to be sent out the specified port.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__outbyte`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)