---
title: "Compiler Warning (level 3) C4278"
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
ms.assetid: 4b6053fb-df62-4c04-b6c8-c011759557b8
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
# Compiler Warning (level 3) C4278
'identifier': identifier in type library 'tlb' is already a macro; use the 'rename' qualifier  
  
 When using [#import](../VS_visualcpp/#import-Directive--C---.md), an identifier in the typelib you are importing is attempting to declare an identifier ***identifier***. However, this is already a valid symbol.  
  
 Use the `#import` **rename** attribute to assign an alias to the symbol in the type library.