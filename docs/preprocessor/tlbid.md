---
title: "tlbid | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tlbid"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tlbid attribute"
ms.assetid: 54b06785-191b-4e77-a9a5-485f2b4acb09
caps.latest.revision: 4
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
# tlbid
**C++ Specific**  
  
 Allows for loading libraries other than the primary type library.  
  
## Syntax  
  
```  
tlbid(number)  
```  
  
#### Parameters  
 `number`  
 The number of the type library in `filename`.  
  
## Remarks  
 If multiple type libraries are built into a single DLL, it possible to load libraries other than the primary type library by using `tlbid`.  
  
 For example:  
  
```  
#import <MyResource.dll> tlbid(2)  
```  
  
 is equivalent to:  
  
```  
LoadTypeLib("MyResource.dll\\2");  
```  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)