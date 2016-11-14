---
title: "Create Declaration / Definition | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
    - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 6b1cdcb2-765e-4b93-8cef-92b861f64eba
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

# Create Declaration / Definition
**What:** Lets you immediately generate the declaration or definition of a function.

**When:** You have a function that needs a delcaration, or vice-versa.  

**Why:** You could manually create the declaration/definition, but this will create it automatically, creating the header/code file if required.

**How:**

1. Place your text or mouse cursor over the function for which you want to create the declaration or definition.

   ![Highlighted code](images/createdefinition_highlight.png)

1. Next, do one of the following:
   * **Keyboard**
     * Press **Ctrl+.** to trigger the **Quick Actions and Refactorings** menu and select **Create Declaration / Definition** from the context menu.
   * **Mouse**
     * Right-click and select the **Quick Actions and Refactorings** menu and select **Create Declaration / Definition** from the context menu.

1. The function's declaration/definition will be created in the source or header file, which you will see in a popup preview window.  If the source or header file does not exist, it will also be created and placed in the project.

   ![Create Declaration / Definition result](images/createdefinition_result.png)
