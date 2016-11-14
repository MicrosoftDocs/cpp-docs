---
title: "Implementation Strategies | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "VSPackages, implementation strategies"
ms.assetid: f5512d4e-666d-4934-bd42-9718fd7e4c06
caps.latest.revision: 23
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
# Implementation Strategies
You can extend Visual Studio with automation add-ins, VSPackages, Managed Extensibility Framework (MEF) component parts, or a combination of the three. Generally, add-ins are easier to develop, but are less powerful, than VSPackages or MEF component parts. Add-ins can call extensibility interfaces, and VSPackages and MEF component parts can access the Visual Studio automation model. You can combine several different approaches to create an effective solution.  
  
 VSPackages can be written in unmanaged or managed code. We recommend that you write new VSPackages in managed code by using the managed package framework (MPF). Almost anything that can be written in unmanaged code can be implemented more easily and securely in managed code. However, legacy applications written in unmanaged code will continue to run in Visual Studio.  
  
 Simple extensions can add tool windows or send information to Visual Studio UI elements, such as the status bar or output window. More complex applications can be written as Visual Studio hierarchies, such as the Server Explorer. Still more power can be obtained by implementing a project, editor, or designer. For example, [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] and [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] are themselves implemented as language services.  
  
## Related Sections  
 [Visual Studio SDK and Automation](../Topic/Visual%20Studio%20SDK%20and%20Automation.md)  
 Discusses using automation, VSPackages, or a combination to create Visual Studio extensibility applications.  
  
 [Visual Studio SDK and Managed Code](../misc/visual-studio-sdk-and-managed-code.md)  
 Compares the different ways to write a VSPackage in managed code.  
  
 [Visual Studio IDE Concepts](../misc/visual-studio-ide-concepts.md)  
 Discusses the basics of VSPackages and how to use a service.  
  
 [Extending Other Parts of Visual Studio](/visual-studio/extensibility/extending-other-parts-of-visual-studio)  
 Discusses common UI application elements in Visual Studio, such as the Status and Output windows.  
  
 [Hierarchies in Visual Studio](/visual-studio/extensibility/internals/hierarchies-in-visual-studio)  
 Gives an overview of Visual Studio hierarchies, which appear in the integrated development environment (IDE) as trees of nodes.  
  
 [Projects](/visual-studio/extensibility/internals/projects)  
 Provides an overview of project and solution classes.  
  
 [Editor and Language Service Extensions](/visual-studio/extensibility/editor-and-language-service-extensions)  
 Shows how to extend the code and text editor, and how to create custom editors and designers.  
  
 [Legacy Language Service Extensibility](/visual-studio/extensibility/internals/legacy-language-service-extensibility)  
 Shows how to create language services.  
  
 [Visual Studio SDK Reference](/visual-studio/extensibility/visual-studio-sdk-reference)  
 Reference documentation for the VSSDK.  
  
## See Also  
 [Starting to Develop Visual Studio Extensions](/visual-studio/extensibility/starting-to-develop-visual-studio-extensions)