---
title: "reader_writer_lock::scoped_lock Class"
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
ms.assetid: 35a8af75-1c30-4ce5-890d-ad0385f7a004
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
# reader_writer_lock::scoped_lock Class
An exception safe RAII wrapper that can be used to acquire `reader_writer_lock` lock objects as a writer.  
  
## Syntax  
  
```  
class scoped_lock;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[reader_writer_lock::scoped_lock::scoped_lock Constructor](../VS_visualcpp/reader_writer_lock--scoped_lock--scoped_lock-Constructor.md)|Constructs a `scoped_lock` object and acquires the `reader_writer_lock` object passed in the `_Reader_writer_lock` parameter as a writer. If the lock is held by another thread, this call will block.|  
|[reader_writer_lock::scoped_lock::~scoped_lock Destructor](../VS_visualcpp/reader_writer_lock--scoped_lock--~scoped_lock-Destructor.md)|Destroys a `reader_writer_lock` object and releases the lock supplied in its constructor.|  
  
## Inheritance Hierarchy  
 `scoped_lock`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [reader_writer_lock Class](../VS_visualcpp/reader_writer_lock-Class.md)