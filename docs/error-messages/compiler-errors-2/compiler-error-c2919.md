---
title: "Compiler Error C2919 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2919"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2919"
ms.assetid: 140a6db9-eb48-4c5e-84a7-a09d2653605b
caps.latest.revision: 13
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
# Compiler Error C2919
'type': Operators cannot be used on the published surface of a WinRT type  
  
 The Windows Runtime type system does not support operator member functions in the published surface of a type. This is because not all languages can consume operator member functions. You can create private or internal operator member functions that can be called from C++ code in the same class or compilation unit.  
  
 To fix this issue, remove the operator member function from the public interface, or change it to a named member function. For example, instead of `operator==`, name the member function `Equals`.