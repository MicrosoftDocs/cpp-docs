---
title: "Run Member Function"
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
ms.assetid: 24ab7597-2354-495b-9a20-2c8ccc7385b3
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
# Run Member Function
A framework application spends most of its time in the [Run](../Topic/CWinApp::Run.md) member function of class [CWinApp](../VS_visualcpp/CWinApp-Class.md). After initialization, `WinMain` calls **Run** to process the message loop.  
  
 **Run** cycles through a message loop, checking the message queue for available messages. If a message is available, **Run** dispatches it for action. If no messages are available, which is often true, **Run** calls `OnIdle` to do any idle-time processing that you or the framework may need done. If there are no messages and no idle processing to do, the application waits until something happens. When the application terminates, **Run** calls `ExitInstance`. The figure in [OnIdle Member Function](../VS_visualcpp/OnIdle-Member-Function.md) shows the sequence of actions in the message loop.  
  
 Message dispatching depends on the kind of message. For more information, see [Messages and Commands in the Framework](../VS_visualcpp/Messages-and-Commands-in-the-Framework.md).  
  
## See Also  
 [CWinApp: The Application Class](../VS_visualcpp/CWinApp--The-Application-Class.md)