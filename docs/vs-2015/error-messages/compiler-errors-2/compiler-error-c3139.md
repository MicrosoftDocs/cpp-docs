---
title: "Compiler Error C3139 | Microsoft Docs"
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
  - "C3139"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3139"
ms.assetid: 95c92263-10ac-4ff3-b385-6312dd92adbc
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3139
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3139](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3139).  
  
  
struct' : cannot export a UDT without members  
  
 You attempted to apply the [export](../../windows/export.md) attribute to an empty UDT (user-defined type). For example:  
  
```  
// C3139.cpp  
#include "unknwn.h"  
[emitidl];  
[module(name=xx)];  
  
[export] struct MyStruct {   // C3139 empty type  
};  
int main(){}  
```

