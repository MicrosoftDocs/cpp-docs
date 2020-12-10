---
description: "Learn more about: Multithreading: MFC Programming Tips"
title: "Multithreading: MFC Programming Tips"
ms.date: "08/27/2018"
helpviewer_keywords: ["multithreading [C++], programming tips", "handle maps [C++]", "access control [C++], multithreading", "objects [C++], multiple threads and", "non-MFC threads [C++]", "threading [MFC], programming tips", "critical sections [C++]", "synchronization [C++], multithreading", "programming [C++], multithreaded", "communications [C++], between threads", "threading [C++], best practices", "troubleshooting [C++], multithreading", "Windows handle maps [C++]"]
ms.assetid: ad14cc70-c91c-4c24-942f-13a75e58bf8a
---
# Multithreading: MFC Programming Tips

Multithreaded applications require stricter care than single-threaded applications to ensure that operations occur in the intended order, and any data that is accessed by multiple threads is not corrupted. This topic explains techniques for avoiding potential problems when programming multithreaded applications with the Microsoft Foundation Class (MFC) library.

- [Accessing Objects from Multiple Threads](#_core_accessing_objects_from_multiple_threads)

- [Accessing MFC Objects from Non-MFC Threads](#_core_accessing_mfc_objects_from_non.2d.mfc_threads)

- [Windows Handle Maps](#_core_windows_handle_maps)

- [Communicating Between Threads](#_core_communicating_between_threads)

## <a name="_core_accessing_objects_from_multiple_threads"></a> Accessing Objects from Multiple Threads

MFC objects are not thread-safe by themselves. Two separate threads cannot manipulate the same object unless you use the MFC synchronization classes and/or the appropriate Win32 synchronization objects, such as critical sections. For more information about critical sections and other related objects, see [Synchronization](/windows/win32/Sync/synchronization) in the Windows SDK.

The class library uses critical sections internally to protect global data structures, such as those used by the debug memory allocation.

## <a name="_core_accessing_mfc_objects_from_non.2d.mfc_threads"></a> Accessing MFC Objects from Non-MFC Threads

If you have a multithreaded application that creates a thread in a way other than using a [CWinThread](../mfc/reference/cwinthread-class.md) object, you cannot access other MFC objects from that thread. In other words, if you want to access any MFC object from a secondary thread, you must create that thread with one of the methods described in [Multithreading: Creating User-Interface Threads](multithreading-creating-user-interface-threads.md) or [Multithreading: Creating Worker Threads](multithreading-creating-worker-threads.md). These methods are the only ones that allow the class library to initialize the internal variables necessary to handle multithreaded applications.

## <a name="_core_windows_handle_maps"></a> Windows Handle Maps

As a general rule, a thread can access only MFC objects that it created. This is because temporary and permanent Windows handle maps are kept in thread local storage to help maintain protection from simultaneous access from multiple threads. For example, a worker thread cannot perform a calculation and then call a document's `UpdateAllViews` member function to have the windows that contain views on the new data modified. This has no effect at all, because the map from `CWnd` objects to HWNDs is local to the primary thread. This means that one thread might have a mapping from a Windows handle to a C++ object, but another thread might map that same handle to a different C++ object. Changes made in one thread would not be reflected in the other.

There are several ways around this problem. The first is to pass individual handles (such as an HWND) rather than C++ objects to the worker thread. The worker thread then adds these objects to its temporary map by calling the appropriate `FromHandle` member function. You could also add the object to the thread's permanent map by calling `Attach`, but this should be done only if you are guaranteed that the object will exist longer than the thread.

Another method is to create new user-defined messages corresponding to the different tasks your worker threads will be performing and post these messages to the application's main window using `::PostMessage`. This method of communication is similar to two different applications conversing except that both threads are executing in the same address space.

For more information about handle maps, see [Technical Note 3](../mfc/tn003-mapping-of-windows-handles-to-objects.md). For more information about thread local storage, see [Thread Local Storage](/windows/win32/ProcThread/thread-local-storage) and [Using Thread Local Storage](/windows/win32/ProcThread/using-thread-local-storage) in the Windows SDK.

## <a name="_core_communicating_between_threads"></a> Communicating Between Threads

MFC provides a number of classes that allow threads to synchronize access to objects to maintain thread safety. Usage of these classes is described in [Multithreading: How to Use the Synchronization Classes](multithreading-how-to-use-the-synchronization-classes.md) and [Multithreading: When to Use the Synchronization Classes](multithreading-when-to-use-the-synchronization-classes.md). For more information about these objects, see [Synchronization](/windows/win32/Sync/synchronization) in the Windows SDK.

## See also

[Multithreading with C++ and MFC](multithreading-with-cpp-and-mfc.md)
