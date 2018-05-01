---
title: "Compiler Error C3747 | Microsoft Docs"
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
  - "C3747"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3747"
ms.assetid: a9a4be67-5d9c-4dcc-9ae9-baae46cbecde
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3747
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3747](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3747).  
  
  
missing default type parameter : parameter param  
  
 Generic or template parameters with default values cannot be followed in the parameter list by parameters that do not have default values.  
  
 The following sample generates C3747:  
  
```  
// C3747.cpp  
template <class T1 = int, class T2>   // C3747  
struct MyStruct {};  
```  
  
 Possible resolution:  
  
```  
// C3747b.cpp  
// compile with: /c  
template <class T1, class T2 = int>  
struct MyStruct {};  
```

