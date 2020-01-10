---
title: "Configure CMake debugging sessions in Visual Studio"
ms.date: "03/21/2019"
helpviewer_keywords: ["CMake debugging"]
---
# Configure CMake debugging sessions

All executable CMake targets are shown in the **Startup Item** dropdown in the **General** toolbar. To start a debugging session, just select one and launch the debugger.

![CMake startup item dropdown](media/cmake-startup-item-dropdown.png "CMake startup item dropdown")

You can also start a debug session from Solution Explorer. First, switch to **CMake Targets View** in the **Solution Explorer** window.

![CMake targets view button](media/cmake-targets-view.png  "CMake Targets View menu item")

Then, right-click on any executable and select **Debug** or **Debug and Launch Settings**. **Debug** automatically starts debugging the selected target, based on your active configuration. **Debug and Launch Settings** opens the *launch.vs.json* file and adds a new debug configuration for the selected target.

## Customize debugger settings

You can customize the debugger settings for any executable CMake target in your project in a file called **launch.vs.json**. There are three entry points to this file:

- Select **Debug > Debug and Launch Settings for ${activeDebugTarget}** from the main menu to edit the debug configuration specific to your active debug target. If you do not have an active target selected, this option will be grayed out.
- Navigate to **Targets View** in the Solution Explorer, right-click on a debug target and select **Debug and Launch Settings** to edit the debug configuration specific to your selected target. 
-	Right-click on a root CMakeLists.txt and select **Debug and Launch Settings** to open the “Select a Debugger” dialogue. This will allow you to add any debug configuration, but you will need to manually specify the CMake target to invoke via the `projectTarget` property.

To reference any key in a **CMakeSettings.json** file, preface it with `cmake.` in **launch.vs.json**. The following example shows a simple **launch.vs.json** file that pulls in the value of the `remoteCopySources` key in the **CMakeSettings.json** file for the currently selected configuration:

```json
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
    {
      "type": "default",
      "project": "CMakeLists.txt",
      "projectTarget": "CMakeHelloWorld.exe (Debug\\CMakeHelloWorld.exe)",
      "name": "CMakeHelloWorld.exe (Debug\\CMakeHelloWorld.exe)",
      "args": ["${cmake.remoteCopySources}"]
    }
  ]
}
```
As soon as you save the **launch.vs.json** file, an entry is created in the **Startup Item** dropdown with the new name. By editing the **launch.vs.json** file, you can create as many debug configurations as you like for any number of CMake targets.

## Launch.vs.json reference

There are many launch.vs.json properties to help support different debugging scenarios. The following properties are **common to all debug configurations** (remote and local):

- `projectTarget`: specifies the CMake target to invoke when building the project. This property is auto-populated if you enter launch.vs.json from **Debug > Debug and Launch Settings for ${activeDebugTarget}** or **Targets View**. 
- `program`: full path to the program executable on the remote system. The macro `${debugInfo.fullTargetPath}` can be used. 
- `args`: command line arguments passed to the program to debug

## Launch.vs.json reference for remote Linux projects

