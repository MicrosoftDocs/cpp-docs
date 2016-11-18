---
title: "Compiler Error C2429 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2429"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2429"
ms.assetid: 57ff6df9-5cf1-49f3-8bd8-4e550dfd65a0
caps.latest.revision: 9
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
# Compiler Error C2429
'*language feature*' requires compiler flag '*compiler option*'  
  
The language feature requires a specific compiler option for support.  
  
The error C2429: language feature 'nested-namespace-definition' requires compiler flag '/std:c++latest' is generated if you try to define a *compound namespace*, a namespace that contains one or more scope-nested namespace names, starting in Visual Studio 2015 Update 3. Compound namespace definitions are not allowed in C++ prior to C++17. The compiler supports compound namespace definitions when the [/std:c++latest](../../build/reference/std-specify-language-standard-version.md) compiler option is specified:  
```cpp  
// C2429a.cpp  
namespace a::b { int i; } // C2429 starting in Visual C++ 2015 Update 3.  
                          // Use /std:c++latest to fix, or do this:  
// namespace a { namespace b { int i; }}  
  
int main() {  
   a::b::i = 2;  
}  
```  