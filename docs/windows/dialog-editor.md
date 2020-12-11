---
description: "Learn more about: Dialog Editor (C++)"
title: "Dialog Editor (C++)"
ms.date: "02/15/2019"
f1_keywords: ["vc.editors.dialog.dialog", "vc.editors.dialog.F1", "vc.editors.dialog"]
helpviewer_keywords: ["resource editors [C++], Dialog editor", "editors, dialog boxes", "Dialog editor", "dialog boxes [C++], editing", "controls [C++], showing or hiding Dialog editor toolbar", "toolbars [C++], showing", "toolbars [C++], hiding", "Dialog Editor [C++], showing or hiding toolbar", "events [C++], viewing for controls", "Windows messages [C++], controls", "messages [C++], viewing for dialog boxes", "Dialog Editor [C++], accessing code", "code [C++], switching from Dialog Editor", "controls [C++], jumping to code", "Dialog Editor [C++], switching between controls and code", "Dialog Editor [C++], shortcut keys"]
ms.assetid: d94884ef-2cca-49d8-9b58-775f34848134
---
# Dialog Editor (C++)

The **Dialog Editor** allows you to create or edit dialog box resources.

- To open the editor, double-click on a dialog's .rc file in the **Resource View** window, or go to menu **View** > **Other Windows** > **Resource View**.

One of the first steps in making a new dialog box or dialog box template, is adding controls. In the **Dialog Editor**, you can arrange controls to fit a certain size, shape, or alignment, or you can move them around to work within the dialog box. It's also easy to delete a control.

You can store a dialog box as a template so you can reuse it. You can also easily switch between designing the dialog box and editing the code that implements it.

It's also possible to edit properties of single or multiple controls in the **Dialog Editor**. You can change the tab order, that is, the order in which controls gain focus when the **Tab** key is pressed, or you can define an access key or key combination that allows users to choose a control using the keyboard.

The **Dialog Editor** also allows you to use custom controls, including ActiveX controls. You can also edit a [form view](../mfc/reference/cformview-class.md), [record views](../data/record-views-mfc-data-access.md), or [dialog bars](../mfc/dialog-bars.md).

Starting with Visual Studio 2015, you can use the **Dialog Editor** to define dynamic layouts, which specify how controls move and resize when the user resizes a dialog. For more information, see [Dynamic Layout](../mfc/dynamic-layout.md).

For more information on resources, see how to [Create a Dialog Box](../windows/creating-a-new-dialog-box.md) and [Dialog Box Controls](../windows/controls-in-dialog-boxes.md).

> [!TIP]
> While using the **Dialog Editor**, in many instances, you can select with the right mouse button to display a shortcut menu of frequently used commands.

## Dialog Editor Toolbar

The **Dialog Editor** toolbar contains buttons for arranging the layout of controls on the dialog box, for example size and alignment. **Dialog Editor** toolbar buttons correspond to commands on the **Format** menu.

|Icon|Meaning|Icon|Meaning|
|----------|-------------|----------|-------------|
|![Test Dialog button](../mfc/media/vcdialogeditortestdialog.png "vcDialogEditorTestDialog")|Test Dialog|![Space Across button](../mfc/media/vcdialogeditoracross.png "vcDialogEditorAcross")|Across|
|![Align Lefts button](../mfc/media/vcdialogeditoralignlefts.png "vcDialogEditorAlignLefts")|Align Lefts|![Space Down button](../mfc/media/vcdialogeditordown.png "vcDialogEditorDown")|Down|
|![Align Rights button](../mfc/media/vcdialogeditoralignrights.png "vcDialogEditorAlignRights")|Align Rights|![Make Same Width button](../mfc/media/vcdialogeditorsamewidth.png "vcDialogEditorSameWidth")|Make Same Width|
|![Align Tops button](../mfc/media/vcdialogeditoraligntops.png "vcDialogEditorAlignTops")|Align Tops|![Make Same Height button](../mfc/media/vcdialogeditormakesameheight.png "vcDialogEditorMakeSameHeight")|Make Same Height|
|![Align Bottoms button](../mfc/media/vcdialogeditoralignbottoms.png "vcDialogEditorAlignBottoms")|Align Bottoms|![Make Same Size button](../mfc/media/vcdialogeditorsamesize.png "vcDialogEditorSameSize")|Make Same Size|
|![Center Vertical button](../mfc/media/vcdialogeditorvertical.png "vcDialogEditorVertical")|Vertical|![Toggle Grid button](../mfc/media/vcdialogeditortogglegrid.png "vcDialogEditorToggleGrid")|Toggle Grid|
|![Center Horizontal button](../mfc/media/vcdialogeditorhorizontal.png "vcDialogEditorHorizontal")|Horizontal|![Toggle Guides button](../mfc/media/vcdialogeditortoggleguides.png "vcDialogEditorToggleGuides")|Toggle Guides|

- To show or hide the **Dialog Editor** toolbar, go to menu **View** > **Toolbars** > **Dialog Editor**.

