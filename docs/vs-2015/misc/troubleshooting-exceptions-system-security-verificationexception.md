---
title: "Troubleshooting Exceptions: System.Security.VerificationException | Microsoft Docs"
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
  - "EHVerification"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "VerificationException class"
ms.assetid: b7b1a4c2-6769-46bd-8912-ebbfe226bfb3
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Security.VerificationException
A <xref:System.Security.VerificationException> exception is thrown when the security policy requires code to be type-safe and the verification process is unable to verify that the code is type-safe.  
  
## Associated Tips  
 Make sure your application is not loading two conflicting versions of a class library.  
 As part of the verification process, MSIL (Microsoft intermediate language) is checked for type safety to ensure that objects are safely isolated from each other and are therefore safe from accidental or malicious corruption. For more information, see [Type Safety and Security](http://msdn.microsoft.com/en-us/095cd1f6-d8db-4c0e-bce2-83ccb34dd5dc).  
  
## See Also  
 <xref:System.Security.VerificationException>   
 <xref:System.Security.Permissions.SecurityPermissionAttribute.SkipVerification%2A>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)