---
title: "Compiler Error C2087 | Microsoft Docs"
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
  - "C2087"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2087"
ms.assetid: 89761e83-415a-4468-a4c6-b6dedfd1dd6a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2087
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2087](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2087).  
  
  
identifier' : missing subscript  
  
 The definition of an array with multiple subscripts is missing a subscript value for a dimension higher than one.  
  
 The following sample generates C2087:  
  
```  
// C2087.cpp  
int main() {  
   char a[10][];   // C2087  
}  
```  
  
 Possible resolution:  
  
```  
// C2087b.cpp  
int main() {  
   char b[4][5];  
}  
```

