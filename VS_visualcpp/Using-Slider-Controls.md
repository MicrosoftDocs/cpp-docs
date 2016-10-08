---
title: "Using Slider Controls"
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
ms.assetid: 2b1a8ac8-2b17-41e1-aa24-83c1fd737049
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
# Using Slider Controls
Typical usage of an slider control follows the pattern below:  
  
-   The control is created. If the control is specified in a dialog box template, creation is automatic when the dialog box is created. (You should have a [CSliderCtrl](../VS_visualcpp/CSliderCtrl-Class.md) member in your dialog class that corresponds to the slider control.) Alternatively, you can use the [Create](../Topic/CSliderCtrl::Create.md) member function to create the control as a child window of any window.  
  
-   Call the various Set member functions to set values for the control. Changes that you can make include setting the minimum and maximum positions for the slider, drawing tick marks, setting a selection range, and repositioning the slider. For controls in a dialog box, a good time to do this is in the dialog's [OnInitDialog](../Topic/CDialog::OnInitDialog.md) function.  
  
-   As the user interacts with the control, it will send various notification messages. You can extract the slider value from the control by calling the [GetPos](../Topic/CSliderCtrl::GetPos.md) member function.  
  
-   When you're done with the control, you need to make sure it's properly destroyed. If the slider control is in a dialog box, it and the `CSliderCtrl` object will be destroyed automatically. If not, you need to ensure that both the control and the `CSliderCtrl` object are properly destroyed.  
  
## See Also  
 [Using CSliderCtrl](../VS_visualcpp/Using-CSliderCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)