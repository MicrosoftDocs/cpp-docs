---
title: "&lt;seealso&gt; (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<seealso>"
  - "seealso"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "seealso C++ XML tag"
  - "<seealso> C++ XML tag"
ms.assetid: cb33d100-9c50-4485-8d0c-573429eff155
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
# &lt;seealso&gt; (Visual C++)
The \<seealso> tag lets you specify the text that you might want to appear in a See Also section. Use [\<see>](../ide/see-visual-cpp.md) to specify a link from within text.  
  
## Syntax  
  
```  
<seealso cref="member"/>  
```  
  
#### Parameters  
 `member`  
 A reference to a member or field that is available to be called from the current compilation environment.  Enclose the name in single or double quotation marks.  
  
 The compiler checks that the given code element exists and resolves `member` to the element name in the output XML.  The compiler issues a warning if it does not find `member`.  
  
 For information on how to create a cref reference to a generic type, see [\<see>](../ide/see-visual-cpp.md).  
  
## Remarks  
 Compile with [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.  
  
 See [\<summary>](../ide/summary-visual-cpp.md) for an example of using \<seealso>.  
  
 The Visual C++ compiler will attempt to resolve cref references in one pass through the documentation comments.  Therefore, if using the C++ lookup rules, a symbol is not found by the compiler the reference will be marked as unresolved.  
  
## Example  
 In the following sample, an unresolved symbol is referenced in a cref. The XML comment for the cref to B::Test will be `<seealso cref="!:B::Test" />`, whereas the reference to A::Test is well-formed `<seealso cref="M:A.Test" />`.  
  
```  
// xml_seealso_tag.cpp  
// compile with: /LD /clr /doc  
// post-build command: xdcmake xml_seealso_tag.dll  
  
/// Text for class A.  
public ref struct A {  
   /// <summary><seealso cref="A::Test"/>  
   /// <seealso cref="B::Test"/>  
   /// </summary>  
   void MyMethod(int Int1) {}  
  
   /// text  
   void Test() {}  
};  
  
/// Text for class B.  
public ref struct B {  
   void Test() {}  
};  
```  
  
## See Also  
 [XML Documentation](../ide/xml-documentation-visual-cpp.md)