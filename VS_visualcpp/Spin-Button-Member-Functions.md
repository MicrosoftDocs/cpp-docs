---
title: "Spin Button Member Functions"
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
ms.assetid: a08a26fd-b803-4cbe-a509-395fa357d057
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
# Spin Button Member Functions
There are several member functions available for the spin control ([CSpinButtonCtrl](../VS_visualcpp/CSpinButtonCtrl-Class.md)). Use these functions to change the following attributes of the spin button.  
  
-   **Acceleration** You can adjust the rate at which the position changes when the user holds down the arrow button. To work with acceleration, use the [SetAccel](../Topic/CSpinButtonCtrl::SetAccel.md) and [GetAccel](../Topic/CSpinButtonCtrl::GetAccel.md) member functions.  
  
-   **Base** You can change the base (either 10 or 16) used to display the position in the caption of the buddy window. To work with the base, use the [GetBase](../Topic/CSpinButtonCtrl::GetBase.md) and [SetBase](../Topic/CSpinButtonCtrl::SetBase.md) member functions.  
  
-   **Buddy Window** You can dynamically set the buddy window. To query or change which control is the buddy window, use the [GetBuddy](../Topic/CSpinButtonCtrl::GetBuddy.md) and [SetBuddy](../Topic/CSpinButtonCtrl::SetBuddy.md) member functions.  
  
-   **Position** You can query and change the position. To work directly with position, use the [GetPos](../Topic/CSpinButtonCtrl::GetPos.md) and [SetPos](../Topic/CSpinButtonCtrl::SetPos.md) member functions. Since the caption of the buddy control may have changed (for example, in the case that the buddy is an edit control), `GetPos` retrieves the current caption and adjusts the position accordingly.  
  
-   **Range** You can change the maximum and minimum positions for the spin button. By default, the maximum is set to 0, and the minimum is set to 100. Since the default maximum is less than the default minimum, the actions of the arrow buttons is counter-intuitive. Typically, you will set the range using the [SetRange](../Topic/CSpinButtonCtrl::SetRange.md) member function. To query the range use [GetRange](../Topic/CSpinButtonCtrl::GetRange.md).  
  
## See Also  
 [Using CSpinButtonCtrl](../VS_visualcpp/Using-CSpinButtonCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)