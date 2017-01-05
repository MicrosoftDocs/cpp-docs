---
title: "How to: Customize the Quick Access Toolbar | Microsoft Docs"
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
  - "quick access toolbar, customization"
ms.assetid: 2554099b-0c89-4605-9249-31bf9cbcefe0
caps.latest.revision: 11
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
# How to: Customize the Quick Access Toolbar
The Quick Access Toolbar (QAT) is a customizable toolbar that contains a set of commands that are either displayed next to the Application button or under the category tabs. The following illustration shows a typical Quick Access Toolbar.  
  
 ![MFC Ribbon Quick Access Toolbar](../mfc/media/quick_access_toolbar.png "quick_access_toolbar")  
  
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

