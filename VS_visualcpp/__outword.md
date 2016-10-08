---
title: "__outword"
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
ms.assetid: 995f8834-0f50-4b4f-a7a2-af0e7c371cda
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
# __outword
**Microsoft Specific**  
  
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
|`__outword`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)