---
title: "Mapping Windows Messages to Your Class"
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
ms.assetid: a4c6fd1f-1d33-47c9-baa0-001755746d6d
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
# Mapping Windows Messages to Your Class
If you need your dialog box to handle Windows messages, override the appropriate handler functions. To do so, use the Properties window to [map the messages](../VS_visualcpp/Mapping-Messages-to-Functions.md) to the dialog class. This writes a message-map entry for each message and adds the message-handler member functions to the class. Use the Visual C++ source code editor to write code in the message handlers.  
  
 You can also override member functions of [CDialog](../VS_visualcpp/CDialog-Class.md) and its base classes, especially [CWnd](../VS_visualcpp/CWnd-Class.md).  
  
## What do you want to know more about?  
  
-   [Message handling and mapping](../VS_visualcpp/Message-Handling-and-Mapping.md)  
  
-   [Commonly overridden member functions](../VS_visualcpp/Commonly-Overridden-Member-Functions.md)  
  
-   [Commonly added member functions](../VS_visualcpp/Commonly-Added-Member-Functions.md)  
  
## See Also  
 [Dialog Boxes](../VS_visualcpp/Dialog-Boxes.md)   
 [Life Cycle of a Dialog Box](../VS_visualcpp/Life-Cycle-of-a-Dialog-Box.md)