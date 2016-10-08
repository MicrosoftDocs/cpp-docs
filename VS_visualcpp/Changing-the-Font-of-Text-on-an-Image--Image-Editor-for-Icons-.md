---
title: "Changing the Font of Text on an Image (Image Editor for Icons)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: b8849d40-d401-4e06-808f-e615cb2bee3b
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Changing the Font of Text on an Image (Image Editor for Icons)
The following procedure is an example of how to:  
  
-   Add text to an icon in a Windows Application  
  
-   Manipulate the font of your text  
  
### To change the font of text on an image  
  
1.  Create a C++ Windows Forms Application. For details, see [Creating a Windows Application Project](assetId:///b2f93fed-c635-4705-8d0e-cf079a264efa). The [Windows Forms Application Template](assetId:///1babdebf-ab3f-4a64-a608-98499a5b9cea) adds a file named app.ico to your project by default.  
  
2.  In Solution Explorer, double-click the file app.ico. The [Image Editor](../VS_visualcpp/Image-Editor-for-Icons.md) will open.  
  
3.  From the **Image** menu, select **Tools** and then select **Text Tool**. The [Text Tool Dialog Box](../VS_visualcpp/Text-Tool-Dialog-Box--Image-Editor-for-Icons-.md) will appear.  
  
4.  In the Text Tool Dialog Box, type `C++` in the empty text area. This text will appear in a resizable box located in the upper left corner of app.ico, in the Image Editor.  
  
5.  In the Image Editor, drag the resizable box to the center of app.ico, to improve the readability of your text.  
  
6.  In the Text Tool Dialog Box, click the **Font** button. The [Text Tool Font Dialog Box](../VS_visualcpp/Text-Tool-Font-Dialog-Box--Image-Editor-for-Icons-.md) will appear.  
  
7.  In the Text Tool Font Dialog Box, select **Times New Roman** from the list of available fonts that are listed in the **Font** list box.  
  
8.  Select **Bold** from the list of available font styles listed in the **Font style** list box.  
  
9. Select **10** from the list of available point sizes listed in the **Size** list box.  
  
10. Click the **OK** button. The Text Tool Font Dialog Box will close and the new font settings will apply to your text.  
  
11. Click the **Close** button on the Text Tool dialog box. The resizable box around your text will disappear from the Image Editor.  
  
## See Also  
 [Editing Graphical Resources](../VS_visualcpp/Editing-Graphical-Resources--Image-Editor-for-Icons-.md)   
 [Toolbar](../VS_visualcpp/Toolbar--Image-Editor-for-Icons-.md)