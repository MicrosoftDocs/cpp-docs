---
title: "Compiler Error C3383"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C3383"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3383"
ms.assetid: ceb7f725-f417-4dc3-8496-0f413bb76687
caps.latest.revision: 7
ms.author: "corob"
manager: "douge"
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
# Compiler Error C3383
'operator new' is not supported with /clr:safe  
  
 The output file of a **/clr:safe** compilation is a file that is verifiably type safe, and pointers are not supported.  
  
 For more information, see,  
  
-   [/clr (Common Language Runtime Compilation)](../buildref/-clr--common-language-runtime-compilation-.md)  
  
-   [Common Visual C++ 64-bit Migration Issues](../build/common-visual-c---64-bit-migration-issues.md)  
  
## Example  
 The following sample generates C3383.  
  
```  
// C3383.cpp  
// compile with: /clr:safe  
int main() {  
   char* pCharArray = new char[256];  // C3383  
}  
```