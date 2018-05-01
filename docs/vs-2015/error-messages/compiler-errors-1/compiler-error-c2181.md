---
title: "Compiler Error C2181 | Microsoft Docs"
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
  - "C2181"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2181"
ms.assetid: d52b2fe4-566a-40a9-b8e2-8dce1f287668
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2181
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2181](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2181).  
  
  
illegal else without matching if  
  
 Each `else` must have a matching `if`.  
  
 The following sample generates C2181:  
  
```  
// C2181.cpp  
int main() {  
   int i = 0;  
   else   // C2181  
      i = 1;  
}  
```  
  
 Possible resolution:  
  
```  
// C2181b.cpp  
int main() {  
   int i = 0;  
   if(i)  
      i = 0;  
   else  
      i = 1;  
}  
```

