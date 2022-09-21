---
description: "Learn more about: Convert to Raw String Literal"
title: "Convert to Raw String Literal"
ms.date: "09/19/2022"
---
# Convert to Raw String Literal

**What:** Turn any string into a C++ raw string literal.

**When:** You have a string with escaped characters, which shouldn't be processed as escaped characters.

**Why:** You could double-escape characters, but this often leads to confusing and strings. Raw string literals make strings much easier to read.

**How:**

1. Place text or mouse cursor over the escaped string to convert.

   ![Screenshot of the cursor in the middle of the word quoted on the line of code that reads: auto MyString = "A \"quoted\" string".](images/stringliteral_highlight.png)

1. Next, do one of the following:
   * **Keyboard**
     * Press **Ctrl+.** to trigger the **Quick Actions and Refactorings** menu and select **Convert to Raw String Literal** from the context menu.
   * **Mouse**
     * Right-click the code, select the **Quick Actions and Refactorings** menu and select **Convert to Raw String Literal** from the context menu.
     * Click the ![Lightbulb.](images/bulb.png) icon that appears in the left margin and select **Convert to Raw String Literal** from the context menu.

1. The string will be immediately converted into a raw string literal.

   ![Screenshot showing that the line of code now reads: auto myString = R"(A "quoted" string.)" The interior quotes are no longer escaped.](images/stringliteral_result.png)
