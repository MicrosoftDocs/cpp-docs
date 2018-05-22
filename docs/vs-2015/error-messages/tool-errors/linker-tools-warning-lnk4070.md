---
title: "Linker Tools Warning LNK4070 | Microsoft Docs"
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
  - "LNK4070"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4070"
ms.assetid: f95f179a-fff9-427e-bd51-466b3934517f
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4070
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Warning LNK4070](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-warning-lnk4070).  
  
  
OUT:filename directive in .EXP differs from output filename 'filename'; ignoring directive  
  
 The `filename` specified in the [NAME](../../build/reference/name-c-cpp.md) or [LIBRARY](../../build/reference/library.md) statement when the .exp file was created differs from the output `filename` that was either assumed by default or specified with the [/OUT](../../build/reference/out-output-file-name.md) option.  
  
 You will see this warning if you change the name of an output file in the development environment and where the project's .def file was not updated. Manually update the .def file to resolve this warning.  
  
 A client program that uses the resulting DLL might encounter problems.

