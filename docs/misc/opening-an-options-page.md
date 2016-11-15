---
title: "Opening an Options Page | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "open an options page"
  - "tools options"
  - "options page"
ms.assetid: 6f24cbfa-288a-4a57-831b-bc82587de255
caps.latest.revision: 9
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Opening an Options Page
You can display an options page programmatically so that users of your package can configure it during setup. To change settings after the package is installed, a user can still access the options page by using the **Options** dialog box.  
  
### To display a custom options page  
  
1.  Create an options page. For more information, see [Creating Options Pages](/visualstudio/extensibility/internals/creating-options-pages).  
  
2.  Get the <xref:System.Type> of the options page by applying the `typeof` keyword to the name of the class that defines the options page.  
  
3.  Call the <xref:Microsoft.VisualStudio.Shell.Package.ShowOptionPage%2A> method by using the <xref:System.Type> of the options page as a parameter.  
  
     The following example displays an options page named **HelloWorldOptions**.  
  
     [!code-cs[UI_UserSettings_ToolsOptionPages#5](../misc/codesnippet/CSharp/opening-an-options-page_1.cs)]
     [!code-vb[UI_UserSettings_ToolsOptionPages#5](../misc/codesnippet/VisualBasic/opening-an-options-page_1.vb)]  
  
### To display an options page that is defined by Visual Studio  
  
1.  In the registry subkey HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\9.0\ToolsOptionsPages\\, find the node for the options page that you want to display and then copy its GUID, which is the value of the Page key.  
  
2.  Create a <xref:System.ComponentModel.Design.CommandID> instance that has the constants <xref:Microsoft.VisualStudio.VSConstants.GUID_VSStandardCommandSet97> and <xref:Microsoft.VisualStudio.VSConstants.VSStd97CmdID> as parameters.  
  
     This specifies the **Options** dialog box.  
  
3.  Call the <xref:System.ComponentModel.Design.MenuCommandService.GlobalInvoke%2A> method by using the <xref:System.ComponentModel.Design.CommandID> instance and the GUID string as parameters.  
  
     The following example displays the **General** tab of the **Text Editor** options page.  
  
     [!code-cs[UI_UserSettings_ToolsOptionPages#6](../misc/codesnippet/CSharp/opening-an-options-page_2.cs)]
     [!code-vb[UI_UserSettings_ToolsOptionPages#6](../misc/codesnippet/VisualBasic/opening-an-options-page_2.vb)]