---
title: "Grouping Radio Buttons on a Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.dialog.grouping"]
dev_langs: ["C++"]
helpviewer_keywords: ["member variables, adding to radio button groups", "variables, dialog box control member variables", "dialog box controls, grouping radio buttons", "grouping controls", "radio buttons, grouping on dialog boxes"]
ms.assetid: 3cc43f9e-56c8-4faa-9930-ce81733c69de
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Grouping Radio Buttons on a Dialog Box
When you add radio buttons to a dialog box, treat them as a group by setting a **Group** property in the **Properties** window for the first button in the group. A control ID for that radio button then appears in the [Add Member Variable Wizard](../ide/add-member-variable-wizard.md), allowing you to add a member variable for the group of radio buttons.  
  
 You can have more than one group of radio buttons on a dialog box, and each group should be added using the following procedure.  
  
### To add a group of radio buttons to a dialog box  
  
1.  Select the radio button control in the [Toolbox Window](/visualstudio/ide/reference/toolbox) and click the location in the dialog box where you want to place the control.  
  
2.  Repeat Step 1 to add as many radio buttons as you need. Make sure that the radio buttons in the group are consecutive in the tab order (for more information, see [Changing the Tab Order of Controls](../windows/changing-the-tab-order-of-controls.md)).  
  
3.  In the [Properties Window](/visualstudio/ide/reference/properties-window), set the **Group** property of the *first* radio button in the tab order to **True**.  
  
     Changing the **Group** property to **True** adds the WS_GROUP style to the button's entry in the dialog object of the resource script and ensures that a user can only select one radio button at a time in the button group (when the user clicks one radio button, the others in the group are cleared).  
  
    > [!NOTE]
    >  Only the first radio button in the group should have the **Group** property set to **True**. If you have additional controls that are not part of the button group, set the **Group** property of the first control *that is outside the group* to **True** as well. You can quickly identify the first control outside of the group by pressing **Ctrl**+**D** to view the tab order.  
  
### To add a member variable for the radio button group  
  
1.  Right-click the first radio button control in the tab order (the dominant control and the one with the **Group** property set to True).  
  
2.  Choose **Add Variable** from the shortcut menu.  
  
3.  In the [Add Member Variable wizard](../ide/add-member-variable-wizard.md), select the **Control variable** check box, then select the **Value** radio button.  
  
4.  In the **Variable name** box, type a name for the new member variable.  
  
5.  In the **Variable type** list box, select **int** or type `int`.  
  
6.  You can now modify your code to specify which radio button should appear selected. For example, `m_radioBox1 = 0;` selects the first radio button in the group.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
## Requirements  
 Win32  
  
## See Also  
 [Arrangement of Controls on Dialog Boxes](../windows/arrangement-of-controls-on-dialog-boxes.md)   
 [Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)   
 [Controls](../mfc/controls-mfc.md)