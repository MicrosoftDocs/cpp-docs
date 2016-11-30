---
title: "One-Stage and Two-Stage Construction of Objects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "objects [C++], creating graphic objects"
  - "object creation, graphic objects"
  - "objects [C++], graphic objects"
  - "one-stage and two-stage construction of objects"
ms.assetid: 5a1c410c-4a4b-4dd9-a2ec-ced831aa7f21
caps.latest.revision: 10
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
# One-Stage and Two-Stage Construction of Objects
You have a choice between two techniques for creating graphic objects, such as pens and brushes:  
  
-   *One-stage construction*: Construct and initialize the object in one stage, all with the constructor.  
  
-   *Two-stage construction*: Construct and initialize the object in two separate stages. The constructor creates the object and an initialization function initializes it.  
  
 Two-stage construction is always safer. In one-stage construction, the constructor could throw an exception if you provide incorrect arguments or memory allocation fails. That problem is avoided by two-stage construction, although you do have to check for failure. In either case, destroying the object is the same process.  
  
> [!NOTE]
>  These techniques apply to creating any objects, not just graphic objects.  
  
## Example of Both Construction Techniques  
 The following brief example shows both methods of constructing a pen object:  
  
 [!code-cpp[NVC_MFCDocViewSDI#6](../mfc/codesnippet/cpp/one-stage-and-two-stage-construction-of-objects_1.cpp)]  
  
### What do you want to know more about  
  
-   [Graphic objects](../mfc/graphic-objects.md)  
  
-   [Selecting a graphic object into a device context](../mfc/selecting-a-graphic-object-into-a-device-context.md)  
  
-   [Device contexts](../mfc/device-contexts.md)  
  
-   [Drawing in a View](../mfc/drawing-in-a-view.md)  
  
## See Also  
 [Graphic Objects](../mfc/graphic-objects.md)

