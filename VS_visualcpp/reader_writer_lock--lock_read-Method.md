---
title: "reader_writer_lock::lock_read Method"
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
ms.assetid: 8a3e6f7e-1bca-450b-9135-52455375a10d
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
# reader_writer_lock::lock_read Method
Acquires the reader-writer lock as a reader. If there are writers, active readers have to wait until they are done. The reader simply registers an interest in the lock and waits for writers to release it.  
  
## Syntax  
  
```  
void lock_read();  
```  
  
## Remarks  
 It is often safer to utilize the [scoped_lock_read](../VS_visualcpp/reader_writer_lock--scoped_lock_read-Class.md) construct to acquire and release a `reader_writer_lock` object as a reader in an exception safe way.  
  
 If there are writers waiting on the lock, the reader will wait until all writers in line have acquired and released the lock. This lock is biased towards writers and can starve readers under a continuous load of writers.  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [reader_writer_lock Class](../VS_visualcpp/reader_writer_lock-Class.md)   
 [reader_writer_lock::unlock Method](../VS_visualcpp/reader_writer_lock--unlock-Method.md)