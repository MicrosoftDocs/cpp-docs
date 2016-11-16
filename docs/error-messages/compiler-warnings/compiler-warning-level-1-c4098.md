---
title: "Compiler Warning (level 1) C4098 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4098"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4098"
ms.assetid: 8c8aef1c-1639-44ec-a3dd-c0dfe9aa727d
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
# Compiler Warning (level 1) C4098
'function' : void function returning a value  
  
 A function declared with return type [void](../../cpp/void-cpp.md) has a `return` statement that returns a value. The compiler assumes the function returns a value of type `int`.