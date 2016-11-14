---
title: "Using CSpinButtonCtrl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CSpinButtonCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "up-down controls, spin button control"
  - "up-down controls"
  - "spin button control"
  - "CSpinButtonCtrl class, using"
ms.assetid: a91db36b-e11e-42ef-8e89-51915cc486d2
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Using CSpinButtonCtrl
The *spin button* control (also known as an *up-down* control) provides a pair of arrows that a user can click to adjust a value. This value is known as the *current position*. The position stays within the range of the spin button. When the user clicks the up arrow, the position moves toward the maximum; and when the user clicks the down arrow, the position moves toward the minimum.  
  
 The spin button control is represented in MFC by the [CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md) class.  
  
> [!NOTE]
>  By default, the range for the spin button has the maximum set to zero (0) and the minimum set to 100. Because the maximum value is less than the minimum value, clicking the up arrow decreases the position and clicking the down arrow increases it. Use [CSpinButtonCtrl::SetRange](../mfc/reference/cspinbuttonctrl-class.md#cspinbuttonctrl__setrange) to adjust these values.  
  
 Typically, the current position is displayed in a companion control. The companion control is known as the *buddy window*. For an illustration of a spin button control, see [About Up-Down Controls](http://msdn.microsoft.com/library/windows/desktop/bb759889) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 To create a spin control and an edit control buddy window, in Visual Studio, first drag an edit control to the dialog box or window, and then drag a spin control. Select the spin control and set its **Auto Buddy** and **Set Buddy Integer** properties to **True**. Also set the **Alignment** property; **Right Align** is most typical. With these settings, the edit control is set as the buddy window because it directly precedes the edit control in the tab order. The edit control displays integers and the spin control is embedded in the right side of the edit control. Optionally, you can set the valid range of the spin control by using the [CSpinButtonCtrl::SetRange](../mfc/reference/cspinbuttonctrl-class.md#cspinbuttonctrl__setrange) method. No event handlers are required to communicate between the spin control and buddy window because they exchange data directly. If you use a spin control for some other purpose, for example, to page through a sequence of windows or dialog boxes, then add a handler for the `UDN_DELTAPOS` message and perform your custom action there.  
  
## What do you want to know more about  
  
-   [Spin Button Styles](../mfc/spin-button-styles.md)  
  
-   [Spin Button Member Functions](../mfc/spin-button-member-functions.md)  
  
## See Also  
 [Controls](../mfc/controls-mfc.md)

