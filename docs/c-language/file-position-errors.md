---
title: "File Position Errors | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["file pointers [C++], file position errors"]
ms.assetid: d5e59d8b-08c0-4927-a338-0b2d8234ce24
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# File Position Errors
**ANSI 4.9.9.1, 4.9.9.4** The value to which the macro `errno` is set by the `fgetpos` or `ftell` function on failure  
  
 When `fgetpos` or `ftell` fails, `errno` is set to the manifest constant `EINVAL` if the position is invalid or `EBADF` if the file number is bad. The constants are defined in ERRNO.H.  
  
## See Also  
 [Library Functions](../c-language/library-functions.md)
