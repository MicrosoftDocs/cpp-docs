---
title: "reader_writer_lock::unlock Method"
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
ms.assetid: 91aef6f4-4b07-492b-bba9-788e1bbfeddc
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
# reader_writer_lock::unlock Method
Unlocks the reader-writer lock based on who locked it, reader or writer.  
  
## Syntax  
  
```  
void unlock();  
```  
  
## Remarks  
 If there are writers waiting on the lock, the release of the lock will always go to the next writer in FIFO order. This lock is biased towards writers and can starve readers under a continuous load of writers.  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [reader_writer_lock Class](../VS_visualcpp/reader_writer_lock-Class.md)   
 [reader_writer_lock::lock Method](../VS_visualcpp/reader_writer_lock--lock-Method.md)   
 [reader_writer_lock::lock_read Method](../VS_visualcpp/reader_writer_lock--lock_read-Method.md)   
 [reader_writer_lock::try_lock Method](../VS_visualcpp/reader_writer_lock--try_lock-Method.md)   
 [reader_writer_lock::try_lock_read Method](../VS_visualcpp/reader_writer_lock--try_lock_read-Method.md)