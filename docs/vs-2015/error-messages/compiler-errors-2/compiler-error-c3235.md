---
title: "Compiler Error C3235 | Microsoft Docs"
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
  - "C3235"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3235"
ms.assetid: 0554d6c7-e1dc-4c99-8934-cbcf491c8203
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3235
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3235](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3235).  
  
  
specialization' : explicit or partial specialization of a generic class is not allowed  
  
 Generic classes cannot be used for explicit or partial specializations.  
  
## Example  
 The following sample generates C3235.  
  
```  
// C3235.cpp  
// compile with: /clr  
generic<class T>  
public ref class C {};  
  
generic<>  
public ref class C<int> {};   // C3235 Remove this specialization to resolve this error.  
```

