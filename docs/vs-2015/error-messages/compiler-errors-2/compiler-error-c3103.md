---
title: "Compiler Error C3103 | Microsoft Docs"
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
  - "C3103"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3103"
ms.assetid: 7984bd3e-d51d-43e4-b6f4-08c1e9fb9704
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3103
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3103](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3103).  
  
  
argument': repeated named argument  
  
 An attribute can not repeat named arguments.  
  
 For more information, see [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3103.  
  
```  
// C3103.cpp  
// compile with: /clr /c  
using namespace System;  
  
[AttributeUsage(AttributeTargets::All)]  
public ref class Attr : public Attribute {  
public:  
   int m_t;  
};  
  
[Attr(m_t = 10, m_t = 1)]   // C3103  
// try the following line instead  
// [Attr(m_t = 10)]  
ref class A {};  
```

