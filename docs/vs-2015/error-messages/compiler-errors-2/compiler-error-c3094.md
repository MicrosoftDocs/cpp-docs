---
title: "Compiler Error C3094 | Microsoft Docs"
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
  - "C3094"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3094"
ms.assetid: 10da9b7c-e72d-4013-9925-c83e1bb142db
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3094
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3094](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3094).  
  
  
attribute': anonymous usage not allowed  
  
 An attribute was not scoped correctly.  For more information, see [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3094.  
  
```  
// C3094.cpp  
// compile with: /clr /c  
using namespace System;  
[AttributeUsage(AttributeTargets::Class)]  
public ref class AAttribute : Attribute {};  
  
[A];   // C3094  
  
// OK  
[A]  
ref class x{};  
```

