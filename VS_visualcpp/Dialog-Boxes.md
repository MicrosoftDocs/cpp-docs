---
title: "Dialog Boxes"
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
ms.assetid: e4feea1a-8360-4ccb-9b84-507f1ccd9ef3
caps.latest.revision: 12
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
# Dialog Boxes
Applications for Windows frequently communicate with the user through dialog boxes. Class [CDialog](../VS_visualcpp/CDialog-Class.md) provides an interface for managing dialog boxes, the Visual C++ dialog editor makes it easy to design dialog boxes and create their dialog-template resources, and Code wizards simplify the process of initializing and validating the controls in a dialog box and of gathering the values entered by the user.  
  
 Dialog boxes contain controls, including:  
  
-   Windows common controls such as edit boxes, pushbuttons, list boxes, combo boxes, tree controls, list controls, and progress indicators.  
  
-   ActiveX controls.  
  
-   Owner-drawn controls: controls that you are responsible for drawing in the dialog box.  
  
 Most dialog boxes are modal, which require the user to close the dialog box before using any other part of the program. But it is possible to create modeless dialog boxes, which let users work with other windows while the dialog box is open. MFC supports both kinds of dialog box with class `CDialog`. The controls are arranged and managed using a dialog-template resource, created with the [dialog editor](../VS_visualcpp/Dialog-Editor.md).  
  
 [Property sheets](../VS_visualcpp/Property-Sheets--MFC-.md), also known as tab dialog boxes, are dialog boxes that contain "pages" of distinct dialog-box controls. Each page has a file folder "tab" at the top. Clicking a tab brings that page to the front of the dialog box.  
  
## What do you want to know more about?  
  
-   [Example: Displaying a Dialog Box via a Menu Command](../VS_visualcpp/Example--Displaying-a-Dialog-Box-via-a-Menu-Command.md)  
  
-   [Dialog-box components in the framework](../VS_visualcpp/Dialog-Box-Components-in-the-Framework.md)  
  
-   [Modal and modeless dialog boxes](../VS_visualcpp/Modal-and-Modeless-Dialog-Boxes.md)  
  
-   [Property sheets and property pages](../VS_visualcpp/Property-Sheets-and-Property-Pages--MFC-.md) in a dialog box  
  
-   [Creating the dialog resource](../VS_visualcpp/Creating-the-Dialog-Resource.md)  
  
-   [Creating a dialog class with Code Wizards](../VS_visualcpp/Creating-a-Dialog-Class-with-Code-Wizards.md)  
  
-   [Life cycle of a dialog box](../VS_visualcpp/Life-Cycle-of-a-Dialog-Box.md)  
  
-   [Dialog data exchange (DDX) and validation (DDV)](../VS_visualcpp/Dialog-Data-Exchange-and-Validation.md)  
  
-   [Type-safe access to controls in a dialog box](../VS_visualcpp/Type-Safe-Access-to-Controls-in-a-Dialog-Box.md)  
  
-   [Mapping Windows messages to your class](../VS_visualcpp/Mapping-Windows-Messages-to-Your-Class.md)  
  
-   [Commonly Overridden Member Functions](../VS_visualcpp/Commonly-Overridden-Member-Functions.md)  
  
-   [Commonly Added Member Functions](../VS_visualcpp/Commonly-Added-Member-Functions.md)  
  
-   [Common dialog classes](../VS_visualcpp/Common-Dialog-Classes.md)  
  
-   [Dialog boxes in OLE](../VS_visualcpp/Dialog-Boxes-in-OLE.md)  
  
-   Create an application whose user interface is a dialog box: see the [CMNCTRL1](../VS_visualcpp/Visual-C---Samples.md) or [CMNCTRL2](../VS_visualcpp/Visual-C---Samples.md) sample programs. The Application Wizard provides this option as well.  
  
-   [Samples](../VS_visualcpp/Dialog-Sample-List.md)  
  
## See Also  
 [User Interface Elements](../VS_visualcpp/User-Interface-Elements--MFC-.md)