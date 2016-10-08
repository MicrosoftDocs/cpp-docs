---
title: "&lt;remarks&gt; (Visual C++)"
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
ms.assetid: c820083b-3192-40ab-9ec8-1472c55b4247
caps.latest.revision: 9
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
# &lt;remarks&gt; (Visual C++)
The <remarks\> tag is used to add information about a type, supplementing the information specified with [<summary\>](../VS_visualcpp/-summary---Visual-C---.md). This information is displayed in the [Object Browser](assetId:///f89acfc5-1152-413d-9f56-3dc16e3f0470) and in the Code Comment Web Report.  
  
## Syntax  
  
```  
<remarks>description</remarks>  
```  
  
#### Parameters  
 `description`  
 A description of the member.  
  
## Remarks  
 Compile with [/doc](../VS_visualcpp/-doc--Process-Documentation-Comments---C-C---.md) to process documentation comments to a file.  
  
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
 [XML Documentation](../VS_visualcpp/XML-Documentation--Visual-C---.md)