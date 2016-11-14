---
title: "CString Exception Cleanup | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CString objects, exceptions"
  - "exception handling, cleanup code"
ms.assetid: 28b9ce70-be63-4a0d-92a8-44bbfbc95e83
caps.latest.revision: 10
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
# CString Exception Cleanup
In previous versions of MFC, it was important that you clean up [CString](../atl-mfc-shared/reference/cstringt-class.md) objects after use. With MFC version 3.0 and later, explicit cleanup is no longer necessary.  
  
 Under the C++ exception handling mechanism that MFC now uses, you do not have to worry about cleanup after an exception. For a description of how C++ "unwinds" the stack after an exception is caught, see [the try, catch, and throw statements](../cpp/try-throw-and-catch-statements-cpp.md). Even if you use the MFC **TRY**/**CATCH** macros instead of the C++ keywords **try** and **catch**, MFC uses the C++ exception mechanism underneath, so you still do not need to clean up explicitly.  
  
## See Also  
 [Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)   
 [Exception Handling](../mfc/exception-handling-in-mfc.md)

