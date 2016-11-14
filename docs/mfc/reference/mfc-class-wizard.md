---
title: "MFC Class Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.wizards.classwizard"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "wizards (MFC)"
  - "MFC Class Wizard"
ms.assetid: 8b0dd867-5d07-4214-99be-2a1c1995e6d9
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
# MFC Class Wizard
Lets you add messages and message handlers to classes in your project. You can also start other wizards or add a class to your project.  
  
 To open the **MFC Class Wizard**, on the **Project** menu, click **Class Wizard**. To open the wizard with a keyboard shortcut, type CTRL+SHIFT+X.  
  
## UIElement List  
 **Project**  
 The name of a project in your solution.  
  
 You can select other projects in your solution from the drop-down list box.  
  
 **Class name**  
 The name of a class in your project.  
  
 When you select a class in the **Class name** list, data from the class populates the controls in the **MFC Class Wizard**. When you change the value of a control, data in the selected class is affected.  
  
 **Add Class**  
 Lets you add a class from one of several sources.  
  
 Depending on your selection, the **MFC Add Class Wizard**, **Add Class From Typelib Wizard**, **Add Class From ActiveX Control Wizard**, or **MFC ODBC Consumer Wizard** is started.  
  
 **Base class**  
 The base class of the class that is displayed in **Class name**.  
  
 **Class declaration**  
 The class in which the **Class name** class is declared.  
  
 The **Class declaration** box is displayed only if the name in it differs from the name in **Class implementation**.  
  
 **Resource**  
 The ID of the resource in **Class name**, if any. Otherwise, the **Resource** box is empty.  
  
 **Class implementation**  
 The name of the file that contains the implementation of the class in **Class name**.  
  
 You can select a different implementation file by clicking the arrow. The following table lists the available options.  
  
|Option|Description|  
|------------|-----------------|  
|**Open File**|Exits the class wizard and opens the current class implementation file.|  
|**Open Containing Folder**|Opens the folder that contains the current class implementation file.|  
|**Copy Full Path to Clipboard**|Copies the path of the current implementation file to the Clipboard.|  
  
 **Commands**  
 Lets you add, delete, edit, or search for a command and its message handler.  
  
 To add a handler, click **Add Handler**, or double-click an item in the **Object IDs** list or **Messages** list. The resulting function name, ID, and message are displayed in the **Member functions** list.  
  
 To delete a handler, select an item in the **Member functions** list and then click **Delete Handler**.  
  
 To modify a handler, double-click the corresponding item in the **Member functions** list. Or, select an item in the list box and then click **Edit Code**.  
  
 **Messages**  
 Lets you add, delete, edit, or search for a message and its message handler.  
  
 To add a handler, click **Add Handler**, or double-click an item in the **Messages** list.  
  
 To add a custom message, click **Add Custom Message** or press the Enter key, and then specify values in the **Add Custom Message** dialog box. In that dialog box, you can also select **Registered Message** to handle a window message that is guaranteed to be unique throughout the operating system.  
  
 **Virtual Functions**  
 Lets you add, delete, edit, or search for a virtual function, or an overridden virtual function.  
  
 **Member Variables**  
 Lets you add, delete, edit, or search for a member variable.  
  
 **Methods**  
 Lets you add, delete, or search for a method, and also go to the definition or declaration of a method.  
  
 To add a method, click **Add Method**, and then specify values in the **Add Method** dialog box.  
  
 To delete a method, select an item in the **Methods** list and then click **Delete Method**.  
  
 To display a declaration, select an item in the **Methods** list and then click **Go to Declaration.**  
  
 To display a definition, double-click an item in the **Methods** list. Or, select an item in the **Methods** list and then click the **Go to Definition** button.  
  
## See Also  
 [Adding a Class](../../ide/adding-a-class-visual-cpp.md)
