---
description: "Learn more about: Rename"
title: "Rename"
ms.date: "09/19/2022"
---
# Rename

**What:** Rename identifiers for code symbols such as fields, local variables, methods, namespaces, properties and types.

**When:** You want to safely rename something without having to find all instances, and copy/paste the new name.

**Why:** Copy and pasting the new name across an entire project could result in errors. This feature accurately performs the rename.

**How:**

1. Highlight or place the text cursor inside the item to be renamed:

   ![Screenshot showing the variable r highlighted. The line reads: double r = 1.23;.](images/rename_highlight.png)

1. Next, do one of the following:
   * **Keyboard**
     * Press **Ctrl+R**, then **Ctrl+R**.  (Your keyboard shortcut may be different depending on which profile you've selected.)
   * **Mouse**
     * Select **Edit > Refactor > Rename**.
     * Right-click the code and select **Rename**.

1. In the **Rename** window that pops up, enter the new name for the selected item and click the **Preview** button.  Change the **Search scope** if you need to widen or narrow the scope of the renaming.

   ![Screenshot of the Rename dialog. It asks for the new name of the symbol and allows you to specify the scope of the changes.](images/rename_dialog.png)

   > [!TIP]
   > You can skip the preview by checking the **Skip preview changes if references are all confirmed** option.

1. When the **Preview Changes - Rename** window appears, ensure that the changes you're requesting are being made appropriately.  Use the checkboxes in the top half of the window to enable or disable the renaming of any item.

   ![Screenshot of the rename preview dialog which shows the proposed changes and allows you to deselect those you don't want.](images/rename_preview.png)

1. When everything looks good, click the **Apply** button, and the item will be renamed in your source code.
