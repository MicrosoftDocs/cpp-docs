---
title: "Compiler Error C2569 | Microsoft Docs"
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
  - "C2569"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2569"
ms.assetid: 092bed1e-f631-436c-9586-7750629f6fac
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2569
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2569](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2569).  
  
  
EnumOrUnion' : enum/union cannot be used as a base class  
  
 If you must derive a type from the specified union or enumeration, change the union or enumeration to a class or structure.  
  
 The following sample generates C2569:  
  
```  
// C2569.cpp  
// compile with: /c  
union ubase {};  
class cHasPubUBase : public ubase {};   // C2569  
// OK  
struct sbase {};  
class cHasPubUBase : public sbase {};  
```

