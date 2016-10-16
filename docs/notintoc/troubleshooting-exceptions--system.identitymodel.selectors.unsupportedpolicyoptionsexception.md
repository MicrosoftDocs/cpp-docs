---
title: "Troubleshooting Exceptions: System.IdentityModel.Selectors.UnsupportedPolicyOptionsException"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
helpviewer_keywords: 
  - "System.IdentityModel.Selectors.UnsupportedPolicyOptionsException exception"
  - "UnsupportedPolicyOptionsException exception"
ms.assetid: 1151127d-81a1-4d87-8462-924ab9d1ee01
caps.latest.revision: 8
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
# Troubleshooting Exceptions: System.IdentityModel.Selectors.UnsupportedPolicyOptionsException
An \<xref:System.IdentityModel.Selectors.UnsupportedPolicyOptionsException> exception indicates that a policy was provided to the system that includes options that are not supported. Restrictions that can cause these failures include the following:  
  
 A recipient has requested a token from the local security token service by specifying http://schemas.xmlsoap.org/ws/2005/05/identity/issuer/self as the issuer of the token. However, one of the requirements specified in the policy is not supported by the CardSpace local security token service. For more information, see [A Technical Reference for the Information Card Profile V1.0](http://go.microsoft.com/fwlink/?LinkId=102401). Examples of unsupported options include the following:  
  
-   A claim requested by the recipient is not in the list of supported claims specified in the [Supported Claim Types](http://go.microsoft.com/fwlink/?LinkId=102402) section of "A Technical Reference for the Information Card Profile V1.0."  
  
-   The token type is something other than SAML 1.0 or 1.1.  
  
-   For non-SSL sites, a key is not Symmetric.  
  
-   The KeyWrapAlgorithm differs from the default algorithm.  
  
-   An unsupported element is specified in the policy. The elements that are supported are the following:  
  
    -   EncryptionAlgorithm  
  
    -   CanonicalizationAlgorithm  
  
    -   SignWith  
  
    -   TokenType  
  
    -   ClaimsElement  
  
    -   KeyType  
  
    -   KeySize  
  
    -   EncryptWith  
  
    -   RequestType  
  
    -   SecondaryParameters  
  
    -   KeyWrapAlgorithm  
  
-   wst:RequestType is not of type Issue.  
  
-   For Asymmetric key types, a key size is not 2048.  
  
## See Also  
 \<xref:System.IdentityModel.Selectors.UnsupportedPolicyOptionsException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)