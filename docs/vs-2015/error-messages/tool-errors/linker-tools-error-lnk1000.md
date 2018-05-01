---
title: "Linker Tools Error LNK1000 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1000"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1000"
ms.assetid: 86421b9a-460a-4285-8dce-9b8257d78122
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK1000
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK1000](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk1000).  
  
  
unknown error; consult documentation for technical support options  
  
 Note the circumstances of the error, try to isolate the problem and create a reproducible test case, then contact `Microsoft Product Support Services`. For information on how to investigate and report these errors, see [http://support.microsoft.com/default.aspx?scid=kb;en-us;134650](http://support.microsoft.com/default.aspx?scid=kb;en-us;134650).  
  
 You may get this error if you mix standard header files (for example, dos.h) and your own files. `#include` the standard headers first, followed by your own header files.

