---
title: "Compiler Warning (level 4) C4232 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4232"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4232"
ms.assetid: f92028a5-4ddd-43c1-97f5-4f724e5e14af
caps.latest.revision: 7
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
# Compiler Warning (level 4) C4232
nonstandard extension used : 'identifier' : address of dllimport 'dllimport' is not static, identity not guaranteed  
  
 Under Microsoft extensions (/Ze), you can give a nonstatic value as the address of a function declared with the **dllimport** modifier. Under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)), this causes an error.  
  
 The following sample generates C4232:  
  
```  
// C4232.c  
// compile with: /W4 /Ze /c  
int __declspec(dllimport) f();  
int (*pfunc)() = &f;   // C4232  
```