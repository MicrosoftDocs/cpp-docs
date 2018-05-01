---
title: "Compiler Error C3360 | Microsoft Docs"
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
  - "C3360"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3360"
ms.assetid: 6acf983a-dbb6-422b-b045-a34bb4ba6761
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3360
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3360](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3360).  
  
  
string': cannot create name  
  
 The value that was passed to the [uuid](../../windows/uuid-cpp-attributes.md) attribute was not valid.  
  
 The following sample generates C3360:  
  
```  
// C3360.cpp  
[ uuid("1") ]  
// try this line instead  
// [ uuid("12341234-1234-1234-1234-123412341234") ]  
struct A   // C3360  
{  
};  
  
int main()  
{  
}  
```

