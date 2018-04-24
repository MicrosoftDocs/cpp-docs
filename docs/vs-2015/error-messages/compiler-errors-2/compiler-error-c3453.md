---
title: "Compiler Error C3453 | Microsoft Docs"
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
  - "C3453"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3453"
ms.assetid: dbefdbcf-f697-4239-b7a5-1d99b85e9e7f
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3453
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3453](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3453).  
  
  
attribute': attribute not applied because qualifier 'assembly' did not match  
  
 Assembly or module level attributes can only be specified as stand-alone instructions.  
  
## Example  
 The following sample generates C3453.  
  
```  
// C3453.cpp  
// compile with: /clr /c  
[assembly:System::CLSCompliant(true)]   // C3453  
// try the following line instead  
// [assembly:System::CLSCompliant(true)];  
ref class X {};  
```