When you open the **Dialog Editor** in a C++ project, the **Dialog Editor** toolbar automatically appears at the top of your solution, however, if you explicitly close the toolbar, you'll need to invoke it the next time you open the **Dialog Editor**. You can toggle its display by selecting it from the list of available toolbars and windows.

## Switch Between Dialog Box Controls and Code

In MFC applications, you can double-click on dialog box controls to jump to their handler code or to quickly create stub handler functions.

With a control selected, select the **ControlEvents** button or the **Messages** button in the [Properties window](/visualstudio/ide/reference/properties-window) to view a complete list of Windows messages and events available for the selected item. Choose from the list to create or edit handler functions.

- To jump to code from the **Dialog Editor**, double-click on a control within the dialog box to jump to the declaration for its most-recently implemented message handling function.

   For ATL-based dialog classes, you always jump to the constructor definition.

- To view events for a control, with a control selected, choose the **ControlEvents** button in the **Properties** window.

   When a single control has focus in the dialog box, you can right-click and select **Add Event Handler**. This enables you to specify the class to which the handler is added. For more information, see [Adding an Event Handler](../ide/adding-an-event-handler-visual-cpp.md).

   > [!NOTE]
   > Choosing the **ControlEvents** button when the dialog box has focus exposes a list of all the controls in the dialog box, which you can then expand to edit the events for the individual controls.

- To view messages for a dialog box, with the dialog box selected, choose the **Messages** button in the **Properties** window.

## Accelerator Keys

Below are the default accelerator keys for the **Dialog Editor** commands.  

|Command|Keys|Description|
|-------------|----------|-----------------|
|Format.AlignBottoms|**Ctrl** + **Shift** + **Down Arrow**|Aligns the bottom edges of the selected controls with the dominant control.|
|Format.AlignCenters|**Shift** + **F9**|Aligns the vertical centers of the selected controls with the dominant control.|
|Format.AlignLefts|**Ctrl** + **Shift** + **Left Arrow**|Aligns the left edges of the selected controls with the dominant control.|
|Format.AlignMiddles|**F9**|Aligns the horizontal centers of the selected controls with the dominant control.|
|Format.AlignRights|**Ctrl** + **Shift** + **Right Arrow**|Aligns the right edges of the selected controls with the dominant control.|
|Format.AlignTops|**Ctrl** + **Shift** + **Up Arrow**|Aligns the top edges of the selected controls with the dominant control.|
|Format.ButtonBottom|**Ctrl** + **B**|Places the selected buttons along the bottom-center of the dialog box.|
|Format.ButtonRight|**Ctrl** + **R**|Places the selected buttons in the top-right corner of the dialog box.|
|Format.CenterHorizontal|**Ctrl** + **Shift** + **F9**|Centers the controls horizontally within the dialog box.|
|Format.CenterVertical|**Ctrl** + **F9**|Centers the controls vertically within the dialog box.|
|Format.CheckMnemonics|**Ctrl** + **M**|Checks uniqueness of mnemonics.|
|Format.SizeToContent|**Shift** + **F7**|Resizes the selected control(s) to fit the caption text.|
|Format.SpaceAcross|**Alt** + **Left Arrow**|Evenly spaces the selected controls horizontally.|
|Format.SpaceDown|**Alt** + **Down Arrow**|Evenly spaces the selected controls vertically.|
|Format.TabOrder|**Ctrl** + **D**|Sets the order of controls within the dialog.|
|Format.TestDialog|**Ctrl** + **T**|Runs the dialog box to test appearance and behavior.|
|Format.ToggleGuides|**Ctrl** + **G**|Cycles between no grid, guidelines, and grid for dialog editing.|

- To change shortcut keys, go to menu **Tools** > **Options**, and choose **Keyboard** under the **Environment** folder.

   For more information, see [Identifying and Customizing Keyboard Shortcuts](/visualstudio/ide/identifying-and-customizing-keyboard-shortcuts-in-visual-studio).

- To change your settings, go to menu **Tools** > **Import and Export Settings**.

   The options available in dialog boxes, and the names and locations of menu commands you see, might differ from what is described in **Help** depending on your active settings or edition.  For more information, see [Personalize the Visual Studio IDE](/visualstudio/ide/personalizing-the-visual-studio-ide).

## Requirements

Win32

## See also

[Resource Editors](../windows/resource-editors.md)<br/>
[How to: Create a Dialog Box](../windows/creating-a-new-dialog-box.md)<br/>
[Dialog Box Controls](../windows/controls-in-dialog-boxes.md)<br/>
<!--
[Controls](../mfc/controls-mfc.md)<br/>
[Control Classes](../mfc/control-classes.md)<br/>
[Dialog Box Classes](../mfc/dialog-box-classes.md)<br/>
[Dialog Box Controls and Variable Types](../ide/adding-a-member-variable-visual-cpp.md#dialog-box-controls-and-variable-types)-->
