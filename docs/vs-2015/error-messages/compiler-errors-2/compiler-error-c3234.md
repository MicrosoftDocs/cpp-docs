---
title: "Compiler Error C3234 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3234"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3234"
ms.assetid: ebefc15a-e40d-424b-a3dd-d7e185d0ed7b
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3234
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3234](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3234).  
  
  
a generic class may not derive from a generic type parameter  
  
 A generic class cannot inherit from a generic type parameter.  
  
## Example  
 The following sample generates C3234.  
  
```  
// C3234.cpp  
// compile with: /clr /c  
generic <class T>  
public ref class C : T {};   // C3234  
// try the following line instead  
// public ref class C {};  
```

