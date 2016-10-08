---
title: "Commonly Overridden Member Functions"
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
ms.assetid: 78eb566c-e361-4c86-8db5-c7e2791b249a
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
# Commonly Overridden Member Functions
The following table lists the most likely member functions to override in your `CDialog`-derived class.  
  
### Commonly Overridden Member Functions of Class CDialog  
  
|Member function|Message it responds to|Purpose of the override|  
|---------------------|----------------------------|-----------------------------|  
|`OnInitDialog`|**WM_INITDIALOG**|Initialize the dialog box's controls.|  
|`OnOK`|**BN_CLICKED** for button **IDOK**|Respond when the user clicks the OK button.|  
|`OnCancel`|**BN_CLICKED** for button **IDCANCEL**|Respond when the user clicks the Cancel button.|  
  
 `OnInitDialog`, `OnOK`, and `OnCancel` are virtual functions. To override them, you declare an overriding function in your derived dialog class using the [Properties window](../Topic/Properties%20Window.md).  
  
 `OnInitDialog` is called just before the dialog box is displayed. You must call the default `OnInitDialog` handler from your override — usually as the first action in the handler. By default, `OnInitDialog` returns **TRUE** to indicate that the focus should be set to the first control in the dialog box.  
  
 `OnOK` is typically overridden for modeless but not modal dialog boxes. If you override this handler for a modal dialog box, call the base class version from your override — to ensure that `EndDialog` is called — or call `EndDialog` yourself.  
  
 `OnCancel` is usually overridden for modeless dialog boxes.  
  
 For more information about these member functions, see class [CDialog](../VS_visualcpp/CDialog-Class.md) in the *MFC Reference* and the discussion on [Life Cycle of a Dialog Box](../VS_visualcpp/Life-Cycle-of-a-Dialog-Box.md).  
  
## See Also  
 [Dialog Boxes](../VS_visualcpp/Dialog-Boxes.md)   
 [Commonly Added Member Functions](../VS_visualcpp/Commonly-Added-Member-Functions.md)