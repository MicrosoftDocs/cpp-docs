---
title: "Implementation Strategies | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
---
# Implementation Strategies
You can extend Visual Studio with automation add-ins, VSPackages, Managed Extensibility Framework (MEF) component parts, or a combination of the three. Generally, add-ins are easier to develop, but are less powerful, than VSPackages or MEF component parts. Add-ins can call extensibility interfaces, and VSPackages and MEF component parts can access the Visual Studio automation model. You can combine several different approaches to create an effective solution.  
  
 VSPackages can be written in unmanaged or managed code. We recommend that you write new VSPackages in managed code by using the managed package framework (MPF). Almost anything that can be written in unmanaged code can be implemented more easily and securely in managed code. However, legacy applications written in unmanaged code will continue to run in Visual Studio.  
  
 Simple extensions can add tool windows or send information to Visual Studio UI elements, such as the status bar or output window. More complex applications can be written as Visual Studio hierarchies, such as the Server Explorer. Still more power can be obtained by implementing a project, editor, or designer. For example, [!INCLUDE[csprcs](../includes/csprcs-md.md)] and [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] are themselves implemented as language services.  
  
## Related Sections  
 [Visual Studio SDK and Automation](http://msdn.microsoft.com/library/918cf97f-53f4-4fb5-8639-88f0b2852846)  
 Discusses using automation, VSPackages, or a combination to create Visual Studio extensibility applications.  
  
 [Visual Studio SDK and Managed Code](../misc/visual-studio-sdk-and-managed-code.md)  
 Compares the different ways to write a VSPackage in managed code.  
  
 [Visual Studio IDE Concepts](../misc/visual-studio-ide-concepts.md)  
 Discusses the basics of VSPackages and how to use a service.  
  
 [Extending Other Parts of Visual Studio](http://msdn.microsoft.com/library/27d2f1e1-2503-4aca-9cfc-707abd07ccf0)  
 Discusses common UI application elements in Visual Studio, such as the Status and Output windows.  
  
 [Hierarchies in Visual Studio](http://msdn.microsoft.com/library/0a029a7c-79fd-4b54-bd63-bd0f21aa8d30)  
 Gives an overview of Visual Studio hierarchies, which appear in the integrated development environment (IDE) as trees of nodes.  
  
 [Projects](http://msdn.microsoft.com/library/237742e4-a638-4d5b-a9b3-6a69d627763c)  
 Provides an overview of project and solution classes.  
  
 [Editor and Language Service Extensions](http://msdn.microsoft.com/library/5653bac9-724f-4948-a820-68ce6aa96365)  
 Shows how to extend the code and text editor, and how to create custom editors and designers.  
  
 [Legacy Language Service Extensibility](http://msdn.microsoft.com/library/2700cd4d-5f68-43fc-b62f-dc80c3f3aa85)  
 Shows how to create language services.  
  
 [Visual Studio SDK Reference](http://msdn.microsoft.com/library/a6930db5-a112-4651-8de3-e520df851f82)  
 Reference documentation for the VSSDK.  
  
## See Also  
 [Starting to Develop Visual Studio Extensions](http://msdn.microsoft.com/library/8fe5e2ab-a424-4173-9d39-dd082c4d58d0)