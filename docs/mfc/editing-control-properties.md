---
title: "Editing Control Properties"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "controls [C++], undoing changes"
  - "controls [C++], editing properties"
  - "dialog box controls, editing properties"
ms.assetid: 9bdae21d-6dec-4344-a197-2ca4fc46d040
caps.latest.revision: 8
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
# Editing Control Properties
### To edit the properties of a control or controls  
  
1.  In the dialog box, select the control you want to modify.  
  
    > [!NOTE]
    >  If you select multiple controls, only the properties common to the selected controls can be edited.  
  
2.  In the [Properties window](../Topic/Properties%20Window.md), change the properties of your control.  
  
    > [!NOTE]
    >  When you set the **Bitmap** property for a button, radio button, or check box control equal to **True**, the style BS_BITMAP is implemented for your control. For more information, see [Button Styles](../mfcref/button-styles.md). For an example of associating a bitmap with a control, see [CButton::SetBitmap](../Topic/CButton::SetBitmap.md). Bitmaps will not appear on your control while you are in the Dialog resource editor.  
  
### To undo changes to the properties of a control  
  
1.  Make sure the control has focus in the Dialog editor.  
  
2.  Choose **Undo** from the **Edit** menu (if focus is not on the control, the **Undo** command will be unavailable).  
  
 For information on adding resources to managed projects, see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requirements  
  
 Win32  
  
## See Also  
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)