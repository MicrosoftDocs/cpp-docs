---
title: "Compiler Error C3391 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C3391
'type_arg' : invalid type argument for generic parameter 'param'  of generic 'generic_type', must be a non-nullable value type  
  
 A generic type was instantiated incorrectly.  Check the type definition.  For more information, see <xref:System.Nullable> and [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## Example  
 The following sample, using C#, creates a component that contains a generic type, with certain constraints that are not supported when authoring generic types in [!INCLUDE[vcprvclong](../../error-messages/compiler-errors-2/includes/vcprvclong_md.md)]. For more information, see .[Constraints on Type Parameters](/dotnet/articles/csharp/programming-guide/generics/constraints-on-type-parameters).  
  
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