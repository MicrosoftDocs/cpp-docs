---
title: "&lt;exception&gt; (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "exception"
  - "<exception>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<exception> C++ XML tag"
  - "exception C++ XML tag"
ms.assetid: 24451e79-9b89-4b77-98fb-702c6516b818
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# &lt;exception&gt; (Visual C++)
The \<exception> tag lets you specify which exceptions can be thrown. This tag is applied to a method definition.  
  
## Syntax  
  
```  
<exception cref="member">description</exception>  
```  
  
#### Parameters  
 `member`  
 A reference to an exception that is available from the current compilation environment. Using name lookup rules, the compiler checks that the given exception exists, and translates `member` to the canonical element name in the output XML.  The compiler issues a warning if it does not find `member`.  
  
 Enclose the name in single or double quotation marks.  
  
 For information on how to create a cref reference to a generic type, see [\<see>](../ide/see-visual-cpp.md).  
  
 `description`  
 A description.  
  
## Remarks  
 Compile with [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.  
  
 The Visual C++ compiler will attempt to resolve cref references in one pass through the documentation comments.  Therefore, if using the C++ lookup rules, a symbol is not found by the compiler the reference will be marked as unresolved. See [\<seealso>](../ide/seealso-visual-cpp.md) for more information.  
  
## Example  
  
```  
// xml_exception_tag.cpp  
// compile with: /clr /doc /LD  
// post-build command: xdcmake xml_exception_tag.dll  
using namespace System;  
  
/// Text for class EClass.  
public ref class EClass : public Exception {  
   // class definition ...  
};  
  
/// <exception cref="System.Exception">Thrown when... .</exception>  
public ref class TestClass {  
   void Test() {  
      try {  
      }  
      catch(EClass^) {  
      }  
   }  
};  
```  
  
## See Also  
 [XML Documentation](../ide/xml-documentation-visual-cpp.md)