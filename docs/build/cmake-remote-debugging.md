---
title: "Tutorial: Debug a CMake project on a remote Windows machine"
ms.date: "12/2/2020"
ms.topic: tutorial
description: "How to use Visual Studio C++ on Windows to create and build a CMake project. You'll then deploy and debug it on a remote Windows machine."
---

# Tutorial: Debug a CMake project on a remote Windows machine

This tutorial shows how to use Visual Studio C++ on Windows to create and build a CMake project that you can deploy and debug on a remote Windows machine. This tutorial is specific to ARM64, but the steps can be generalized for other architectures.

The default debugging experience for ARM64 is remote debugging on Windows. Debugging an ARM64 CMake project without configuring your debug settings as shown in this tutorial will result in an error that Visual Studio can't find the remote machine.

In this tutorial, you'll learn how to:

> [!div class="checklist"]
>
> * create a CMake project
> * configure a CMake project to build for ARM64
> * configure a CMake project to run on a remote ARM64 Windows machine
> * debug a CMake project running on a remote ARM64 Windows machine

## Prerequisites

### On the host machine

To set up Visual Studio for cross-platform C++ development, install the tools that allow you to build for the target architecture. For this tutorial, install the ARM64 build tools:

1. Run the Visual Studio Installer. If you haven't installed Visual Studio yet, see [Install Visual Studio](https://docs.microsoft.com/visualstudio/install/install-visual-studio#:~:text=Install%20Visual%20Studio%201%20Make%20sure%20your%20computer,...%204%20Choose%20workloads.%20...%20More%20items...%20)
1. On the Visual Studio Installer home screen, choose **Modify**. (Look under **More** if you don't see it).
1. From the choices at the top, choose **Individual components**.
1. Scroll down to the **Compilers, build tools, and runtimes** section.
1. Ensure that the following are selected:
    - **C++ CMake tools for Windows**
    - **MSVC v142 - VS 2019 C++ ARM64 build tools (v14.28)** (choose the latest version)
1. Select **Modify** to install the tools.

### On the remote machine

1. Install the remote tools on the remote machine. For this tutorial, install the ARM64 tools as described in [Download and Install the remote tools](https://docs.microsoft.com/visualstudio/debugger/remote-debugging-cpp?%23download-and-install-the-remote-tools#download-and-install-the-remote-tools).
1. Install a remote debugger on the remote machine. For this tutorial, follow the directions in [set up the remote debugger](https://docs.microsoft.com/visualstudio/debugger/remote-debugging-cpp?%23download-and-install-the-remote-tools#BKMK_setup) on the remote  Windows machine.

## Create a CMake project

On the Windows host machine:
1. Run Visual Studio
1. From the main menu, select **Create new project** > **CMake Project** > **Next**
1. Give the project a name and choose a location. Then select **Create**.

Give Visual Studio a few moments to create the project and populate the **Solution Explorer**.

## Change the configuration to target ARM64

Because you're targeting an ARM64 Windows machine, you need to use the ARM64 build tools. To select the ARM64 build tools, select the Visual Studio **Configuration** dropdown and select **Manage Configurations...**

![Choose Manage Configurations in the Visual Studio configurations drop-down](media/vs2019-cmake-manage-configurations.png)

Change the **Configuration name** to **arm64-debug**. This is a unique, friendly name to make it easier for you to identify these settings in the **Configuration** dropdown.

Select the **Toolset** dropdown. From the list of build tools, choose **msvc_arm64_x64**. Your settings should now look something like this:

![CMake settings dialog](media/cmake-settings-editor2.png)

> [!Note]
> In the **Toolset** dropdown, **msvc_arm64** uses the 32-bit host tools to cross-compile ARM64, whereas **msvc_arm64 x64** uses the 64-bit host tools to cross-compile for ARM64--which is what you will do in this tutorial.

Save the `CMakeSettings.json` file and ensure that your **arm64-debug** configuration is selected in the configuration dropdown:

![Ensure that arm64-debug is selected in the Visual Studio configurations drop-down](media/vs2019-cmake-manage-configurations-arm.png) 

## Add a debug configuration file

Next, add configuration information that tells Visual Studio where to find your remote machine, along with other configuration details.

Change the **Solution Explorer** view to targets view by selecting the **Switch Views** button:

![Solution explorer switch view button](media/solution-explorer-switch-view.png)

Then double-click **CMake Targets View**. The **CMake Targets View** appears.

In the **Solution Explorer**, open the project folder, **CMakeProject3 Project**, this example, and then right-click the executable and select **Add Debug Configuration**:

![Select add debug configuration](media/cmake-targets-add-debug-configuration.png)

This creates a `launch.vs.json` file in your project. Open it and change the following entries to enable remote debugging:

- `projectTarget` : this is set for you if you added the debug configuration file from the **Solution Explorer** targets view.
- `remoteMachineName` : set to the IP address of the remote ARM64 machine, or its machine name.

For more information about these, and other `launch.vs.json` settings, see [launch.vs.json schema reference](launch-vs-schema-reference-cpp.md).

> [!Note]
>  If you want to use the folder view instead of the targets view in **Solution Explorer**, right-click the `CMakeLists.txt` file and select **Add Debug Configuration**. This experience differs from adding the debug configuration from the targets view in the following ways:
> - You'll be asked to select a debugger (select  **C/C++ Remote Windows Debug** in this case).
> - Visual Studio will provide less configuration template information in the `launch.vs.json` file that you'll need to add yourself, such as the `remoteMachineName` and `projectTarget` entries. When you add the configuration from the targets view, you only need to specify `remoteMachineName`.
> - For the `projectTarget` setting value, check the startup item dropdown to get the unique name of your target, for example, `CMakeProject3.exe', in this tutorial.

## Start the remote debugger monitor on the remote Windows machine

Before you run your CMake project, ensure that the Visual Studio 2019 remote debugger is running on the remote Windows machine.  You may need to change the remote debugger options depending on your authentication situation.

From the Visual Studio Remote Debugger menu bar, select **Tools** > **Options**. Then set authentication to match how your environment is set up:

![Remote debugger authentication options](media/remote-debugger-options.png)

If you choose **No Authentication**, update the `launch.vs.json` file in your project by adding **"windowsAuthenticationType": "Remote Windows with No authentication"** to the `configurations` section `launch.vs.json`. Otherwise, `"windowsAuthenticationType"` defaults to `"Remote Windows authentication"` and doesn't need to be explicitly stated. For example:

``` XAML
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
    {
        "type": "remoteWindows",
        "windowsAuthenticationType": "Remote Windows with No authentication"
        "name": "CMakeLists.txt",
        "project": "CMakeLists.txt",
        "projectTarget": "CMakeProject3.exe",
        "remoteMachineName": "<ip address goes here>",
        "cwd": "${debugInfo.defaultWorkingDirectory}",
        "program": "${debugInfo.fullTargetPath}",
        "deploy": [],
        "args": [],
        "env": {}
    },
    {
      "type": "default",
      "project": "CMakeLists.txt",
      "projectTarget": "CMakeProject3.exe",
      "name": "CMakeProject3.exe"
    }
  ]
}
```

## Debug the app

On the host machine, in the Visual Studio **Solution Explorer**, open the CPP file for your CMake project. If you're still in **CMake Targets View**, you'll need to open the **(executable)** node to see it.

The default CPP file is a simple hello world console app. Set a breakpoint on `return 0;` so that the program doesn't quickly run and close on the remote machine.

On the Visual Studio toolbar, use the **Startup Item** dropdown to select the name you specified for `"name"` in your `launch.vs.json` file:

![Example startup item dropdown with CMakeProject3.exe selected](media/startup-item.png)

To start debugging, on the Visual Studio toolbar choose **Debug** > **Start Debugging** (or press **F5**).

If it doesn't start, ensure that the following are set correctly in the `launch.vs.json` file:
- `"remoteMachineName"` should be set to the IP address, or machine name, of the remote ARM64 Windows machine.
- `"name"` should match the selection in the Visual Studio startup item dropdown.
- `"projectTarget"` should match the name of the CMake target you want to debug.
- `"type"` should be `"remoteWindows"`
- If the authentication type on the remote debugger is set to **No Authentication**, you should have `"windowsAuthenticationType": "Remote Windows with No authentication"` set in the `launch.vs.json` file.

After the project builds, the app should appear on the remote ARM64 Windows machine:

![Hello CMake console app running on remote Windows ARM64 machine](media/remote-cmake-app.png)

## What you learned

In this tutorial, you created a CMake project, configured it to build for Windows on ARM64, and debugged it on a remote ARM64 Windows machine.

## Next steps

Learn more about configuring and debugging CMake projects in Visual Studio:

> [!div class="nextstepaction"]
> [CMake Projects in Visual Studio](cmake-projects-in-visual-studio.md)\
> [Customize CMake build settings](customize-cmake-settings.md)\
> [Configure CMake debugging sessions](configure-cmake-debugging-sessions.md)\
> [CMake predefined configuration reference](cmake-predefined-configuration-reference.md)\
[launch.vs.json schema reference](launch-vs-schema-reference-cpp.md)
