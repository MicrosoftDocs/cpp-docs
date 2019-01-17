---
title: Create C++ cross-platform projects in Visual Studio
description: This tutorial shows how to set up, compile, and debug a C++ open-source CMake project in Visual Studio that targets both Linux and Windows.
author: mikeblome
ms.service: #Required; service per approved list.
ms.topic: tutorial
ms.date: 01/21/2019
ms.author: mblome
---

# Tutorial: Create C++ cross-platform projects in Visual Studio 

You can use Visual Studio for C++ cross platform development when using CMake without having to create or generate Visual Studio projects. When you open a source file folder that contains a CMakeLists.txt file, Visual Studio recognizes that CMake is being used and configure IntelliSense and builds automatically. You can quickly be editing, building and debugging your code locally on Windows, and then switch your configuration to do the same on Linux all from within Visual Studio.

This tutorial uses the Bullet Physics SDK on GitHub. This library provides collision detection and physics simulations for a variety of different applications. It includes sample executable programs which compile and run without having to write additional code. This tutorial does not modify any of source code or build scripts.

In this tutorial, you learn how to:

> [!div class="checklist"]
> * clone an open source CMake project from GitHub
> * open the project in Visual Studio, 
> * edit, build and debug on Windows with no changes to the project
> * add a connection to a Linux machine
> * build and debug the project on the Linux machine.

## Prerequisites

