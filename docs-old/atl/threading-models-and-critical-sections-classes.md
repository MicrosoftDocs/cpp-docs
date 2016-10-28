---
title: "Threading Models and Critical Sections Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 8
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Threading Models and Critical Sections Classes
The following classes define a threading model and critical section:  
  
-   [CAtlAutoThreadModule](../atl/catlautothreadmodule-class.md) Implements a thread-pooled, apartment-model COM server.  
  
-   [CAtlAutoThreadModuleT](../atl/catlautothreadmodulet-class.md) Provides methods for implementing a thread-pooled, apartment-model COM server.  
  
-   [CComMultiThreadModel](../atl/ccommultithreadmodel-class.md) Provides thread-safe methods for incrementing and decrementing a variable. Provides a critical section.  
  
-   [CComMultiThreadModelNoCS](../atl/ccommultithreadmodelnocs-class.md) Provides thread-safe methods for incrementing and decrementing a variable. Does not provide a critical section.  
  
-   [CComSingleThreadModel](../atl/ccomsinglethreadmodel-class.md) Provides methods for incrementing and decrementing a variable. Does not provide a critical section.  
  
-   [CComObjectThreadModel](../Topic/CComObjectThreadModel.md) Determines the appropriate threading-model class for a single object class.  
  
-   [CComGlobalsThreadModel](../Topic/CComGlobalsThreadModel.md) Determines the appropriate threading-model class for an object that is globally available.  
  
-   [CComAutoCriticalSection](../atl/ccomautocriticalsection-class.md) Contains methods for obtaining and releasing a critical section. The critical section is automatically initialized.  
  
-   [CComCriticalSection](../atl/ccomcriticalsection-class.md) Contains methods for obtaining and releasing a critical section. The critical section must be explicitly initialized.  
  
-   [CComFakeCriticalSection](../atl/ccomfakecriticalsection-class.md) Mirrors the methods in `CComCriticalSection` without providing a critical section. The methods in `CComFakeCriticalSection` do nothing.  
  
-   [CRTThreadTraits](../atl/crtthreadtraits-class.md) Provides the creation function for a CRT thread. Use this class if the thread will use CRT functions.  
  
-   [Win32ThreadTraits](../atl/win32threadtraits-class.md) Provides the creation function for a Windows thread. Use this class if the thread will not use CRT functions.  
  
## See Also  
 [Class Overview](../atl/atl-class-overview.md)