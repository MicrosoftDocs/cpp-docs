---
title: "C Runtime Error R6026 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "R6026"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6026"
ms.assetid: 7ea751f8-fc20-46ab-99ef-84c95ca0b6b4
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
# C Runtime Error R6026
not enough space for stdio initialization  
  
> [!NOTE]
>  If you encounter this error message while running an app, the app was shut down because it has an internal memory problem. There are several possible reasons for this error, but usually it's caused by an extremely low memory condition. It can also be caused by a bug in the app, by corruption of the Visual C++ libraries that it uses, or by a driver.  
>   
>  You can try these steps to fix this error:  
>   
>  -   Close other running applications or restart your computer to free up memory.  
> -   Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to repair or reinstall the program.  
> -   If the app was working before a recent installation of another app or driver, use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to remove the new app or driver, and try your app again.  
> -   Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to repair or reinstall all copies of the Microsoft Visual C++ Redistributable.  
> -   Check **Windows Update** in the **Control Panel** for software updates.  
> -   Check for an updated version of the app. Contact the app vendor if the problem persists.  
  
 **Information for Programmers**  
  
 This error occurs when there is not enough free memory available to initialize the standard I/O support in the C runtime. This error usually occurs at app startup. Verify that your app and the drivers and dlls that it loads do not corrupt the heap at startup.