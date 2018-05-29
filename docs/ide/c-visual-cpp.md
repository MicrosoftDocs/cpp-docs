---
title: "&lt;c&gt; (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
f1_keywords: ["<c>"]
dev_langs: ["C++"]
helpviewer_keywords: ["<c> C++ XML tag", "c C++ XML tag"]
ms.assetid: 3b23fc0f-e10d-4dd0-b197-48a46cbddd9f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# &lt;c&gt; (Visual C++)
The \<c> tag indicates that text within a description should be marked as code. Use [\<code>](../ide/code-visual-cpp.md) to indicate multiple lines as code.  
  
## Syntax  
  
```  
<c>text</c>  
```  
  
#### Parameters  
 `text`  
 The text you want to indicate as code.  
  
## Remarks  
 Compile with [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.  
  
## Example  
  
```  
// xml_c_tag.cpp  
// compile with: /doc /LD  
// post-build command: xdcmake xml_c_tag.xdc  
  
/// Text for class MyClass.  
class MyClass {  
public:  
   int m_i;  
   MyClass() : m_i(0) {}  
  
   /// <summary><c>MyMethod</c> is a method in the <c>MyClass</c> class.  
   /// </summary>  
   int MyMethod(MyClass * a) {  
      return a -> m_i;  
   }  
};  
```  
  
## See Also  
 [XML Documentation](../ide/xml-documentation-visual-cpp.md)