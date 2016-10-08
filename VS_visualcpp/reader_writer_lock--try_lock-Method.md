---
title: "reader_writer_lock::try_lock Method"
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
ms.assetid: 3dc29ace-f1da-4827-803a-f3f243e6951e
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
# reader_writer_lock::try_lock Method
Attempts to acquire the reader-writer lock as a writer without blocking.  
  
## Syntax  
  
```  
bool try_lock();  
```  
  
## Return Value  
 If the lock was acquired, the value `true`; otherwise, the value `false`.  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [reader_writer_lock Class](../VS_visualcpp/reader_writer_lock-Class.md)   
 [reader_writer_lock::unlock Method](../VS_visualcpp/reader_writer_lock--unlock-Method.md)