---
title: "Compiler Error C3174 | Microsoft Docs"
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
  - "C3174"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3174"
ms.assetid: fe6b3b5a-8196-485f-a45f-0b2e51df4086
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3174
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3174](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3174).  
  
  
module attribute was not specified  
  
 A program that uses Visual C++ attributes did not also use the [module](../../windows/module-cpp.md) attribute, which is required in any program that uses attributes.  
  
 The following sample generates C3174:  
  
```  
// C3174.cpp  
// C3174 expected  
// uncomment the following line to resolve this C3174  
// [module(name="x")];  
[export]  
struct S  
{  
   int i;  
};  
  
int main()  
{  
}  
```

