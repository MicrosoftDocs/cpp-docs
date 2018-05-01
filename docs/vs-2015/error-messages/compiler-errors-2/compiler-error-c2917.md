---
title: "Compiler Error C2917 | Microsoft Docs"
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
  - "C2917"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2917"
ms.assetid: ec9da9ee-0f37-47b3-87dd-19ef5a14dc4c
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2917
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2917](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2917).  
  
  
name' : invalid template-parameter  
  
 A template parameter list contains an identifier that was not a template parameter.  
  
## Example  
 The following sample generates C2917.  
  
```  
// C2917.cpp  
// compile with: /c  
template<class T> class Vector {  
   void sort();  
};  
  
template<class T*> void Vector<T>::sort() {}   // C2917  
// try the following line instead  
// template<class T> void Vector<T>::sort() {}  
```

