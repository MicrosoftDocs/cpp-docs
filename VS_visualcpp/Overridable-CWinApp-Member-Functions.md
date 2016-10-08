---
title: "Overridable CWinApp Member Functions"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 07183d5e-734b-45d9-a8b6-9dde4adac0b4
caps.latest.revision: 7
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
# Overridable CWinApp Member Functions
[CWinApp](../VS_visualcpp/CWinApp-Class.md) provides several key overridable member functions (`CWinApp` overrides these members from class [CWinThread](../VS_visualcpp/CWinThread-Class.md), from which `CWinApp` derives):  
  
-   [InitInstance](../VS_visualcpp/InitInstance-Member-Function.md)  
  
-   [Run](../VS_visualcpp/Run-Member-Function.md)  
  
-   [ExitInstance](../VS_visualcpp/ExitInstance-Member-Function.md)  
  
-   [OnIdle](../VS_visualcpp/OnIdle-Member-Function.md)  
  
 The only `CWinApp` member function that you must override is `InitInstance`.  
  
## See Also  
 [CWinApp: The Application Class](../VS_visualcpp/CWinApp--The-Application-Class.md)