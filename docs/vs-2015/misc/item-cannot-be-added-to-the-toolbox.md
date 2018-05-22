---
title: "Item cannot be added to the Toolbox. | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VB_E_NOTSUPPORTEDDATA"
  - "vs.message.0x800A0065"
ms.assetid: 69fa5e73-bbc6-462c-95ca-bf2ee32d43ff
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Item cannot be added to the Toolbox.
This error generally occurs when you attempt to add an item for which the Toolbox cannot display a shortcut icon.  
  
 Items which the Toolbox can display include:  
  
-   Controls and .NET Framework components installed on your local machine.  
  
 **Note** Controls and components for [!INCLUDE[vstecasp](../includes/vstecasp-md.md)] Web forms must have an [AspNetHostingPermission.Level Property](https://msdn.microsoft.com/en-us/library/system.web.aspnethostingpermission.level.aspx) of "Unlimited" to be displayed in the Toolbox.  
  
-   Selected text dragged or pasted from a Visual Studio editor, such as code snippets.  
  
 Items which the Toolbox cannot display include:  
  
-   Excel workbook files.  
  
-   .NET Framework assemblies installed on shared network servers.  
  
    > [!NOTE]
    >  An assembly added from a UNC path is not fully trusted, so it is not granted sufficient permissions to be displayed in the Toolbox.  
  
### To correct this error  
  
1.  Use the **Customize Toolbox** dialog box to add a control or component that is installed on your local machine to the active Toolbox tab.  
  
     \- or -  
  
2.  Drag or paste selected text from a Visual Studio editor onto the Toolbox.  
  
## See Also  
 [Choose Toolbox Items Dialog Box (Visual Studio)](http://msdn.microsoft.com/en-us/bd07835f-18a8-433e-bccc-7141f65263bb)   
 [How to: Manipulate Toolbox Tabs](http://msdn.microsoft.com/en-us/21285050-cadd-455a-b1f5-a2289a89c4db)   
 [Toolbox](http://msdn.microsoft.com/library/b754dad3-1f32-464f-8b9f-065e17e0bc22)