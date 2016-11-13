---
title: "Input and Output | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.io"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "input routines"
  - "I/O [CRT]"
  - "I/O routines"
  - "I/O [CRT], routines"
  - "output routines"
ms.assetid: 1c177301-e341-4ca0-aedc-0a87fe1c75ae
caps.latest.revision: 9
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
# Input and Output
The I/O functions read and write data to and from files and devices. File I/O operations take place in text mode or binary mode. The Microsoft run-time library has three types of I/O functions:  
  
-   [Stream I/O](../c-runtime-library/stream-i-o.md) functions treat data as a stream of individual characters.  
  
-   [Low-level I/O](../c-runtime-library/low-level-i-o.md) functions invoke the operating system directly for lower-level operation than that provided by stream I/O.  
  
-   [Console and port I/O](../c-runtime-library/console-and-port-i-o.md) functions read or write directly to a console (keyboard and screen) or an I/O port (such as a printer port).  
  
    > [!NOTE]
    >  Because stream functions are buffered and low-level functions are not, these two types of functions are generally incompatible. For processing a particular file, use either stream or low-level functions exclusively.  
  
## See Also  
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)