---
title: "Linker Tools Error LNK1241 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK1241"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK1241"]
ms.assetid: 7b8b52eb-0231-4521-b52a-2bce8d3e8956
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Error LNK1241
resource file 'resource file' already specified  
  
 This error is generated if you run **cvtres** manually from the command line and if you then pass the resulting .obj file to the linker in addition to other .res files.  
  
 To specify multiple .res files, pass them all to the linker as .res files, not from within .obj files created by **cvtres**.