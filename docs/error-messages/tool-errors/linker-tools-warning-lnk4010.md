---
title: "Linker Tools Warning LNK4010 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK4010"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK4010"]
ms.assetid: 2824cf99-4174-4b60-a6e2-c01e9f1ee52d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Warning LNK4010
invalid subsystem version number number; default subsystem version assumed  
  
 You can specify a version for the image's subsystem ([/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md)). Each subsystem has a minimum version requirement. If the specified version is lower than the minimum, this warning will occur and the linker will just use the default subsystem.