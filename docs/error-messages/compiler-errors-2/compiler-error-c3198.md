---
title: "Compiler Error C3198 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3198"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3198"
ms.assetid: ec4ecf61-0067-4aa4-b443-a91013a1e59d
caps.latest.revision: 8
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
# Compiler Error C3198
invalid use of floating-point pragmas: fenv_access pragma operates only in precise mode  
  
 [fenv_access](../../preprocessor/fenv-access.md) pragma was used under an [/fp](../../build/reference/fp-specify-floating-point-behavior.md) setting other than **/fp:precise**.  
  
 The following sample generates C3198:  
  
```  
// C3198.cpp  
// compile with: /fp:fast  
#pragma fenv_access(on)   // C3198  
```