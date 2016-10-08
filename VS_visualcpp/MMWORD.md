---
title: "MMWORD"
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
ms.assetid: b4c5a104-9078-4fb4-afc3-d1e63abe562a
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# MMWORD
Used for 64-bit multimedia operands with MMX and SSE (XMM) instructions.  
  
## Syntax  
  
```  
MMWORD  
```  
  
## Remarks  
 `MMWORD` is a type.  Prior to MMWORD being added to MASM, equivalent functionality could have been achieved with:  
  
```  
mov mm0, qword ptr [ebx]  
```  
  
 While both instructions work on 64-bit operands, `QWORD` is the type for 64-bit unsigned integers and `MMWORD` is the type for a 64-bit multimedia value.  
  
 `MMWORD` is intended to represent the same type as [__m64](../VS_visualcpp/__m64.md).  
  
## Example  
  
```  
movq     mm0, mmword ptr [ebx]  
```