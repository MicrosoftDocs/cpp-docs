---
title: "Resource Compiler Warning RW4004 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RW4004"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RW4004"
ms.assetid: 596b6a89-9ce7-4ba7-bdcb-e8054c7efafa
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
# Resource Compiler Warning RW4004
ASCII character not equivalent to virtual key code  
  
 A string literal was used for the virtual key code in a VIRTKEY type accelerator.  
  
 This warning allows you to continue, but be aware that the accelerator keys generated may not match the string you indicated. (VIRTKEYs use different key codes than ASCII accelerators.)  
  
 While string literals are syntactically valid, you can only ensure that you get the accelerator you want by using the **VK_\* #define** values in WINDOWS.h.