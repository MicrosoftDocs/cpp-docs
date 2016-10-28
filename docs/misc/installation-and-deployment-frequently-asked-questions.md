---
title: "Installation and Deployment Frequently Asked Questions"
ms.custom: ""
ms.date: "10/20/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "deployment [Visual Studio SDK]"
  - "LCID [Visual Studio SDK]"
  - "installation [Visual Studio SDK]"
ms.assetid: 4ac62bf3-e335-4899-9074-89bcd004dc65
caps.latest.revision: 10
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
# Installation and Deployment Frequently Asked Questions
This topic addresses questions from the [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] user community about installation and deployment. The topic will continue to be updated with new content from the community.  
  
## Contents  
  
-   [Determining the LCID of a Visual Studio Installation Programmatically](#DeterminingtheLCIDofaVisualStudioInstallationProgrammatically)  
  
##  <a name="DeterminingtheLCIDofaVisualStudioInstallationProgrammatically"></a> Determining the LCID of a Visual Studio Installation Programmatically  
 **Q:** Is there a way to programmatically determine the LCID of a [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] installation?  
  
 **A:**  <xref:Microsoft.VisualStudio.Shell.Interop.IUIHostLocale2.GetUILocale*> or <xref:Microsoft.VisualStudio.Shell.Interop.IUIHostLocale.GetUILocale*>will return the LCID of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] currently in use.  
  
## See Also  
 [Releasing a Product](../misc/releasing-a-visual-studio-integration-product.md)