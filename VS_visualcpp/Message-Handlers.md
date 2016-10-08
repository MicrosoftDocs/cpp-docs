---
title: "Message Handlers"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 51bc4e76-dbe3-4cc2-b026-3199d56b2fa9
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Message Handlers
In MFC, a dedicated *handler* function processes each separate message. Message-handler functions are member functions of a class. This documentation uses the terms *message-handler member function*, *message-handler function*, *message handler*, and *handler* interchangeably. Some kinds of message handlers are also called "command handlers."  
  
 Writing message handlers accounts for a large proportion of your work in writing a framework application. This article family describes how the message-processing mechanism works.  
  
 What does the handler for a message do? It does whatever you want done in response to that message. You can create the handlers by using the Properties window of the class, and then fill in the handler's code using the source code editor.  
  
 You can use all of the facilities of Microsoft Visual C++ and MFC to write your handlers. For a list of all classes, see [Class Library Overview](../VS_visualcpp/Class-Library-Overview.md) in the *MFC Reference*.  
  
## See Also  
 [Messages and Commands in the Framework](../VS_visualcpp/Messages-and-Commands-in-the-Framework.md)