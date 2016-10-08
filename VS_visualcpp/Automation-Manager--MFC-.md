---
title: "Automation Manager (MFC)"
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
ms.assetid: 6bf3429e-1946-41c5-86d0-ad7f5b8585b8
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
# Automation Manager (MFC)
AUTMGR32.EXE should be copied to the Windows system directory of each machine that is intending to provide Remote Automation objects. For Windows 95 and Windows 98, this directory is typically C:\WINDOWS\SYSTEM. For Windows NT and Windows 2000, it is typically C:\WINNT\SYSTEM32.  
  
 If you want to enable callbacks from the server to the client, this executable file should also be copied to the system directory of each client machine.  
  
 When the Automation Manager is running, it displays a small window on the server machine that contains brief status information. If you want to hide it, refer to article Q138067 in the Microsoft Knowledge Base.  
  
## See Also  
 [Remote Automation Connection Manager](../VS_visualcpp/Remote-Automation-Connection-Manager.md)   
 [Remote Automation User Components](../VS_visualcpp/Remote-Automation-User-Components.md)   
 [Remote Automation Installation](../VS_visualcpp/Remote-Automation-Installation.md)