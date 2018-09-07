---
title: "&lt;value&gt; (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
f1_keywords: ["value", "<value>"]
dev_langs: ["C++"]
helpviewer_keywords: ["value C++ XML tag", "<value> C++ XML tag"]
ms.assetid: 0ba0a0d5-bcd7-4862-a169-83f2721ad80e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# &lt;value&gt; (Visual C++)
The \<value> tag lets you describe a property and property accessor methods. Note that when you add a property with a code wizard in the Visual Studio integrated development environment, it will add a [\<summary>](../ide/summary-visual-cpp.md) tag for the new property. You should then manually add a \<value> tag to describe the value that the property represents.  
  
## Syntax  
  
```  
<value>property-description</value>  
```  
  
#### Parameters  
 `property-description`  
 A description for the property.  
  
## Remarks  
 Compile with [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.  
  
## Example  
  
```  
// xml_value_tag.cpp  
// compile with: /LD /clr /doc  
// post-build command: xdcmake xml_value_tag.dll  
using namespace System;  
/// Text for class Employee.  
public ref class Employee {  
private:  
   String ^ name;  
   /// <value>Name accesses the value of the name data member</value>  
public:  
   property String ^ Name {  
      String ^ get() {  
         return name;   
      }  
      void set(String ^ i) {  
         name = i;  
      }  
   }  
};  
```  
  
## See Also  
 [XML Documentation](../ide/xml-documentation-visual-cpp.md)