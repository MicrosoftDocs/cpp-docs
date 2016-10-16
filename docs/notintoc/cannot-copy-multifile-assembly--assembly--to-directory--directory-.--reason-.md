---
title: "Cannot copy multifile assembly &#39;assembly&#39; to directory &#39;directory&#39;. &lt;reason&gt;"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.cannotcopyscatterassembly"
ms.assetid: 939519c7-741d-4e05-8b63-71e39fb426ad
caps.latest.revision: 8
ms.author: "mblome"
manager: "douge"
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
# Cannot copy multifile assembly &#39;assembly&#39; to directory &#39;directory&#39;. &lt;reason&gt;
Multifile assemblies are copied to a subdirectory of the project directory from which they will be run. For example, if the output path is c:\project1\bin, and there exists an assembly (whose `CopyLocal` property is `true`) named Test containing files a.dll and b.dll, you will have the following file structure after the copy is complete:  
  
```  
c:\project1\bin\Test  
   c:\project1\bin\Test\Test.dll   (main assembly)  
   c:\project1\bin\Test\a.dll       (file a.dll)  
   c:\project1\bin\Test\b.dll       (file b.dll)  
```  
  
 This error would be displayed by the project system if the directory c:\project1\bin\Test could not be created on disk.  
  
 This error indicates that you are out of disk space or are hitting the MAX_PATH limit for path lengths.  
  
 **To correct this error**  
  
-   Check for disk space.  
  
-   Move the project to a folder whose path length is less than the path length of the folder the project is currently in.  
  
-   Change the output directory to a folder with a shorter absolute path length (applicable for client projects only).  
  
## See Also  
 [Troubleshooting Broken References](../Topic/Troubleshooting%20Broken%20References.md)   
 [NIB How to: Add or Remove References By Using the Add Reference Dialog Box](assetId:///3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [Assemblies in the Common Language Runtime](assetId:///33a0bc6a-6bb3-44c7-ada7-4a046e8c0945)