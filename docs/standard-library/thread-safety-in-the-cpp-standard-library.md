---
title: "Thread Safety in the C++ Standard Library | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "thread safety"
  - "Standard C++ Library, thread safety"
  - "thread safety, Standard Template Library"
ms.assetid: 9351c8fb-4539-4728-b0e9-226e2ac4284b
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
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
# Thread Safety in the C++ Standard Library
The following thread safety rules apply to all classes in the Standard C++ Library—this includes `shared_ptr`, as described below.  Stronger guarantees are sometimes provided—for example, the standard iostream objects, as described below, and types specifically intended for multithreading, like those in [\<atomic>](../standard-library/atomic.md).  
  
 An object is thread-safe for reading from multiple threads. For example, given an object A, it is safe to read A from thread 1 and from thread 2 simultaneously.  
  
 If an object is being written to by one thread, then all reads and writes to that object on the same or other threads must be protected. For example, given an object A, if thread 1 is writing to A, then thread 2 must be prevented from reading from or writing to A.  
  
 It is safe to read and write to one instance of a type even if another thread is reading or writing to a different instance of the same type. For example, given objects A and B of the same type, it is safe when A is being written in thread 1 and B is being read in thread 2.  
  
## shared_ptr  
 Multiple threads can simultaneously read and write different [shared_ptr](../standard-library/shared-ptr-class.md) objects, even when the objects are copies that share ownership.  
  
## iostream  
 The standard iostream objects `cin`, `cout`, `cerr`, `clog`, `wcin`, `wcout`, `wcerr`, and `wclog` follow the same rules as the other classes, with this exception: it is safe to write to an object from multiple threads. For example, thread 1 can write to [cout](../standard-library/iostream.md#cout) at the same time as thread 2. However, this can cause the output from the two threads to be intermixed.  
  
> [!NOTE]
>  Reading from a stream buffer is not considered to be a read operation. Instead it is considered to be a write operation because the state of the class is changed.  
  
## See Also  
 [STL Overview](../standard-library/cpp-standard-library-overview.md)



