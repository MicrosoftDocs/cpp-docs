---
title: "Troubleshooting Exceptions: System.Net.HttpListenerException"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "HttpListenerException class"
ms.assetid: 1595c5b6-4710-4076-9bfc-9f70f52e679a
caps.latest.revision: 11
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
# Troubleshooting Exceptions: System.Net.HttpListenerException
An <xref:System.Net.HttpListenerException> is thrown when an error occurs processing a Hypertext Transfer Protocol request.  
  
## Associated Tips  
 Make sure you are not attempting to register a URI prefix that is already registered.  
 If the URI prefix is already registered, this exception will occur.  
  
 Make sure your HTTP request is valid.  
 This exception is thrown by the <xref:System.Net.HttpListener> class and its associated classes when an error occurs during the initialization of the <xref:System.Net.HttpListener> or while creating or sending a response to an HTTP request.  
  
 If you are using the `HttpListenerPrefixCollection.Add` method, make sure the `uriPrefix` has not been already added.  
 This exception will be thrown if another <xref:System.Net.HttpListener> has already added the prefix `uriPrefix`.  
  
## See Also  
 <xref:System.Net.HttpListenerException>   
 <xref:System.Net.HttpListener>   
 <xref:System.Net.HttpListenerPrefixCollection>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)