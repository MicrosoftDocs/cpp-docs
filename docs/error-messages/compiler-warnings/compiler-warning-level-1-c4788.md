---
title: "Compiler Warning (Level 1) C4788 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4788"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4788"
ms.assetid: 47d75bda-f833-4bdd-93a0-a134df0cd303
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Warning (Level 1) C4788
'identifier' : identifier was truncated to 'number' characters  
  
 The compiler limits the maximum length allowed for a function name. When the compiler generates funclets for EH/SEH code, it forms the funclet name by prepending the function name with some text, for example "__catch", "\__unwind", or another string.  
  
 The resulting funclet name can be too long, and the compiler will truncate it and generate C4788.  
  
 To resolve this warning, shorten the original function name. If the function is a C++ template function or method, use a typedef for part of the name. For example:  
  
```  
C1<x, y, z<T>>::C2<a,b,c>::f  
```  
  
 can be replaced by:  
  
```  
typedef C1<x, y, z<T>>::C2<a,b,c> new_class ;  
new_class::f  
```  
  
 This warning only occurs in the [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] compiler.