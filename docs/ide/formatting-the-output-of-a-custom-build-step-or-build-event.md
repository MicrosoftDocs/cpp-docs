---
title: "Formatting the Output of a Custom Build Step or Build Event | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "builds [C++], build events"
  - "custom build steps [C++], output format"
  - "events [C++], build"
  - "build events [C++], output format"
  - "build steps [C++], output format"
  - "builds [C++], custom build steps"
ms.assetid: 92ad3e38-24d7-4b89-90e6-5a16f5f998da
caps.latest.revision: 8
author: "corob-msft"
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
# Formatting the Output of a Custom Build Step or Build Event
If the output of a custom build step or build event is formatted correctly, users get the following benefits:  
  
-   Warnings and errors are counted in the **Output** window.  
  
-   Output appears in the **Task List** window.  
  
-   Clicking on the output in the **Output** window displays the appropriate topic.  
  
-   F1 operations are enabled in the **Task List** window or **Output** window.  
  
 The format of the output should be:  
  
 {*filename* (*line#* [, *column#*]) &#124; *toolname*} **:**  
  
 [*any text*] {**error** &#124; **warning**} *code####***:***localizable string*  
  
 [ *any text* ]  
  
 Where:  
  
-   {*a* &#124; *b*} is a choice of either *a* or *b*.  
  
-   [`ccc`] is an optional string or parameter.  
  
 For example:  
  
 C:\\*sourcefile.cpp*(134) : error C2143: syntax error : missing ';' before '}'  
  
 LINK : fatal error LNK1104: cannot open file '*somelib.lib*'  
  
## See Also  
 [Understanding Custom Build Steps and Build Events](../ide/understanding-custom-build-steps-and-build-events.md)