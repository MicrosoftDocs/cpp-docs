---
title: "MSBuild Error MSB3190 | Microsoft Docs"
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
  - "GenerateManifest.InvalidRequestedExecutionLevel"
helpviewer_keywords: 
  - "MSB3190"
ms.assetid: 45b45688-9345-45db-adc8-3e200f1c17eb
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3190
**MSB3190: ClickOnce does not support the requested execution level '\<level>'.**  
  
 This error is generated on computers running Windows Vista when the application's embedded User Account Control (UAC) manifest specifies that a ClickOnce application run with administrative credentials. ClickOnce and Registration Free COM require an external manifest that specifies that the application run as the current user.  
  
 ClickOnce does not accept the execution levels `requireAdministrator` or `highestAvailable`. If you specify one of these levels, you will receive this error. ClickOnce requires `asInvoker`, but it will also accept no `<requestedExecutionLevel>` node, which specifies file/registry virtualization (meaning that no manifest is generated; this is done for backward compatibility).  
  
> [!NOTE]
>  Your computer might show different names or locations for some of the Visual Studio user interface elements in the following instructions. The Visual Studio edition that you have and the settings that you use determine these elements. For more information, see [Customizing Development Settings in Visual Studio](http://msdn.microsoft.com/en-us/22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
### To correct this error  
  
-   Generate an external UAC manifest (app.manifest) that specifies that the application run as the current user (`asInvoker`).  
  
     In Visual C# projects, go to the **Application** page of the Project Designer and click **Properties\app.manifest** in the **Manifest** list. For more information, see [Application Page, Project Designer (C#)](http://msdn.microsoft.com/library/f13701a8-4e2e-4474-9d60-bb43decbe0c1).  
  
     In Visual Basic projects, go to the **Application** page of the Project Designer and click the **View UAC Settings** button. This opens app.manifest for editing. Edit the following tag in the manifest to read as follows:  
  
    ```  
    <requestedExecutionLevel level="asInvoker" />  
    ```  
  
     For more information, see [Application Page, Project Designer (Visual Basic)](http://msdn.microsoft.com/library/8cec9fea-cd92-47ff-88dd-7c928f0b4a74).  
  
-   For more information about how to generate a UAC manifest and specify the execution level, see [ClickOnce Deployment on Windows Vista](http://msdn.microsoft.com/library/b21a0ebc-0ff6-4f49-8993-7d1ad3f8cac2).  
  
## See Also  
 [Application Page, Project Designer (C#)](http://msdn.microsoft.com/library/f13701a8-4e2e-4474-9d60-bb43decbe0c1)   
 [Application Page, Project Designer (Visual Basic)](http://msdn.microsoft.com/library/8cec9fea-cd92-47ff-88dd-7c928f0b4a74)   
 [ClickOnce Deployment on Windows Vista](http://msdn.microsoft.com/library/b21a0ebc-0ff6-4f49-8993-7d1ad3f8cac2)