---
title: "reader_writer_lock::lock Method"
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
ms.assetid: 2785cfe2-772f-434e-b553-ece90c880536
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
# reader_writer_lock::lock Method
Acquires the reader-writer lock as a writer.  
  
## Syntax  
  
```  
void lock();  
```  
  
## Remarks  
 It is often safer to utilize the [scoped_lock](../VS_visualcpp/reader_writer_lock--scoped_lock-Class.md) construct to acquire and release a `reader_writer_lock` object as a writer in an exception safe way.  
  
 After a writer attempts to acquire the lock, any future readers will block until the writers have successfully acquired and released the lock. This lock is biased towards writers and can starve readers under a continuous load of writers.  
  
 Writers are chained so that a writer exiting the lock releases the next writer in line.  
  
 If the lock is already held by the calling context, an [improper_lock](../VS_visualcpp/improper_lock-Class.md) exception will be thrown.  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [reader_writer_lock Class](../VS_visualcpp/reader_writer_lock-Class.md)   
 [reader_writer_lock::unlock Method](../VS_visualcpp/reader_writer_lock--unlock-Method.md)