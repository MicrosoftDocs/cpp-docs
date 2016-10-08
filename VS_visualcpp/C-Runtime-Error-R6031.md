---
title: "C Runtime Error R6031"
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
ms.assetid: 805d4cd1-cb2f-43fe-87e6-e7bd5b7329c5
caps.latest.revision: 5
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# C Runtime Error R6031
Attempt to initialize the CRT more than once. This indicates a bug in your application.  
  
> [!NOTE]
>  If you encounter this error message while running an app, the app was shut down because it has an internal problem. This may be caused bug in the app, or by a bug in an add-on or extension that the app uses.  
>   
>  You can try these steps to fix this error:  
>   
>  -   Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to repair or reinstall the program.  
> -   Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to remove, repair or reinstall any add-on or extension programs used by the app.  
> -   Check **Windows Update** in the **Control Panel** for software updates.  
> -   Check for an updated version of the app. Contact the app vendor if the problem persists.  
  
 **Information for Programmers**  
  
 This diagnostic indicates that MSIL instructions were executing during loader lock. For more information, see [Initialization of Mixed Assemblies](../VS_visualcpp/Initialization-of-Mixed-Assemblies.md).