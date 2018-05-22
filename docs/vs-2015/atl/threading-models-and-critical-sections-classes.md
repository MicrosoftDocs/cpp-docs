---
title: "Threading Models and Critical Sections Classes | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.atl.threads.models"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, critical sections"
  - "ATL, multithreading"
  - "threading [ATL], models"
  - "critical sections"
ms.assetid: 759f05ef-6285-4be6-a2cc-78572dd75146
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Threading Models and Critical Sections Classes
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Threading Models and Critical Sections Classes (ATL)](https://docs.microsoft.com/cpp/atl/threading-models-and-critical-sections-classes).  
  
  
The following classes define a threading model and critical section:  
  
-   [CAtlAutoThreadModule](../atl/reference/catlautothreadmodule-class.md) Implements a thread-pooled, apartment-model COM server.  
  
-   [CAtlAutoThreadModuleT](../atl/reference/catlautothreadmodulet-class.md) Provides methods for implementing a thread-pooled, apartment-model COM server.  
  
-   [CComMultiThreadModel](../atl/reference/ccommultithreadmodel-class.md) Provides thread-safe methods for incrementing and decrementing a variable. Provides a critical section.  
  
-   [CComMultiThreadModelNoCS](../atl/reference/ccommultithreadmodelnocs-class.md) Provides thread-safe methods for incrementing and decrementing a variable. Does not provide a critical section.  
  
-   [CComSingleThreadModel](../atl/reference/ccomsinglethreadmodel-class.md) Provides methods for incrementing and decrementing a variable. Does not provide a critical section.  
  
-   [CComObjectThreadModel](http://msdn.microsoft.com/library/69f1e800-c802-4068-9f37-75d59bfc4595) Determines the appropriate threading-model class for a single object class.  
  
-   [CComGlobalsThreadModel](http://msdn.microsoft.com/library/f112382f-da0a-4bfe-bb49-80f9fd908d47) Determines the appropriate threading-model class for an object that is globally available.  
  
-   [CComAutoCriticalSection](../atl/reference/ccomautocriticalsection-class.md) Contains methods for obtaining and releasing a critical section. The critical section is automatically initialized.  
  
-   [CComCriticalSection](../atl/reference/ccomcriticalsection-class.md) Contains methods for obtaining and releasing a critical section. The critical section must be explicitly initialized.  
  
-   [CComFakeCriticalSection](../atl/reference/ccomfakecriticalsection-class.md) Mirrors the methods in `CComCriticalSection` without providing a critical section. The methods in `CComFakeCriticalSection` do nothing.  
  
-   [CRTThreadTraits](../atl/reference/crtthreadtraits-class.md) Provides the creation function for a CRT thread. Use this class if the thread will use CRT functions.  
  
-   [Win32ThreadTraits](../atl/reference/win32threadtraits-class.md) Provides the creation function for a Windows thread. Use this class if the thread will not use CRT functions.  
  
## See Also  
 [Class Overview](../atl/atl-class-overview.md)





