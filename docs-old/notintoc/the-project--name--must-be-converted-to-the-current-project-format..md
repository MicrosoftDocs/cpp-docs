---
title: "The project &lt;name&gt; must be converted to the current project format."
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
  - "VC.Project.Conversion7"
  - "vs.UpgradeWarningDlg"
ms.assetid: e27d58e5-c270-468b-bb98-3163d40900bc
caps.latest.revision: 9
ms.author: "mblome"
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
# The project &lt;name&gt; must be converted to the current project format.
You have opened a project that was created in a previous version of Visual Studio. Project files must be converted to current formats before a project can be opened and edited in the version of Visual Studio installed on your computer. You can choose whether or not to convert this project now. The format conversions cannot be undone.  
  
> [!CAUTION]
>  If the project is stored under source code control and you intend to check the converted project back in, determine first whether any other solutions share it. Do not check in a newly converted project that is still being used in other, unconverted solutions. This will break the dependencies within those solutions, and keep them from opening or building properly.  
  
 You might wish to make back-up copies of your project files before converting them.  
  
> [!NOTE]
>  As certain project types are converted, for example Visual C++ projects, the former project files are marked with the file extension ".old" and saved in the project directory.  
  
 Read-only projects are not converted. These projects can only be converted by users who have permission to edit them. Before a project can be used within a converted solution, its project files must be converted to current formats. After a project has been converted, you can no longer edit, build, or run any solution that includes the project in previous versions of Visual Studio.  
  
### To respond to this message  
  
1.  Select **Yes** or **No**.  
  
    -   **Yes** - If the project is editable, it is converted to the format used by the version of Visual Studio installed on your computer. If the converted project is stored under source code control, it is checked out to your local drive and opened for editing.  
  
    -   **No** - The project is not converted, is not checked out from source code control, and does not open.  
  
 If you are part of a development team, everyone who is working on a project should have the same version of Visual Studio installed on their local machines. To ensure that your project remains accessible, communicate regularly with your team.  
  
## See Also  
 [Project Dependencies Dialog Box](assetId:///d66e48c3-3722-40dd-99b4-53d93cac128e)   
 [Compiling and Building](../Topic/Compiling%20and%20Building%20in%20Visual%20Studio.md)