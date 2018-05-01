---
title: "Command-Line Error D8016 | Microsoft Docs"
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
  - "D8016"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D8016"
ms.assetid: eec51312-7471-4f92-94b2-d517cafc8ef5
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Command-Line Error D8016
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Command-Line Error D8016](https://docs.microsoft.com/cpp/error-messages/tool-errors/command-line-error-d8016).  
  
  
option1' and 'option2' command-line options are incompatible  
  
 The command-line options cannot be specified together.  
  
 Check environment variables, such as CL, for option specifications.  
  
 **/clr** implies **/EHa**, and you cannot specify any other **/EH** compiler option with **/clr**. For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 You may get D8016 after updating a [!INCLUDE[vcprvc](../../includes/vcprvc-md.md)] 6.0 project: the project update wizard process may enable **/RTC** for each source code file in the project, which overrides the **/RTC** setting for the project.  To resolve, change the **/RTC** setting for each source code file in the project to the default setting, which means the project setting for **/RTC** will be in effect for each file.  
  
 See [/RTC (Run-Time Error Checks)](../../build/reference/rtc-run-time-error-checks.md) for information on changing the **/RTC** property setting.

