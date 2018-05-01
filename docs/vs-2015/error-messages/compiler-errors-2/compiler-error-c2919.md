---
title: "Compiler Error C2919 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2919
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2919](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2919).  
  
  
type': Operators cannot be used on the published surface of a WinRT type  
  
 The Windows Runtime type system does not support operator member functions in the published surface of a type. This is because not all languages can consume operator member functions. You can create private or internal operator member functions that can be called from C++ code in the same class or compilation unit.  
  
 To fix this issue, remove the operator member function from the public interface, or change it to a named member function. For example, instead of `operator==`, name the member function `Equals`.

