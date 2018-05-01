---
title: "Compiler Warning C4957 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4957"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4957"
ms.assetid: a18c52d4-23e2-44f1-b4b5-f7fa5a7f3987
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning C4957
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning C4957](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-c4957).  
  
  
cast' : explicit cast from 'cast_from' to 'cast_to' is not verifiable  
  
 A cast will result in an unverifiable image.  
  
 Some casts are safe (for example, a `static_cast` that triggers user-defined conversions and a `const_cast`). A [safe_cast](../../windows/safe-cast-cpp-component-extensions.md) is guaranteed to produce verifiable code.  
  
 For more information, see [Pure and Verifiable Code (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
 This warning is issued as an error and can be disabled with the [warning](../../preprocessor/warning.md) pragma or the [/wd](../../build/reference/compiler-option-warning-level.md) compiler option.  
  
 The following sample generates C4957:  
  
```  
// C4957.cpp  
// compile with: /clr:safe  
// #pragma warning( disable : 4957 )  
using namespace System;  
int main() {  
   Object ^ o = "Hello, World!";  
   String ^ s = static_cast<String^>(o);   // C4957  
   String ^ s2 = safe_cast<String^>(o);   // OK  
}  
```

