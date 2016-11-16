---
title: "Compiler Error C2708 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2708"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2708"
ms.assetid: d52d3088-1141-42f4-829c-74755a7fcc3a
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
# Compiler Error C2708
'identifier' : actual parameters length in bytes differs from previous call or reference  
  
 A [__stdcall](../../cpp/stdcall.md) function must be preceded by a prototype. Otherwise, the compiler interprets the first call to the function as a prototype and this error occurs when the compiler encounters a call that does not match.  
  
 To fix this error add a function prototype.