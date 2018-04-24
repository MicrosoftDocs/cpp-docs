---
title: "Troubleshooting Exceptions: System.Deployment.Application.InvalidDeploymentException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
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
---
# Troubleshooting Exceptions: System.Deployment.Application.InvalidDeploymentException
An <xref:System.Deployment.Application.InvalidDeploymentException> exception is thrown when the application or its application and deployment manifests are not valid.  
  
## Associated Tips  
 **Make sure the manifests for this application are valid.**  
 An application manifest is an XML file that describes and identifies the shared and private side-by-side assemblies that an application should bind to at run time. These should be the same assembly versions that were used to test the application. Application manifests may also describe metadata for files that are private to the application.  
  
 **Use the ClickOnce feature to deploy the application.**  
 Use ClickOnce to publish Windows applications to a Web server or network file share for simplified installation. For more information, see [ClickOnce Security and Deployment](http://msdn.microsoft.com/library/abab6d34-c3c2-45c1-a8b6-43c7d3131e7a).  
  
## See Also  
 <xref:System.Deployment.Application.InvalidDeploymentException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)   
 [Troubleshooting ClickOnce Deployments](http://msdn.microsoft.com/library/58e90012-f68b-4852-8ae9-58e361cbcc32)   
 [ClickOnce Deployment for Windows Forms](http://msdn.microsoft.com/library/1451fce9-1965-4a03-b4d3-831b5fe4ad66)