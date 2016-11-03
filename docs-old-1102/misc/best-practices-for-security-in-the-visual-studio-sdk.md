---
title: "Best Practices for Security in the Visual Studio SDK"
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
  - "security [Visual Studio SDK]"
  - "User Account Control [Visual Studio SDK]"
  - "Visual Studio SDK, security"
  - "UAC (User Account Control) [Visual Studio SDK]"
  - "security best practices, Visual Studio SDK"
  - "Windows Vista, User Account Control [Visual Studio SDK]"
ms.assetid: 56c8a113-0c53-4969-a009-a2ab58d855c3
caps.latest.revision: 30
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
# Best Practices for Security in the Visual Studio SDK
You need to understand security for VSPackage extensions so that you can create the best products possible.  
  
 A secure product helps protect the following:  
  
-   Confidentiality, integrity, and availability of a customer's information.  
  
-   Integrity and availability of the processing resources under the control of the system owner or administrator.  
  
## Security Vulnerability  
 A security vulnerability is a weakness in a product that makes it impossible to prevent an attacker's malicious activities, even when the product is used correctly. Here are some examples:  
  
-   Obtaining permissions on a computer that are higher than those of the user.  
  
-   Taking over the operation of a user's computer.  
  
-   Compromising data on a user's computer.  
  
> [!IMPORTANT]
>  Never assume that your application will be run only in specific environments. Your application might be used in settings that you did not expect, especially when the application becomes popular. Assume instead that your code will run in hostile environments, and design, write, and test your code accordingly.  
  
 Products and systems designed and built with security as a prime feature are more robust than those written with security as an afterthought. Secure products are also more immune to media criticism, more attractive to users, and less expensive to and support and upgrade.  
  
## Dangerous APIs  
 Calls to some functions can produce unwanted security vulnerabilities if they are used incorrectly, banning their use does not necessarily produce secure code. Nevertheless, some software projects have obtained measurable gains in security by banning functions that are difficult to use safely, as one of many secure-development practices. For more information, see Appendix A of the Microsoft Press book, "Writing Secure Code" by Michael Howard and David LeBlanc.  
  
 Most security issues result from trusting input without adequately verifying it. Make sure that you trace data as it comes into your code and question the implications of operations on that data. You can write secure code by using most functions if the data inputs are well-formed and checked for trustworthiness.  
  
## User Account Control (UAC) Issues  
 The User Account Control (UAC) feature has security implications that you should understand. It reduces the exposure of the operating system and applications to malicious attacks.  
  
1.  For more information about UAC on [!INCLUDE[win7](../build/includes/win7_md.md)], see [What is User Account Control?](http://go.microsoft.com/fwlink/?linkid=159927).  
  
2.  For more information about UAC on [!INCLUDE[win8](../build/reference/includes/win8_md.md)], see [What are User Account Control settings?](http://windows.microsoft.com/windows-8/what-are-uac-settings).  
  
 Before the advent of UAC, developers typically ran [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] under administrator permissions even when they were not required. You should do your development and testing of your extension as a normal user, so you can make sure it does not require elevated rights unnecessarily.  
  
 Note that UAC also affects deployment. Installation packages must be correctly authored to support UAC. An incorrectly authored package typically causes "access denied" errors because the installer tries to use normal user rights to perform a task that requires elevated rights.  
  
## See Also  
 [Best Practices for Security in VSPackages](../Topic/Best%20Practices%20for%20Security%20in%20VSPackages.md)   
 [Resources for Creating Secure Applications](http://msdn.microsoft.com/en-us/0ebf5f69-76f2-498a-a2df-83cf3443e132)   
 [Key Security Concepts](../Topic/Key%20Security%20Concepts.md)