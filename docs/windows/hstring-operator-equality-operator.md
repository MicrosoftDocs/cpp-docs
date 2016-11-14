---
title: "HString::Operator== Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HString::operator=="
dev_langs: 
  - "C++"
ms.assetid: 77ff4c1a-e62a-4256-bf9d-0f017137c630
caps.latest.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# HString::Operator== Operator
Indicates whether the two parameters are equal.  
  
## Syntax  
  
```cpp  
  
inline bool operator==(  
               const HString& lhs,   
               const HString& rhs) throw()  
  
inline bool operator==(  
                const HString& lhs,   
                const HStringReference& rhs) throw()  
  
inline bool operator==(  
                const HStringReference& lhs,   
                const HString& rhs) throw()  
  
inline bool operator==(  
                 const HSTRING& lhs,   
                 const HString& rhs) throw()  
  
inline bool operator==(  
                 const HString& lhs,   
                 const HSTRING& rhs) throw()  
  
```  
  
#### Parameters  
 `lhs`  
 The first parameter to compare. `lhs` can be an HString or HStringReference object, or an HSTRING handle.  
  
 `rhs`  
 The second parameter to compare.`rhs` can be an HString or HStringReference object, or an HSTRING handle.  
  
## Return Value  
 `true` if the `lhs` and `rhs` parameters are equal; otherwise, `false`.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HString Class](../windows/hstring-class.md)