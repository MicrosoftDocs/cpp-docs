---
title: "Compiler Warning (level 1) C4829 | Microsoft Docs"
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
  - "C4829"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4829"
ms.assetid: 4ffabe2b-2ddc-4c52-8564-d1355c93cfa6
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4829
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4829](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4829).  
  
  
Possibly incorrect parameters to function main. Consider 'intmain(Platform::Array\<Platform::String^>^ argv)'  
  
 Certain functions, such as main, cannot take reference type parameters. While compilation will succeed, the resulting image will probably not run.  
  
 The following sample generates C4829:  
  
```  
// C4829.cpp  
// compile by using: cl /EHsc /ZW /W4 /c C4829.cpp  
int main(Platform::String ^ s) {}   // C4829  
  
```