- Set up Visual Studio for Cross Platform C++ Development
    - First you need to have [Visual Studio installed](https://visualstudio.microsoft.com/vs/). Next, confirm that you have the **Desktop development with C++** and **Linux development with C++ workloads** installed. This minimal install is only 3GB, depending on your download speed installation should not take more than 10 minutes.
- Set up a Linux machine for Cross Platform C++ Development
    - Visual Studio does not require any specific distribution of Linux. The OS can be running on a physical machine, in a VM, the cloud, or the Windows Subsystem for Linux (WSL). However, for this tutorial, WSL is not recommended because it is intended primarily for command line operations.
    -  The tools that Visual Studio requires on the Linux machine are: C++ compilers, GDB, ssh, and zip. On Debian based systems you can install these dependencies as follows.
    
    ```cmd
    - sudo apt install -y openssh-server build-essential gdb zip
    ```
    - Visual Studio requires that the Linux machine have a recent version of CMake that has server mode enabled (at least 3.8). Microsoft produces a universal build of CMake that you can install on any Linux distro. We recommend using this build to ensure that you have the latest features. You can get the CMake binaries from here. Go to that page and download the version that matches your system architecture on your Linux machine, then mark it as an executable:
    
    ```cmd
    wget <path to binary>
    chmod +x cmake-3.11.18033000-MSVC_2-Linux-x86_64.sh
    ```
    - You can see the options for running the script with `-–help`. We recommend that you use the `–prefix` option to specify installing in the **/usr/local** path because that is the default location where Visual Studio looks for CMake. The following example shows the Linux-x86_64 script. Change that as needed if you are using a different target platform. 
    
    ```cmd
    sudo ./cmake-3.11.18033000-MSVC_2-Linux-x86_64.sh --skip-license --prefix=/usr/local
    ```
- Git for windows: You will need git installed on your Windows machine. 

## Clone and open the bullet3 repo

To start, clone the bullet3 repository from GitHub on the machine where you have Visual Studio installed. 

```cmd

git clone https://github.com/bulletphysics/bullet3.git

```

1. From the Visual Studio main menu, choose **File > Open > CMake** and navigate to the CMakeLiasts.txt file in the root of the bullet3 repo that you just downloaded.

![Visual Studio menu for File > Open > CMake](media/cmake-open-cmake.png)

As soon as you open the folder your folder structure will be visible in the Solution Explorer.

![Visual Studio Solution Explorer Folder View](media/cmake-bullet3-solution-explorer.png)

This view shows you exactly what is on disk, not a logical or filtered view. By default, it does not show hidden files. 

1. To see all the files in the folder, select the **Show all files** button.

![Visual Studio Solution Explorer Show All FIles button](media/cmake-bullet3-show-all-files.png)

## Use targets view

When you open a folder that uses CMake, Visual Studio automatically generates the CMake cache. This operation might take a few moments, depending on the size of your project. The status is displayed in the output window. When the operation is complete, it says “Target info extraction done”.

![Visual Studio Output window showing output from CMake](media/cmake-bullet3-output-window.png)

After this completes, IntelliSense is configured, the project can build, and you can debug the application. Visual Studio also now understands the build targets that the CMake project produces. This enables an alternate CMake Targets View that provides a logical view of the solution. Use the Solutions and Folders button in the Solution Explorer to switch to this view.

![Solutions and Folders button in the Solution Explorer to show CMake targets vie](media/cmake-bullet3-show-targets.png)

Here is what that view looks like for the Bullet SDK.

![Solution Explorer CMake targets view](media/cmake-bullet3-targets-view.png)

Targets view provides a more intuitive view of what is in this source base. You can see some targets are libraries and others are executables. You can expand these nodes and see the source that comprises them independent of how it is represented on disk.

## Set a breakpoint, build, and run

In this step, we'll debug an example program that demonstrates the Bullet Physics library.
  
1. In Solution Explorer, select AppBasicExampleGui and expand it. 
2. Open the file `BasicExample.cpp`. 
3. Set a breakpoint that will be hit when you click in the running application. The click event is handled in a method within a helper class. To quickly get there 
    a. select CommonRigidBodyBase that the struct BasicExample is derived from around line 30.
    b.  Right click and choose Go to Definition. Now you are in the header CommonRigidBodyBase.h. 
    c. In the browser view above your source you should see that you are in the CommonRigidBodyBase. To the right you can select members within to examine, drop that selection down and select mouseButtonCallback, which will take you to the definition of that function in the header.

![Visual Studio member list toolbar](media/cmake-bullet3-member-list-toolbar.png)

3. Place a breakpoint on the first line within this function. This will be hit when you click a mouse button within the window of the application when launched under the Visual Studio debugger.

4. To launch the application, select the launch dropdown with the play icon that says “Select Startup Item” in the toolbar.

![Visual Studio toolbar launch drop down for Select Startup Item](media/cmake-bullet3-launch-button.png)

5. In the dropdown select AppBasicExampleGui.exe. Now press the launch button. This will cause the project to build our application and necessary dependencies, then launch it with the Visual Studio debugger attached. After a few moments, the application will appear.

![Visual Studio debugging a Windows application](media/cmake-bullet3-launched.png)

6. Move your mouse into the application window, click a button, and the breakpoint will be triggered. This pauses execution of your program, brings Visual Studio back to the foreground, and you will be at your breakpoint. You will be able to inspect the application variables, objects, threads, memory, and step through your code interactively using Visual Studio. You can click continue to let the application resume and exit it normally or cease execution within Visual Studio using the stop button.

What you have seen so far is by simply cloning a C++ repo from GitHub you can open the folder with Visual Studio and get an experience that provides IntelliSense, a file view, a logical view based on the build targets, source navigation, build, and debugging with no special configuration or Visual Studio specific project files. If you were to make changes to the source you would get a diff view from the upstream project, make commits, and push them back without leaving Visual Studio. There’s more though. Let’s use this project with Linux.


## Add a Linux configuration

So far, you have been using the default x64-Debug configuration for our CMake project. Configurations are how Visual Studio understands what platform target it is going to use for CMake. The default configuration is not represented on disk. When you explicitly add a configuration a file called `CMakeSettings.json` is created that has parameters Visual Studio uses to control how CMake is run, as well as when it is run on a remote target like Linux. To add a new configuration, select the Configuration drop down in the toolbar and select **Manage Configurations…**

![Manage Configuration dropdown](media/cmake-bullet3-manage-configurations.png)

The Add Configuration to CMakeSettings dialog will appear.

![Add Configuration to CMakeSettings dialog](media/cmake-bullet3-add-configuration-x64-debug.png)

Here you see Visual Studio has preconfigured options for many of the platforms Visual Studio can be configured to use with CMake. If you want to continue to use the default x64-Debug configuration that should be the first one you add. You want that for this tutorial so can switch back and forth between Windows and Linux configurations. Select x64-Debug and click Select. This creates the CMakeSettings.json file with a configuration for “x64-Debug” and switches Visual Studio to use that configuration instead of the default. This happens very quickly as the provided settings are the same as the default. You will see the configuration drop down no longer says “(default)” as part of the name. You can use whatever names you like for your configurations by changing the name parameter in the CMakeSettings.json.

Now that you have a configuration specified, there is a CMakeSettings.json file in the project where you can adjust values. To add a Linux configuration right click the CMakeSettings.json file in the Solution Explorer view and select **Add Configuration**.

This provides the same Add Configuration to CMakeSettings dialog you saw before. This time select Linux-Debug, then save the CMakeSettings.json file. Now in the configuration drop down select Linux-Debug.

![Launch configuration drop down with X64-Debug and Linux-Debug options](media/cmake-bullet3-linux-configuration-item.png)

Since this is the first time you are connecting to a Linux system the Connect to Remote System dialog will appear.

![Visual Studio Connect to Remote System dialog](media/cmake-bullet3-connection-manager.png)
 
Provide the connection information to your Linux machine and click Connect. This will add that machine as your default remote machine which is what the CMakeSetttings.json for Linux-Debug is configured to use. It will also pull down the headers from your remote machine so that you get IntelliSense specific to that machine when you use it. Now Visual Studio will send your files to the remote machine, then generate the CMake cache there, and when that is done Visual Studio will be configured for using the same source base with that remote Linux machine. These steps may take some time depending on the speed of your network and power of your remote machine. You will know this is complete when the message “Target info extraction done” appears in the CMake output window.

## Set breakpoint, build and run on Linux
Since this is a desktop application you need to provide some additional configuration information to the debug configuration. In the CMake Targets view right click AppBasicExampleGui and choose Debug and Launch settings.

This will open a file launch.vs.json that is in the hidden .vs subfolder. This file is local to your development environment. You can move it into the root of your project if you wish to check it in and save it with your team. In this file a configuration has been added for AppBasicExampleGui. These default settings work in most cases, as this is a desktop application you need to provide some additional information to launch the program in a way you can see it on our Linux machine. You need to know the value of the environment variable DISPLAY on your Linux machine, run this command to get it.

```cmd
echo $DISPLAY
```
In my case this was :1. In the configuration for AppBasicExampleGui there is a parameter array “pipeArgs”. Within there is a line “${debuggerCommand}”. This is the command that launches gdb on the remote machine. Visual Studio needs to export the display into this context before that command runs. Do so by modifying that line as follows using the value of your display.

```cmd
"export DISPLAY=:1;${debuggerCommand}",
```
Now in order to launch and debug our application, choose the “Select Startup Item” dropdown in the toolbar and choose AppBasicExampleGui. Now press that button or hit F5. This will build the application and its dependencies on the remote Linux machine then launch it with the Visual Studio debugger attached. On your remote Linux machine, you should see an application window appear with the same falling bunch of cubes arranged as a single block.

<!--![Linux application launched from Visual Studio](media/browser.png)-->

Move your mouse into the application window, click a button, and the breakpoint will be triggered. This pause execution of your program, bring Visual Studio back to the foreground, and you will be at your breakpoint. You should also see a Linux Console Window appear in Visual Studio. This window provides output from the remote Linux machine, and it can also accept input for stdin. It can of course be docked where you prefer to see it and it’s position will be used again in future sessions.


<!--![Visual Studio Linux Console Window](media/browser.png)-->

You will be able to inspect the application variables, objects, threads, memory, and step through your code interactively using Visual Studio. This time on a remote Linux machine instead of your local Windows environment. You can click continue to let the application resume and exit it normally or cease execution within Visual Studio using the stop button. All the same things you’d expect if this were running locally.

Look at the Call Stack window and you will see this time the Calls to x11OpenGLWindow since Visual Studio has launched the application on Linux.


<!--![Call Stack window showing Linux call stack](media/browser.png)-->

## What you learned 
So now you have seen the same code base, cloned directly from GitHub, build, run, and debugged on Windows with no modifications. Then with some minor configuration settings build, run and debugged on a remote Linux machine as well. If you are doing cross platform development, we hope you find a lot to love here. Visual Studio C and C++ development is not just for Windows anymore.

## Next steps

Advance to the next article to learn how to create...
> [!div class="nextstepaction"]
> <!--[Next steps button](contribute-get-started-mvc.md)-->

<!--- Required:
Tutorials should always have a Next steps H2 that points to the next
logical tutorial in a series, or, if there are no other tutorials, to
some other cool thing the customer can do. A single link in the blue box
format should direct the customer to the next article - and you can
shorten the title in the boxes if the original one doesn’t fit.
Do not use a "More info section" or a "Resources section" or a "See also
section". --->