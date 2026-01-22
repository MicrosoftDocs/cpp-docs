---
title: "Using GitHub Copilot app modernization for C++"
description: "Instructions on effectively using GitHub Copilot app modernization in your C++ projects"
ms.date: 01/22/2026
ms.topic: upgrade-and-migration-article
author: michaelbprice
ms.author: miprice
---

> [!NOTE]
> GitHub Copilot app modernization for C++ is currently in Public Preview

# Using GitHub Copilot app modernization for C++

GitHub Copilot app modernization for C++ helps you upgrade C++ projects to newer MSVC Build Tools versions and resolve resulting build issues using an agentic workflow integrated directly into Visual Studio.The agent will upgrade your project's settings to use the latest MSVC, if necessary, and then will conduct a thorough assessment of the impact of those changes after executing a build. It will then develop a plan on how to address any identified issues. Once the plan is approved by the user, it will complete a sequence of tasks and validate that any changes resolved the identified issues. If there remains work to be done, the agent will continue iterating until the issues are resolved or the user discontinues the conversation.

## Requirements

- Visual Studio 2026 18.3 Insiders 3 or later
- A GitHub Copilot account with access to GitHub Copilot (logged into Visual Studio)
- MSBuild-based codebase (`.sln`, `.vcxproj`) OR a CMake-based codebase
  - `.sln` solutions with both C++ and C# projects are supported

## Enabling and disabling GitHub Copilot app modernization for C++

GitHub Copilot app modernization for C++ is enabled by default. If you wish to either disable or explicitly enable the feature, follow the following steps.

1. From Visual Studio, click **Tools > Options...** to open the *Options* window.
2. Navigate to **All Settings > GitHub > Copilot > C/C++**.
3. Select (to enable) or deselect (to deselect) the checkbox for *Enable GitHub Copilot app modernization for C++ (preview)*.
4. Restart Visual Studio for the setting change to take effect.

## Upgrading your codebase with GitHub Copilot app modernization for C++

There are multiple ways to engage with GitHub Copilot app modernization to begin the process of upgrading your codebase.

### Accessing the Modernize agent in GitHub Copilot Chat

GitHub Copilot app modernization is an agent that operates inside the GitHub Copilot Chat window. There are a couple of ways to active this agent.

#### Solution/Project Context Menu

Right-click on the solution or a loaded project in the Solution Explorer, and choose **Modernize** from the context menu. This will automatically launch a GitHub Copilot Chat window, activate the Modernize agent, and provide you with relevant prompts to choose from to get you started.

#### Mention @Modernize in the GitHub Copilot Chat window

Open the GitHub Copilot Chat Window by clicking **View > GitHub Copilot Chat**. After the GitHub Copilot Chat window opens, mention @Modernize in a prompt to activate the Modernize agent. For example, you might send this prompt.

`Use @Modernize to update MSVC Build Tools.`

GitHub Copilot should recognize that you are wanting to use the app modernization agent and prompt you to approve launching a new thread with the Modernize agent activated.

#### For MSBuild-based codebases targeting an earlier version of MSVC Build Tools

The first time that you load a .vcxproj project that targets an earlier version of the MSVC Build Tools, you will be presented with an option to upgrade project settings to use a newer version of the MSVC Build Tools. If you retarget any of your projects to a new version of MSVC Build Tools and GitHub Copilot app modernization for C++ is enabled, you will receive an infobar in Visual Studio prompting you to use GitHub Copilot app modernization for C++ to resolve any newly introduced build issues. Clicking **Run GitHub Copilot app modernization for C++** will launch the GitHub Copilot Chat window, activate the Modernize agent, and provide you with relevant prompts to choose from to get you started.

### Starting the upgrade

Once the Modernize agent is active in the GitHub Copilot Chat window, you can instruct it via a prompt to upgrade your MSVC Build Tools, or select the already constructed prompt from the list shown in the window. If you launched the agent directly in the GitHub Copilot Chat window by mentioning @Modernize in your prompt, you probably will not need to provide any additional prompting.

<!-- Image goes here showing the ice breaker highlighted -->

### The agent assesses your codebase

One of the first thing the agent will do is assess what kinds of issues show up after upgrading. If you had not already done the upgrade, the agent will also guide you through that process before creating its assessment. After ensuring that your project is upgraded, the agent will kick off a build of your codebase, analyze the reported warnings and errors, and generate an `assessment.md` file that describes the issues that it found, their severity, and other useful information. This is your opportunity to tell the agent any additional context that you may have that could help it make a plan. One of the things you may choose to do here is to tell the agent not to fix certain discovered issues, maybe because you know that resolving them will involve some strategic decisions or because they were pre-existing warnings that you've decided are acceptable for your project. You should carefully read through the plan, making sure to provide that additional context where it is needed. Once you approve the assessment, the agent will move on to creating a concrete plan on addressing the issues.

### The agent creates an actionable plan to resolve issues

Based on the approved assessment and any additional context or instructions you give it, the agent will create a plan to address each of the identified issues. This plan should included details about the solution it will apply for each issues. If the agent produces a plan that doesn't match your organization's coding style or practices, you can provide that guidance to the agent and have it solve the issue in a more desirable way. After agreeing on the plan, the agent will move to the execution stage.

### The agent will construct concrete tasks and execute until issues are resolved

Now that the agent has a plan, it will break down the necessary tasks to execute the plan. These tasks can be as fine-grained as you would like them and can even include steps to work on a branch or to commit specific changes together in the same commit. After any changes have been made, the agent will again do a build to confirm that the issues have been resolved. If they were not, the agent will iterate this process with you until they are resolved to your satisfaction.

### After you upgrade

Once the agent is completed, you should run the changes through any testing infrastructure you have and definitely have a colleague review the changes in a pull request. Since we are currently in public preview, you may recieve an infobar to complete a product survey to let us know how the agent performed on your codebase. We are looking forward to hearing how we can improve the agent to solve your problems and acclerate your upgrade and modernization efforts.