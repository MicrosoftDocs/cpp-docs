---
title: "Creating Modeless Dialog Boxes"
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
ms.assetid: 70d78c7f-3d40-477b-9f78-0f33c359f88b
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
# Creating Modeless Dialog Boxes
For a modeless dialog box, you must provide your own public constructor in your dialog class. To create a modeless dialog box, call your public constructor and then call the dialog object's [Create](../Topic/CDialog::Create.md) member function to load the dialog resource. You can call **Create** either during or after the constructor call. If the dialog resource has the property **WS_VISIBLE**, the dialog box appears immediately. If not, you must call its [ShowWindow](../Topic/CWnd::ShowWindow.md) member function.  
  
## See Also  
 [Life Cycle of a Dialog Box](../VS_visualcpp/Life-Cycle-of-a-Dialog-Box.md)