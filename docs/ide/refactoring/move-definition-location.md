---
description: "Learn more about: Move Definition Location"
title: "Move Definition Location"
ms.date: "09/19/2022"
---
# Move Definition Location

**What:** Move a function definition to the corresponding header file.

**When:** You have a function that you want to move to a header file.

**Why:** You could manually move the function, but this feature will move it automatically, and create the header file if necessary.

**How:**

1. Place your text or mouse cursor over the function for which you want to move.

   ![Screenshot of a function, with the cursor on the function name.](images/movedefinition_highlight.png)

1. Next, do one of the following:
   * **Keyboard**
     * Press **Ctrl+.** to trigger the **Quick Actions and Refactorings** menu and select **Move Definition Location** from the context menu.
   * **Mouse**
     * Right-click and select the **Quick Actions and Refactorings** menu and select **Move Definition Location** from the context menu.

1. The function will be moved to the corresponding header file, which you'll see in a popup preview window.  If the header file doesn't exist, it will also be created and placed in the project.

   ![Screenshot of a pop-up window containing a header file that the function was moved to.](images/movedefinition_result.png)
