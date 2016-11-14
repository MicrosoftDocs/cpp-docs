---
title: "HandleT::Attach Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleT::Attach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Attach method"
ms.assetid: a8783a18-bbf6-456c-98a3-e2048a10d79f
caps.latest.revision: 3
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
# HandleT::Attach Method
Associates the specified handle with the current HandleT object.  
  
## Syntax  
  
```  
void Attach(  
   typename HandleTraits::Type h  
);  
```  
  
#### Parameters  
 `h`  
 A handle.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../windows/handlet-class.md)