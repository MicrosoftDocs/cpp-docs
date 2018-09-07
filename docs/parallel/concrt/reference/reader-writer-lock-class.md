---
title: "reader_writer_lock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["reader_writer_lock", "CONCRT/concurrency::reader_writer_lock", "CONCRT/concurrency::reader_writer_lock::scoped_lock", "CONCRT/concurrency::reader_writer_lock::scoped_lock_read", "CONCRT/concurrency::reader_writer_lock::reader_writer_lock", "CONCRT/concurrency::reader_writer_lock::lock", "CONCRT/concurrency::reader_writer_lock::lock_read", "CONCRT/concurrency::reader_writer_lock::try_lock", "CONCRT/concurrency::reader_writer_lock::try_lock_read", "CONCRT/concurrency::reader_writer_lock::unlock"]
dev_langs: ["C++"]
helpviewer_keywords: ["reader_writer_lock class"]
ms.assetid: 91a59cd2-ca05-4b74-8398-d826d9f86736
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
|[reader_writer_lock::scoped_lock Class](#scoped_lock_class)|An exception safe RAII wrapper that can be used to acquire `reader_writer_lock` lock objects as a writer.|  
|[reader_writer_lock::scoped_lock_read Class](#scoped_lock_read_class)|An exception safe RAII wrapper that can be used to acquire `reader_writer_lock` lock objects as a reader.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[reader_writer_lock](#ctor)|Constructs a new `reader_writer_lock` object.|  
|[~reader_writer_lock Destructor](#dtor)|Destroys the `reader_writer_lock` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[lock](#lock)|Acquires the reader-writer lock as a writer.|  
|[lock_read](#lock_read)|Acquires the reader-writer lock as a reader. If there are writers, active readers have to wait until they are done. The reader simply registers an interest in the lock and waits for writers to release it.|  
|[try_lock](#try_lock)|Attempts to acquire the reader-writer lock as a writer without blocking.|  
|[try_lock_read](#try_lock_read)|Attempts to acquire the reader-writer lock as a reader without blocking.|  
|[unlock](#unlock)|Unlocks the reader-writer lock based on who locked it, reader or writer.|  
  
## Remarks  
 For more information, see [Synchronization Data Structures](../../../parallel/concrt/synchronization-data-structures.md).  
  
## Inheritance Hierarchy  
 `reader_writer_lock`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="lock"></a> lock 

 Acquires the reader-writer lock as a writer.  
  
```
void lock();
```  
  
### Remarks  
 It is often safer to utilize the [scoped_lock](#scoped_lock_class) construct to acquire and release a `reader_writer_lock` object as a writer in an exception safe way.  
  
 After a writer attempts to acquire the lock, any future readers will block until the writers have successfully acquired and released the lock. This lock is biased towards writers and can starve readers under a continuous load of writers.  
  
 Writers are chained so that a writer exiting the lock releases the next writer in line.  
  
 If the lock is already held by the calling context, an [improper_lock](improper-lock-class.md) exception will be thrown.  
  
##  <a name="lock_read"></a> lock_read 

 Acquires the reader-writer lock as a reader. If there are writers, active readers have to wait until they are done. The reader simply registers an interest in the lock and waits for writers to release it.  
  
```
void lock_read();
```  
  
### Remarks  
 It is often safer to utilize the [scoped_lock_read](#scoped_lock_read_class) construct to acquire and release a `reader_writer_lock` object as a reader in an exception safe way.  
  
 If there are writers waiting on the lock, the reader will wait until all writers in line have acquired and released the lock. This lock is biased towards writers and can starve readers under a continuous load of writers.  
  
##  <a name="ctor"></a> reader_writer_lock 

 Constructs a new `reader_writer_lock` object.  
  
```
reader_writer_lock();
```  
  
##  <a name="dtor"></a> ~reader_writer_lock 

 Destroys the `reader_writer_lock` object.  
  
```
~reader_writer_lock();
```  
  
### Remarks  
 It is expected that the lock is no longer held when the destructor runs. Allowing the reader writer lock to destruct with the lock still held results in undefined behavior.  
  
##  <a name="scoped_lock_class"></a>  reader_writer_lock::scoped_lock Class  
 An exception safe RAII wrapper that can be used to acquire `reader_writer_lock` lock objects as a writer.  
  
```
class scoped_lock;
``` 
## <a name="scoped_lock_ctor"></a> scoped_lock::scoped_lock 

Constructs a `scoped_lock` object and acquires the `reader_writer_lock` object passed in the `_Reader_writer_lock` parameter as a writer. If the lock is held by another thread, this call will block.  
  
  
```
explicit _CRTIMP scoped_lock(reader_writer_lock& _Reader_writer_lock);
```  
  
#### Parameters  
 `_Reader_writer_lock`  
 The `reader_writer_lock` object to acquire as a writer.  
  
## <a name="scoped_lock_dtor"></a> scoped_lock::~scoped_lock 

Destroys a `reader_writer_lock` object and releases the lock supplied in its constructor.   

```
~scoped_lock();
```  
  
##  <a name="scoped_lock_read_class"></a>  reader_writer_lock::scoped_lock_read Class  
 An exception safe RAII wrapper that can be used to acquire `reader_writer_lock` lock objects as a reader.  
  
```
class scoped_lock_read;
```  
  
##  <a name="try_lock"></a> try_lock 

 Attempts to acquire the reader-writer lock as a writer without blocking.  

## <a name="scoped_lock_read_ctor"></a> scoped_lock_read::scoped_lock_read 

Constructs a `scoped_lock_read` object and acquires the `reader_writer_lock` object passed in the `_Reader_writer_lock` parameter as a reader. If the lock is held by another thread as a writer or there are pending writers, this call will block.  
  
```
explicit _CRTIMP scoped_lock_read(reader_writer_lock& _Reader_writer_lock);
```  
  
#### Parameters  
 `_Reader_writer_lock`  
 The `reader_writer_lock` object to acquire as a reader.  
  
## <a name="scoped_lock_read_dtor">  reader_writer_lock::scoped_lock_read::~scoped_lock_read Destructor
Destroys a `scoped_lock_read` object and releases the lock supplied in its constructor.  

```
~scoped_lock_read();
```  
  
## <a name="try_lock"></a> try_lock 

```
bool try_lock();
```  
  
### Return Value  
 If the lock was acquired, the value `true`; otherwise, the value `false`.  
  
##  <a name="try_lock_read"></a> try_lock_read 

 Attempts to acquire the reader-writer lock as a reader without blocking.  
  
```
bool try_lock_read();
```  
  
### Return Value  
 If the lock was acquired, the value `true`; otherwise, the value `false`.  
  
##  <a name="unlock"></a> unlock 

 Unlocks the reader-writer lock based on who locked it, reader or writer.  
  
```
void unlock();
```  
  
### Remarks  
 If there are writers waiting on the lock, the release of the lock will always go to the next writer in FIFO order. This lock is biased towards writers and can starve readers under a continuous load of writers.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [critical_section Class](critical-section-class.md)
