---
title: "Compiler Error C3391 | Microsoft Docs"
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
  - "C3391"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3391"
ms.assetid: c32532b9-7db4-4ccd-84b9-479e5a1a19d1
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3391
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3391](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3391).  
  
  
type_arg' : invalid type argument for generic parameter 'param'  of generic 'generic_type', must be a non-nullable value type  
  
 A generic type was instantiated incorrectly.  Check the type definition.  For more information, see <xref:System.Nullable> and [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## Example  
 The following sample, using C#, creates a component that contains a generic type, with certain constraints that are not supported when authoring generic types in [!INCLUDE[vcprvclong](../../includes/vcprvclong-md.md)]. For more information, see .[Constraints on Type Parameters](http://msdn.microsoft.com/library/141b003e-1ddb-4e1c-bcb2-e1c3870e6a51).  
  
```  
// C3391.cs  
// compile with: /target:library  
// a C# program  
public class GR<N>  
where N : struct {}  
```  
  
## Example  
 The following sample generates C3391.  
  
```  
// C3391_b.cpp  
// compile with: /clr  
#using <C3391.dll>  
using namespace System;  
value class VClass {};  
  
int main() {  
   GR< Nullable<VClass> >^ a =   
      gcnew GR< Nullable<VClass> >();   // C3391 can't be Nullable  
   GR<VClass>^ aa = gcnew GR<VClass>();   // OK  
}  
```

