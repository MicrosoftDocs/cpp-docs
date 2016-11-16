---
title: "Text and Binary Streams | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "binary streams"
  - "text streams"
ms.assetid: 57035e4a-955d-4e04-a560-fcf67ce68b4e
caps.latest.revision: 6
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
# Text and Binary Streams
A text stream consists of one or more lines of text that can be written to a text-oriented display so that they can be read. When reading from a text stream, the program reads an `NL` (newline) at the end of each line. When writing to a text stream, the program writes an `NL` to signal the end of a line. To match differing conventions among target environments for representing text in files, the library functions can alter the number and representations of characters transmitted between the program and a text stream.  
  
 Thus, positioning within a text stream is limited. You can obtain the current file-position indicator by calling [fgetpos](../c-runtime-library/reference/fgetpos.md) or [ftell](../c-runtime-library/reference/ftell-ftelli64.md). You can position a text stream at a position obtained this way, or at the beginning or end of the stream, by calling [fsetpos](../c-runtime-library/reference/fsetpos.md) or [fseek](../c-runtime-library/reference/fseek-fseeki64.md). Any other change of position might well be not supported.  
  
 For maximum portability, the program should not write:  
  
-   Empty files.  
  
-   Space characters at the end of a line.  
  
-   Partial lines (by omitting the `NL` at the end of a file).  
  
-   characters other than the printable characters, NL, and `HT` (horizontal tab).  
  
 If you follow these rules, the sequence of characters you read from a text stream (either as byte or multibyte characters) will match the sequence of characters you wrote to the text stream when you created the file. Otherwise, the library functions can remove a file you create if the file is empty when you close it. Or they can alter or delete characters you write to the file.  
  
 A binary stream consists of one or more bytes of arbitrary information. You can write the value stored in an arbitrary object to a (byte-oriented) binary stream and read exactly what was stored in the object when you wrote it. The library functions do not alter the bytes you transmit between the program and a binary stream. They can, however, append an arbitrary number of null bytes to the file that you write with a binary stream. The program must deal with these additional null bytes at the end of any binary stream.  
  
 Thus, positioning within a binary stream is well defined, except for positioning relative to the end of the stream. You can obtain and alter the current file-position indicator the same as for a text stream. Moreover, the offsets used by [ftell](../c-runtime-library/reference/ftell-ftelli64.md) and [fseek](../c-runtime-library/reference/fseek-fseeki64.md) count bytes from the beginning of the stream (which is byte zero), so integer arithmetic on these offsets yields predictable results.  
  
 A byte stream treats a file as a sequence of bytes. Within the program, the stream looks like the same sequence of bytes, except for the possible alterations described above.  
  
## See Also  
 [Files and Streams](../c-runtime-library/files-and-streams.md)