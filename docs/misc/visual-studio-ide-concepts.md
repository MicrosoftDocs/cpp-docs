---
title: "Visual Studio IDE Concepts | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Visual Studio integration, architecture"
  - "Visual Studio SDK, integration architecture"
ms.assetid: 4b1c5114-d9da-46c4-b155-62683cec0635
caps.latest.revision: 12
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
# Visual Studio IDE Concepts
The topics in this section describe the overall structure of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] and the integrated development environment (IDE). Other topics explain VSPackages and services, and how to create and use them.  
  
## In This Section  
 [Visual Studio Extensibility Architecture](../misc/visual-studio-extensibility-architecture.md)  
 Discusses the extensibility architecture, whose command-handling and routing scheme gives users an open framework to make easy access to both existing and installed command sets possible.  
  
 [Implementation Strategies](../misc/implementation-strategies.md)  
 Describes the extension of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] by using add-ins or VSPackages, or a combination of both.  
  
 [The Experimental Instance](/visual-studio/extensibility/the-experimental-instance)  
 Explains the experimental build of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. When you develop an application that might change [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], the [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] provides the experimental build for you to use instead of the released build.  
  
 [Visual Studio Shell](/visual-studio/extensibility/internals/visual-studio-shell)  
 Describes the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] IDE, which is the primary agent of integration in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
 [Visual Studio SDK and Automation](../Topic/Visual%20Studio%20SDK%20and%20Automation.md)  
 Discusses using automation, VSPackages, or a combination to create [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] extensibility applications.  
  
 [Visual Studio SDK and Managed Code](../misc/visual-studio-sdk-and-managed-code.md)  
 Compares the different ways to write a VSPackage in managed code.  
  
## Related Sections  
 [VSSDK Utilities](/visual-studio/extensibility/internals/vssdk-utilities)  
 Describes [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] and its IDE, and introduces strategies and techniques for extending the IDE.