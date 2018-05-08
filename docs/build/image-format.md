---
title: "Image Format | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 3ca3654b-42fe-4253-9f2e-723644041aa0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Image Format
The executable image format is PE32+. Executable images (both DLLs and EXEs) are restricted to a maximum size of 2 gigabytes, so relative addressing with a 32-bit displacement can be used to address static image data. This data includes the import address table, string constants, static global data, and so on.  
  
## See Also  
 [x64 Software Conventions](../build/x64-software-conventions.md)