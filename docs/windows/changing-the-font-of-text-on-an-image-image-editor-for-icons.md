---
title: "Changing the Font of Text on an Image (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["fonts, changing on an image"]
ms.assetid: b8849d40-d401-4e06-808f-e615cb2bee3b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Changing the Font of Text on an Image (Image Editor for Icons)
The following procedure is an example of how to:  
  
-   Add text to an icon in a Windows Application  
  
-   Manipulate the font of your text  
  
### To change the font of text on an image  
  
1.  Create a C++ Windows Forms Application. For details, see [Creating a Windows Application Project](http://msdn.microsoft.com/en-us/b2f93fed-c635-4705-8d0e-cf079a264efa). The [Windows Forms Application Template](http://msdn.microsoft.com/en-us/1babdebf-ab3f-4a64-a608-98499a5b9cea) adds a file named app.ico to your project by default.  
  
2.  In Solution Explorer, double-click the file app.ico. The [Image Editor](../windows/image-editor-for-icons.md) will open.  
  
3.  From the **Image** menu, select **Tools** and then select **Text Tool**. The [Text Tool Dialog Box](../windows/text-tool-dialog-box-image-editor-for-icons.md) will appear.  
  
4.  In the Text Tool Dialog Box, type `C++` in the empty text area. This text will appear in a resizable box located in the upper left corner of app.ico, in the Image Editor.  
  
5.  In the Image Editor, drag the resizable box to the center of app.ico, to improve the readability of your text.  
  
6.  In the Text Tool Dialog Box, click the **Font** button. The [Text Tool Font Dialog Box](../windows/text-tool-font-dialog-box-image-editor-for-icons.md) will appear.  
  
7.  In the Text Tool Font Dialog Box, select **Times New Roman** from the list of available fonts that are listed in the **Font** list box.  
  
8.  Select **Bold** from the list of available font styles listed in the **Font style** list box.  
  
9. Select **10** from the list of available point sizes listed in the **Size** list box.  
  
10. Click the **OK** button. The Text Tool Font Dialog Box will close and the new font settings will apply to your text.  
  
11. Click the **Close** button on the Text Tool dialog box. The resizable box around your text will disappear from the Image Editor.  
  
## See Also  
 [Editing Graphical Resources](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Toolbar](../windows/toolbar-image-editor-for-icons.md)