The following properties are **specific to remote debug configurations**. You can also [send commands directly to gdb](https://github.com/microsoft/MIEngine/wiki/Executing-custom-gdb-lldb-commands) and [enable MIEngine logging](https://github.com/microsoft/MIEngine/wiki/Logging) to see what commands we are sending to gdb, what output gdb is returning, and how long each command took. 

- `cwd`: current working directory for finding dependencies and other files on the remote machine. The macro `${debugInfo.defaultWorkingDirectory}` can be used. The default value is the remote workspace root unless overridden in CMakeLists.txt. This property is only used for remote configurations; `currentDir` is used to set the current directory of the launching app for a local project. 
- `environment`: additional environment variables to add to the environment for the program with syntax: 
```json
"environment": [
        {
          "name": "ENV1",
          "value": "envvalue1"
        },
        {
          "name": "ENV2",
          "value": "envvalue2"
        }
      ]
```

- `pipeArgs`: command line arguments passed to the pipe program to configure the connection. The pipe program is used to relay standard input/output between Visual Studio and gdb. The command `${debuggerCommand}` launches gdb on the remote system, and can be modified to:
  - Export the value of the environment variable DISPLAY on your Linux system. In the following example this value is :1.
  ```json
  "pipeArgs": [
          "/s",
          "${debugInfo.remoteMachineId}",
          "/p",
          "${debugInfo.parentProcessId}",
          "/c",
          "export DISPLAY=:1;${debuggerCommand}",
          "--tty=${debugInfo.tty}"
        ],
  ```
    - Run a script before the execution of gdb. Ensure execute permissions are set on your script.
    ```json
    "pipeArgs": [
          "/s",
          "${debugInfo.remoteMachineId}",
          "/p",
          "${debugInfo.parentProcessId}",
          "/c",
          "/path/to/script.sh;${debuggerCommand}",
          "--tty=${debugInfo.tty}"
        ],
    ```

- `stopOnEntry`: a boolean that specifies whether to break as soon as the process is launched. The default is false.
- `visualizerFile`: a [.natvis file](https://docs.microsoft.com/en-us/visualstudio/debugger/create-custom-views-of-native-objects?view=vs-2019) to be used when debugging this process. This option is not compatible with gdb pretty printing. Please also see showDisplayString when using this property.
- `showDisplayString`: a boolean that enables the display string when a visualizerFile is specified. Setting this option to true can cause slower performance during debugging.
- `setupCommands`: one or more gdb command(s) to execute in order to set-up the underlying debugger.
- `externalConsole`: a boolean that specifies whether a console is launched for the debugee. 
- `miDebuggerPath`: the full path to gdb. When unspecified, Visual Studio will search PATH first for the debugger.

The following properties can be used to **separate your remote build system from your remote debug system**.

- `remoteMachineName`: the remote Linux system which hosts gdb and the program to debug. This does not need to match the remote Linux system used for build (specified in CMakeSettings.json). Press ctrl+space to view a list of all remote connections stored in the [Connection Manager](../linux/connect-to-your-remote-linux-computer.md). 
- `disableDeploy`: indicates whether build/debug separation is disabled. When enabled, this feature allows build and debug to occur on two separate machines. 
- `deployDirectory`: directory on the remote debug machine (specified by `remoteMachineName`) that the executable will be copied to.
- `deploy`: an array of advanced deployment settings. These settings only need to be configured when you want more granular control over the deployment process. By default, only the files necessary for the process to debug will be deployed to the remote debug machine.
  - `sourceMachine`: the machine from which the file or directory will be copied. Press cntrl+space to view a list of all the remote connections stored in the Connection Manager.
  - `targetMachine`: the machine to which the file or directory will be copied. Press cntrl+space to view a list of all the remote connections stored in the Connection Manager.
  - `sourcePath`: file or directory location on `sourceMachine`
  - `targetPath`: file or directory location on `targetMachine` 
  - `deploymentType`: description of the deployment type. `LocalRemote` and `RemoteRemote` are supported. `LocalRemote` means copying from the local file system to the remote system specified by `remoteMachineName` in launch.vs.json. `RemoteRemote` means copying from the remote build system specified in CMakeSettings.json to the different remote system specified in launch.vs.json. 
  - `executable`: indicates whether the deployed file is an executable

## Attach to a remote process 
You can **attach to a process running on your Linux system** by manipulating `processId`: the Process ID to attach the debugger to. See [troubleshoot attaching to processes using GDB](https://github.com/Microsoft/MIEngine/wiki/Troubleshoot-attaching-to-processes-using-GDB) for more information. 

## Debug on Linux using gdbserver
Visual Studio 2019 version 16.5 Preview 1 or later supports the remote debugging of CMake projects with gdbserver. See [debugging Linux CMake projects with gdbserver](https://devblogs.microsoft.com/cppblog/debugging-linux-cmake-projects-with-gdbserver/) for more information. 

## See also

[CMake Projects in Visual Studio](cmake-projects-in-visual-studio.md)<br/>
[Configure a Linux CMake project](../linux/cmake-linux-project.md)<br/>
[Connect to your remote Linux computer](../linux/connect-to-your-remote-linux-computer.md)<br/>
[Customize CMake build settings](customize-cmake-settings.md)<br/>
[Configure CMake debugging sessions](configure-cmake-debugging-sessions.md)<br/>
[Deploy, run, and debug your Linux project](../linux/deploy-run-and-debug-your-linux-project.md)<br/>
[CMake predefined configuration reference](cmake-predefined-configuration-reference.md)<br/>
