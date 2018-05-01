---
title: "Linker Tools Error LNK1241 | Microsoft Docs"
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
  - "LNK1241"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1241"
ms.assetid: 7b8b52eb-0231-4521-b52a-2bce8d3e8956
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK1241
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK1241](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk1241).  
  
  
resource file 'resource file' already specified  
  
 This error is generated if you run **cvtres** manually from the command line and if you then pass the resulting .obj file to the linker in addition to other .res files.  
  
 To specify multiple .res files, pass them all to the linker as .res files, not from within .obj files created by **cvtres**.

