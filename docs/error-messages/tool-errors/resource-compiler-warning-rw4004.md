---
title: "Resource Compiler Warning RW4004 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["RW4004"]
dev_langs: ["C++"]
helpviewer_keywords: ["RW4004"]
ms.assetid: 596b6a89-9ce7-4ba7-bdcb-e8054c7efafa
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Resource Compiler Warning RW4004
ASCII character not equivalent to virtual key code  
  
 A string literal was used for the virtual key code in a VIRTKEY type accelerator.  
  
 This warning allows you to continue, but be aware that the accelerator keys generated may not match the string you indicated. (VIRTKEYs use different key codes than ASCII accelerators.)  
  
 While string literals are syntactically valid, you can only ensure that you get the accelerator you want by using the **VK_\* #define** values in WINDOWS.h.