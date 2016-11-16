---
title: "Compiler Warning (level 1) C4116 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4116"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4116"
ms.assetid: 25434ef3-061e-4252-91a5-0fe2a4b2ffb3
caps.latest.revision: 6
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
# Compiler Warning (level 1) C4116
unnamed type definition in parentheses  
  
 A structure, union, or enumerated type with no name is defined in a parenthetical expression. The type definition is meaningless.  
  
 In a C function call, the definition has global scope. In a C++ function call, the definition has the same scope as the function being called.