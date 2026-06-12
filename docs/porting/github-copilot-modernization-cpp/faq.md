---
title: "GitHub Copilot modernization for C++ FAQ"
description: "Frequently asked questions about GitHub Copilot modernization for C++."
author: michaelbprice
ms.author: miprice
ms.date: 05/27/2026
ms.topic: faq
ai-usage: ai-assisted
---

# GitHub Copilot modernization for C++ FAQ

This FAQ answers common questions C++ users might have about GitHub Copilot modernization.

## General

### What is GitHub Copilot modernization for C++?

GitHub Copilot modernization for C++ is a GitHub Copilot agent for Visual Studio that helps you modernize and upgrade C++ projects to newer tools, libraries, and patterns. It recognizes specific tasks such as upgrading MSVC Build Tools to newer versions and provides additional tools and instructions to accomplish those tasks. It automates assessment, planning, and execution to accomplish the modernization task, and you can run it in a fully automated mode or a guided mode that allows you to approve each step and provide additional guidance.

### What development environments are supported?

GitHub Copilot modernization for C++ is available in Visual Studio 2026 version 18.7 and later.

### Do I need a GitHub Copilot subscription?

Yes. You need an active GitHub Copilot subscription to use the modernization agent.

### Is my code sent to external services?

GitHub Copilot processes code snippets according to [GitHub's Copilot privacy policy](https://docs.github.com/copilot/responsible-use-of-github-copilot-features/responsible-use-of-github-copilot-chat-in-your-ide). Code isn't retained beyond the immediate session. Workflow files such as `scenario-instructions.md` and `tasks.md` stay in your repository and aren't transmitted to external services.

## MSVC upgrade scenarios

### What project types are supported?

The agent supports these project types:

- MSBuild-based projects (`.sln` and `.vcxproj`).
- CMake-based projects.

The agent does not currently support Unreal Engine projects (`.uproject`).

### What does the agent actually change in my code?

The agent modifies source code to resolve build errors and warnings introduced by upgrading to a newer version of MSVC Build Tools. Common changes include replacing deprecated APIs, fixing issues caused by using a more conformant compiler, updating include directives for removed or relocated headers, and resolving linker errors caused by library changes. When your project is in a git repository, all changes are committed so you can review and revert individual modifications.

### Can I control what the agent changes?

Yes. You can review and approve the plan before execution starts, tell the agent to skip specific issues or tasks, and provide preferences in `scenario-instructions.md`. You can also pause execution, redirect the agent, or revert any commit it makes.

### Does the agent run tests?

The agent validates changes by building the project after each task. If your project runs tests as part of the build, those tests run too. You can also tell the agent to skip test validation for specific tasks.

### What if the agent makes a mistake?

Stop the agent and tell it right away. It will adapt and apply corrections when you tell the agent to resume. You can also run `git revert HEAD`, ask the agent to try a different approach, or make a manual fix.

For more information, see [Troubleshoot GitHub Copilot modernization for C++](./troubleshooting.md).

### Can I upgrade only part of my solution?

Yes. Tell the agent which projects to upgrade, for example, `Upgrade only the CoreLib project to the latest MSVC Build Tools.` The agent scopes its work to the projects you specify.

## State and sessions

### Where does the agent store its state?

All state lives in `.github/upgrades/{SCENARIO ID}` inside your repository. This includes the assessment, plan, task progress, your preferences, and execution logs.

### Can I resume an interrupted upgrade?

Yes. You can close Visual Studio or end the chat session at any time. When you start a new conversation, the agent detects the existing state and picks up where it left off.

### Should I commit the `.github/upgrades` folder?

Yes. Committing the folder to your branch backs up upgrade progress, lets team members view the upgrade state, and helps the agent resume from the correct state. You can remove the folder after the upgrade is complete.

### Can multiple people work on the same upgrade?

The state files in `.github/upgrades` are shareable through Git. However, only one person should actively interact with the agent at a time to avoid conflicting changes.

## Compatibility

### Which MSVC Build Tools versions can I upgrade from?

The agent supports upgrading from any earlier version of the MSVC Build Tools to the latest version supported by your Visual Studio installation.

### Does the agent handle third-party library compatibility?

The agent identifies third-party library compatibility issues during assessment. It suggests alternatives or workarounds when they're available. If a library isn't compatible with the target toolset, the agent documents the issue so you can decide how to proceed.

### Can I use the agent with precompiled headers?

Yes. The agent understands precompiled header configurations and accounts for them during the upgrade process.

## Related content

- [GitHub Copilot modernization for C++ overview](./overview.md)
- [Install GitHub Copilot modernization for C++](./install.md)
- [Scenarios and skills reference](./scenarios-and-skills.md)
- [Walkthrough - Hilo](./walkthrough-hilo.md)
- [Troubleshoot GitHub Copilot modernization for C++](./troubleshooting.md)
