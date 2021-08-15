---
description: "Learn more about: Multithreading: How to Use the MFC Synchronization Classes"
title: "Multithreading: How to Use the MFC Synchronization Classes"
ms.date: "08/27/2018"
helpviewer_keywords: ["MFC [C++], multithreading", "threading [MFC], synchronization classes", "resources [C++], multithreading", "thread-safe classes [C++]", "synchronization classes [C++]", "synchronization [C++], multithreading", "threading [MFC], thread-safe class design", "threading [C++], synchronization", "multithreading [C++], synchronization classes", "threading [C++], thread-safe class design"]
ms.assetid: f266d4c6-0454-4bda-9758-26157ef74cc5
---
# Multithreading: How to Use the MFC Synchronization Classes

Synchronizing resource access between threads is a common problem when writing multithreaded applications. Having two or more threads simultaneously access the same data can lead to undesirable and unpredictable results. For example, one thread could be updating the contents of a structure while another thread is reading the contents of the same structure. It is unknown what data the reading thread will receive: the old data, the newly written data, or possibly a mixture of both. MFC provides a number of synchronization and synchronization access classes to aid in solving this problem. This topic explains the classes available and how to use them to create thread-safe classes in a typical multithreaded application.

A typical multithreaded application has a class that represents a resource to be shared among threads. A properly designed, fully thread-safe class does not require you to call any synchronization functions. Everything is handled internally to the class, allowing you to concentrate on how to best use the class, not about how it might get corrupted. An effective technique for creating a fully thread-safe class is to merge the synchronization class into the resource class. Merging the synchronization classes into the shared class is a straightforward process.

As an example, take an application that maintains a linked list of accounts. This application allows up to three accounts to be examined in separate windows, but only one can be updated at any particular time. When an account is updated, the updated data is sent over the network to a data archive.

This example application uses all three types of synchronization classes. Because it allows up to three accounts to be examined at one time, it uses [CSemaphore](../mfc/reference/csemaphore-class.md) to limit access to three view objects. When an attempt to view a fourth account occurs, the application either waits until one of the first three windows closes or it fails. When an account is updated, the application uses [CCriticalSection](../mfc/reference/ccriticalsection-class.md) to ensure that only one account is updated at a time. After the update succeeds, it signals [CEvent](../mfc/reference/cevent-class.md), which releases a thread waiting for the event to be signaled. This thread sends the new data to the data archive.

## <a name="_mfc_designing_a_thread.2d.safe_class"></a> Designing a Thread-Safe Class

To make a class fully thread-safe, first add the appropriate synchronization class to the shared classes as a data member. In the previous account-management example, a `CSemaphore` data member would be added to the view class, a `CCriticalSection` data member would be added to the linked-list class, and a `CEvent` data member would be added to the data storage class.

Next, add synchronization calls to all member functions that modify the data in the class or access a controlled resource. In each function, you should create either a [CSingleLock](../mfc/reference/csinglelock-class.md) or [CMultiLock](../mfc/reference/cmultilock-class.md) object and call that object's `Lock` function. When the lock object goes out of scope and is destroyed, the object's destructor calls `Unlock` for you, releasing the resource. Of course, you can call `Unlock` directly if you want.

Designing your thread-safe class in this fashion allows it to be used in a multithreaded application as easily as a non-thread-safe class, but with a higher level of safety. Encapsulating the synchronization object and synchronization access object into the resource's class provides all the benefits of fully thread-safe programming without the drawback of maintaining synchronization code.

The following code example demonstrates this method by using a data member, `m_CritSection` (of type `CCriticalSection`), declared in the shared resource class and a `CSingleLock` object. The synchronization of the shared resource (derived from `CWinThread`) is attempted by creating a `CSingleLock` object using the address of the `m_CritSection` object. An attempt is made to lock the resource and, when obtained, work is done on the shared object. When the work is finished, the resource is unlocked with a call to `Unlock`.

```cpp
CSingleLock singleLock(&m_CritSection);
singleLock.Lock();
// resource locked
//.usage of shared resource...

singleLock.Unlock();
```

> [!NOTE]
> `CCriticalSection`, unlike other MFC synchronization classes, does not have the option of a timed lock request. The waiting period for a thread to become free is infinite.

The drawbacks to this approach are that the class will be slightly slower than the same class without the synchronization objects added. Also, if there is a chance that more than one thread might delete the object, the merged approach might not always work. In this situation, it is better to maintain separate synchronization objects.

For information about determining which synchronization class to use in different situations, see [Multithreading: When to Use the Synchronization Classes](multithreading-when-to-use-the-synchronization-classes.md). For more information about synchronization, see [Synchronization](/windows/win32/Sync/synchronization) in the Windows SDK. For more information about multithreading support in MFC, see [Multithreading with C++ and MFC](multithreading-with-cpp-and-mfc.md).

## See also

[Multithreading with C++ and MFC](multithreading-with-cpp-and-mfc.md)
