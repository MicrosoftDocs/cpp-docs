---
title: "Compiler Error C2348 | Microsoft Docs"
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
  - "C2348"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2348"
ms.assetid: 4c4d701f-ccf1-46fe-9ddb-3f341684f269
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2348
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2348](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2348).  
  
  
type name' : is not a C-style aggregate, cannot be exported in embedded-IDL  
  
 To place a `struct` in a .idl file with the [export](../../windows/export.md) attribute, the `struct` must contain only data.  
  
 The following sample generates C2348:  
  
```  
// C2348.cpp  
// C2348 error expected  
[ module(name="SimpleMidlTest") ];  
  
[export]  
struct Point {  
   // Delete the following two lines to resolve.  
   Point() : m_i(0), m_j(0) {}  
   Point(int i, int j) : m_i(i), m_j(j) {}  
  
   int m_i;  
   int m_j;  
};  
```

