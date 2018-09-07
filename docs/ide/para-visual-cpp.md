---
title: "&lt;para&gt; (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
f1_keywords: ["<para>", "para"]
dev_langs: ["C++"]
helpviewer_keywords: ["<para> C++ XML tag", "para C++ XML tag"]
ms.assetid: 35f2a1b3-bc14-4f13-bcb0-c39ccbf74d59
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# &lt;para&gt; (Visual C++)
The \<para> tag is for use inside a tag, such as [\<summary>](../ide/summary-visual-cpp.md), [\<remarks>](../ide/remarks-visual-cpp.md), or [\<returns>](../ide/returns-visual-cpp.md), and lets you add structure to the text.  
  
## Syntax  
  
```  
<para>content</para>  
```  
  
#### Parameters  
 `content`  
 The text of the paragraph.  
  
## Remarks  
 Compile with [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.  
  
## Example  
 See [\<summary>](../ide/summary-visual-cpp.md) for an example of using \<para>.  
  
## See Also  
 [XML Documentation](../ide/xml-documentation-visual-cpp.md)