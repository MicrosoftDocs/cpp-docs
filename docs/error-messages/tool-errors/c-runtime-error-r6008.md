---
title: "C Runtime Error R6008 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "R6008"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6008"
ms.assetid: f0f304fc-709a-4843-bc7e-bad1ae0d1649
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# C Runtime Error R6008
not enough space for arguments  
  
> [!NOTE]
>  If you encounter this error message while running an app, the app was shut down because it has an internal memory problem. There are several possible reasons for this error, but often it's caused by an extremely low memory condition, too much memory taken by environment variables, or a bug in the program.  
>   
>  You can try these steps to fix this error:  
>   
>  -   Close other running applications or restart your computer to free up memory.  
> -   Reduce the number and size of command-line arguments to the app.  
> -   Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to repair or reinstall the program.  
> -   Check **Windows Update** in the **Control Panel** for software updates.  
> -   Check for an updated version of the app. Contact the app vendor if the problem persists.  
  
 **Information for Programmers**  
  
 There was enough memory to load the program but not enough memory to create the **argv** array. This can be caused by extremely low memory conditions, or by unusually large command lines or environment variable usage. Consider one of the following solutions:  
  
-   Increase the amount of memory available to the program.  
  
-   Reduce the number and size of command-line arguments.  
  
-   Reduce the environment size by removing unnecessary variables.