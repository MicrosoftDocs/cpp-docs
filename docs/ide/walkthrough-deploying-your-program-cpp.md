---
description: "Learn more about: Walkthrough: Deploying Your Program (C++)"
title: "Walkthrough: Deploying Your Program (C++)"
ms.date: "05/14/2019"
helpviewer_keywords: ["deploying applications [C++], walkthroughs", "setup projects [C++]", "program deployments [C++]", "projects [C++], setup", "projects [C++], deploying programs", "application deployment [C++], walkthroughs"]
ms.assetid: 79e6cc4e-dced-419d-aaf7-d62d1367603f
---
# Walkthrough: Deploying Your Program (C++)

Now that you've created your application by completing the earlier related walkthroughs, the last step is to create an installer so that other users can install the program on their computers. For the installer, you'll add a new project to your existing solution. The output of this new project is a setup.exe file that will install your app on another computer.

The walkthrough shows how to use Windows Installer to deploy your application. You can also use ClickOnce to deploy an application. For more information, see [ClickOnce Deployment for Visual C++ Applications](../windows/clickonce-deployment-for-visual-cpp-applications.md). For more information about deployment in general, see [Deploying Applications, Services, and Components](/visualstudio/deployment/deploying-applications-services-and-components).

## Prerequisites

- The walkthrough assumes that you understand the fundamentals of the C++ language.

- It also assumes that you've completed the earlier related walkthroughs that are listed in [Using the Visual Studio IDE for C++ Desktop Development](using-the-visual-studio-ide-for-cpp-desktop-development.md).

- The walkthrough can't be completed in Express editions of Visual Studio.

## Install the Visual Studio setup and deployment project template

The steps in this section vary depending on which version of Visual Studio you have installed. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. It's found at the top of the table of contents on this page.

<!-- markdownlint-disable MD034 -->

::: moniker range="msvc-160"

### To install the setup and deployment project template for Visual Studio 2019

1. If you haven't already done so, download the Microsoft Visual Studio Installer Projects extension. The extension is free for Visual Studio developers and adds the functionality of the setup and deployment project templates to Visual Studio. When you're connected to the Internet, in Visual Studio, choose **Extensions** > **Manage Extensions**. Under the **Extensions and Updates** dialog, select the **Online** tab and type *Microsoft Visual Studio Installer Projects* in the search box. Hit **Enter**, select **Microsoft Visual Studio \<version> Installer Projects**, and click **Download**. Choose to run and install the extension, then restart Visual Studio.

1. On the Visual Studio menu bar, choose **File** > **Recent Projects and Solutions**, and then choose to reopen your project.

1. On the menu bar, choose **File** > **New** > **Project** to open the **Create a New Project** dialog box. In the search box, type "Setup" and from the results list choose **Setup Project**.

1. Enter a name for the setup project in the **Name** box. In the **Solution** drop-down list, select **Add to solution**. Choose the **OK** button to create the setup project. A **File Assistant (ProjectName)** tab opens in the editor window.

1. Right-click the **Application Folder** node and select **Add** > **Project Output** to open the **Add Project Output Group** dialog box.

1. In the dialog box, select **Primary Output** and click **OK**. A new item named **Primary Output from Game (Active)** appears.

1. Select the item **Primary Output from Game (Active)**, right-click and choose **Create Shortcut to Primary Output from Game (Active)**. A new item named **Shortcut to Primary Output from Game (Active)** appears.

1. Rename the shortcut item to *Game*, then drag and drop the item into the **User's Programs Menu** node on the left side of the window.

1. In **Solution Explorer**, select the **Game Installer** project and choose **View** > **Properties Window** or hit **F4** to open the **Properties** window.

1. Specify additional details as you want them to appear in the installer.  For example, use *Contoso* for **Manufacturer**, *Game Installer* for **Product Name**, and *https\://www.contoso.com* for **SupportUrl**.

1. On the menu bar, choose **Build** > **Configuration Manager**. In the **Project** table, under the **Build** column, check the box for **Game Installer**. Click **Close**.

1. On the menu bar, choose **Build** > **Build Solution** to build the Game project and the Game Installer project.

1. In the solution folder, locate the setup.exe program that was built from the Game Installer project, and then run it to install the Game application on your computer. You can copy this file (and GameInstaller.msi) to install the application and its required library files on another computer.

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

1. Enter a name for the setup project in the **Name** box. For this example, enter *Game Installer*. In the **Solution** drop-down list, select **Add to solution**. Choose the **OK** button to create the setup project. A **File Assistant (Game Installer)** tab opens in the editor window.

1. Right-click the **Application Folder** node and select **Add** > **Project Output** to open the **Add Project Output Group** dialog box.

1. In the dialog box, select **Primary Output** and click **OK**. A new item named **Primary Output from Game (Active)** appears.

1. Select the item **Primary Output from Game (Active)**, right-click and choose **Create Shortcut to Primary Output from Game (Active)**. A new item named **Shortcut to Primary Output from Game (Active)** appears.

1. Rename the shortcut item to *Game*, then drag and drop the item into the **User's Programs Menu** node on the left side of the window.

1. In **Solution Explorer**, select the **Game Installer** project and choose **View** > **Properties Window** or hit **F4** to open the **Properties** window.

1. Specify additional details as you want them to appear in the installer.  For example, use *Contoso* for **Manufacturer**, *Game Installer* for **Product Name**, and *https\://www.contoso.com* for **SupportUrl**.

1. On the menu bar, choose **Build** > **Configuration Manager**. In the **Project** table, under the **Build** column, check the box for **Game Installer**. Click **Close**.

1. On the menu bar, choose **Build** > **Build Solution** to build the Game project and the Game Installer project.

1. In the solution folder, locate the setup.exe program that was built from the Game Installer project, and then run it to install the Game application on your computer. You can copy this file (and GameInstaller.msi) to install the application and its required library files on another computer.

::: moniker-end

## Next Steps

**Previous:** [Walkthrough: Debugging a Project (C++)](walkthrough-debugging-a-project-cpp.md)

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Projects and build systems](../build/projects-and-build-systems-cpp.md)<br/>
[Deploying Desktop Applications](../windows/deploying-native-desktop-applications-visual-cpp.md)<br/>
