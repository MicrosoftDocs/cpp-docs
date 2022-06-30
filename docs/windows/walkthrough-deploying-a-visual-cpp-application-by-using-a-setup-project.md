---
description: "Learn more about: Walkthrough: Deploy a Visual C++ application by using a setup project"
title: "Deploy a Visual C++ application by using a setup project"
ms.date: 06/28/2022
helpviewer_keywords: ["deployment for Visual C++"]
ms.assetid: 66735cda-8fe3-4211-a19a-2cf717a12a3f
ms.custom: intro-deployment
---
# Walkthrough: Deploy a Visual C++ application by using a setup project

In this walkthrough, you'll create a sample app in Visual Studio, then create a setup project to deploy your app to another computer.

Instructions for creating a new project vary depending on which version of Visual Studio you've installed. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. It's found at the top of the table of contents on this page.

## Prerequisites

You need the following components to complete this walkthrough:

::: moniker range="=msvc-170"

- A computer with Visual Studio 2022 installed. The installation must include the **Desktop development with C++** workload, and the **C++ MFC for latest v143 build tools (x86 & x64)** optional component.

- The Microsoft Visual Studio Installer Projects extension. The extension is free for Visual Studio developers and adds the functionality of the setup and deployment project templates to Visual Studio.

- To test your deployment, another computer that doesn't have the Visual C++ libraries installed.

### <a name="install-mfc-2022"></a> To install C++ and MFC in Visual Studio 2022

If you have Visual Studio installed, but you don't have the C++ or MFC components installed, you can add them now.

1. Launch the Visual Studio Installer program from the Windows Start menu.

1. In Visual Studio Installer, choose the **Modify** button next to your installed version of Visual Studio.

1. In the **Modifying** dialog, under the **Workloads** tab, scroll down to the **Desktop Development with C++** tile. If the tile checkbox isn't checked, check the checkbox.

1. To the side of the dialog under **Installation details**, expand the **Desktop Development with C++** node, then expand the **Optional** node. If it isn't already checked, add a check to the **C++ MFC for latest v143 build tools (x86 & x64)** component.

1. Choose the **Modify** button to modify your Visual Studio installation. When installation completes, exit the Visual Studio installer.

### <a name="install-setup-2022"></a> To install the Installer Projects extension

1. In Visual Studio, select the **Extensions** > **Manage Extensions** menu item.

1. In the Manage Extensions dialog, expand **Online** > **Visual Studio Marketplace** > **Tools** and select **Setup & Deployment**.

   ![The Manage Extensions dialog showing the Visual Studio setup project extension.](media/vs2019-extension-dialog-installer-project.png "Name the client project")

1. In the list of extensions, select **Microsoft Visual Studio Installer Projects 2022**. Choose the **Download** button.

1. A notification appears at the bottom of the dialog that tells you the modification will begin when all Microsoft Visual Studio windows are closed. Close the dialog.

1. Close Visual Studio. The download and install process begins. You may need to accept a User Account Control elevation prompt to allow the installer to change Visual Studio.

1. In the VSIX Installer dialog, choose **Modify** to install the extension. When the modifications complete, choose **Close** to dismiss the dialog.

::: moniker-end

::: moniker range="=msvc-160"

- A computer with Visual Studio 2019 installed. The installation must include the **Desktop development with C++** workload, and the **C++ MFC for latest v142 build tools (x86 & x64)** optional component.

- The Microsoft Visual Studio Installer Projects extension. The extension is free for Visual Studio developers and adds the functionality of the setup and deployment project templates to Visual Studio.

- To test your deployment, another computer that doesn't have the Visual C++ libraries installed.

### <a name="install-mfc-2019"></a> To install C++ and MFC in Visual Studio 2019

If you have Visual Studio installed, but you don't have the C++ or MFC components installed, you can add them now.

1. Launch the Visual Studio Installer program from the Windows Start menu.

1. In Visual Studio Installer, choose the **Modify** button next to your installed version of Visual Studio.

