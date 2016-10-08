---
title: "Resource Compiler Warning RW4004"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: 596b6a89-9ce7-4ba7-bdcb-e8054c7efafa
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Resource Compiler Warning RW4004
ASCII character not equivalent to virtual key code  
  
 A string literal was used for the virtual key code in a VIRTKEY type accelerator.  
  
 This warning allows you to continue, but be aware that the accelerator keys generated may not match the string you indicated. (VIRTKEYs use different key codes than ASCII accelerators.)  
  
 While string literals are syntactically valid, you can only ensure that you get the accelerator you want by using the **VK_\* #define** values in WINDOWS.h.