---
title: "literal (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "literal"
  - "literal_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "literal keyword [C++]"
ms.assetid: 6b1a1f36-2e1d-4a23-8eb6-172f4f3c477f
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# literal (C++ Component Extensions)
A variable (data member) marked as `literal` in a **/clr** compilation is the native equivalent of a `static const` variable.  
  
## All Platforms  
 **Remarks**  
  
 (There are no remarks for this language feature that apply to all runtimes.)  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 **Remarks**  
  
 (There are no remarks for this language feature that apply to only the Windows Runtime.)  
  
### Requirements  
 Compiler option: **/ZW**  
  
## Common Language Runtime  
  
## Remarks  
 A data member marked as `literal`must be initialized when declared and the value must be a constant integral, enum, or string type. Conversion from the type of the initialization expression to the type of the static const data-member must not require a user-defined conversion.  
  
 No memory is allocated for the literal field at runtime; the compiler only inserts its value in the metadata for the class.  
  
 A variable marked `static const` will not be available in metadata to other compilers.  
  
 For more information, see [Static](../cpp/storage-classes-cpp.md) and [const](../cpp/const-cpp.md).  
  
 `literal` is a context-sensitive keyword. See [Context-Sensitive Keywords](../windows/context-sensitive-keywords-cpp-component-extensions.md) for more information.  
  
## Example  
 This example shows that a `literal` variable implies `static`.  
  
```  
// mcppv2_literal.cpp  
// compile with: /clr  
ref struct X {  
   literal int i = 4;  
};  
  
int main() {  
   int value = X::i;  
}  
```  
  
## Example  
 The following sample shows the affect of literal in metadata:  
  
```  
// mcppv2_literal2.cpp  
// compile with: /clr /LD  
public ref struct A {  
   literal int lit = 0;  
   static const int sc = 1;  
};  
```  
  
 Notice the difference in the metadata for `sc` and `lit`: the `modopt` directive is applied to `sc`, meaning it can be ignored by other compilers.  
  
```  
.field public static int32 modopt([mscorlib]System.Runtime.CompilerServices.IsConst) sc = int32(0x0000000A)  
```  
  
```  
.field public static literal int32 lit = int32(0x0000000A)  
```  
  
## Example  
 The following sample, authored in C#, references the metadata created in the previous sample and shows the affect of `literal` and `static const` variables:  
  
```  
// mcppv2_literal3.cs  
// compile with: /reference:mcppv2_literal2.dll  
// A C# program  
class B {  
   public static void Main() {  
      // OK  
      System.Console.WriteLine(A.lit);  
      System.Console.WriteLine(A.sc);  
  
      // C# does not enforce C++ const  
      A.sc = 9;  
      System.Console.WriteLine(A.sc);  
  
      // C# enforces const for a literal  
      A.lit = 9;   // CS0131  
  
      // you can assign a C++ literal variable to a C# const variable  
      const int i = A.lit;  
      System.Console.WriteLine(i);  
  
      // but you cannot assign a C++ static const variable  
      // to a C# const variable  
      const int j = A.sc;   // CS0133  
      System.Console.WriteLine(j);  
   }  
}  
```  
  
## Requirements  
 Compiler option: **/clr**  
  
## See Also  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)