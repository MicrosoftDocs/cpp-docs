---
title: "WeakRef::operator&amp; Operator"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::WeakRef::operator&"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator& operator"
ms.assetid: 900afb73-3801-4d08-9b41-2e6a62011ccd
caps.latest.revision: 3
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
# WeakRef::operator&amp; Operator
Returns a ComPtrRef object that represents the current WeakRef object.  
  
## Syntax  
  
```cpp  
Details::ComPtrRef<WeakRef> operator&() throw()  
```  
  
## Return Value  
 A ComPtrRef object that represents the current WeakRef object.  
  
## Remarks  
 This is an internal helper operator that is not meant to be used in your code.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [WeakRef Class](../windows/weakref-class.md)