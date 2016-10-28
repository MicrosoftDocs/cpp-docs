---
title: "Compiler Error C3859"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C3859"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3859"
ms.assetid: 40e93b25-4393-4467-90de-035434a665c7
caps.latest.revision: 9
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
# Compiler Error C3859
virtual memory range for PCH exceeded; please recompile with a command line option of '-Zmvalue' or greater  
  
 Your precompiled header is too small for the amount of data the compiler is trying to put in it. Use the **/Zm** compiler flag to specify a larger value for the precompiled header file. For more information, see [/Zm (Specify Precompiled Header Memory Allocation Limit)](../buildref/-zm--specify-precompiled-header-memory-allocation-limit-.md).