---
title: "Compiler Error C3392"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: e4757596-e2aa-4314-b01e-5c4bfd2110e9
caps.latest.revision: 7
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Error C3392
'type_arg' : invalid type argument for generic parameter 'param' of generic 'generic_type', must have a public parameterless constructor  
  
 A generic type was instantiated incorrectly.  Check the type definition.  For more information [Generics](../VS_visualcpp/Generics---C---Component-Extensions-.md).  
  
## Example  
 The following sample, using C#, creates a component that contains a generic type, with certain constraints that are not supported when authoring generic types in [!INCLUDE[vcprvclong](../Token/vcprvclong_md.md)]. For more information, see .[Constraints on Type Parameters](../Topic/Constraints%20on%20Type%20Parameters%20\(C%23%20Programming%20Guide\).md).  
  
```  
// C3392.cs  
// compile with: /target:library  
// a C# program  
public class GR<C, V, N>  
where C : class  
where V : struct  
where N : new() {}  
```  
  
## Example  
 The following sample generates C3392.  
  
```  
// C3392_b.cpp  
// compile with: /clr  
#using <C3392.dll>  
  
ref class R { R(int) {} };  
ref class N { N() {} };  
  
value class V {};  
  
ref class N2 { public: N2() {} };  
ref class R2 { public: R2() {} };  
  
int main () {  
   GR<R^, V, N^>^ gr1;   // C3392  
   GR<R^, V, N2^>^ gr1a;   // OK  
  
   GR<R^, N^, N^>^ gr3;   // C3392  
   GR<R^, V, N2^>^ gr3a;   // OK  
  
   GR<R^, V, R^>^ gr4;   // C3392  
   GR<R^, V, R2^>^ gr4a;   // OK  
}  
```