1. In the **Modifying** dialog, under the **Workloads** tab, scroll down to the **Desktop Development with C++** tile. If the tile checkbox isn't checked, check the checkbox.

1. To the side of the dialog under **Installation details**, expand the **Desktop Development with C++** node, then expand the **Optional** node. If it isn't already checked, add a check to the **C++ MFC for latest v142 build tools (x86 & x64)** component.

1. Choose the **Modify** button to modify your Visual Studio installation. When installation completes, exit the Visual Studio installer.

### <a name="install-setup-2019"></a> To install the Installer Projects extension

1. In Visual Studio, select the **Extensions** > **Manage Extensions** menu item.

1. In the Manage Extensions dialog, expand **Online** > **Visual Studio Marketplace** > **Tools** and select **Setup & Deployment**.

   ![The Manage Extensions dialog showing the Visual Studio setup project extension.](media/vs2019-extension-dialog-installer-project.png "Name the client project")

1. In the list of extensions, select **Microsoft Visual Studio Installer Projects**. Choose the **Download** button.

1. A notification appears at the bottom of the dialog that tells you the modification will begin when all Microsoft Visual Studio windows are closed. Close the dialog.

1. Close Visual Studio. The download and install process begins. You may need to accept a User Account Control elevation prompt to allow the installer to change Visual Studio.

1. In the VSIX Installer dialog, choose **Modify** to install the extension. When the modifications complete, choose **Close** to dismiss the dialog.

::: moniker-end

::: moniker range="=msvc-150"

- A computer with Visual Studio 2017 installed. The installation must include the **Desktop development with C++** workload, and the **Visual C++ MFC for x86 and x64** optional component.

- The Microsoft Visual Studio Installer Projects extension. The extension is free for Visual Studio developers and adds the functionality of the setup and deployment project templates to Visual Studio.

- To test your deployment, another computer that doesn't have the Visual C++ libraries installed.

### <a name="install-mfc-2017"></a> To install C++ and MFC in Visual Studio 2017

If you have Visual Studio 2017 installed, but you don't have the C++ or MFC components installed, you can add them now.

1. Launch the Visual Studio Installer program from the Windows Start menu.

1. In Visual Studio Installer, choose the **Modify** button next to your installed version of Visual Studio 2017.

1. In the **Modifying** dialog, under the **Workloads** tab, scroll down to the **Desktop Development with C++** tile. If the tile checkbox isn't checked, check the checkbox.

1. To the side of the dialog under **Installation details**, expand the **Desktop Development with C++** node, then expand the **Optional** node. If it isn't already checked, add a check to the **Visual C++ MFC for x86 and x64** component.

1. Choose the **Modify** button to modify your Visual Studio installation. When installation completes, exit the Visual Studio installer.

### <a name="install-setup-2017"></a> To install the Installer Projects extension

1. In Visual Studio, select the **Tools** > **Extensions and Updates** menu item.

1. In the Extensions and Updates dialog, expand **Online** > **Visual Studio Marketplace** > **Tools** and select **Setup & Deployment**. Set the **Sort by** dropdown to **Most Downloads**.

   ![The Manage Extensions dialog showing the Visual Studio setup project extension.](media/vs2019-extension-dialog-installer-project.png "Name the client project")

1. In the list of extensions, select **Microsoft Visual Studio Installer Projects**. Choose the **Download** button.

1. A notification appears at the bottom of the dialog that tells you the modification will begin when all Microsoft Visual Studio windows are closed. Close the dialog.

1. Close Visual Studio. The download and install process begins. You may need to accept a User Account Control elevation prompt to allow the installer to change Visual Studio.

1. In the VSIX Installer dialog, choose **Modify** to install the extension. When the modifications complete, choose **Close** to dismiss the dialog.

::: moniker-end

::: moniker range="=msvc-140"

- A computer with Visual Studio installed. The installation must include the **Visual C++** programming language tools, and the **Microsoft Foundation Classes for C++** optional component.

