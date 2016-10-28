---
title: "Item cannot be added to the Toolbox."
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vs.message.VB_E_NOTSUPPORTEDDATA"
  - "vs.message.0x800A0065"
ms.assetid: 69fa5e73-bbc6-462c-95ca-bf2ee32d43ff
caps.latest.revision: 7
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
# Item cannot be added to the Toolbox.
This error generally occurs when you attempt to add an item for which the Toolbox cannot display a shortcut icon.  
  
 Items which the Toolbox can display include:  
  
-   Controls and .NET Framework components installed on your local machine.  
  
 **Note** Controls and components for [!INCLUDE[vstecasp](../notintoc/includes/vstecasp_md.md)] Web forms must have an [AspNetHostingPermission.Level Property](https://msdn.microsoft.com/en-us/library/system.web.aspnethostingpermission.level.aspx) of "Unlimited" to be displayed in the Toolbox.  
  
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
 [Choose Toolbox Items Dialog Box (Visual Studio)](assetId:///bd07835f-18a8-433e-bccc-7141f65263bb)   
 [How to: Manipulate Toolbox Tabs](assetId:///21285050-cadd-455a-b1f5-a2289a89c4db)   
 [Toolbox](../Topic/Toolbox.md)