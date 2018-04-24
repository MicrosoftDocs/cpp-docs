---
title: "Notifications Sent by Animation Controls | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "notifications, animation controls"
  - "CAnimateCtrl class, notifications"
  - "controls [MFC], animation"
  - "animation controls [C++], notifications"
ms.assetid: 584f5824-446b-4a1a-85f7-ef61842c8186
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Notifications Sent by Animation Controls
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Notifications Sent by Animation Controls](https://docs.microsoft.com/cpp/mfc/notifications-sent-by-animation-controls).  
  
  
An animation control ([CAnimateCtrl](../mfc/reference/canimatectrl-class.md)) sends two different types of notification messages. The notifications are sent in the form of [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messages.  
  
 The [ACN_START](http://msdn.microsoft.com/library/windows/desktop/bb761891) message is sent when the animation control has started playing a clip. The [ACN_STOP](http://msdn.microsoft.com/library/windows/desktop/bb761893) message is sent when the animation control has finished or stopped playing a clip.  
  
## See Also  
 [Using CAnimateCtrl](../mfc/using-canimatectrl.md)   
 [Controls](../mfc/controls-mfc.md)





