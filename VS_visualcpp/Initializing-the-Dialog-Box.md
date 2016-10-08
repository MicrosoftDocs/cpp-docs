---
title: "Initializing the Dialog Box"
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
ms.assetid: 968142f5-19f9-4b34-a1d4-8e6412d4379b
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
# Initializing the Dialog Box
After the dialog box and all of its controls are created but just before the dialog box (of either type) appears on the screen, the dialog object's [OnInitDialog](../Topic/CDialog::OnInitDialog.md) member function is called. For a modal dialog box, this occurs during the `DoModal` call. For a modeless dialog box, `OnInitDialog` is called when **Create** is called. You typically override `OnInitDialog` to initialize the dialog box's controls, such as setting the initial text of an edit box. You must call the `OnInitDialog` member function of the base class, `CDialog`, from your `OnInitDialog` override.  
  
 If you want to set your dialog box's background color (and that of all other dialog boxes in your application), see [Setting the Dialog Box's Background Color](../VS_visualcpp/Setting-the-Dialog-Box’s-Background-Color.md).  
  
## See Also  
 [Life Cycle of a Dialog Box](../VS_visualcpp/Life-Cycle-of-a-Dialog-Box.md)