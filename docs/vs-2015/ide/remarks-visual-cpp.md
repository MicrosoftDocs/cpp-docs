---
title: "&lt;remarks&gt; (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "remarks"
  - "<remarks>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<remarks> C++ XML tag"
  - "remarks C++ XML tag"
ms.assetid: c820083b-3192-40ab-9ec8-1472c55b4247
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &lt;remarks&gt; (Visual C++)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [&lt;remarks&gt; (Visual C++)](https://docs.microsoft.com/cpp/ide/remarks-visual-cpp).  
  
  
The \<remarks> tag is used to add information about a type, supplementing the information specified with [\<summary>](../ide/summary-visual-cpp.md). This information is displayed in the [Object Browser](http://msdn.microsoft.com/en-us/f89acfc5-1152-413d-9f56-3dc16e3f0470) and in the Code Comment Web Report.  
  
## Syntax  
  
```  
<remarks>description</remarks>  
```  
  
#### Parameters  
 `description`  
 A description of the member.  
  
## Remarks  
 Compile with [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.  
  
## Example  
  
```  
// xml_remarks_tag.cpp  
// compile with: /LD /clr /doc  
// post-build command: xdcmake xml_remarks_tag.dll  
  
using namespace System;  
  
/// <summary>  
/// You may have some primary information about this class.  
/// </summary>  
/// <remarks>  
/// You may have some additional information about this class.  
/// </remarks>  
public ref class MyClass {};  
```  
  
## See Also  
 [XML Documentation](../ide/xml-documentation-visual-cpp.md)

