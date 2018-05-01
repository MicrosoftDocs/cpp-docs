---
title: "Compiler Error C3753 | Microsoft Docs"
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
  - "C3753"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3753"
ms.assetid: a5b99e28-796c-4107-a673-97c2ae3bb2b9
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3753
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3753](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3753).  
  
  
a generic property is not allowed  
  
 Generic parameter lists can only appear on managed classes, structs, or functions.  
  
 For more information, see [Generics](../../windows/generics-cpp-component-extensions.md) and [property](../../windows/property-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3753.  
  
```  
// C3753.cpp  
// compile with: /clr /c  
ref struct A {  
   generic <typename T>  
   property int i;   // C3753 error  
};  
```

