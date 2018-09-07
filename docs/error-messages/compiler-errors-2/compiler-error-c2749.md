---
title: "Compiler Error C2749 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2749"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2749"]
ms.assetid: a81aef36-cdca-4d78-89d5-b72eff2500b2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2749
'type' : can only throw or catch handle to a managed class with /clr:safe  
  
 When using **/clr:safe**, you can only throw or catch a reference type.  
  
 For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## Example  
 The following sample generates C2749:  
  
```  
// C2749.cpp  
// compile with: /clr:safe  
ref struct MyStruct {  
public:  
   int i;  
};  
  
int main() {  
   MyStruct ^x = gcnew MyStruct;  
  
   // Delete the following 4 lines to resolve.  
   try {   
      throw (1);   // C2749  
   }  
   catch(int){}  
  
   // OK  
   try {  
      throw (x);  
   }  
   catch(MyStruct ^){}   
}  
```