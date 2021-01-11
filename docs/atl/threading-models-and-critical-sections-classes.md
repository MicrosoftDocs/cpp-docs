---
description: "Learn more about: Threading Models and Critical Sections Classes"
title: "Threading Models and Critical Sections Classes (ATL)"
ms.date: "11/04/2016"
helpviewer_keywords: ["ATL, critical sections", "ATL, multithreading", "threading [ATL], models", "critical sections"]
ms.assetid: 759f05ef-6285-4be6-a2cc-78572dd75146
---
# Threading Models and Critical Sections Classes

The following classes define a threading model and critical section:

- [CAtlAutoThreadModule](../atl/reference/catlautothreadmodule-class.md) Implements a thread-pooled, apartment-model COM server.

- [CAtlAutoThreadModuleT](../atl/reference/catlautothreadmodulet-class.md) Provides methods for implementing a thread-pooled, apartment-model COM server.

- [CComMultiThreadModel](../atl/reference/ccommultithreadmodel-class.md) Provides thread-safe methods for incrementing and decrementing a variable. Provides a critical section.

- [CComMultiThreadModelNoCS](../atl/reference/ccommultithreadmodelnocs-class.md) Provides thread-safe methods for incrementing and decrementing a variable. Does not provide a critical section.

- [CComSingleThreadModel](../atl/reference/ccomsinglethreadmodel-class.md) Provides methods for incrementing and decrementing a variable. Does not provide a critical section.

- [CComObjectThreadModel](../atl/reference/atl-typedefs.md#ccomobjectthreadmodel) Determines the appropriate threading-model class for a single object class.

- [CComGlobalsThreadModel](../atl/reference/atl-typedefs.md#ccomglobalsthreadmodel) Determines the appropriate threading-model class for an object that is globally available.

- [CComAutoCriticalSection](../atl/reference/ccomautocriticalsection-class.md) Contains methods for obtaining and releasing a critical section. The critical section is automatically initialized.

- [CComCriticalSection](../atl/reference/ccomcriticalsection-class.md) Contains methods for obtaining and releasing a critical section. The critical section must be explicitly initialized.

- [CComFakeCriticalSection](../atl/reference/ccomfakecriticalsection-class.md) Mirrors the methods in `CComCriticalSection` without providing a critical section. The methods in `CComFakeCriticalSection` do nothing.

- [CRTThreadTraits](../atl/reference/crtthreadtraits-class.md) Provides the creation function for a CRT thread. Use this class if the thread will use CRT functions.

- [Win32ThreadTraits](../atl/reference/win32threadtraits-class.md) Provides the creation function for a Windows thread. Use this class if the thread will not use CRT functions.

## See also

[Class Overview](../atl/atl-class-overview.md)
