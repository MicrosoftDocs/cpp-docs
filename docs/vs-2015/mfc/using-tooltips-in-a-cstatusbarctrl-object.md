---
title: "Using Tooltips in a CStatusBarCtrl Object | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CStatusBarCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tool tips [C++], using in status bars"
  - "status bars, tool tips"
  - "CStatusBarCtrl class, tool tips"
ms.assetid: a77597a7-43ef-4b8f-87bc-a8ea1dc63dc3
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Using Tooltips in a CStatusBarCtrl Object
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Using Tooltips in a CStatusBarCtrl Object](https://docs.microsoft.com/cpp/mfc/using-tooltips-in-a-cstatusbarctrl-object).  
  
  
To enable tooltips for a status bar control, create the `CStatusBarCtrl` object with the **SBT_TOOLTIPS** style.  
  
> [!NOTE]
>  If you are using a `CStatusBar` object to implement your status bar, use the `CStatusBar::CreateEx` function. It allows you to specify additional styles for the embedded **CStatusBarCtrl** object.  
  
 Once the `CStatusBarCtrl` object has been successfully created, use [CStatusBarCtrl::SetTipText](../mfc/reference/cstatusbarctrl-class.md#cstatusbarctrl__settiptext) and [CStatusBarCtrl::GetTipText](../mfc/reference/cstatusbarctrl-class.md#cstatusbarctrl__gettiptext) to set and retrieve the tip text for a specific pane.  
  
 Once the tool tip has been set, it is displayed only if the part has an icon and no text, or if all of the text cannot be displayed inside the part. Tool tips are not supported in simple mode.  
  
## See Also  
 [Using CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controls](../mfc/controls-mfc.md)





