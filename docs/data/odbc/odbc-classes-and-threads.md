---
title: "ODBC Classes and Threads | Microsoft Docs"
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
  - "ODBC classes, and threads"
  - "ODBC, multithreaded applications"
  - "threading [MFC], ODBC support"
ms.assetid: 16543926-7331-41a6-ba50-72288f2a61b7
caps.latest.revision: 7
author: "mikeblome"
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
# ODBC Classes and Threads
Beginning with MFC 4.2, there is multithreading support for the MFC ODBC classes. Note, however, that MFC does not provide multithreading support for the DAO classes.  
  
 The multithreading support for the ODBC classes has some limitations. Because these classes wrap the ODBC API, they are restricted to the multithreading support of the components on which they are built. For example, many ODBC drivers are not thread-safe; therefore, the MFC ODBC classes are not thread-safe if you use them with one of these drivers. You should verify whether your particular driver is thread-safe.  
  
 When creating a multithreaded application, you should be very careful in using multiple threads to manipulate the same object. For example, using the same `CRecordset` object in two threads might cause problems when retrieving data; a fetch operation in one thread might overwrite the data fetched in the other thread. A more common use of the MFC ODBC classes in separate threads is to share an open `CDatabase` object across threads to use the same ODBC connection, with a separate `CRecordset` object in each thread. Note that you should not pass an unopened `CDatabase` object to a `CRecordset` object in another thread.  
  
> [!NOTE]
>  If you must have multiple threads manipulate the same object, you should implement the appropriate synchronization mechanisms, such as critical sections. Be aware that certain operations, such as **Open**, are not protected. You should be sure that these operations will not be called concurrently from separate threads.  
  
 For more information about creating multithreaded applications, see [Multithreading Topics](../../parallel/multithreading-support-for-older-code-visual-cpp.md).  
  
## See Also  
 [Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)   
 [Data Access Programming (MFC/ATL)](../../data/data-access-programming-mfc-atl.md)