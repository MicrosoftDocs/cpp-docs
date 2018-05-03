---
title: "Compiler Warning (level 1) C4829 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4829"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4829"]
ms.assetid: 4ffabe2b-2ddc-4c52-8564-d1355c93cfa6
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4829
Possibly incorrect parameters to function main. Consider 'intmain(Platform::Array\<Platform::String^>^ argv)'  
  
 Certain functions, such as main, cannot take reference type parameters. While compilation will succeed, the resulting image will probably not run.  
  
 The following sample generates C4829:  
  
```  
// C4829.cpp  
// compile by using: cl /EHsc /ZW /W4 /c C4829.cpp  
int main(Platform::String ^ s) {}   // C4829  
  
```