---
title: "Linker Tools Error LNK2028 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2028"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2028"
ms.assetid: e2b03293-6066-464d-a050-ce747bcf7f0e
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
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
# Linker Tools Error LNK2028
"exported_function" (decorated_name) referenced in function "function_containing_function_call" (decorated_name)  
  
 When attempting to import a native function into a pure image, remember that the implicit calling conventions differ between native and pure compilations.  
  
## Example  
 This code sample generates a component with an exported, native, function whose calling convention is implicitly [__cdecl](../../cpp/cdecl.md).  
  
```  
// LNK2028.cpp  
// compile with: /LD  
__declspec(dllexport) int func() {  
   return 3;  
}  
```  
  
## Example  
 The following sample creates a pure client that consumes the native function. However, the calling convention under **/clr:pure** is [__clrcall](../../cpp/clrcall.md). The following sample generates LNK2028.  
  
```  
// LNK2028_b.cpp  
// compile with: /clr:pure lnk2028.lib  
// LNK2028 expected  
int func();  
  
int main() {  
   return func();  
}  
```