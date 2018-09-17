---
title: "Deploy a Visual C++ Application By Using a Setup Project | Microsoft Docs"
ms.custom: ""
ms.date: "09/17/2018"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["deployment for Visual C++"]
ms.assetid: 66735cda-8fe3-4211-a19a-2cf717a12a3f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Walkthrough: Deploying a Visual C++ Application By Using a Setup Project
Describes how to use a setup project to deploy a Visual C++ application.  
  
## Prerequisites  
 You need the following components to complete this walkthrough:  
  
- A computer with Visual Studio installed.  
  
- An additional computer that does not have the Visual C++ libraries.  
  
### To deploy an application by using a setup project  

1. Create a new project. On the **File** menu, point to **New**, and then click **Project**. 
  
1. Use the **MFC ApplicationWizard** to create a new Visual Studio solution. To find the wizard, from the **New Project** dialog box, expand the **Visual C++** node, select **MFC**, select **MFC Application**, enter a name for the project, and then click **OK**. Click **Finish**.

    > [!NOTE]
    > If the **MFC Application** type is missing, select **Open Visual Studio Installer** in the left pane of the **New Project** dialog box. Install the option located under **Desktop development with C++** in the **Optional** components section, named **Visual C++ MFC for x86 and x64**.
  
1. Change the active solution configuration to **Release**. From the **Build** menu, select **Configuration Manger**. From the **Configuration Manager** dialog box, select **Release** from the **Active solution configuration** drop-down box. Click **Close**.
  
1. Press **Ctrl**+**Shift**+**B** to build the application. Or, on the **Build** menu, click **Build Solution**. This enables the setup project to use the output of this MFC application project.  
  
1. If you haven’t already done so, download InstallShield Limited Edition (ISLE), which is free for Visual Studio developers and replaces the functionality of the project templates in Visual Studio for setup and deployment. When you are connected to the Internet, open the **New Project** dialog box by choosing **File**, **New**, **Project** on the menu bar, or by right-clicking your solution in **Solution Explorer** and choosing **Add** > **New Project**. Expand the **Other Project Types** node, choose **Enable InstallShield Limited Edition** in the **Setup and Deployment** node, and follow the instructions that appear. Once you have downloaded, installed and activated InstallShield Limited Edition, close Visual Studio and re-open it.  
  
1. Open the **New Project** dialog box again, expand the **Other Project Types** node, and choose **InstallShield Limited Edition Project** in the **InstallShield Limited Edition** node.  
  
1. Follow instructions in the **Getting Started** node of the setup project created by the InstallShield Limited Edition template to add an output reference to your Visual Studio MFC project.  
  
1. Build the setup project to create the installer file (setup.exe). To do so, right click the setup project node in **Solution Explorer** and select **Build**.  
  
     InstallShield Limited Edition creates the setup file in the setup project tree (by default, it may be located in the Express\SingleImage\DiskImages\DISK1 subfolder of the setup project).  
  
1. Run the setup program on a second computer that does not have the Visual C++ libraries.  

1. If you haven’t already done so, download the Microsoft Visual Studio Installer Projects extension. The extension is free for Visual Studio developers and adds the functionality of the setup and deployment project templates to Visual Studio. When you are connected to the Internet, in Visual Studio, choose **Tools** > **Extensions and Updates**. Under **Extensions and Updates**, select the **Online** tab and type *Microsoft Visual Studio Installer Projects* in the search box. Hit **Enter**, select **Microsoft Visual Studio 2017 Installer Projects**, and click **Download**. Choose to install the extension, then restart Visual Studio. 
  
1. On the menu bar, choose **File** > **Recent Projects and Solutions**, and then choose to reopen your project.   
  
1. On the menu bar, choose **File** > **New** > **Project** to open the **New Project** dialog box.  
  
1. In the left pane of the dialog box, expand the **Installed** > **Other Project Types** nodes, and then select **Visual Studio Installer**. In the center pane, select **Setup Project**.  
  
1. Enter a name for the setup project in the **Name** box. In the **Solution** drop-down list, select **Add to solution**. Choose the **OK** button to create the setup project. A **File Assistant (ProjectName)** tab opens in the editor window.  

1. Right-click the **Application Folder** node and select **Add** > **Project Output** to open the **Add Project Output Group** dialog box.

1. In the dialog box, select **Primary Output** and click **OK**. A new item named **Primary Output from ProjectName (Active)** appears.  

1. Select the item **Primary Output from ProjectName (Active)**, right-click and choose **Create Shortcut to Primary Output from ProjectName (Active)**. A new item named **Shortcut to Primary Output from ProjectName (Active)** appears.

1. You may rename the shortcut item, then drag and drop the item into the **User's Programs Menu** node on the left side of the window.

1. On the menu bar, choose **Build** > **Configuration Manager**. In the **Project** table, under the **Build** column, check the box for the deployment project. Click **Close**.
  
1. On the menu bar, choose **Build** > **Build Solution** to build the MFC project and the deployment project.  
  
1. In the solution folder, locate the setup.exe program that was built from the deployment project. You can copy this file (and the .msi file) to install the application and its required library files on another computer. Run the setup program on a second computer that does not have the Visual C++ libraries.

1. Run the setup program on a second computer that does not have the Visual C++ libraries.  
  
## See Also  

[Deployment Examples](deployment-examples.md)<br/>
