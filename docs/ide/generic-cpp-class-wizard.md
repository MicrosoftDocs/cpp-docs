---
title: "Generic C++ Class Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.class.generic"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Generic C++ Class Wizard [C++]"
ms.assetid: aa95be9e-fc1b-45db-a11d-0d32c4929077
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
# Generic C++ Class Wizard
Adds a generic C++ class to a project. The class does not inherit from ATL or MFC.  
  
 **Class name**  
 Sets the name of the new class.  
  
 **.h file**  
 Sets the name of the header file for the new class. By default, this name is based on the name you provide in **Class name**. To save the header file to the location of your choice, or to append the class declaration to an existing file, click the ellipsis button (**...**). If you specify an existing file, when you click **Finish**, the wizard prompts you to specify whether the class declaration should be appended to the contents of the file. To append the declaration, click **Yes**; to return to the wizard and specify another file name, click **No**.  
  
 **.cpp file**  
 Sets the name of the implementation file for the new class. By default, this name is based on the name you provide in **Class name**. To save the implementation file to the location of your choice, or to append the class definition to an existing file, click the ellipsis button (**...**). If you specify an existing file, when you click **Finish**, the wizard prompts you to specify whether the class definition should be appended to the contents of the file. To append the definition, click **Yes**; to return to the wizard and specify another file name, click **No**.  
  
 **Base class**  
 Sets the base class for the new class.  
  
 **Access**  
 Sets access to the base class members for the new class. Access modifiers are keywords that specify the level of access that other classes have to the class member functions. For more information about how to specify access, see [Member Access Control](../cpp/member-access-control-cpp.md). By default, the class access level is set to `public`.  
  
-   `public`  
  
-   `protected`  
  
-   `private`  
  
-   **Default** (No access modifier is generated.)  
  
 **Virtual destructor**  
 Specifies whether the class destructor is virtual. Use of a virtual destructor helps ensure that the correct destructor is called when instances of derived classes are deleted.  
  
 **Inline**  
 Generates both the class constructor and the class definition as inline functions in the header file.  
  
 **Managed**  
 When selected, adds a managed class and header file. When cleared, adds a native class and header file.  
  
## See Also  
 [Adding a Generic C++ Class](../ide/adding-a-generic-cpp-class.md)