- The Microsoft Visual Studio Installer Projects extension. The extension is free for Visual Studio developers and adds the functionality of the setup and deployment project templates to Visual Studio.

- To test your deployment, another computer that doesn't have the Visual C++ libraries installed.

### <a name="install-mfc-2015"></a> To install C++ and MFC in Visual Studio 2015

The Visual Studio 2015 setup program doesn't install Visual C++ and MFC by default. If you have Visual Studio 2015 installed, but you don't have the C++ or MFC components installed, you can add them now.

1. Open the Windows Start menu and enter **Add Remove Programs**. Open the control panel app from the results list.

1. Find your Microsoft Visual Studio 2015 installation in the list of installed programs. Find the **Modify** option for Microsoft Visual Studio 2015 and choose it to launch the Visual Studio setup program.

1. In the Visual Studio setup program, choose the **Modify** button.

1. Under the **Features** tab, expand **Programming Languages** > **Visual C++**. Select **Common Tools for Visual C++ 2015** and **Microsoft Foundation Classes for C++**. Choose the **Next** button to continue.

1. On the Selected Features page, choose the **UPDATE** button to install the required components. When the update is complete, choose **Close** to dismiss the setup program.

### <a name="install-setup-2015"></a> To install the Installer Projects extension

1. In Visual Studio, select the **Tools** > **Extensions and Updates** menu item.

1. In the Extensions and Updates dialog, expand **Online** > **Visual Studio Gallery** > **Tools** and select **Setup & Deployment**. Set the **Sort by** dropdown to **Most Downloads**.

1. In the list of extensions, select **Microsoft Visual Studio 2015 Installer Projects**. Choose the **Download** button.

1. When the download completes, close the Extensions and Updates dialog, then close Visual Studio.

1. Open the downloaded `VSI_bundle.exe` file. Choose **Install** in the Visual Studio setup program. You may need to accept a User Account Control elevation prompt to allow the installer to change Visual Studio. Choose **Close** when the installer completes to dismiss the dialog.

::: moniker-end

## Create the sample app project

To create a deployable application setup, first you'll create a sample app to deploy.

::: moniker range="=msvc-170"

### To create the app project in Visual Studio 2022

1. Launch Visual Studio. By default, it opens the **Create a New Project** dialog box. If Visual Studio is already open, on the menu bar, choose **File** > **New** > **Project** to open the **Create a New Project** dialog box.

   ![Screenshot of the Create a new project dialog showing an MFC App project template.](media/vs2019-mfc-app-new-project.png "New MFC app")

