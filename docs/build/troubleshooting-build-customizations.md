---
description: "Learn more about: Troubleshooting Build Customizations"
title: "Troubleshooting Build Customizations"
ms.date: "11/04/2016"
helpviewer_keywords: ["build events [C++], troubleshooting", "builds [C++], build events", "troubleshooting [C++], builds", "build steps [C++], troubleshooting", "events [C++], build", "builds [C++], troubleshooting", "custom build steps [C++], troubleshooting"]
ms.assetid: e4ceb177-fbee-4ed3-a7d7-80f0d78c1d07
---
# Troubleshooting Build Customizations

If your custom build steps or events are not behaving as you expect, there are several things you can do to try to understand what is going wrong.

- Make sure that the files your custom build steps generate match the files you declare as outputs.

- If your custom build steps generate any files that are inputs or dependencies of other build steps (custom or otherwise), make sure that those files are added to your project. And make sure that the tools that consume those files execute after the custom build step.

- To display what your custom build step is actually doing, add `@echo on` as the first command. The build events and build steps are put in a temporary .bat file and run when the project is built. Therefore, you can add error checking to your build event or build step commands.

- Examine the build log in the intermediate files directory to see what actually executed. The path and name of the build log is represented by the **MSBuild** macro expression, **$(IntDir)\\$(MSBuildProjectName).log**.

- Modify your project settings to collect more than the default amount of information in the build log. On the **Tools** menu, click **Options**. In the **Options** dialog box, click the **Projects and Solutions** node and then click the **Build and Run** node. Then, in the **MSBuild project build log file verbosity** box, click **Detailed**.

- Verify the values of any file name or directory macros you are using. You can echo macros individually, or you can add `copy %0 command.bat` to the start of your custom build step, which will copy your custom build step's commands to command.bat with all macros expanded.

- Run custom build steps and build events individually to check their behavior.

## See also

[Understanding Custom Build Steps and Build Events](understanding-custom-build-steps-and-build-events.md)
