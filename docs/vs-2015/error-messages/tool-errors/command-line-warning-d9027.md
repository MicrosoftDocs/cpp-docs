---
title: "Command-Line Warning D9027 | Microsoft Docs"
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
  - "D9027"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D9027"
ms.assetid: 2a29edc5-5649-48f2-9058-2057c747284c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Command-Line Warning D9027
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Command-Line Warning D9027](https://docs.microsoft.com/cpp/error-messages/tool-errors/command-line-warning-d9027).  
  
  
source file '\<filename>' ignored  
  
 CL.exe ignored the input source file.  
  
 This warning can be caused by a space between the /Fo option and an output filename on a command line with the /c option. For example:  
  
```  
cl /c /Fo output.obj input.c   
```  
  
 Because there is a space between /Fo and `output.obj,` CL.exe takes `output.obj` as the name of the input file. To fix the problem, remove the space:  
  
```  
cl /c /Fooutput.obj input.c   
```

