---
description: "Learn more about: Import an Xcode project"
title: "Import an Xcode project"
ms.date: "10/17/2019"
ms.assetid: aa4b8161-d98f-4a1a-9db3-520133bfc82f
---
# Import an Xcode project

The Visual Studio tools for cross-platform mobile development with C++ include support for moving your Xcode projects into Visual Studio, where you can create cross-platform libraries and share code with other projects. The Import from Xcode wizard simplifies the process of importing projects and splitting out the C++ code in your Xcode targets for use as a static library or shared code project. You can manage your iOS-specific code in Visual Studio and still use Xcode to do storyboards and builds. For information on how to easily move code back and forth between Visual Studio and Xcode, see [Sync changes between Xcode and Visual Studio](sync-changes-between-xcode-and-visual-studio.md).

## Use the Import From Xcode wizard

This article shows you how to move an Xcode project into Visual Studio, to take advantage of code sharing and cross-platform solutions. As a prerequisite, you must pair your Mac to Visual Studio to import, export, and build your project. For instructions on how to set up pairing, see [Install and configure tools to build using iOS](../cross-platform/install-and-configure-tools-to-build-using-ios.md). You must also either share your Xcode project over the network, or move it to your Visual Studio computer, to use the Import from Xcode wizard.

### Import from Xcode

1. On the **File** menu, choose **New**, **Import**, **Import from Xcode**. This command starts the **Import from Xcode** wizard dialog.

   ![Choose the Xcode target project to import](../cross-platform/media/cppmdd-u2-importxcode-choose.png "Choose the Xcode target project to import")

1. In the **Choose a project** pane, choose the Browse button to select an Xcode *.pbxproj* file. Navigate to the project file in the **Select Xcode project file** dialog, and then choose **Open**.

   ![Select a project file in the Select Xcode project file dialog](../cross-platform/media/cppmdd-u2-importxcode-browse.png "Select a project file in the Select Xcode project file dialog")

   In the Import from Xcode wizard, choose **Next**.

1. In the **Destination targets** pane, choose the targets from the Xcode project to import into Visual Studio projects. Xcode targets are similar to Visual Studio projects; most are a collection of code and resources that produce a binary. The Import from Xcode wizard only allows import of targets that produce a binary, but not a static library, as destination targets. Xcode static library targets are the subject of the next step.

   ![Import from Xcode wizard Destination Targets pane](../cross-platform/media/cppmdd-u2-importxcode-destination.jpg "Import from Xcode wizard Destination Targets pane")

   For each target selected in **Targets to import**, the wizard automatically detects C++ code files that can be split into a separate static library project, and puts them in the **C++ project items** section. Other code and resources are left in the **Xcode project items** section. These become separate static library and application projects in Visual Studio when the wizard completes the import process. By default, unit test and framework targets aren't split into separate projects by the wizard.

   To change which files are in each project, use the up and down buttons. When you're satisfied with the files in each project, choose **Next** to continue.

1. In the **Library targets** pane, choose which static library targets from the Xcode project to import into Visual Studio projects. In this pane, you can choose which files to place in a Shared Code project, and which to place in a static library project. In each of targets in the **Targets to import** list, you can control which files to place in the **Shared Code project items** and the **Static Library project items** by using the up and down buttons.

   ![Import from Xcode Library Targets pane](../cross-platform/media/cppmdd-u2-importxcode-library.jpg "Import from Xcode Library Targets pane")

   A Shared Code project is a way of sharing a set of source files between projects in Visual Studio. The code is built as part of the project that includes it, not as a project of its own. Projects that include the shared code may have different architectures and configurations. A shared code project is the best way to provide a single project that contains code that may be built for many kinds of platforms.

   When you're satisfied with the files in each project, choose **Next** to continue.

1. Use the **Global Properties** pane to set a framework search path and an include header search path for all iOS projects in Visual Studio. Visual Studio uses these paths for source code browsing and for IntelliSense. These global paths are useful when you create iOS projects that use a common set of headers and frameworks.

   ![Import from Xcode Global Properties pane](../cross-platform/media/cppmdd-u2-importxcode-global.jpg "Import from Xcode Global Properties pane")

   These global paths can also be set in Visual Studio in the **Options** dialog. To find them, on the **Tools** menu, select **Options**. In the **Options** dialog, expand **Cross Platform** > **C++** > **iOS** > **Global Properties**.

   Choose **Next** to continue.

1. The **Frameworks** pane is used to configure the paths used by Visual Studio for browsing and IntelliSense for your project. The paths must be accessible to Visual Studio for each framework referenced by your Xcode project. The wizard checks the framework references in the Xcode projects and displays whether Visual Studio can find the framework. Any path you have already set up in the Global Properties should be discovered by Visual Studio. The exceptions are listed in the Frameworks list. For each framework listed with an X, provide a PC accessible path for Visual Studio to find the framework. You can use the browse button **...** to use a **Select Folder** dialog to find the path. The framework path can be either to a local copy, or to a network-accessible share on your Mac.

   ![Import from Xcode Frameworks pane](../cross-platform/media/cppmdd-u2-importxcode-frameworks.jpg "Import from Xcode Frameworks pane")

   Choose **Next** to continue.

1. The **Project Settings** pane allows you to change the framework and include header search path settings for each project the wizard creates. Use this pane to set project-specific paths that differ from the global settings.

   To set a path for a specific project, in the **Destination project** drop-down, select the project file. Then, set the values in the **Framework Search Path** and **Include Header Search Path** controls. You can use the browse button **...** next to each control to use a **Select Folder** dialog to find the path.

   ![Import from Xcode Projects pane](../cross-platform/media/cppmdd-u2-importxcode-projects.jpg "Import from Xcode Projects pane")

   If no remote Mac has been paired with this PC in Visual Studio, the **Configure a Remote Machine** link is shown. For instructions on how to set up pairing, see [Install and configure tools to build using iOS](../cross-platform/install-and-configure-tools-to-build-using-ios.md).

   To import the Xcode project by using the wizard settings, choose **Import**.

   The Import from Xcode wizard creates projects in Visual Studio that correspond to the selected Xcode project targets. The code that can be shared with other C++ projects is split into separate Shared Code and static library projects. The remaining code is placed in iOS library and application projects that can be built remotely by Visual Studio. For more information about moving code between Visual Studio and Xcode, see [Sync changes between Xcode and Visual Studio](../cross-platform/sync-changes-between-xcode-and-visual-studio.md).

## See also

- [Install cross-platform mobile development with C++](../cross-platform/install-visual-cpp-for-cross-platform-mobile-development.md)
