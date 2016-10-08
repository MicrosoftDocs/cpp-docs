---
title: "&lt;summary&gt; (Visual C++)"
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
ms.assetid: cdeeefbb-1339-45d6-9002-10042a9a2726
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
# &lt;summary&gt; (Visual C++)
The <summary\> tag should be used to describe a type or a type member. Use [<remarks\>](../VS_visualcpp/-remarks---Visual-C---.md) to add supplemental information to a type description.  
  
## Syntax  
  
```  
<summary>description</summary>  
```  
  
#### Parameters  
 `description`  
 A summary of the object.  
  
## Remarks  
 The text for the <summary\> tag is the only source of information about the type in IntelliSense, and is also displayed in the [Object Browser](assetId:///f89acfc5-1152-413d-9f56-3dc16e3f0470) and in the Code Comment Web Report.  
  
 Compile with [/doc](../VS_visualcpp/-doc--Process-Documentation-Comments---C-C---.md) to process documentation comments to a file.  
  
## Example  
  
```  
// xml_summary_tag.cpp  
// compile with: /LD /clr /doc  
// post-build command: xdcmake xml_summary_tag.dll  
  
/// Text for class MyClass.  
public ref class MyClass {  
public:  
   /// <summary>MyMethod is a method in the MyClass class.  
   /// <para>Here's how you could make a second paragraph in a description. <see cref="System::Console::WriteLine"/> for information about output statements.</para>  
   /// <seealso cref="MyClass::MyMethod2"/>  
   /// </summary>  
   void MyMethod(int Int1) {}  
  
   /// text  
   void MyMethod2() {}  
};  
```  
  
## See Also  
 [XML Documentation](../VS_visualcpp/XML-Documentation--Visual-C---.md)