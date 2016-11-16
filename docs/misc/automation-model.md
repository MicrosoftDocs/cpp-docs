---
title: "Automation Model | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "automation [Visual Studio SDK], automation model"
ms.assetid: 48ddc192-96ff-46dc-a1fe-df4eb5c62c84
caps.latest.revision: 16
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
# Automation Model
The automation model provides an alternative to VSPackages for extending [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. Known in earlier versions of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] as the extensibility model, the automation model is a programming interface that gives you access to the underlying routines that drive the integrated development environment (IDE), and lets you customize, adjust, and automate it.  
  
## VSPackages and Automation  
 The [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] SDK documentation focuses on VSPackages, which offer more development potential than the automation model. For example, you can write code against the objects in the automation model to customize a language, such as [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)]. However, you cannot add a new language to the IDE by using the automation model. To add a new language to the environment, you must develop a VSPackage.  
  
 Together, the automation model and the VSPackage model compose a two-pronged approach to extensibility in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. Extensibility is the capacity to enhance and extend the functionality of the IDE. Automation refers to user-created code and tools that automate tasks in the existing environment and programmatically drive the IDE. VSPackages, on the other hand, let you add new functionality to the IDE. A VSPackage is a co-creatable object; that is, it has a class factory and makes itself available to the IDE by implementing the interface <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage>.  
  
 Add-ins and wizards use the automation model to control or extend the functionality of the IDE by using its automation interfaces. Typically, Microsoft includes many add-ins with [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. You can use add-ins to integrate new commands on the toolbars and menus, to add tool windows, or to automate certain tasks that you perform regularly in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
 As a VSPackage developer, you should contribute to the automation model. For example, if you add a new language to [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] by using the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] SDK, your language should provide a robust code model that extends the pre-existing one. For more information, see [Contributing to the Automation Model](/visualstudio/extensibility/internals/contributing-to-the-automation-model).  
  
## See Also  
 [VSPackages](/visualstudio/extensibility/internals/vspackages)   
 [Contributing to the Automation Model](/visualstudio/extensibility/internals/contributing-to-the-automation-model)