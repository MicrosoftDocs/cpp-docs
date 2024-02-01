---
description: "Learn more about: Walkthrough: Deploying Your Program (C++)"
title: "Walkthrough: Deploying Your Program (C++)"
ms.date: "01/30/2024"
helpviewer_keywords: ["deploying applications [C++], walkthroughs", "setup projects [C++]", "program deployments [C++]", "projects [C++], setup", "projects [C++], deploying programs", "application deployment [C++], walkthroughs"]
---
# Walkthrough: Deploying Your Program (C++)

Now that you've created your application by completing the earlier related walkthroughs, the last step is to create an installer so that other users can install the program on their computers. For the installer, you add a new project to your existing solution. The output of this new project is a `setup.exe` file that can install your app on another computer.

The walkthrough shows how to use Windows Installer to deploy your application. You can also use ClickOnce to deploy an application. For more information, see [ClickOnce Deployment for Visual C++ Applications](../windows/clickonce-deployment-for-visual-cpp-applications.md). For more information about deployment in general, see [Deploying Applications, Services, and Components](/visualstudio/deployment/deploying-applications-services-and-components).

## Prerequisites

- The walkthrough assumes that you understand the fundamentals of the C++ language.
- It also assumes that you've completed the earlier related walkthroughs that are listed in [Using the Visual Studio IDE for C++ Desktop Development](using-the-visual-studio-ide-for-cpp-desktop-development.md).
- The walkthrough can't be completed in Express editions of Visual Studio.
- The walkthrough can't be completed without the *Microsoft Visual Studio Installer Project* extension. Instructions for how to install it follow.

## Install the Visual Studio setup and deployment projects template

The steps in this section vary depending on which version of Visual Studio you have installed. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. The control near the top of the table of contents on this page.

<!-- markdownlint-disable MD034 -->

::: moniker range=">=msvc-160"

If you haven't already done so, download the *Microsoft Visual Studio Installer Projects* extension. The extension is free for Visual Studio developers and adds the setup and deployment project templates to Visual Studio. 

1. When you're connected to the Internet, from the main menu in Visual Studio choose **Extensions** > **Manage Extensions**. The **Manage Extensions** dialog appears.
1. Select the **Online** tab and type *Microsoft Visual Studio Installer Projects* in the search box. Hit **Enter**, select **Microsoft Visual Studio Installer Projects**, and click **Download**.
1. Choose to run and install the extension, then restart Visual Studio.

### Create the setup project

1. From the Visual Studio main menu, choose **File** > **Recent Projects and Solutions**, and then choose to reopen your project.

1. From the main menu, choose **File** > **New** > **Project** to open the **Create a New Project** dialog box. In the search box, type `Setup` and from the results choose **Setup Project** and then **Next**.

1. Enter a name for the setup project in the **Name** box, such as `Setup`.

1. In the **Solution** drop-down list, select **Add to solution**. Choose **Create** to create the setup project. A **File System** tab opens in the editor window.

1. Right-click the **Application Folder** node in the left pane and select **Add** > **Project Output** to open the **Add Project Output Group** dialog box.

1. In the dialog box, select **Primary Output** and click **OK**. (You won't see Primary Output if you forgot to change the **Solution** dropdown to **Add to solution** in the earlier step). A new item named **Primary Output from Game (Active)** appears.

1. Select **Primary Output from Game (Active)**, right-click and choose **Create Shortcut to Primary Output from Game (Active)**. A new item named **Shortcut to Primary Output from Game (Active)** appears.

1. Rename the shortcut item to *Game*, then drag and drop the item into the **User's Programs Menu** node on the left side of the window.

1. In **Solution Explorer**, select the setup project and choose **View** > **Properties Window** to open the **Properties** window for the setup project.

1. Specify the other details in the property window the way you want them to appear in the installer.  For example, use *Contoso* for **Manufacturer**, *Game Installer* for **Product Name**, and `https://www.contoso.com` for **SupportUrl**.

### Build the setup project

1. From the main menu, choose **Build** > **Configuration Manager**.

1. In the **Project contexts** table, under the **Build** column, check the box for the setup project, **Setup**. Click **Close**.

1. From the menu bar, choose **Build** > **Build Solution** to build the Game project and the installer project.

### Run the setup project

1. In the solution explorer, press the button to **Switch between solutions and available views** to switch to folder view.
1. Navigate to the setup folder and the **Debug** folder under that. You can run the `setup.exe` program there, which was built from the setup project, to install the Game application on your computer. You can copy this file (and Setup.msi) to install the application and its required library files on another computer.

::: moniker-end

::: moniker range="<=msvc-150"

### To install the setup and deployment project template for Visual Studio 2017 and earlier

1. When you're connected to the Internet, in Visual Studio, choose **Tools** > **Extensions and Updates**.

1. Under **Extensions and Updates**, select the **Online** tab and type *Microsoft Visual Studio Installer Projects* in the search box. Hit **Enter**, select **Microsoft Visual Studio \<version> Installer Projects**, and click **Download**.

1. Choose to install the extension, then restart Visual Studio.

1. On the menu bar, choose **File** > **Recent Projects and Solutions**, and then choose the **Game** solution to reopen it.

### To create a setup project and install your program

1. Change the active solution configuration to Release. On the menu bar, choose **Build** > **Configuration Manager**. In the **Configuration Manager** dialog box, on the **Active solution configuration** drop-down list, select **Release**. Choose the **Close** button to save the configuration.

1. On the menu bar, choose **File** > **New** > **Project** to open the **New Project** dialog box.

1. In the left pane of the dialog box, expand the **Installed** > **Other Project Types** nodes, and then select **Visual Studio Installer**. In the center pane, select **Setup Project**.

1. Enter a name for the setup project in the **Name** box. For this example, enter *Game Installer*.

1. In the **Solution** drop-down list, select **Add to solution**. Choose the **OK** button to create the setup project. A **File Assistant (Game Installer)** tab opens in the editor window.

1. Right-click the **Application Folder** node and select **Add** > **Project Output** to open the **Add Project Output Group** dialog box.

1. In the dialog box, select **Primary Output** and click **OK**. A new item named **Primary Output from Game (Active)** appears.

1. Select the item **Primary Output from Game (Active)**, right-click and choose **Create Shortcut to Primary Output from Game (Active)**. A new item named **Shortcut to Primary Output from Game (Active)** appears.

1. Rename the shortcut item to *Game*, then drag and drop the item into the **User's Programs Menu** node on the left side of the window.

1. In **Solution Explorer**, select the **Game Installer** project and choose **View** > **Properties Window** or hit **F4** to open the **Properties** window.

1. Specify the other details the way you want them to appear in the installer.  For example, use *Contoso* for **Manufacturer**, *Game Installer* for **Product Name**, and *https\://www.contoso.com* for **SupportUrl**.

1. On the menu bar, choose **Build** > **Configuration Manager**. In the **Project** table, under the **Build** column, check the box for the **Setup** project. Click **Close**.

1. On the menu bar, choose **Build** > **Build Solution** to build the Game project and the Game Installer project.

1. In the solution folder, locate the setup.exe program that was built from the Game Installer project, and then run it to install the Game application on your computer. You can copy this file (and GameInstaller.msi) to install the application and its required library files on another computer.

::: moniker-end

## Next Steps

**Previous:** [Walkthrough: Debugging a Project (C++)](walkthrough-debugging-a-project-cpp.md)

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Projects and build systems](../build/projects-and-build-systems-cpp.md)<br/>
[Deploying Desktop Applications](../windows/deploying-native-desktop-applications-visual-cpp.md)<br/>
