---
title: "Linker Tools Error LNK2031 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2031"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2031"
ms.assetid: 18ed4b6e-3e75-443c-bbd8-2f6030dc89ee
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK2031
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK2031](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk2031).  
  
  
unable to generate p/invoke for "function_declaration" decorated_name; calling convention missing in metadata  
  
 When attempting to import a native function into a pure image, remember that the implicit calling conventions differ between native and pure compilations. For more information about pure images, see [Pure and Verifiable Code (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
## Example  
 This code sample generates a component with an exported, native, function whose calling convention is implicitly [__cdecl](../../cpp/cdecl.md).  
  
```  
// LNK2031.cpp  
// compile with: /LD  
extern "C" {  
   __declspec(dllexport) int func() { return 3; }  
};  
```  
  
## Example  
 The following sample creates a pure client that consumes the native function. However, the calling convention under **/clr:pure** is [__clrcall](../../cpp/clrcall.md). The following sample generates LNK2031.  
  
```  
// LNK2031_b.cpp  
// compile with: /clr:pure LNK2031.lib  
// LNK2031 expected  
extern "C" int func();  
  
int main() {  
   return func();  
}  
```  
  
## Example  
 The following sample shows how to consume the native function from a pure image. Note the explicit **__cdecl** calling convention specifier.  
  
```  
// LNK2031_c.cpp  
// compile with: /clr:pure LNK2031.lib  
extern "C" int __cdecl func();  
  
int main() {  
   return func();  
}  
```

