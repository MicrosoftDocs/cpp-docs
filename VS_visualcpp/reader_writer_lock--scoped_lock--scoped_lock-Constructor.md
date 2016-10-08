---
title: "reader_writer_lock::scoped_lock::scoped_lock Constructor"
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
ms.assetid: aba6705e-f6ff-4809-8494-bfe22ee89e78
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
# reader_writer_lock::scoped_lock::scoped_lock Constructor
Constructs a `scoped_lock` object and acquires the `reader_writer_lock` object passed in the `_Reader_writer_lock` parameter as a writer. If the lock is held by another thread, this call will block.  
  
## Syntax  
  
```  
explicit _CRTIMP scoped_lock(    reader_writer_lock& _Reader_writer_lock );  
```  
  
#### Parameters  
 `_Reader_writer_lock`  
 The `reader_writer_lock` object to acquire as a writer.  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [reader_writer_lock::scoped_lock Class](../VS_visualcpp/reader_writer_lock--scoped_lock-Class.md)