---
description: "Learn more about: Multithreading: When to Use the MFC Synchronization Classes"
title: "Multithreading: When to Use the MFC Synchronization Classes"
ms.date: "08/27/2018"
helpviewer_keywords: ["threading [MFC], synchronization classes", "resources [C++], multithreading", "synchronization classes [C++]", "synchronization [C++], multithreading", "controlled resource access [C++]", "synchronization access classes [C++]", "threading [C++], synchronization", "multithreading [C++], synchronization classes"]
ms.assetid: 4914f54e-68ac-438f-93c9-c013455a657e
---
# Multithreading: When to Use the MFC Synchronization Classes

The multithreaded classes provided with MFC fall into two categories: synchronization objects ([CSyncObject](../mfc/reference/csyncobject-class.md), [CSemaphore](../mfc/reference/csemaphore-class.md), [CMutex](../mfc/reference/cmutex-class.md), [CCriticalSection](../mfc/reference/ccriticalsection-class.md), and [CEvent](../mfc/reference/cevent-class.md)) and synchronization access objects ([CMultiLock](../mfc/reference/cmultilock-class.md) and [CSingleLock](../mfc/reference/csinglelock-class.md)).

Synchronization classes are used when access to a resource must be controlled to ensure integrity of the resource. Synchronization access classes are used to gain access to these controlled resources. This topic describes when to use each class.

To determine which synchronization class you should use, ask the following series of questions:

1. Does the application have to wait for something to happen before it can access the resource (for example, data must be received from a communications port before it can be written to a file)?

   If yes, use `CEvent`.

2. Can more than one thread within the same application access this resource at one time (for example, your application allows up to five windows with views on the same document)?

   If yes, use `CSemaphore`.

3. Can more than one application use this resource (for example, the resource is in a DLL)?

   If yes, use `CMutex`.

   If no, use `CCriticalSection`.

`CSyncObject` is never used directly. It is the base class for the other four synchronization classes.

## Example 1: Using Three Synchronization Classes

As an example, take an application that maintains a linked list of accounts. This application allows up to three accounts to be examined in separate windows, but only one can be updated at any particular time. When an account is updated, the updated data is sent over the network to a data archive.

This example application uses all three types of synchronization classes. Because it allows up to three accounts to be examined at one time, it uses `CSemaphore` to limit access to three view objects. When an attempt to view a fourth account occurs, the application either waits until one of the first three windows closes or it fails. When an account is updated, the application uses `CCriticalSection` to ensure that only one account is updated at a time. After the update succeeds, it signals `CEvent`, which releases a thread waiting for the event to be signaled. This thread sends the new data to the data archive.

## Example 2: Using Synchronization Access Classes

Choosing which synchronization access class to use is even simpler. If your application is concerned with accessing a single controlled resource only, use `CSingleLock`. If it needs access to any one of a number of controlled resources, use `CMultiLock`. In example 1, `CSingleLock` would have been used, because in each case only one resource is needed at any particular time.

For information about how the synchronization classes are used, see [Multithreading: How to Use the Synchronization Classes](multithreading-how-to-use-the-synchronization-classes.md). For information about synchronization, see [Synchronization](/windows/win32/Sync/synchronization) in the Windows SDK. For information about multithreading support in MFC, see [Multithreading with C++ and MFC](multithreading-with-cpp-and-mfc.md).

## See also

[Multithreading with C++ and MFC](multithreading-with-cpp-and-mfc.md)
