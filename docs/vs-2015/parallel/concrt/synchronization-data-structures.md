---
title: "Synchronization Data Structures | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "synchronization data structures"
ms.assetid: d612757d-e4b7-4019-a627-f853af085b8b
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Synchronization Data Structures
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The Concurrency Runtime provides several data structures that let you synchronize access to shared data from multiple threads. These data structures are useful when you have shared data that you modify infrequently. A synchronization object, for example, a critical section, causes other threads to wait until the shared resource is available. Therefore, if you use such an object to synchronize access to data that is used frequently, you can lose scalability in your application. The [Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md) provides the [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) class, which enables you to share a resource among several threads or tasks without the need for synchronization. For more information about the `combinable` class, see [Parallel Containers and Objects](../../parallel/concrt/parallel-containers-and-objects.md).  
  
##  <a name="top"></a> Sections  
 This topic describes the following asynchronous message block types in detail:  
  
-   [critical_section](#critical_section)  
  
-   [reader_writer_lock](#reader_writer_lock)  
  
-   [scoped_lock and scoped_lock_read](#scoped_lock)  
  
-   [event](#event)  
  
##  <a name="critical_section"></a> critical_section  
 The [concurrency::critical_section](../../parallel/concrt/reference/critical-section-class.md) class represents a cooperative mutual exclusion object that yields to other tasks instead of preempting them. Critical sections are useful when multiple threads require exclusive read and write access to shared data.  
  
 The `critical_section` class is non-reentrant. The [concurrency::critical_section::lock](http://msdn.microsoft.com/library/62cc3d7b-4331-403e-8595-d07ff24023e4) method throws an exception of type [concurrency::improper_lock](../../parallel/concrt/reference/improper-lock-class.md) if it is called by the thread that already owns the lock.  
  
### Methods and Features  
 The following table shows the important methods that are defined by the `critical_section` class.  
  
|Method|Description|  
|------------|-----------------|  
|[lock](http://msdn.microsoft.com/library/62cc3d7b-4331-403e-8595-d07ff24023e4)|Acquires the critical section. The calling context blocks until it acquires the lock.|  
|[try_lock](http://msdn.microsoft.com/library/a63f3229-2bad-4250-a35d-4c0a38b1e78a)|Tries to acquire the critical section, but does not block.|  
|[unlock](http://msdn.microsoft.com/library/a2c8a43e-c016-4562-b015-0b7e087737ff)|Releases the critical section.|  
  
 [[Top](#top)]  
  
##  <a name="reader_writer_lock"></a> reader_writer_lock  
 The [concurrency::reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) class provides thread-safe read/write operations to shared data. Use reader/writer locks when multiple threads require concurrent read access to a shared resource but rarely write to that shared resource. This class gives only one thread write access to an object at any time.  
  
 The `reader_writer_lock` class can perform better than the `critical_section` class because a `critical_section` object acquires exclusive access to a shared resource, which prevents concurrent read access.  
  
 Like the `critical_section` class, the `reader_writer_lock` class represents a cooperative mutual exclusion object that yields to other tasks instead of preempting them.  
  
 When a thread that must write to a shared resource acquires a reader/writer lock, other threads that also must access the resource are blocked until the writer releases the lock. The `reader_writer_lock` class is an example of a *write-preference* lock, which is a lock that unblocks waiting writers before it unblocks waiting readers.  
  
 Like the `critical_section` class, the `reader_writer_lock` class is non-reentrant. The [concurrency::reader_writer_lock::lock](http://msdn.microsoft.com/library/2785cfe2-772f-434e-b553-ece90c880536) and [concurrency::reader_writer_lock::lock_read](http://msdn.microsoft.com/library/8a3e6f7e-1bca-450b-9135-52455375a10d) methods throw an exception of type `improper_lock` if they are called by a thread that already owns the lock.  
  
> [!NOTE]
>  Because the `reader_writer_lock` class is non-reentrant, you cannot upgrade a read-only lock to a reader/writer lock or downgrade a reader/writer lock to a read-only lock. Performing either of these operations produces unspecified behavior.  
  
### Methods and Features  
 The following table shows the important methods that are defined by the `reader_writer_lock` class.  
  
|Method|Description|  
|------------|-----------------|  
|[lock](http://msdn.microsoft.com/library/2785cfe2-772f-434e-b553-ece90c880536)|Acquires read/write access to the lock.|  
|[try_lock](http://msdn.microsoft.com/library/3dc29ace-f1da-4827-803a-f3f243e6951e)|Tries to acquire read/write access to the lock, but does not block.|  
|[lock_read](http://msdn.microsoft.com/library/8a3e6f7e-1bca-450b-9135-52455375a10d)|Acquires read-only access to the lock.|  
|[try_lock_read](http://msdn.microsoft.com/library/558021f3-d86b-4cd7-91be-e3fed8a69ef9)|Tries to acquire read-only access to the lock, but does not block.|  
|[unlock](http://msdn.microsoft.com/library/91aef6f4-4b07-492b-bba9-788e1bbfeddc)|Releases the lock.|  
  
 [[Top](#top)]  
  
##  <a name="scoped_lock"></a> scoped_lock and scoped_lock_read  
 The `critical_section` and `reader_writer_lock` classes provide nested helper classes that simplify the way you work with mutual exclusion objects. These helper classes are known as *scoped locks*.  
  
 The `critical_section` class contains the [concurrency::critical_section::scoped_lock](http://msdn.microsoft.com/library/9564437e-8df7-4eb7-b60c-842c27ac4bb6) class. The constructor acquires access to the provided `critical_section` object; the destructor releases access to that object. The `reader_writer_lock` class contains the [concurrency::reader_writer_lock::scoped_lock](http://msdn.microsoft.com/library/35a8af75-1c30-4ce5-890d-ad0385f7a004) class, which resembles `critical_section::scoped_lock`, except that it manages write access to the provided `reader_writer_lock` object. The `reader_writer_lock` class also contains the [concurrency::reader_writer_lock::scoped_lock_read](http://msdn.microsoft.com/library/808cf852-b770-448c-80d2-e15ee4c0d208) class. This class manages read access to the provided `reader_writer_lock` object.  
  
 Scoped locks provide several benefits when you are working with `critical_section` and `reader_writer_lock` objects manually. Typically, you allocate a scoped lock on the stack. A scoped lock releases access to its mutual exclusion object automatically when it is destroyed; therefore, you do not manually unlock the underlying object. This is useful when a function contains multiple `return` statements. Scoped locks can also help you write exception-safe code. When a `throw` statement causes the stack to unwind, the destructor for any active scoped lock is called, and therefore the mutual exclusion object is always correctly released.  
  
> [!NOTE]
>  When you use the `critical_section::scoped_lock`, `reader_writer_lock::scoped_lock`, and `reader_writer_lock::scoped_lock_read` classes, do not manually release access to the underlying mutual exclusion object. This can put the runtime in an invalid state.  
  
##  <a name="event"></a> event  
 The [concurrency::event](../../parallel/concrt/reference/event-class.md) class represents a synchronization object whose state can be signaled or non-signaled. Unlike synchronization objects, such as critical sections, whose purpose is to protect access to shared data, events synchronize flow of execution.  
  
 The `event` class is useful when one task has completed work for another task. For example, one task might signal another task that it has read data from a network connection or from a file.  
  
### Methods and Features  
 The following table shows several of the important methods that are defined by the `event` class.  
  
|Method|Description|  
|------------|-----------------|  
|[wait](http://msdn.microsoft.com/library/ecb63000-4ed0-4e3c-890a-d9662c182ad5)|Waits for the event to become signaled.|  
|[set](http://msdn.microsoft.com/library/8555fca6-fed7-48d8-8136-311742c1fe3b)|Sets the event to the signaled state.|  
|[reset](http://msdn.microsoft.com/library/b171c7b3-3a49-4dbd-97f5-69c2219988d2)|Sets the event to the non-signaled state.|  
|[wait_for_multiple](http://msdn.microsoft.com/library/61f627f6-b2a3-4884-a75d-07cc970156d8)|Waits for multiple events to become signaled.|  
  
### Example  
 For an example that shows how to use the `event` class, see [Comparing Synchronization Data Structures to the Windows API](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md).  
  
 [[Top](#top)]  
  
## Related Sections  
 [Comparing Synchronization Data Structures to the Windows API](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md)  
 Compares the behavior of the synchronization data structures to those provided by the Windows API.  
  
 [Concurrency Runtime](../../parallel/concrt/concurrency-runtime.md)  
 Describes the Concurrency Runtime, which simplifies parallel programming, and contains links to related topics.

