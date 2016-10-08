---
title: "Using Common Controls in a Dialog Box"
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
ms.assetid: 17713caf-09f8-484a-bf54-5f48bf09cce9
caps.latest.revision: 9
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
# Using Common Controls in a Dialog Box
The Windows common controls can be used in [dialog boxes](../VS_visualcpp/Dialog-Boxes.md), form views, record views, and any other window based on a dialog template. The following procedure, with minor changes, will work for forms as well.  
  
## Procedures  
  
#### To use a common control in a dialog box  
  
1.  Place the control on the dialog template [using the dialog editor](../VS_visualcpp/Using-the-Dialog-Editor-to-Add-Controls.md).  
  
2.  Add to the dialog class a member variable that represents the control. In the **Add Member Variable** dialog box, check **Control variable** and ensure that **Control** is selected for the **Category**.  
  
3.  If this common control is providing input to the program, declare additional member variable(s) in the dialog class to handle those input values.  
  
    > [!NOTE]
    >  You can add these member variables using the context menu in Class View (see [Adding a Member Variable](../VS_visualcpp/Adding-a-Member-Variable---Visual-C---.md)).  
  
4.  In [OnInitDialog](../Topic/CDialog::OnInitDialog.md) for your dialog class, set the initial conditions for the common control. Using the member variable created in the previous step, use the member functions to set initial value and other settings. See the following descriptions of the controls for details on settings.  
  
     You can also use [dialog data exchange](../VS_visualcpp/Dialog-Data-Exchange-and-Validation.md) (DDX) to initialize controls in a dialog box.  
  
5.  In handlers for controls on the dialog box, use the member variable to manipulate the control. See the following descriptions of the controls for details on methods.  
  
    > [!NOTE]
    >  The member variable will exist only as long as the dialog box itself exists. You will not be able to query the control for input values after the dialog box has been closed. To work with input values from a common control, override `OnOK` in your dialog class. In your override, query the control for input values and store those values in member variables of the dialog class.  
  
    > [!NOTE]
    >  You can also use dialog data exchange to set or retrieve values from the controls in a dialog box.  
  
## Remarks  
 The addition of some common controls to a dialog box will cause the dialog box to no longer function. Refer to [Adding Controls to a Dialog Causes the Dialog to No Longer Function](../VS_visualcpp/Adding-Controls-to-a-Dialog-Causes-the-Dialog-to-No-Longer-Function.md) for more information on handling this situation.  
  
## What do you want to do?  
  
-   [Add controls to a dialog box by hand instead of with the dialog editor](../VS_visualcpp/Adding-Controls-By-Hand.md)  
  
-   [Derive my control from one of the standard Windows common controls](../VS_visualcpp/Deriving-Controls-from-a-Standard-Control.md)  
  
-   [Use a common control as a child window](../VS_visualcpp/Using-a-Common-Control-as-a-Child-Window.md)  
  
-   [Receive notification messages from a control](../VS_visualcpp/Receiving-Notification-from-Common-Controls.md)  
  
-   [Use dialog data exchange (DDX)](../VS_visualcpp/Dialog-Data-Exchange-and-Validation.md)  
  
## See Also  
 [Making and Using Controls](../VS_visualcpp/Making-and-Using-Controls.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)