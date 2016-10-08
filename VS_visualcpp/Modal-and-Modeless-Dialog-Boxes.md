---
title: "Modal and Modeless Dialog Boxes"
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
ms.assetid: e83df336-5994-4b8f-8233-7942f997315b
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
# Modal and Modeless Dialog Boxes
You can use class [CDialog](../VS_visualcpp/CDialog-Class.md) to manage two kinds of dialog boxes:  
  
-   *Modal dialog boxes*, which require the user to respond before continuing the program  
  
-   *Modeless dialog boxes*, which stay on the screen and are available for use at any time but permit other user activities  
  
 The resource editing and procedures for creating a dialog template are the same for modal and modeless dialog boxes.  
  
 Creating a dialog box for your program requires the following steps:  
  
1.  Use the [dialog editor](../VS_visualcpp/Dialog-Editor.md) to design the dialog box and create its dialog-template resource.  
  
2.  Create a dialog class.  
  
3.  Connect the [dialog resource's controls to message handlers](../VS_visualcpp/Adding-Event-Handlers-for-Dialog-Box-Controls.md) in the dialog class.  
  
4.  Add data members associated with the dialog box's controls and to specify [dialog data exchange](../VS_visualcpp/Dialog-Data-Exchange.md) and [dialog data validations](../VS_visualcpp/Dialog-Data-Validation.md) for the controls.  
  
## See Also  
 [Dialog Boxes](../VS_visualcpp/Dialog-Boxes.md)   
 [Life Cycle of a Dialog Box](../VS_visualcpp/Life-Cycle-of-a-Dialog-Box.md)