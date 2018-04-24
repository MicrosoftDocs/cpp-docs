---
title: "Compiler Error C3390 | Microsoft Docs"
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
  - "C3390"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3390"
ms.assetid: 84800a87-c8e6-45aa-82ae-02f816dc8d97
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3390
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3390](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3390).  
  
  
type_arg' : invalid type argument for generic parameter 'param' of generic 'generic_type', must be a reference type  
  
 A generic type was instantiated incorrectly.  Check the type definition.  For more information, see [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## Example  
 The following sample, using C#, creates a component that contains a generic type, with certain constraints that are not supported when authoring generic types in [!INCLUDE[vcprvclong](../../includes/vcprvclong-md.md)]. For more information, see .[Constraints on Type Parameters](http://msdn.microsoft.com/library/141b003e-1ddb-4e1c-bcb2-e1c3870e6a51).  
  
```  
// C3390.cs  
// compile with: /target:library  
// a C# program  
public class GR<C, V, N>  
where C : class  
where V : struct  
where N : new() {}  
```  
  
## Example  
 The following sample generates C3390.  
  
```  
// C3390_b.cpp  
// compile with: /clr  
#using <C3390.dll>  
ref class R { R(int) {} };  
value class V {};  
ref struct N { N() {} };  
  
int main () {  
   GR<V, V, N^>^ gr2;   // C3390 first type must be a ref type  
   GR<R^, V, N^>^ gr2b;   // OK  
}  
```

