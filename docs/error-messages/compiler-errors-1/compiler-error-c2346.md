---
title: "Compiler Error C2346 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2346"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2346"]
ms.assetid: 246145be-5645-4cd6-867c-e3bc39e33dca
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2346
'function' cannot be compiled as native: reason  
  
 The compiler was unable to compile a function to MSIL.  
  
 For more information, see [managed, unmanaged](../../preprocessor/managed-unmanaged.md) and [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
### To correct this error  
  
1.  Remove the code in the function that cannot be compiled to MSIL.  
  
2.  Either do not compile the module with **/clr**, or mark the function as unmanaged with the unmanaged pragma.  
  
## Example  
 The following sample generates C2346.  
  
```  
// C2346.cpp  
// processor: x86  
// compile with: /clr   
// C2346 expected  
struct S  
{  
   S()  
   {  
      { __asm { nop } }  
   }  
   virtual __clrcall ~S() { }  
};  
  
void main()  
{  
   S s;  
}  
```