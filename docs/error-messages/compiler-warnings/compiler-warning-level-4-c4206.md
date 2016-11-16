---
title: "Compiler Warning (level 4) C4206 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4206"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4206"
ms.assetid: 3df97812-3ed7-4003-9769-057acf97ce3c
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
# Compiler Warning (level 4) C4206
**nonstandard extension used : translation unit is empty**  
  
 The file was empty after preprocessing.  
  
 This extension can prevent your code from being portable to other compilers. It generates an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) and only applies to C source code.