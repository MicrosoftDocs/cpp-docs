---
title: "Compiler Error C2292 | Microsoft Docs"
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
  - "C2292"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2292"
ms.assetid: 256b392f-2b8f-4162-b578-e7633984e162
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2292
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2292](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2292).  
  
  
identifier': best case inheritance representation: 'representation1' declared but 'representation2' required  
  
 Compiling the following code with [/vmb](../../build/reference/vmb-vmg-representation-method.md) ("Best-case always" representation) causes C2292.  
  
```  
// C2292.cpp  
// compile with: /vmb  
class __single_inheritance X;  
  
struct A { };  
struct B { };  
struct X : A, B { };  // C2292, X uses multiple inheritance  
```

