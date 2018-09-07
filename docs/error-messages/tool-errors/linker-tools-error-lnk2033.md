---
title: "Linker Tools Error LNK2033 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK2033"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK2033"]
ms.assetid: d61db467-9328-4788-bf54-e2a20537f13f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Error LNK2033
unresolved typeref token (token) for 'type'  
  
 A type doesn’t have a definition in MSIL metadata.  
  
 LNK2033 can occur when compiling with **/clr:safe** and where there is only a forward declaration for a type in an MSIL module, where the type is referenced in the MSIL module.  
  
 The type needs to be defined under **/clr:safe**.  
  
 For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## Example  
 The following sample generates LNK2033.  
  
```  
// LNK2033.cpp  
// compile with: /clr:safe  
// LNK2033 expected  
ref class A;  
ref class B {};  
  
int main() {  
   A ^ aa = nullptr;  
   B ^ bb = nullptr;   // OK  
};  
```