1. At the top of the dialog, type `MFC` in the search box and then choose **MFC App** from the results list. (If the MFC App template is missing, see [To install C++ and MFC in Visual Studio 2022](#install-mfc-2022).) Choose the **Next** button to continue.

1. In the **Configure your new project** page, enter a name for the project, such as *MyMFCApp*. Choose the **Create** button.

1. In the **MFC Application Wizard** dialog, choose **Finish** to create the default MFC app project. The wizard creates your MFC app and opens the project in Visual Studio.

1. In Visual Studio, change the active solution configuration to **Release** and the Active solution platform to **x86**. On the **Build** menu, select **Configuration Manager**. In the **Configuration Manager** dialog box, select **Release** from the **Active solution configuration** drop-down box. Choose **Close** to save your changes.

1. Select the **Build** > **Build Solution** menu item to build the solution. The setup project uses the output of this MFC application project.

::: moniker-end

::: moniker range="=msvc-160"

### To create the app project in Visual Studio 2019

1. On the menu bar, choose **File** > **New** > **Project** to open the **Create a New Project** dialog box.

   ![Screenshot of the Create a new project dialog showing an MFC App project template.](media/vs2019-mfc-app-new-project.png "New MFC app")

1. At the top of the dialog, type `MFC` in the search box and then choose **MFC App** from the results list. (If the MFC App template is missing, see [To install C++ and MFC in Visual Studio 2019](#install-mfc-2019).) Choose the **Next** button to continue.

1. In the **Configure your new project** page, enter a name for the project, such as *MyMFCApp*. Choose the **Create** button.

1. In the **MFC Application Wizard** dialog, choose **Finish** to create the default MFC app project. The wizard creates your MFC app and opens the project in Visual Studio.

1. In Visual Studio, change the active solution configuration to **Release**. On the **Build** menu, select **Configuration Manager**. In the **Configuration Manager** dialog box, select **Release** from the **Active solution configuration** drop-down box. Choose **Close** to save your changes.

1. Select the **Build** > **Build Solution** menu item to build the solution. The setup project uses the output of this MFC application project.

::: moniker-end

::: moniker range="=msvc-150"

### To create the app project in Visual Studio 2017

1. On the menu bar, choose **File** > **New** > **Project** to open the **New Project** dialog box.

1. In the **New Project** dialog tree view control, select **Installed** > **Visual C++** > **MFC/ATL**.

1. In the center pane, select the **MFC App** template. (If the MFC App template is missing, see [To install C++ and MFC in Visual Studio 2017](#install-mfc-2017).) Change the **Name** to *MyMFCApp*. Choose **OK** to launch the MFC Application wizard.

1. In the **MFC Application Wizard** dialog, choose **Finish** to create the default MFC app project. The wizard creates your MFC app and opens the project in Visual Studio.

1. In Visual Studio, change the active solution configuration to **Release**. On the **Build** menu, select **Configuration Manager**. In the **Configuration Manager** dialog box, select **Release** from the **Active solution configuration** drop-down box. Choose **Close** to save your changes.

1. Select the **Build** > **Build Solution** menu item to build the solution. The setup project uses the output of this MFC application project.

::: moniker-end

::: moniker range="=msvc-140"

### To create the app project in Visual Studio 2015

1. On the menu bar, choose **File** > **New** > **Project** to open the **New Project** dialog box.

1. In the **New Project** dialog tree view control, select **Installed** > **Templates** > **Visual C++** > **MFC**.

1. In the center pane, select the **MFC Application** template. (If the MFC Application template is missing, see [To install C++ and MFC in Visual Studio 2015](#install-mfc-2015).) Change the **Name** to *MyMFCApp*. Choose **OK** to launch the MFC Application wizard.

1. In the **MFC Application Wizard** dialog, choose **Finish** to create the default MFC app project. The wizard creates your MFC app and opens the project in Visual Studio.

1. In Visual Studio, change the active solution configuration to **Release**. On the **Build** menu, select **Configuration Manager**. In the **Configuration Manager** dialog box, select **Release** from the **Active solution configuration** drop-down box. Choose **Close** to save your changes.

1. Select the **Build** > **Build Solution** menu item to build the solution. The setup project uses the output of this MFC application project.

::: moniker-end

## Create the app setup project

Now that you've created a sample app to deploy, next you'll create a setup project to build the deployment package for your app.

::: moniker range="=msvc-170"

### To create the setup project in Visual Studio 2022

1. In Visual Studio, with your sample app solution loaded, choose **File** > **New** > **Project** to open the **Create a New Project** dialog box.

1. In the search box above the template list, enter *Setup*. In the resulting list of templates, choose **Setup Project**. (If the Setup Project template is missing, see [To install the Installer Projects extension](#install-setup-2022).)

1. Enter a name for the setup project in the **Name** box, such as *MyMFCAppSetup*. In the **Solution** drop-down list, select **Add to solution**. Choose the **OK** button to create the setup project. A **File System (MyMFCAppSetup)** tab opens in the editor window.

::: moniker-end

::: moniker range="=msvc-160"

### To create the setup project in Visual Studio 2019

1. In Visual Studio, with your sample app solution loaded, choose **File** > **New** > **Project** to open the **Create a New Project** dialog box.

1. In the search box above the template list, enter *Setup*. In the resulting list of templates, choose **Setup Project**. (If the Setup Project template is missing, see [To install the Installer Projects extension](#install-setup-2022).)

1. Enter a name for the setup project in the **Name** box, such as *MyMFCAppSetup*. In the **Solution** drop-down list, select **Add to solution**. Choose the **OK** button to create the setup project. A **File System (MyMFCAppSetup)** tab opens in the editor window.

::: moniker-end

::: moniker range="=msvc-150"

### To create the setup project in Visual Studio 2017

1. In Visual Studio, with your sample app solution loaded, choose **File** > **New** > **Project** to open the **New Project** dialog box.

1. In the **New Project** dialog box, select the **Installed** > **Other Project Types** > **Visual Studio Installer** node. In the center pane, select **Setup Project**. (If the Setup Project template is missing, see [To install the Installer Projects extension](#install-setup-2017).)

1. Enter a name for the setup project in the **Name** box, such as *MyMFCAppSetup*. In the **Solution** drop-down list, select **Add to solution**. Choose the **OK** button to create the setup project. A **File System (MyMFCAppSetup)** tab opens in the editor window.

::: moniker-end

::: moniker range="=msvc-140"

### To create the setup project in Visual Studio 2015

1. In Visual Studio, with your sample app solution loaded, choose **File** > **New** > **Project** to open the **New Project** dialog box.

1. In the **New Project** dialog box, select the **Installed** > **Templates** > **Other Project Types** > **Visual Studio Installer** node. In the center pane, select **Setup Project**. (If the Setup Project template is missing, see [To install the Installer Projects extension](#install-setup-2015).)

1. Enter a name for the setup project in the **Name** box, such as *MyMFCAppSetup*. In the **Solution** drop-down list, select **Add to solution**. Choose the **OK** button to create the setup project. A **File System (MyMFCAppSetup)** tab opens in the editor window.

::: moniker-end

## Add items to the setup project

The setup project lets you specify where the components of your app are installed when deployed on a target machine.

### To add app components to the setup project

1. In the **File System (MyMFCAppSetup)** editor window, select the **File System or Target Machine** > **Application Folder** node.

1. On the menu bar, select **Project** > **Add** > **Project Output** to open the **Add Project Output Group** dialog box.

1. In the dialog box, select **Primary Output** and choose **OK**. A new item named **Primary Output from ProjectName (Active)** appears in the File System window.

1. Right-click the **Application Folder** node and select **Add** > **Assembly** to open the **Select Component** dialog box. Select and add any required DLLs needed by the program. For more information about how to identify required libraries, see [Determining which DLLs to redistribute](determining-which-dlls-to-redistribute.md).

1. In the list of items in the **Application Folder**, right-click **Primary Output from ProjectName (Active)** and choose **Create Shortcut to Primary Output from ProjectName (Active)**. A new item named **Shortcut to Primary Output from ProjectName (Active)** appears. You may rename the shortcut item, then drag and drop the item into the **User's Programs Menu** node on the left side of the window. This item causes the setup to create a shortcut to the app in the Start menu.

1. On the menu bar, choose **Build** > **Configuration Manager** to open the Configuration Manager dialog.

1. In the Configuration Manager dialog, in the **Project** table under the **Build** column, check the box for the deployment project. Choose **Close** to save your changes and close the dialog.

1. On the menu bar, choose **Build** > **Build Solution** to build the MFC project and the deployment project.

1. In the solution folder, locate the `setup.exe` program that was built by the deployment project. You can copy this file (and the `.msi` file) to install the application and its required library files on another computer.

## Test your deployment

To test your deployment, copy the deployment files to a second computer that doesn't have the Visual C++ libraries installed. Run the setup program. If your app loads and runs normally, and you don't get a runtime error about missing libraries or components, then your deployment is successful.

For application testing, you can create a deployment setup program that installs a debug version of your app, along with debug libraries, on machines you control. Debug apps and debug libraries aren't licensed for redistribution, and can't be deployed to customer machines. For more information, see [Preparing a test machine to run a debug executable](../windows/preparing-a-test-machine-to-run-a-debug-executable.md).

## See also

[Deployment Examples](deployment-examples.md)
