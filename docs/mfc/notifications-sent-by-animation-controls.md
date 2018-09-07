---
title: "Notifications Sent by Animation Controls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["notifications [MFC], animation controls", "CAnimateCtrl class [MFC], notifications", "controls [MFC], animation", "animation controls [MFC], notifications"]
ms.assetid: 584f5824-446b-4a1a-85f7-ef61842c8186
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Notifications Sent by Animation Controls
An animation control ([CAnimateCtrl](../mfc/reference/canimatectrl-class.md)) sends two different types of notification messages. The notifications are sent in the form of [WM_COMMAND](/windows/desktop/menurc/wm-command) messages.  
  
 The [ACN_START](/windows/desktop/Controls/acn-start) message is sent when the animation control has started playing a clip. The [ACN_STOP](/windows/desktop/Controls/acn-stop) message is sent when the animation control has finished or stopped playing a clip.  
  
## See Also  
 [Using CAnimateCtrl](../mfc/using-canimatectrl.md)   
 [Controls](../mfc/controls-mfc.md)

