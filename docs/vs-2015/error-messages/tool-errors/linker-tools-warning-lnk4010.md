---
title: "Linker Tools Warning LNK4010 | Microsoft Docs"
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
  - "LNK4010"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4010"
ms.assetid: 2824cf99-4174-4b60-a6e2-c01e9f1ee52d
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4010
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Warning LNK4010](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-warning-lnk4010).  
  
  
invalid subsystem version number number; default subsystem version assumed  
  
 You can specify a version for the image's subsystem ([/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md)). Each subsystem has a minimum version requirement. If the specified version is lower than the minimum, this warning will occur and the linker will just use the default subsystem.

