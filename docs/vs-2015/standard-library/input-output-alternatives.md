---
title: "Input-Output Alternatives | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "I/O [C++], alternatives"
ms.assetid: 9f8401c7-d90d-4285-8918-63573df74a80
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Input/Output Alternatives
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Input-Output Alternatives](https://docs.microsoft.com/cpp/standard-library/input-output-alternatives).  
  
Visual C++ provides several alternatives for I/O programming:  
  
-   C run-time library direct, unbuffered I/O.  
  
-   ANSI C run-time library stream I/O.  
  
-   Console and port direct I/O.  
  
-   Microsoft Foundation Class Library.  
  
-   Microsoft Standard C++ Library.  
  
 The iostream classes are useful for buffered, formatted text I/O. They are also useful for unbuffered or binary I/O if you need a C++ programming interface and decide not to use the Microsoft Foundation Class (MFC) library. The iostream classes are an object-oriented I/O alternative to the C run-time functions.  
  
 You can use iostream classes with the Microsoft Windows operating system. String and file streams work without restrictions, but the character-mode stream objects `cin`, `cout`, `cerr`, and `clog` are inconsistent with the Windows graphical user interface. You can also derive custom stream classes that interact directly with the Windows environment.  
  
## See Also  
 [What a Stream Is](../standard-library/what-a-stream-is.md)





