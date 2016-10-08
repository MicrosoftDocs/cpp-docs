---
title: "Using the MFC Source Files"
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
ms.assetid: 3230e8fb-3b69-4ddf-9538-365ac7ea5e72
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
# Using the MFC Source Files
The Microsoft Foundation Class (MFC) Library supplies full source code. Header files (.h) are in the \atlmfc\include directory; implementation files (.cpp) are in the \atlmfc\src\mfc directory.  
  
 This family of articles explains the conventions that MFC uses to comment the various parts of each class, what these comments mean, and what you should expect to find in each section. The Visual C++ wizards use similar conventions for the classes that they create for you, and you will probably find these conventions useful for your own code.  
  
 You might be familiar with the **public**, `protected`, and `private` C++ keywords. When looking at the MFC header files, you will find that each class may have several of each of these. For example, public member variables and functions might be under more than one **public** keyword. This is because MFC separates member variables and functions based on their use, not by the type of access allowed. MFC uses `private` sparingly; even items considered implementation details are generally protected and many times are public. Although access to the implementation details is discouraged, MFC leaves the decision to you.  
  
 In both the MFC source files and the files that the MFC Application Wizard creates, you will find comments like these within class declarations (usually in this order):  
  
 `// Constructors`  
  
 `// Attributes`  
  
 `// Operations`  
  
 `// Overridables`  
  
 `// Implementation`  
  
 Topics covered in this family of articles include:  
  
-   [An example of the comments](../VS_visualcpp/An-Example-of-the-Comments.md)  
  
-   [The // Implementation comment](../VS_visualcpp/---Implementation-Comment.md)  
  
-   [The // Constructors comment](../VS_visualcpp/---Constructors-Comment.md)  
  
-   [The // Attributes comment](../VS_visualcpp/---Attributes-Comment.md)  
  
-   [The // Operations comment](../VS_visualcpp/---Operations-Comment.md)  
  
-   [The // Overridables comment](../VS_visualcpp/---Overridables-Comment.md)  
  
## See Also  
 [General MFC Topics](../VS_visualcpp/General-MFC-Topics.md)