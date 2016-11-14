---
title: "ComPtrRefBase::operator IInspectable** Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::Details::ComPtrRefBase::operator IInspectable**"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator IInspectable** operator"
ms.assetid: 06ac1051-606c-449b-a566-cac78ca53762
caps.latest.revision: 5
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
# ComPtrRefBase::operator IInspectable** Operator
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
operator IInspectable**() const;  
```  
  
## Remarks  
 Casts the current [ptr_](../windows/comptrrefbase-ptr-data-member.md) data member to a pointer-to-a-pointer-to the IInspectable interface.  
  
 An error is emitted if the current ComPtrRefBase doesn't derive from IInspectable.  
  
 This cast is available only if **__WRL_CLASSIC_COM\_\_** is defined.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ComPtrRefBase Class](../windows/comptrrefbase-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)