---
title: "Dialog Boxes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modeless dialog boxes, MFC dialog boxes"
  - "MFC, dialog boxes"
  - "modal dialog boxes, MFC dialog boxes"
  - "CDialog class, MFC dialog boxes"
  - "MFC dialog boxes"
ms.assetid: e4feea1a-8360-4ccb-9b84-507f1ccd9ef3
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
# Dialog Boxes
Applications for Windows frequently communicate with the user through dialog boxes. Class [CDialog](../mfc/reference/cdialog-class.md) provides an interface for managing dialog boxes, the Visual C++ dialog editor makes it easy to design dialog boxes and create their dialog-template resources, and Code wizards simplify the process of initializing and validating the controls in a dialog box and of gathering the values entered by the user.  
  
 Dialog boxes contain controls, including:  
  
-   Windows common controls such as edit boxes, pushbuttons, list boxes, combo boxes, tree controls, list controls, and progress indicators.  
  
-   ActiveX controls.  
  
-   Owner-drawn controls: controls that you are responsible for drawing in the dialog box.  
  
 Most dialog boxes are modal, which require the user to close the dialog box before using any other part of the program. But it is possible to create modeless dialog boxes, which let users work with other windows while the dialog box is open. MFC supports both kinds of dialog box with class `CDialog`. The controls are arranged and managed using a dialog-template resource, created with the [dialog editor](../mfc/dialog-editor.md).  
  
 [Property sheets](../mfc/property-sheets-mfc.md), also known as tab dialog boxes, are dialog boxes that contain "pages" of distinct dialog-box controls. Each page has a file folder "tab" at the top. Clicking a tab brings that page to the front of the dialog box.  
  
## What do you want to know more about  
  
-   [Example: Displaying a Dialog Box via a Menu Command](../mfc/example-displaying-a-dialog-box-via-a-menu-command.md)  
  
-   [Dialog-box components in the framework](../mfc/dialog-box-components-in-the-framework.md)  
  
-   [Modal and modeless dialog boxes](../mfc/modal-and-modeless-dialog-boxes.md)  
  
-   [Property sheets and property pages](../mfc/property-sheets-and-property-pages-mfc.md) in a dialog box  
  
-   [Creating the dialog resource](../mfc/creating-the-dialog-resource.md)  
  
-   [Creating a dialog class with Code Wizards](../mfc/creating-a-dialog-class-with-code-wizards.md)  
  
-   [Life cycle of a dialog box](../mfc/life-cycle-of-a-dialog-box.md)  
  
-   [Dialog data exchange (DDX) and validation (DDV)](../mfc/dialog-data-exchange-and-validation.md)  
  
-   [Type-safe access to controls in a dialog box](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)  
  
-   [Mapping Windows messages to your class](../mfc/mapping-windows-messages-to-your-class.md)  
  
-   [Commonly Overridden Member Functions](../mfc/commonly-overridden-member-functions.md)  
  
-   [Commonly Added Member Functions](../mfc/commonly-added-member-functions.md)  
  
-   [Common dialog classes](../mfc/common-dialog-classes.md)  
  
-   [Dialog boxes in OLE](../mfc/dialog-boxes-in-ole.md)  
  
-   Create an application whose user interface is a dialog box: see the [CMNCTRL1](../visual-cpp-samples.md) or [CMNCTRL2](../visual-cpp-samples.md) sample programs. The Application Wizard provides this option as well.  
  
-   [Samples](../mfc/dialog-sample-list.md)  
  
## See Also  
 [User Interface Elements](../mfc/user-interface-elements-mfc.md)
