---
title: "no_auto_exclude"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 3241ef9c-758a-4e86-bdc5-37da6072430f
caps.latest.revision: 5
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
# no_auto_exclude
**C++ Specific**  
  
 Disables automatic exclusion.  
  
## Syntax  
  
```  
no_auto_exclude  
```  
  
## Remarks  
 Type libraries may include definitions of items defined in system headers or other type libraries. `#import` attempts to avoid multiple definition errors by automatically excluding such items. When this is done, [Compiler Warning (level 3) C4192](../VS_visualcpp/Compiler-Warning--level-3--C4192.md) will be issued for each item to be excluded. You can disable this automatic exclusion by using this attribute.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../VS_visualcpp/#import-Attributes--C---.md)   
 [#import Directive](../VS_visualcpp/#import-Directive--C---.md)