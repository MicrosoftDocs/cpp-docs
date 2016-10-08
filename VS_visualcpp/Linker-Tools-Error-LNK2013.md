---
title: "Linker Tools Error LNK2013"
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
ms.assetid: 21408e2d-3f56-4d1f-a031-00df70785ed4
caps.latest.revision: 8
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
# Linker Tools Error LNK2013
fixup type fixup overflow. Target 'symbol name' is out of range  
  
 The linker cannot fit the necessary address or offset into the given instruction because the target symbol is too far away from the instruction's location.  
  
 You can resolve this problem by creating multiple images or by using the [/ORDER](../VS_visualcpp/-ORDER--Put-Functions-in-Order-.md) option so the instruction and target are closer together.  
  
 When the symbol name is a user-defined symbol (and not a compiler-generated symbol), you can also try the following actions to resolve the error:  
  
-   Change the static function to be non-static.  
  
-   Rename the code section containing the static function to be the same as the caller.  
  
 Use `DUMPBIN /SYMBOLS`, to see if a function is static.