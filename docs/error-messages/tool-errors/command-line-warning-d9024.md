---
title: "Command-Line Warning D9024 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "D9024"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D9024"
ms.assetid: daf4896d-223d-4af0-9b6d-89109cf3d1bb
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
# Command-Line Warning D9024
unrecognized source file type 'filename', object file assumed  
  
 The extension of the specified file was not recognized. The file was assumed to be an object file and was passed to the linker.  
  
 The following extensions are recognized:  
  
-   .c (C source file)  
  
-   .cxx (C++ source file)  
  
-   .cpp (C++ source file)  
  
-   .obj (Object file)  
  
-   .lib (Library file)  
  
-   .def (Module definition file)  
  
-   .exp (Linker exports file, created by LINK /LIB)