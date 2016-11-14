---
title: "Declaring a Variable Based on Your New Control Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.classes.control.variable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "variables, control classes"
  - "control classes, variables"
  - "classes [C++], declaring variables based on"
ms.assetid: 5722dc38-c0eb-40bd-93da-67a808140d03
caps.latest.revision: 9
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
# Declaring a Variable Based on Your New Control Class
Once you have created an MFC control class, you can declare a variable based on it. To provide a context for the new variable, you must open the dialog editor and edit the dialog box in which you want to use your reusable control. Also, the dialog box must already have a class associated with it. For information on using the dialog editor, see [Dialog Editor](../../mfc/dialog-editor.md).  
  
### To declare a variable based on your reusable class  
  
1.  While editing the dialog box, drag a control of the same type as the base class of your new control from the Controls toolbar onto the dialog box.  
  
2.  Place the mouse pointer over the dropped control.  
  
3.  While pressing the CTRL key, double-click the control.  
  
     The [Add Member Variable](../../ide/add-member-variable-wizard.md) dialog box appears.  
  
4.  In the **Access** box, select the correct access for your control.  
  
5.  Click the **Control variable** check box.  
  
6.  In the **Variable name** box, type a name.  
  
7.  Under **Category**, click **Control**.  
  
8.  In the **Control ID** list, pick the control that you added. The **Variable type** list should display the correct variable type, and the **Control type** box should display the correct control type.  
  
9. In the **Comment** box, add any comment you want to appear in your code.  
  
10. Click **OK**.  
  
## See Also  
 [Mapping Messages to Functions](../../mfc/reference/mapping-messages-to-functions.md)   
 [Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Adding a Class](../../ide/adding-a-class-visual-cpp.md)   
 [Adding a Member Function](../../ide/adding-a-member-function-visual-cpp.md)   
 [Adding a Member Variable](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Overriding a Virtual Function](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [MFC Message Handler](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Navigating the Class Structure](../../ide/navigating-the-class-structure-visual-cpp.md)
