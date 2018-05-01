---
title: "Compiler Error C2953 | Microsoft Docs"
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
  - "C2953"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2953"
ms.assetid: 8dbcfa24-8296-4e40-bdc4-5526c07d8892
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2953
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2953](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2953).  
  
  
identifier' : class template has already been defined  
  
 Check the source file and include files for other definitions.  
  
 The following sample generates C2953:  
  
```  
// C2953.cpp  
// compile with: /c  
template <class T>  class A {};  
template <class T>  class A {};   // C2953  
template <class T>  class B {};   // OK  
```

