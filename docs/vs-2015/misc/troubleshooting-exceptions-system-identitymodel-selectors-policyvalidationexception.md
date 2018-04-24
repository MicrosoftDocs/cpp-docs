---
title: "Troubleshooting Exceptions: System.IdentityModel.Selectors.PolicyValidationException | Microsoft Docs"
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
  - "PolicyValidationException exception"
  - "System.IdentityModel.Selectors.PolicyValidationException exception"
ms.assetid: 510c7698-a12b-4bcb-a9d8-87c704b62ffa
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.IdentityModel.Selectors.PolicyValidationException
A <xref:System.IdentityModel.Selectors.PolicyValidationException> exception is thrown when the policy supplied by the recipient cannot be validated. For more information about policy requirements, see [A Technical Reference for the Information Card Profile V1.0](http://go.microsoft.com/fwlink/?LinkID=102401).  
  
 Any invalid policy content can cause this failure. Common problems with policy content include the following:  
  
-   Invalid key type  
  
-   Invalid key size  
  
-   Invalid XML  
  
-   No claims specified in the policy (at least one non-optional claim must be specified)  
  
## See Also  
 <xref:System.IdentityModel.Selectors.PolicyValidationException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)