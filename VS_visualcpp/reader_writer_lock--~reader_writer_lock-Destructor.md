---
title: "reader_writer_lock::~reader_writer_lock Destructor"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 2470306d-679d-4ba1-adcd-568745caa36a
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# reader_writer_lock::~reader_writer_lock Destructor
Destroys the `reader_writer_lock` object.  
  
## Syntax  
  
```  
~reader_writer_lock();  
```  
  
## Remarks  
 It is expected that the lock is no longer held when the destructor runs. Allowing the reader writer lock to destruct with the lock still held results in undefined behavior.  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [reader_writer_lock Class](../VS_visualcpp/reader_writer_lock-Class.md)