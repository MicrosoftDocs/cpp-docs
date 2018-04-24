---
title: "Compiler Error C2206 | Microsoft Docs"
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
  - "C2206"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2206"
ms.assetid: d7fba68b-aa28-4885-a9a0-27107358f066
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2206
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2206](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2206).  
  
  
function' : typedef cannot be used for function definition  
  
 A `typedef` is used to define a function type.  
  
 The following sample generates C2206:  
  
```  
// C2206.cpp  
typedef int functyp();  
typedef int MyInt;  
functyp func1 {};   // C2206  
int main() {  
   MyInt i = 0;   // OK  
}  
```

