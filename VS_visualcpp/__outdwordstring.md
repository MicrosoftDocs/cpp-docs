---
title: "__outdwordstring"
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
ms.assetid: 55b31a65-aab7-4b5c-b61d-d9e2fb0c497a
caps.latest.revision: 12
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
# __outdwordstring
**Microsoft Specific**  
  
 Generates the `rep outsd`instruction, which sends `Count` doublewords starting at `Buffer` out the I/O port specified by `Port`.  
  
## Syntax  
  
```  
void __outdwordstring(   
   unsigned short Port,   
   unsigned long* Buffer,   
   unsigned long Count   
);  
```  
  
#### Parameters  
 [in] `Port`  
 The port to send the data to.  
  
 [in] `Buffer`  
 A pointer to the data to be sent out the specified port.  
  
 [in] `Count`  
 The number of doublewords to send.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__outdwordstring`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)