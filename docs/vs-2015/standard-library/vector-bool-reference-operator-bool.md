---
title: "vector&lt;bool&gt;::reference::operator bool | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "operatorbool"
  - "vector<bool>::reference::operatorbool"
  - "bool"
  - "std::vector<bool>::reference::operatorbool"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BOOL operator"
  - "reference::operator bool"
ms.assetid: b0e57869-18cc-4296-9061-da502f30120d
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# vector&lt;bool&gt;::reference::operator bool
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [vector&lt;bool&gt;::reference::operator bool](https://docs.microsoft.com/cpp/standard-library/vector-bool-reference-operator-bool).  
  
Provides an implicit conversion from `vector<bool>::reference` to `bool`.  
  
## Syntax  
  
```  
operator bool() const;
```  
  
## Return Value  
 The Boolean value of the element of the [vector\<bool>](../standard-library/vector-bool-class.md) object.  
  
## Remarks  
 The `vector<bool>` object cannot be modified by this operator.  
  
## Requirements  
 **Header:** \<vector>  
  
 **Namespace:** std  
  
## See Also  
 [vector\<bool>::reference Class](../standard-library/vector-bool-reference-class.md)   
 [Standard Template Library](../misc/standard-template-library.md)





