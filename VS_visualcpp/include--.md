---
title: "include()"
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
ms.assetid: 86c9dcb2-d9e0-4fd5-97d7-0bb3e23d6ecc
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
# include()
**C++ Specific**  
  
 Disables automatic exclusion.  
  
## Syntax  
  
```  
include("Name1"[,"Name2", ...])  
```  
  
#### Parameters  
 `Name1`  
 First item to be forcibly included.  
  
 `Name2`  
 Second item to be forcibly included (if necessary).  
  
## Remarks  
 Type libraries may include definitions of items defined in system headers or other type libraries. `#import` attempts to avoid multiple definition errors by automatically excluding such items. If items have been excluded, as indicated by [Compiler Warning (level 3) C4192](../VS_visualcpp/Compiler-Warning--level-3--C4192.md), and they should not have been, this attribute can be used to disable the automatic exclusion. This attribute can take any number of arguments, each being the name of the type-library item to be included.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../VS_visualcpp/#import-Attributes--C---.md)   
 [#import Directive](../VS_visualcpp/#import-Directive--C---.md)