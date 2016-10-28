---
title: "&lt;returns&gt; (Visual C++)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "returns"
  - "<returns>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "returns C++ XML tag"
  - "<returns> C++ XML tag"
ms.assetid: 5e3b0ed9-838d-4953-a93e-76d2d0a19fb9
caps.latest.revision: 8
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
# &lt;returns&gt; (Visual C++)
The \<returns> tag should be used in the comment for a method declaration to describe the return value.  
  
## Syntax  
  
```  
<returns>description</returns>  
```  
  
#### Parameters  
 `description`  
 A description of the return value.  
  
## Remarks  
 Compile with [/doc](../buildref/-doc--process-documentation-comments---c-c---.md) to process documentation comments to a file.  
  
## Example  
  
```  
// xml_returns_tag.cpp  
// compile with: /LD /clr /doc  
// post-build command: xdcmake xml_returns_tag.dll  
  
/// Text for class MyClass.  
public ref class MyClass {  
public:  
   /// <returns>Returns zero.</returns>  
   int GetZero() { return 0; }  
};  
```  
  
## See Also  
 [XML Documentation](../ide/xml-documentation--visual-c---.md)