---
title: "How to: Open a Resource Script File in Text Format | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.resource"]
dev_langs: ["C++"]
helpviewer_keywords: ["resource script files, opening in text format", ".rc files, opening in text format", "rc files, opening in text format"]
ms.assetid: 0bc57527-f53b-40c9-99a9-4dcbc5c9af57
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# How to: Open a Resource Script File in Text Format
There may be times when you want to view the contents of your project's resource script (.rc) file without opening a resource, such as a dialog box, inside its specific resource editor. For example, you may want to search for a string across all dialog boxes in the resource file without having to open each one separately.  
  
> [!NOTE]
>  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
 You can easily open the resource file in text format to view all the resources it contains and perform global operations supported by the [Text editor](http://msdn.microsoft.com/508e1f18-99d5-48ad-b5ad-d011b21c6ab1).  
  
> [!NOTE]
>  The resource editors do not directly read .rc or `resource.h` files. The resource compiler compiles them into .aps files, which are consumed by the resource editors. This file is a compile step and only stores symbolic data. As with a normal compile process, information that is not symbolic (for example, comments) is discarded during the compile process. Whenever the .aps file gets out of synch with the .rc file, the .rc file is regenerated (for example, when you Save, the resource editor overwrites the .rc file and the resource.h file). Any changes to the resources themselves will remain incorporated in the .rc file, but comments will always be lost once the .rc file is overwritten. For information on how to preserve comments, see [Including Resources at Compile Time](../windows/how-to-include-resources-at-compile-time.md).  
  
### To open a resource script file as text  
  
1.  From the **File** menu choose **Open**, then click **File.**  
  
2.  In the **Open File** dialog box, navigate to the resource script file you want to view in text format.  
  
3.  Highlight the file, then click the drop-down arrow on the **Open** button (located on the right side of the button).  
  
4.  Choose **Open With** from the drop-down menu.  
  
5.  In the **Open With** dialog box, click **Source Code (Text) Editor**.  
  
6.  From the **Open As** drop-down list, select **Text**.  
  
     The resource opens in the **Source Code** editor.  
  
 \- or -  
  
1.  In **Solution Explorer**, right-click the .rc file.  
  
2.  From the shortcut menu, choose **Open with...**, then select **Source Code (Text) Editor**.  
  
## Requirements  
 Win32  
  
## See Also  
 [Resource Files](../windows/resource-files-visual-studio.md)   
 [Resource Editors](../windows/resource-editors.md)