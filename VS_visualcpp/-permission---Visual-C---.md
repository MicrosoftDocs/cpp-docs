---
title: "&lt;permission&gt; (Visual C++)"
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
ms.assetid: 537ee2bc-95bd-48e4-9ce6-3420c3da87f4
caps.latest.revision: 11
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
# &lt;permission&gt; (Visual C++)
The <permission\> tag lets you document the access of a member. <xref:System.Security.PermissionSet?qualifyHint=False> lets you specify access to a member.  
  
## Syntax  
  
```  
<permission cref="member">description</permission>  
```  
  
#### Parameters  
 `member`  
 A reference to a member or field that is available to be called from the current compilation environment. The compiler checks that the given code element exists and translates `member` to the canonical element name in the output XML.  Enclose the name in single or double quotation marks.  
  
 The compiler issues a warning if it does not find `member`.  
  
 For information on how to create a cref reference to a generic type, see [<see\>](../VS_visualcpp/-see---Visual-C---.md).  
  
 `description`  
 A description of the access to the member.  
  
## Remarks  
 Compile with [/doc](../VS_visualcpp/-doc--Process-Documentation-Comments---C-C---.md) to process documentation comments to a file.  
  
 The Visual C++ compiler will attempt to resolve cref references in one pass through the documentation comments.  Therefore, if using the C++ lookup rules, a symbol is not found by the compiler the reference will be marked as unresolved. See [<seealso\>](../VS_visualcpp/-seealso---Visual-C---.md) for more information.  
  
## Example  
  
```  
// xml_permission_tag.cpp  
// compile with: /clr /doc /LD  
// post-build command: xdcmake xml_permission_tag.dll  
using namespace System;  
/// Text for class TestClass.  
public ref class TestClass {  
   /// <permission cref="System::Security::PermissionSet">Everyone can access this method.</permission>  
   void Test() {}  
};  
```  
  
## See Also  
 [XML Documentation](../VS_visualcpp/XML-Documentation--Visual-C---.md)