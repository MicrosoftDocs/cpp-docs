---
title: "&lt;param&gt; (Visual C++)"
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
ms.assetid: 66c1a1c3-4f98-4bcf-8c7d-9a40308982fb
caps.latest.revision: 10
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
# &lt;param&gt; (Visual C++)
The <param\> tag should be used in the comment for a method declaration to describe one of the parameters for the method.  
  
## Syntax  
  
```  
<param name='name'>description</param>  
```  
  
#### Parameters  
 `name`  
 The name of a method parameter.  Enclose the name in single or double quotation marks.  The compiler issues a warning if it does not find `name`.  
  
 `description`  
 A description for the parameter.  
  
## Remarks  
 The text for the <param\> tag will be displayed in IntelliSense, the [Object Browser](assetId:///f89acfc5-1152-413d-9f56-3dc16e3f0470), and in the Code Comment Web Report.  
  
 Compile with [/doc](../VS_visualcpp/-doc--Process-Documentation-Comments---C-C---.md) to process documentation comments to a file.  
  
## Example  
  
```  
// xml_param_tag.cpp  
// compile with: /clr /doc /LD  
// post-build command: xdcmake xml_param_tag.dll  
/// Text for class MyClass.  
public ref class MyClass {  
   /// <param name="Int1">Used to indicate status.</param>  
   void MyMethod(int Int1) {  
   }  
};  
```  
  
## See Also  
 [XML Documentation](../VS_visualcpp/XML-Documentation--Visual-C---.md)