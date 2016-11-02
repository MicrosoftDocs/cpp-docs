---
title: "Troubleshooting Exceptions: System.Deployment.Application.InvalidDeploymentException"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "InvalidDeploymentException class"
ms.assetid: 4361e053-8eaf-44e3-b8ac-95516d8d1832
caps.latest.revision: 22
author: "mikeblome"
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
# Troubleshooting Exceptions: System.Deployment.Application.InvalidDeploymentException
An <xref:System.Deployment.Application.InvalidDeploymentException> exception is thrown when the application or its application and deployment manifests are not valid.  
  
## Associated Tips  
 **Make sure the manifests for this application are valid.**  
 An application manifest is an XML file that describes and identifies the shared and private side-by-side assemblies that an application should bind to at run time. These should be the same assembly versions that were used to test the application. Application manifests may also describe metadata for files that are private to the application.  
  
 **Use the ClickOnce feature to deploy the application.**  
 Use ClickOnce to publish Windows applications to a Web server or network file share for simplified installation. For more information, see [ClickOnce Security and Deployment](../Topic/ClickOnce%20Security%20and%20Deployment.md).  
  
## See Also  
 <xref:System.Deployment.Application.InvalidDeploymentException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Troubleshooting ClickOnce Deployments](../Topic/Troubleshooting%20ClickOnce%20Deployments.md)   
 [ClickOnce Deployment for Windows Forms](../Topic/ClickOnce%20Deployment%20for%20Windows%20Forms.md)