---
title: "Compiler Error C2041 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2041"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2041"]
ms.assetid: c9a33bb1-f9cf-47d6-bd21-7d867a8c37d5
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2041
illegal digit 'character' for base 'number'  
  
 The specified character is not a valid digit for the base (such as octal or hex).  
  
 The following sample generates C2041:  
  
```  
// C2041.cpp  
int i = 081;   // C2041  8 is not a base 8 digit  
```  
  
 Possible resolution:  
  
```  
// C2041b.cpp  
// compile with: /c  
int j = 071;  
```