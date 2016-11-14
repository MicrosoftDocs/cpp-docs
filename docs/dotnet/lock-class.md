---
title: "lock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "msclr::lock"
  - "msclr.lock"
  - "lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lock class"
ms.assetid: 5123edd9-6aed-497d-9a0b-f4b6d6c0d666
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# lock Class
This class automates taking a lock for synchronizing access to an object from multiple threads.  When constructed it acquires the lock and when destroyed it releases the lock.  
  
## Syntax  
  
```  
ref class lock;  
```  
  
## Remarks  
 `lock` is available only for CLR objects and can only be used in CLR code.  
  
 Internally, the lock class uses <xref:System.Threading.Monitor> to synchronize access. See this topic for more detailed information on synchronization.  
  
## Requirements  
 **Header file** \<msclr\lock.h>  
  
 **Namespace** msclr  
  
## See Also  
 [lock](../dotnet/lock.md)   
 [lock Members](../dotnet/lock-members.md)