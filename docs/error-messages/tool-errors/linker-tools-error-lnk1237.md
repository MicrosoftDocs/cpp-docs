---
title: "Linker Tools Error LNK1237 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK1237"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK1237"]
ms.assetid: 8722ffa8-096a-4bb0-85f9-f3aa0e10872a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Error LNK1237
during code generation, compiler introduced reference to symbol 'symbol' defined in module 'module' compiled with /GL  
  
 During code generation, the compiler should not introduce symbols that are later resolved to definitions compiled **/GL**. `symbol` is a symbol that was introduced and later resolved to a definition compiled with **/GL**.  
  
 For more information, see [/GL (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md).  
  
 To resolve LNK1237, do not compile the symbol with **/GL** or use [/INCLUDE (Force Symbol References)](../../build/reference/include-force-symbol-references.md) to force a reference to the symbol.  
  
## Example  
 The following sample generates LNK1237. To resolve this error, do not initialize the array in LNK1237_a.cpp and add **/include:__chkstk** to the link command.  
  
```  
// LNK1237_a.cpp  
int main() {  
   char c[5000] = {0};  
}  
```  
  
```  
// LNK1237_b.cpp  
// compile with: /GS- /GL /c LNK1237_a.cpp  
// processor: x86  
// post-build command: (lib LNK1237_b.obj /LTCG & link LNK1237_a.obj LNK1237_b.lib /nodefaultlib /entry:main /LTCG)  
extern "C" void _chkstk(size_t s) {}  
```