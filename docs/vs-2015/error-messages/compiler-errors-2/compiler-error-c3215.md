---
title: "Compiler Error C3215 | Microsoft Docs"
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
  - "C3215"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3215"
ms.assetid: d0d16007-8885-42e0-b086-2d3a61f348c5
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3215
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3215](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3215).  
  
  
type1' : generic type parameter already constrained by 'type2'  
  
 A constraint was specified more than once.  
  
 For more information on generics, see [Generics](../../windows/generics-cpp-component-extensions.md).  
  
 The following sample generates C3215:  
  
```  
// C3215.cpp  
// compile with: /clr  
interface struct A {};  
  
generic <class T>  
where T : A,A  
ref class C {};   // C3215  
```  
  
 Possible resolution:  
  
```  
// C3215b.cpp  
// compile with: /clr /c  
interface struct A {};  
  
generic <class T>  
where T : A  
ref class C {};  
```

