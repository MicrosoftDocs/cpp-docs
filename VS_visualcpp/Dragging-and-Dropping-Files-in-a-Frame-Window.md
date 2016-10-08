---
title: "Dragging and Dropping Files in a Frame Window"
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
ms.topic: article
ms.assetid: 85560fe9-121b-4105-bd7b-216b966e19fa
caps.latest.revision: 9
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
# Dragging and Dropping Files in a Frame Window
The frame window manages a relationship with File Explorer or File Manager.  
  
 By adding a few initializing calls in your override of the `CWinApp` member function `InitInstance`, as described in [CWinApp: The Application Class](../VS_visualcpp/CWinApp--The-Application-Class.md), you can have your frame window indirectly open files dragged from File Explorer or File Manager and dropped in the frame window. See [File Manager Drag and Drop](../VS_visualcpp/Special-CWinApp-Services.md).  
  
## See Also  
 [Using Frame Windows](../VS_visualcpp/Using-Frame-Windows.md)