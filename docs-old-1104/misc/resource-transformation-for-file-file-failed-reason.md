---
title: "Resource transformation for file &#39;file&#39; failed. &lt;reason&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.resx_generator_failed"
ms.assetid: 6b537d38-1da9-4f5f-9ae9-1f26e260c2ac
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
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
# Resource transformation for file &#39;file&#39; failed. &lt;reason&gt;
The resources processor used to transform .resx files into binary .resources files failed. The specific reason (if any) is appended to the end of the string. The build process will fail if this error occurs.  
  
 This error is most likely caused by a bad .resx file. For example, the file may have been opened and modified in a text editor.  
  
 If you receive a \<reason> of "Item has already been added. Key in dictionary: 'NewControlName.\<Property Name>' Key being added: 'ControlName.\<Property Name>'," read the following steps to reproduce and correct the error.  
  
### To reproduce this error  
  
1.  Create a new Windows application. By default, Form1 is created.  
  
2.  On the **View** menu, click **Properties**.  
  
3.  In the **Properties** window, set the **Localizable** property to `True`.  
  
4.  In the **Properties** windows, click **Language**, and then set the value to "Japanese".  
  
5.  From the toolbox, drag a button onto the form.  
  
6.  Change the name of the button from "Button1" to "BUTTON1".  
  
7.  On the **Build** menu, click **Build Solution**.  
  
### To correct this error  
  
1.  On the **File** menu, point to **Open**, and then click **File**.  
  
2.  Locate the Form1.resx file, and then click **OK**. Form1.resx is displayed.  
  
3.  Locate the original key values, and then manually delete them from the data list. For example, you have a button named "Button1". You modify the name of this button to "BUTTON1". The key values for both "Button1" and "BUTTON1" are in Form1.resx. Remove all the entries of "Button1", and then rebuild the project.  
  
## See Also  
 [Resources in .Resx File Format](http://msdn.microsoft.com/en-us/0c476133-87e4-47e8-b0ef-4b88f4ef3dc5)   
 [File Types and File Extensions in Visual Basic and Visual C#](http://msdn.microsoft.com/en-us/f793852c-da06-4d52-a826-65f635844772)