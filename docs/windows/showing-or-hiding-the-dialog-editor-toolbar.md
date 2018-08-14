---
title: "Showing or Hiding the Dialog Editor Toolbar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["controls [C++], showing or hiding Dialog editor toolbar", "toolbars [C++], showing", "toolbars [C++], hiding", "Dialog editor, showing or hiding toolbar"]
ms.assetid: 93c255e1-90eb-48b6-8602-450acda75bed
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Showing or Hiding the Dialog Editor Toolbar
When you open the **Dialog** editor, the **Dialog Editor** toolbar automatically appears at the top of your solution.  
  
### Dialog Editor Toolbar  
  
|Icon|Meaning|Icon|Meaning|  
|----------|-------------|----------|-------------|  
|![Test Dialog button](../mfc/media/vcdialogeditortestdialog.png "vcDialogEditorTestDialog")|Test Dialog|![Space Across button](../mfc/media/vcdialogeditoracross.png "vcDialogEditorAcross")|Across|  
|![Align Lefts button](../mfc/media/vcdialogeditoralignlefts.png "vcDialogEditorAlignLefts")|Align Lefts|![Space Down button](../mfc/media/vcdialogeditordown.png "vcDialogEditorDown")|Down|  
|![Align Rights button](../mfc/media/vcdialogeditoralignrights.png "vcDialogEditorAlignRights")|Align Rights|![Make Same Width button](../mfc/media/vcdialogeditorsamewidth.png "vcDialogEditorSameWidth")|Make Same Width|  
|![Align Tops button](../mfc/media/vcdialogeditoraligntops.png "vcDialogEditorAlignTops")|Align Tops|![Make Same Height button](../mfc/media/vcdialogeditormakesameheight.png "vcDialogEditorMakeSameHeight")|Make Same Height|  
|![Align Bottoms button](../mfc/media/vcdialogeditoralignbottoms.png "vcDialogEditorAlignBottoms")|Align Bottoms|![Make Same Size button](../mfc/media/vcdialogeditorsamesize.png "vcDialogEditorSameSize")|Make Same Size|  
|![Center Vertical button](../mfc/media/vcdialogeditorvertical.png "vcDialogEditorVertical")|Vertical|![Toggle Grid button](../mfc/media/vcdialogeditortogglegrid.png "vcDialogEditorToggleGrid")|Toggle Grid|  
|![Center Horizontal button](../mfc/media/vcdialogeditorhorizontal.png "vcDialogEditorHorizontal")|Horizontal|![Toggle Guides button](../mfc/media/vcdialogeditortoggleguides.png "vcDialogEditorToggleGuides")|Toggle Guides|  
  
 The **Dialog Editor** toolbar contains buttons for arranging the layout of controls on the dialog box, for example size and alignment. **Dialog Editor** toolbar buttons correspond to commands on the **Format** menu. For details, see [Accelerator Keys for the Dialog Editor](../windows/accelerator-keys-for-the-dialog-editor.md).  
  
 When you are in the **Dialog** editor, you can toggle the display of the **Dialog Editor** toolbar by selecting it from the list of available toolbars and windows.  
  
### To show or hide the dialog editor toolbar  
  
1.  On the **View** menu click **Toolbars** then choose **Dialog Editor** from the submenu.  
  
    > [!NOTE]
    >  The **Dialog Editor** toolbar is displayed by default when you open a dialog box resource in the Dialog editor; however, if you explicitly close the toolbar, you will need to invoke it the next time you open a dialog box resource.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
## Requirements  
 Win32  
  
## See Also  
 [Arrangement of Controls on Dialog Boxes](../windows/arrangement-of-controls-on-dialog-boxes.md)   
 [How to: Create a Resource](../windows/how-to-create-a-resource.md)   
 [Resource Files](../windows/resource-files-visual-studio.md)   
 [Dialog Editor](../windows/dialog-editor.md)