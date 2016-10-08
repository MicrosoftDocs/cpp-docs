---
title: "Threading Models and Critical Sections Classes"
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
ms.assetid: 759f05ef-6285-4be6-a2cc-78572dd75146
caps.latest.revision: 8
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
# Threading Models and Critical Sections Classes
The following classes define a threading model and critical section:  
  
-   [CAtlAutoThreadModule](../VS_visualcpp/CAtlAutoThreadModule-Class.md) Implements a thread-pooled, apartment-model COM server.  
  
-   [CAtlAutoThreadModuleT](../VS_visualcpp/CAtlAutoThreadModuleT-Class.md) Provides methods for implementing a thread-pooled, apartment-model COM server.  
  
-   [CComMultiThreadModel](../VS_visualcpp/CComMultiThreadModel-Class.md) Provides thread-safe methods for incrementing and decrementing a variable. Provides a critical section.  
  
-   [CComMultiThreadModelNoCS](../VS_visualcpp/CComMultiThreadModelNoCS-Class.md) Provides thread-safe methods for incrementing and decrementing a variable. Does not provide a critical section.  
  
-   [CComSingleThreadModel](../VS_visualcpp/CComSingleThreadModel-Class.md) Provides methods for incrementing and decrementing a variable. Does not provide a critical section.  
  
-   [CComObjectThreadModel](../Topic/CComObjectThreadModel.md) Determines the appropriate threading-model class for a single object class.  
  
-   [CComGlobalsThreadModel](../Topic/CComGlobalsThreadModel.md) Determines the appropriate threading-model class for an object that is globally available.  
  
-   [CComAutoCriticalSection](../VS_visualcpp/CComAutoCriticalSection-Class.md) Contains methods for obtaining and releasing a critical section. The critical section is automatically initialized.  
  
-   [CComCriticalSection](../VS_visualcpp/CComCriticalSection-Class.md) Contains methods for obtaining and releasing a critical section. The critical section must be explicitly initialized.  
  
-   [CComFakeCriticalSection](../VS_visualcpp/CComFakeCriticalSection-Class.md) Mirrors the methods in `CComCriticalSection` without providing a critical section. The methods in `CComFakeCriticalSection` do nothing.  
  
-   [CRTThreadTraits](../VS_visualcpp/CRTThreadTraits-Class.md) Provides the creation function for a CRT thread. Use this class if the thread will use CRT functions.  
  
-   [Win32ThreadTraits](../VS_visualcpp/Win32ThreadTraits-Class.md) Provides the creation function for a Windows thread. Use this class if the thread will not use CRT functions.  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)