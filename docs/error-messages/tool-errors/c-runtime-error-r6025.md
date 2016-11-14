---
title: "C Runtime Error R6025 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "R6025"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6025"
ms.assetid: afa06d98-9c36-445b-b3e7-b6409bc8e779
caps.latest.revision: 8
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
# C Runtime Error R6025
pure virtual function call  
  
> [!NOTE]
>  If you encounter this error message while running an app, the app was shut down because it has an internal problem. The most common reason for this error is a bug in the app, or a corrupted installation.  
>   
>  You can try these steps to fix this error:  
>   
>  -   Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to repair or reinstall the program.  
> -   Check **Windows Update** in the **Control Panel** for software updates.  
> -   Check for an updated version of the app. Contact the app vendor if the problem persists.  
  
 **Information for Programmers**  
  
 No object has been instantiated to handle the pure virtual function call.  
  
 This error is caused by calling a virtual function in an abstract base class through a pointer which is created by a cast to the type of the derived class, but is actually a pointer to the base class. This can occur when casting from a **void\*** to a pointer to a class when the **void\*** was created during the construction of the base class.  
  
 For more information, see the [Microsoft support](http://go.microsoft.com/fwlink/?LinkId=75220) website.