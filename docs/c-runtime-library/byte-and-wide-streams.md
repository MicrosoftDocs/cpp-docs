---
title: "Byte and Wide Streams | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Byte and Wide Streams"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "byte streams"
  - "wide streams"
ms.assetid: 61ef0587-4cbc-4eb8-aae5-4c298dbbc6f9
caps.latest.revision: 8
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
# Byte and Wide Streams
A byte stream treats a file as a sequence of bytes. Within the program, the stream is the identical sequence of bytes.  
  
 By contrast, a wide stream treats a file as a sequence of generalized multibyte characters, which can have a broad range of encoding rules. (Text and binary files are still read and written as previously described.) Within the program, the stream looks like the corresponding sequence of wide characters. Conversions between the two representations occur within the Standard C Library. The conversion rules can, in principle, be altered by a call to [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) that alters the category `LC_CTYPE`. Each wide stream determines its conversion rules at the time it becomes wide oriented, and retains these rules even if the category `LC_CTYPE` subsequently changes.  
  
 Positioning within a wide stream suffers the same limitations as for text steams. Moreover, the file-position indicator may well have to deal with a state-dependent encoding. Typically, it includes both a byte offset within the stream and an object of type `mbstate_t`. Thus, the only reliable way to obtain a file position within a wide stream is by calling [fgetpos](../c-runtime-library/reference/fgetpos.md), and the only reliable way to restore a position obtained this way is by calling [fsetpos](../c-runtime-library/reference/fsetpos.md).  
  
## See Also  
 [Files and Streams](../c-runtime-library/files-and-streams.md)   
 [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)