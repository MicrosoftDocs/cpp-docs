---
title: "no_registry | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "no_registry"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "no_registry attribute"
ms.assetid: d30de4e2-551c-428c-98fd-951330d578d3
caps.latest.revision: 5
author: "corob-msft"
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
# no_registry
`no_registry` tells the compiler not to search the registry for type libraries imported with `#import`.  
  
## Syntax  
  
```  
  
#import filename no_registry  
```  
  
#### Parameters  
 *filename*  
 A type library.  
  
## Remarks  
 If a referenced type library is not found in the include directories, the compilation will fail even if the type library is in the registry.  `no_registry` propagates to other type libraries implicitly imported with `auto_search`.  
  
 The compiler will never search the registry for type libraries that are specified by file name and passed directly to `#import`.  
  
 When `auto_search` is specified, the additional `#import`s will be generated with the `no_registry` setting of the initial `#import` (if the initial `#import` directive was `no_registry`, an `auto_search`-generated `#import` is also `no_registry`.)  
  
 `no_registry` is useful if you want to import cross referenced type libraries without the risk of the compiler finding an older version of the file in the registry.  `no_registry` is also useful if the type library is not registered.  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)