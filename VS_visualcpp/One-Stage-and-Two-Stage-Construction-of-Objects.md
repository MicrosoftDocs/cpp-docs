---
title: "One-Stage and Two-Stage Construction of Objects"
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
ms.assetid: 5a1c410c-4a4b-4dd9-a2ec-ced831aa7f21
caps.latest.revision: 8
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
# One-Stage and Two-Stage Construction of Objects
You have a choice between two techniques for creating graphic objects, such as pens and brushes:  
  
-   *One-stage construction*: Construct and initialize the object in one stage, all with the constructor.  
  
-   *Two-stage construction*: Construct and initialize the object in two separate stages. The constructor creates the object and an initialization function initializes it.  
  
 Two-stage construction is always safer. In one-stage construction, the constructor could throw an exception if you provide incorrect arguments or memory allocation fails. That problem is avoided by two-stage construction, although you do have to check for failure. In either case, destroying the object is the same process.  
  
> [!NOTE]
>  These techniques apply to creating any objects, not just graphic objects.  
  
## Example of Both Construction Techniques  
 The following brief example shows both methods of constructing a pen object:  
  
 [!CODE [NVC_MFCDocViewSDI#6](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCDocViewSDI#6)]  
  
### What do you want to know more about?  
  
-   [Graphic objects](../VS_visualcpp/Graphic-Objects.md)  
  
-   [Selecting a graphic object into a device context](../VS_visualcpp/Selecting-a-Graphic-Object-into-a-Device-Context.md)  
  
-   [Device contexts](../VS_visualcpp/Device-Contexts.md)  
  
-   [Drawing in a View](../VS_visualcpp/Drawing-in-a-View.md)  
  
## See Also  
 [Graphic Objects](../VS_visualcpp/Graphic-Objects.md)