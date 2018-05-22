---
title: "Compiler Error C2628 | Microsoft Docs"
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
  - "C2628"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2628"
ms.assetid: 19a25e77-d5be-4107-88d5-0745b6281f98
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2628
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2628](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2628).  
  
  
type1' followed by 'type2' is illegal (did you forget a ';'?)  
  
 A semicolon may be missing.  
  
 The following sample generates C2628:  
  
```  
// C2628.cpp  
class CMyClass {}  
int main(){}   // C2628 error  
```  
  
 Possible resolution:  
  
```  
// C2628b.cpp  
class CMyClass {};  
int main(){}  
```

