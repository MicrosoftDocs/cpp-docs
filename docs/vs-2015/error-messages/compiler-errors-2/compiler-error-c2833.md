---
title: "Compiler Error C2833 | Microsoft Docs"
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
  - "C2833"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2833"
ms.assetid: b9418ce1-e2ee-4599-8959-6fde89c27569
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2833
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2833](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2833).  
  
  
operator operator' is not a recognized operator or type  
  
 The word `operator` must be followed by an operator that you want to override or a type you want to convert.  
  
 For a list of the operators that you can define in a managed type, see [User-defined Operators](../../dotnet/user-defined-operators-cpp-cli.md).  
  
 The following sample generates C2833:  
  
```  
// C2833.cpp  
// compile with: /c  
class A {};  
  
void operator ::* ();   // C2833  
void operator :: ();   // OK  
```

