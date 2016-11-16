---
title: "Compiler Error C2279 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2279"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2279"
ms.assetid: 1b5c88ef-2336-49b8-9ddb-d61f97c73e14
caps.latest.revision: 11
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
# Compiler Error C2279
exception specification cannot appear in a typedef declaration  
  
 Under **/Za**, [exception specifications](../../cpp/exception-specifications-throw-cpp.md) are not allowed in a typedef declaration.  
  
 The following sample generates C2279:  
  
```  
// C2279.cpp  
// compile with: /Za /c  
typedef int (*xy)() throw(...);   // C2279  
typedef int (*xyz)();   // OK  
```