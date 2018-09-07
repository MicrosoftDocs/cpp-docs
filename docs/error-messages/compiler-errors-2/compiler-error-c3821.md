---
title: "Compiler Error C3821 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3821"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3821"]
ms.assetid: 2b327c7a-5faf-443c-ae82-944fae25b4df
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3821
'function': managed type or function cannot be used in an unmanaged function  
  
 Functions with inline assembly or [setjmp](../../c-runtime-library/reference/setjmp.md) cannot contain value types or managed classes. To fix this error, remove the inline assembly and `setjmp` or remove the managed objects.  
  
 C3821 can also occur if you try to use automatic storage in a vararg function.  For more information, see [Variable Argument Lists (...) (C++/CLI)](../../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md) and [C++ Stack Semantics for Reference Types](../../dotnet/cpp-stack-semantics-for-reference-types.md).  
  
## Example  
 The following sample generates C3821.  
  
```  
// C3821a.cpp  
// compile with: /clr /c  
public ref struct R {};  
void test1(...) {  
   R r;   // C3821  
}  
```  
  
## Example  
 The following sample generates C3821.  
  
```  
// C3821b.cpp  
// compile with: /clr  
// processor: /x86  
ref class A {  
   public:  
   int i;  
};  
  
int main() {  
   // cannot use managed classes in this function  
   A ^a;     
  
   __asm {  
      nop  
   }  
} // C3821  
```  
