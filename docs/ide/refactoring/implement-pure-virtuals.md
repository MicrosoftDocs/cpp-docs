---
title: "Implement Pure Virtuals | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
    - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: ea9b4719-34a3-474a-b4ec-05b1859f80f1
author: "BrianPeek"
ms.author: "brpeek"
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

# Implement Pure Virtuals
**What:** Lets you immediately generate the code required to implement all pure virtual methods in a class. 

**When:** You want to inherit from a class with pure virtual functions.  

**Why:** You could manually implement all pure virtual functions one-by-one, however this feature will generate all method signatures automatically.

**How:**

1. Place your text or mouse cursor over the class in which you want to implement the pure virtual functions of the base class.

   ![Highlighted code](images/virtuals_highlight.png)

1. Next, do one of the following:
   * **Keyboard**
     * Press **Ctrl+.** to trigger the **Quick Actions and Refactorings** menu and select **Implement all Pure Virtuals for class '*ClassName*'** from the context menu, where *ClassName* is the name of the selected class.
   * **Mouse**
     * Right-click and select the **Quick Actions and Refactorings** menu and select **Implement all Pure Virtuals for class '*ClassName*'** from the context menu, where *ClassName* is the name of the selected class.

1. The pure virtual method signatures will be created automatically, ready to be implemented.

   ![Implement Pure Virtuals result](images/virtuals_result.png)
