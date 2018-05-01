---
title: "Compiler Error C3371 | Microsoft Docs"
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
  - "C3371"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3371"
ms.assetid: f7ecf1aa-ed0a-4f73-81e5-62cf98f88ea1
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3371
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3371](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3371).  
  
  
idl_module': only the 'name' property is allowed here  
  
 [idl_module](../../windows/idl-module.md) usage directly on a function declaration cannot have any parameters other than name.  
  
 The following sample generates C3371:  
  
```  
// C3371.cpp  
[idl_module(name="Name", dllname="Some.dll")];  
[idl_module(name="Name", helpstring="Some help")]   // C3371  
int f1();  
// try  
// [idl_module(name="Name")]  
// int f1();  
  
int main()  
{  
}  
```

