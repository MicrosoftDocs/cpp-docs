---
title: "&lt;example&gt; (Visual C++) | Microsoft Docs"
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
  - "<example>"
  - "example"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<example> C++ XML tag"
  - "example C++ XML tag"
ms.assetid: c821aaa7-7ea7-4bee-9922-6705ad57f877
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &lt;example&gt; (Visual C++)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [&lt;example&gt; (Visual C++)](https://docs.microsoft.com/cpp/ide/example-visual-cpp).  
  
  
The \<example> tag lets you specify an example of how to use a method or other library member. Commonly, this would also involve use of the [\<code>](../ide/code-visual-cpp.md) tag.  
  
## Syntax  
  
```  
<example>description</example>  
```  
  
#### Parameters  
 `description`  
 A description of the code sample.  
  
## Remarks  
 Compile with [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.  
  
## Example  
  
```  
// xml_example_tag.cpp  
// compile with: /clr /doc /LD  
// post-build command: xdcmake xml_example_tag.dll  
  
/// Text for class MyClass.  
public ref class MyClass {  
public:  
   /// <summary>  
   /// GetZero method  
   /// </summary>  
   /// <example> This sample shows how to call the GetZero method.  
   /// <code>  
   /// int main()   
   /// {  
   ///    return GetZero();  
   /// }  
   /// </code>  
   /// </example>  
   static int GetZero() {  
      return 0;  
   }  
};  
```  
  
## See Also  
 [XML Documentation](../ide/xml-documentation-visual-cpp.md)

