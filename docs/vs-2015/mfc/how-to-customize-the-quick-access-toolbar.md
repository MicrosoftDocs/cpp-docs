---
title: "How to: Customize the Quick Access Toolbar | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "quick access toolbar, customization"
ms.assetid: 2554099b-0c89-4605-9249-31bf9cbcefe0
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Customize the Quick Access Toolbar
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Customize the Quick Access Toolbar](https://docs.microsoft.com/cpp/mfc/how-to-customize-the-quick-access-toolbar).  
  
  
The Quick Access Toolbar (QAT) is a customizable toolbar that contains a set of commands that are either displayed next to the Application button or under the category tabs. The following illustration shows a typical Quick Access Toolbar.  
  
 ![MFC Ribbon Quick Access Toolbar](../mfc/media/quick-access-toolbar.png "Quick_Access_Toolbar")  
  
 To customize the Quick Access Toolbar, open it in the **Properties** window, modify its commands, and then preview the ribbon control.  
  
### To open the Quick Access Toolbar in the Properties window  
  
1.  In Visual Studio, on the **View** menu, click **Resource View**.  
  
2.  In **Resource View**, double-click the ribbon resource to display it on the design surface.  
  
3.  On design surface, right-click the Quick Access Toolbar menu and then click **Properties**.  
  
## Quick Access Toolbar Properties  
 The following table defines the properties of the Quick Access Toolbar.  
  
|Property|Definition|  
|--------------|----------------|  
|QAT Position|Specifies the position of the Quick Access Toolbar when the application starts. The position can be either **Above** or **Below** the ribbon control.|  
|QAT Items|Specifies the commands that are available for the Quick Access Toolbar.|  
  
#### To add or remove commands on the Quick Access Toolbar  
  
1.  In the **Properties** window, click **QAT Items**, and then click the ellipsis button **(...)**.  
  
2.  In the **QAT Items Editor** dialog box, use the **Add** and **Remove** buttons to modify the list of commands on the Quick Access Toolbar.  
  
3.  If you want a command to appear on both the Quick Access Toolbar and the Quick Access Toolbar menu, select the box next to the command. If you want the command to appear only on the menu, clear the box.  
  
## Previewing the Ribbon  
 Quick Access Toolbar commands do not appear on the design surface. To view them, you must either preview the ribbon or run the application.  
  
#### To preview the ribbon control  
  
-   On the **Ribbon Editor Toolbar**, click **Test Ribbon**.  
  
## See Also  
 [Ribbon Designer (MFC)](../mfc/ribbon-designer-mfc.md)





