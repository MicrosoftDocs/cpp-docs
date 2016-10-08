---
title: "Using CSliderCtrl"
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
ms.assetid: 242c7bcd-126e-4b9b-8f76-8082ad06fe73
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
# Using CSliderCtrl
The [CSliderCtrl](../VS_visualcpp/CSliderCtrl-Class.md) class represents a slider control, which is also called a trackbar. A "slider control" is a window that contains a slider and optional tick marks. When the user moves the slider, using either the mouse or the arrow keys, the slider control sends notification messages to indicate the change.  
  
 Slider controls are useful when you want the user to select a discrete value or a set of consecutive values in a range. For example, you might use a slider control to allow the user to set the repeat rate of the keyboard by moving the slider to a given tick mark.  
  
 The slider in a slider control moves in increments that you specify when you create it. For example, if you specify that the slider control should have a range of five, the slider can only occupy six positions: a position at the left side of the slider control and one position for each increment in the range. Typically, each of these positions is identified by a tick mark.  
  
## What do you want to know more about?  
  
-   [Using Slider Controls](../VS_visualcpp/Using-Slider-Controls.md)  
  
-   [Slider Control Styles](../VS_visualcpp/Slider-Control-Styles.md)  
  
-   [Slider Control Member Functions](../VS_visualcpp/Slider-Control-Member-Functions.md)  
  
-   [Slider Notification Messages](../VS_visualcpp/Slider-Notification-Messages.md)  
  
## See Also  
 [Controls](../VS_visualcpp/Controls--MFC-.md)