---
title: "ComPtr::ptr_ Data Member | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::ComPtr::ptr_"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ptr_ data member"
ms.assetid: c84f9dda-8ff9-422d-91f2-1a41206bf9ad
caps.latest.revision: 4
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
# ComPtr::ptr_ Data Member
Contains a pointer to the interface that is associated with, and managed by this ComPtr.  
  
## Syntax  
  
```  
InterfaceType *ptr_;  
```  
  
## Remarks  
 `ptr_` is an internal, protected data member.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)