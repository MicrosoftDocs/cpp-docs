---
title: "Linker Tools Error LNK1223"
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
ms.topic: error-reference
ms.assetid: c4728c36-daee-462f-a1c7-8733dcdec88e
caps.latest.revision: 7
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
# Linker Tools Error LNK1223
invalid or corrupt file: file contains invalid .pdata contributions  
  
 For RISC platforms that use pdata, this error will occur if the compiler emitted a .pdata section with unsorted entries.  
  
 To fix this issue, try compiling without [/GL (Whole Program Optimization)](../VS_visualcpp/Linker-Tools-Error-LNK1223.md) enabled. Empty function bodies can also cause this error in some cases.