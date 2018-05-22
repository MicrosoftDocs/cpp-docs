---
title: "Arrays in Expressions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "expressions [C++], arrays in"
  - "arrays [C++], in expressions"
ms.assetid: 6e5a795b-d6bd-4e39-b313-6a20d47c4d4b
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Arrays in Expressions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Arrays in Expressions](https://docs.microsoft.com/cpp/cpp/arrays-in-expressions).  
  
When an identifier of an array type appears in an expression other than `sizeof`, address-of (**&**), or initialization of a reference, it is converted to a pointer to the first array element. For example:  
  
```  
char szError1[] = "Error: Disk drive not ready.";  
char *psz = szError1;  
```  
  
 The pointer `psz` points to the first element of the array `szError1`. Note that arrays, unlike pointers, are not modifiable l-values. Therefore, the following assignment is illegal:  
  
```  
szError1 = psz;  
```  
  
## See Also  
 [Arrays](../cpp/arrays-cpp.md)





