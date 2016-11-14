---
title: "Compiler Warning C4959 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4959"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4959"
ms.assetid: 3a128f3e-4d8a-4565-ba1a-5d32fdeb5982
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# Compiler Warning C4959
cannot define unmanaged struct 'type' in /clr:safe because accessing its members yields unverifiable code  
  
 Accessing a member of an unmanaged type will produce an unverifiable (peverify.exe) image.  
  
 For more information, see [Pure and Verifiable Code (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
 This warning is issued as an error and can be disabled with the [warning](../../preprocessor/warning.md) pragma or the [/wd](../../build/reference/compiler-option-warning-level.md) compiler option.  
  
 The following sample generates C4959:  
  
```  
// C4959.cpp  
// compile with: /clr:safe  
  
// Uncomment the following line to resolve.  
// #pragma warning( disable : 4959 )  
struct X {  
   int data;  
};  
  
int main() {  
   X x;  
   x.data = 10;   // C4959  
}  
```