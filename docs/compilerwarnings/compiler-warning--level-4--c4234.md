---
title: "Compiler Warning (level 4) C4234"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C4234"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4234"
ms.assetid: f7fecd5c-8248-4fde-8446-502aedc357ca
caps.latest.revision: 7
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
# Compiler Warning (level 4) C4234
nonstandard extension used: 'keyword' keyword reserved for future use  
  
 The compiler does not yet implement the keyword you used.  
  
 This warning is automatically promoted to an error. If you wish to modify this behavior, use [#pragma warning](../c/warning.md). For example, to make C4234 into a level 4 warning issue,  
  
```  
#pragma warning(2:4234)  
```  
  
 in your source code file.