---
title: "reader_writer_lock Class"
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
ms.assetid: 91a59cd2-ca05-4b74-8398-d826d9f86736
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
# reader_writer_lock Class
A writer-preference queue-based reader-writer lock with local only spinning. The lock grants first in - first out (FIFO) access to writers and starves readers under a continuous load of writers.  
  
## Syntax  
  
```  
class reader_writer_lock;  
```  
  
## Members  
  
### Public Classes  
  
|Name|Description|  
|----------|-----------------|  
|[reader_writer_lock::scoped_lock Class](#reader_writer_lock__scoped_lock_class)|An exception safe RAII wrapper that can be used to acquire `reader_writer_lock` lock objects as a writer.|  
|[reader_writer_lock::scoped_lock_read Class](#reader_writer_lock__scoped_lock_read_class)|An exception safe RAII wrapper that can be used to acquire `reader_writer_lock` lock objects as a reader.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[reader_writer_lock::reader_writer_lock Constructor](#reader_writer_lock__reader_writer_lock_constructor)|Constructs a new `reader_writer_lock` object.|  
|[reader_writer_lock::~reader_writer_lock Destructor](#reader_writer_lock___dtorreader_writer_lock_destructor)|Destroys the `reader_writer_lock` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[reader_writer_lock::lock Method](#reader_writer_lock__lock_method)|Acquires the reader-writer lock as a writer.|  
|[reader_writer_lock::lock_read Method](#reader_writer_lock__lock_read_method)|Acquires the reader-writer lock as a reader. If there are writers, active readers have to wait until they are done. The reader simply registers an interest in the lock and waits for writers to release it.|  
|[reader_writer_lock::try_lock Method](#reader_writer_lock__try_lock_method)|Attempts to acquire the reader-writer lock as a writer without blocking.|  
|[reader_writer_lock::try_lock_read Method](#reader_writer_lock__try_lock_read_method)|Attempts to acquire the reader-writer lock as a reader without blocking.|  
|[reader_writer_lock::unlock Method](#reader_writer_lock__unlock_method)|Unlocks the reader-writer lock based on who locked it, reader or writer.|  
  
## Remarks  
 For more information, see [Synchronization Data Structures](../VS_visualcpp/Synchronization-Data-Structures.md).  
  
## Inheritance Hierarchy  
 `reader_writer_lock`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="reader_writer_lock__lock_method"></a>  reader_writer_lock::lock Method  
 Acquires the reader-writer lock as a writer.  
  
```  
void lock();  
```  
  
### Remarks  
 It is often safer to utilize the [scoped_lock](#reader_writer_lock__scoped_lock_class) construct to acquire and release a `reader_writer_lock` object as a writer in an exception safe way.  
  
 After a writer attempts to acquire the lock, any future readers will block until the writers have successfully acquired and released the lock. This lock is biased towards writers and can starve readers under a continuous load of writers.  
  
 Writers are chained so that a writer exiting the lock releases the next writer in line.  
  
 If the lock is already held by the calling context, an [improper_lock](../VS_visualcpp/improper_lock-Class.md) exception will be thrown.  
  
##  <a name="reader_writer_lock__lock_read_method"></a>  reader_writer_lock::lock_read Method  
 Acquires the reader-writer lock as a reader. If there are writers, active readers have to wait until they are done. The reader simply registers an interest in the lock and waits for writers to release it.  
  
```  
void lock_read();  
```  
  
### Remarks  
 It is often safer to utilize the [scoped_lock_read](#reader_writer_lock__scoped_lock_read_class) construct to acquire and release a `reader_writer_lock` object as a reader in an exception safe way.  
  
 If there are writers waiting on the lock, the reader will wait until all writers in line have acquired and released the lock. This lock is biased towards writers and can starve readers under a continuous load of writers.  
  
##  <a name="reader_writer_lock__reader_writer_lock_constructor"></a>  reader_writer_lock::reader_writer_lock Constructor  
 Constructs a new `reader_writer_lock` object.  
  
```  
reader_writer_lock();  
```  
  
##  <a name="reader_writer_lock___dtorreader_writer_lock_destructor"></a>  reader_writer_lock::~reader_writer_lock Destructor  
 Destroys the `reader_writer_lock` object.  
  
```  
~reader_writer_lock();  
```  
  
### Remarks  
 It is expected that the lock is no longer held when the destructor runs. Allowing the reader writer lock to destruct with the lock still held results in undefined behavior.  
  
##  <a name="reader_writer_lock__scoped_lock_class"></a>  reader_writer_lock::scoped_lock Class  
 An exception safe RAII wrapper that can be used to acquire `reader_writer_lock` lock objects as a writer.  
  
```  
class scoped_lock;  
```  
  
##  <a name="reader_writer_lock__scoped_lock_read_class"></a>  reader_writer_lock::scoped_lock_read Class  
 An exception safe RAII wrapper that can be used to acquire `reader_writer_lock` lock objects as a reader.  
  
```  
class scoped_lock_read;  
```  
  
##  <a name="reader_writer_lock__try_lock_method"></a>  reader_writer_lock::try_lock Method  
 Attempts to acquire the reader-writer lock as a writer without blocking.  
  
```  
bool try_lock();  
```  
  
### Return Value  
 If the lock was acquired, the value `true`; otherwise, the value `false`.  
  
##  <a name="reader_writer_lock__try_lock_read_method"></a>  reader_writer_lock::try_lock_read Method  
 Attempts to acquire the reader-writer lock as a reader without blocking.  
  
```  
bool try_lock_read();  
```  
  
### Return Value  
 If the lock was acquired, the value `true`; otherwise, the value `false`.  
  
##  <a name="reader_writer_lock__unlock_method"></a>  reader_writer_lock::unlock Method  
 Unlocks the reader-writer lock based on who locked it, reader or writer.  
  
```  
void unlock();  
```  
  
### Remarks  
 If there are writers waiting on the lock, the release of the lock will always go to the next writer in FIFO order. This lock is biased towards writers and can starve readers under a continuous load of writers.  
  
## See Also  
 [concurrency Namespace](../VS_visualcpp/concurrency-Namespace.md)   
 [critical_section Class](../VS_visualcpp/critical_section-Class.md)