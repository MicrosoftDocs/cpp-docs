---
title: "Redistributing Web Client Applications"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Web applications [C++], redistributing"
  - "deploying applications [C++], Web applications"
  - "Internet applications [C++], redistributing"
  - "application deployment [C++], Web applications"
ms.assetid: fe05988b-dee8-4a46-b381-016b5103a6bf
caps.latest.revision: 10
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Redistributing Web Client Applications
If your application uses the MFC classes implementing the WebBrowser control (for example, `CHtmlView` or `CHtmlEditView`), Microsoft Internet Explorer 4.0 or later must at least be minimally installed on the target computer.  
  
 Installing the latest version of Internet Explorer also ensures that the target computer has the latest common control files.  
  
 Information about installing minimal Internet Explorer components is available in the following Knowledge Base article:  
  
-   Q185375, HOWTO: Create a Single EXE Install of Internet Explorer ([http://support.microsoft.com/support/kb/articles/q185/3/75.asp](http://support.microsoft.com/support/kb/articles/q185/3/75.asp))  
  
 You can find Knowledge Base articles in the MSDN Library or at [http://support.microsoft.com](http://support.microsoft.com).  
  
## See Also  
 [Deploying Desktop Applications](../ide/deploying-native-desktop-applications--visual-c---.md)