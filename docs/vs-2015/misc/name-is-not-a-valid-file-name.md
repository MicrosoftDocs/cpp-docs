---
title: "&lt;name&gt; is not a valid file name. | Microsoft Docs"
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
  - "VS_E_INVALIDFILENAME"
  - "VS.Message.0x00006A72"
ms.assetid: c5969671-3b64-4854-acb6-328e8a30863f
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
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
 [New File Command](http://msdn.microsoft.com/library/767868d6-a525-425b-a43b-2198f636ab6b)   
 [Visual Studio Commands](http://msdn.microsoft.com/library/76ffa394-ee89-4629-aba9-1a62b72e6cc1)