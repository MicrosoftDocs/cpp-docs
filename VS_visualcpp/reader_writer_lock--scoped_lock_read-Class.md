---
title: "reader_writer_lock::scoped_lock_read Class"
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
ms.assetid: 808cf852-b770-448c-80d2-e15ee4c0d208
caps.latest.revision: 16
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
# reader_writer_lock::scoped_lock_read Class
An exception safe RAII wrapper that can be used to acquire `reader_writer_lock` lock objects as a reader.  
  
## Syntax  
  
```  
class scoped_lock_read;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[reader_writer_lock::scoped_lock_read::scoped_lock_read Constructor](../VS_visualcpp/reader_writer_lock--scoped_lock_read--scoped_lock_read-Constructor.md)|Constructs a `scoped_lock_read` object and acquires the `reader_writer_lock` object passed in the `_Reader_writer_lock` parameter as a reader. If the lock is held by another thread as a writer or there are pending writers, this call will block.|  
|[reader_writer_lock::scoped_lock_read::~scoped_lock_read Destructor](../VS_visualcpp/reader_writer_lock--scoped_lock_read--~scoped_lock_read-Destructor.md)|Destroys a `scoped_lock_read` object and releases the lock supplied in its constructor.|  
  
## Inheritance Hierarchy  
 `scoped_lock_read`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [reader_writer_lock Class](../VS_visualcpp/reader_writer_lock-Class.md)