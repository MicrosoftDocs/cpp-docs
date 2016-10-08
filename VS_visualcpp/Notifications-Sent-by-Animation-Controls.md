---
title: "Notifications Sent by Animation Controls"
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
ms.assetid: 584f5824-446b-4a1a-85f7-ef61842c8186
caps.latest.revision: 8
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
# Notifications Sent by Animation Controls
An animation control ([CAnimateCtrl](../VS_visualcpp/CAnimateCtrl-Class.md)) sends two different types of notification messages. The notifications are sent in the form of [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messages.  
  
 The [ACN_START](http://msdn.microsoft.com/library/windows/desktop/bb761891) message is sent when the animation control has started playing a clip. The [ACN_STOP](http://msdn.microsoft.com/library/windows/desktop/bb761893) message is sent when the animation control has finished or stopped playing a clip.  
  
## See Also  
 [Using CAnimateCtrl](../VS_visualcpp/Using-CAnimateCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)