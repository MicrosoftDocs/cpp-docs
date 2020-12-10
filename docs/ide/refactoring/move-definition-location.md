---
description: "Learn more about: Move Definition Location"
title: "Move Definition Location"
ms.date: "11/16/2016"
ms.assetid: c6d507ac-c61e-4da2-95c8-d504b42e2520
---
# Move Definition Location

**What:** Lets you immediately move a function definition to the corresponding header file.

**When:** You have a function that you want to move to a header file.

**Why:** You could manually move the function, but this feature will move it automatically, creating the header file if required.

**How:**

1. Place your text or mouse cursor over the function for which you want to move.

   ![Highlighted code](images/movedefinition_highlight.png)

1. Next, do one of the following:
   * **Keyboard**
     * Press **Ctrl+.** to trigger the **Quick Actions and Refactorings** menu and select **Move Definition Location** from the context menu.
   * **Mouse**
     * Right-click and select the **Quick Actions and Refactorings** menu and select **Move Definition Location** from the context menu.

1. The function will be moved to the corresponding header file, which you will see in a popup preview window.  If the header file does not exist, it will also be created and placed in the project.

   ![Create Declaration / Definition result](images/movedefinition_result.png)
