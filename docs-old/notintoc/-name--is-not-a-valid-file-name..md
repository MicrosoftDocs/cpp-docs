---
title: "&lt;name&gt; is not a valid file name."
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "VS_E_INVALIDFILENAME"
  - "VS.Message.0x00006A72"
ms.assetid: c5969671-3b64-4854-acb6-328e8a30863f
caps.latest.revision: 7
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
# &lt;name&gt; is not a valid file name.
This error occurs when you attempt to create a new file from the Command window, but include unsupported characters in the file name.  
  
 File names cannot contain the following characters:  
  
-   pound (#)  
  
-   percent (%)  
  
-   ampersand (&)  
  
-   asterisk (*)  
  
-   vertical bar (&#124;)  
  
-   backslash (\\)  
  
-   colon (:)  
  
-   double quotation mark (")  
  
-   less than (\<)  
  
-   greater than (>)  
  
-   period (.)  
  
-   question mark (?)  
  
-   forward slash (/)  
  
-   leading or trailing spaces (' ')  
  
-   names reserved for Windows or DOS (nul, aux, con, com1, lpt1, and so on)  
  
### To correct this error  
  
-   Enter the command with a new file name that does not contain the characters listed above.  
  
## See Also  
 [New File Command](../Topic/New%20File%20Command.md)   
 [Visual Studio Commands](../Topic/Visual%20Studio%20Commands.md)