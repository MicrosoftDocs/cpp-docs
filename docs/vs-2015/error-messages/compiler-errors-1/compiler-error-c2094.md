---
title: "Compiler Error C2094 | Microsoft Docs"
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
  - "C2094"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2094"
ms.assetid: 9e4f8f88-f189-46e7-91c9-481bacc7af87
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2094
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2094](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2094).  
  
  
label 'identifier' was undefined  
  
 The label used by a [goto](../Topic/goto%20\(C%23%20Reference\).md) statement does not exist in the function.  
  
 The following sample generates C2094:  
  
```  
// C2094.c  
int main() {  
   goto test;  
}   // C2094  
```  
  
 Possible resolution:  
  
```  
// C2094b.c  
int main() {  
   goto test;  
   test:   
   {  
   }  
}  
```

