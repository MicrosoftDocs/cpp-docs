---
title: "no_auto_exclude"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "no_auto_exclude"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "no_auto_exclude attribute"
ms.assetid: 3241ef9c-758a-4e86-bdc5-37da6072430f
caps.latest.revision: 5
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# no_auto_exclude
**C++ Specific**  
  
 Disables automatic exclusion.  
  
## Syntax  
  
```  
no_auto_exclude  
```  
  
## Remarks  
 Type libraries may include definitions of items defined in system headers or other type libraries. `#import` attempts to avoid multiple definition errors by automatically excluding such items. When this is done, [Compiler Warning (level 3) C4192](../compilerwarnings/compiler-warning--level-3--c4192.md) will be issued for each item to be excluded. You can disable this automatic exclusion by using this attribute.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../c/sharpimport-attributes--c---.md)   
 [#import Directive](../c/sharpimport-directive--c---.md)