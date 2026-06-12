---
title: "GitHub Copilot modernization for C++ overview"
description: "Learn how GitHub Copilot modernization helps you upgrade C++ projects to newer MSVC Build Tools versions through automated assessment, planning, and execution."
author: michaelbprice
ms.author: miprice
ms.date: 05/27/2026
ms.topic: overview
ai-usage: ai-assisted
---

# What is GitHub Copilot modernization?

GitHub Copilot modernization is a GitHub Copilot agent that helps you upgrade and modernize your C++ projects. It guides you through assessment, solution recommendations, code fixes, and validation within Visual Studio.

## Scenarios

The agent provides end-to-end modernization workflows called _scenarios_. Each scenario guides you through a specific type of modernization task.

| Scenario | Description | Example prompt |
| --- | --- | --- |
| **MSVC Build Tools upgrade (MSBuild)** | Upgrades MSBuild-based projects (`.sln`, `.vcxproj`) to a newer version of MSVC Build Tools and resolves upgrade-related build issues. | _"Upgrade my projects to use the latest, installed version of the MSVC Build Tools"_ |
| **MSVC Build Tools upgrade (CMake)** | Resolves upgrade-related build issues in your CMake-based projects after configuring the project with a newer version of MSVC Build Tools. | _"Resolve any build issues caused by upgrading my project to use the newer MSVC Build Tools"_ |

> [!NOTE]
> If you'd like to propose or upvote other modernization scenarios, visit [Developer Community](https://developercommunity.microsoft.com/cpp).

For a full reference of all scenarios, see [Scenarios and skills reference](./scenarios-and-skills.md).

## Prerequisites

Before you start, make sure you have:

- Visual Studio 2026 version 18.7 or later.
- A GitHub Copilot subscription.
- An MSBuild-based codebase (`.sln`, `.vcxproj`) or a CMake-based codebase.

For detailed setup steps, see [Install GitHub Copilot modernization for C++](./install.md).

## How it works

To start the modernization workflow:

1. Open your C++ project or solution in Visual Studio.
1. Start the agent: In **Solution Explorer**, right-click your solution or project and select **Modernize**. Or, in **GitHub Copilot Chat**, type `@Modernize`.
1. Tell the agent what to upgrade.

If your Visual Studio installation is missing the MSVC Build Tools that your project currently uses, the Setup Assistant should appear when you load your project. You can use the Setup Assistant to either install the missing MSVC version or to retarget to the installed MSVC version. If you retarget any projects, you will get an infobar message that can launch you directly into the Modernize agent workflow.

When you ask the agent to upgrade your project, it prompts you to create a new branch if you're in a Git repository. Then it runs a three-stage workflow. Each stage produces Markdown files under `.github/upgrades/{scenarioId}` in your repository so you can review what comes next before you continue. If `.github/upgrades/{scenarioId}` already exists from an earlier attempt, the agent asks whether you want to continue or start fresh.

### Stage 1: Assessment

The agent examines your project structure, dependencies, and code patterns and saves a comprehensive assessment to `assessment.md`. The agent also presents strategy decisions for your review, such as upgrade strategy and compatibility handling.

### Stage 2: Planning

The agent converts the assessment into a detailed specification. The `plan.md` file documents upgrade strategies, refactoring approaches, and risk mitigations.

### Stage 3: Execution

The agent breaks the plan into sequential tasks with validation criteria in `tasks.md`. Each task describes a single change and how the agent confirms it succeeded.

## Flow modes

The agent supports two flow modes:

- **Automatic**: Works through all stages without pausing, stopping only at genuine blockers. This mode is best for straightforward upgrades.
- **Guided**: Pauses at each stage boundary for your review. This mode is best for larger or more complex upgrades.

You can switch modes at any time by modifying `scenario-instructions.md` or by instructing the agent to switch modes. If running in **Automatic** mode, you may have to stop the agent with the Cancel button in the Copilot Chat prompt window and instruct the agent to resume in **Guided** mode.

## State management

The agent stores all state in `.github/upgrades/{scenarioId}`.

| File | Purpose |
| --- | --- |
| `assessment.md` | Analysis of your solution. |
| `plan.md` | Ordered task plan. |
| `tasks.md` | Live progress dashboard. |
| `scenario-instructions.md` | Agent's persistent memory. |
| `execution-log.md` | Audit trail of all changes. |

You can close Visual Studio and resume later. The agent picks up where it left off by reading the state files.

> [!TIP]
> If you want to work on your upgrade over a longer period of time while doing other work, consider committing the `.github/upgrades` folder to your branch in distinct commits. The committed state serves as a backup and lets team members view upgrade progress. Distinct commits allow you to easily remove them from your local git history before merging your branch if you do not want them permanently committed to your repository.

## Provide feedback

Microsoft values your feedback and uses it to improve the agent. Leave feedback using either of these options:

- In Visual Studio, use the [Suggest a feature](/visualstudio/ide/suggest-a-feature) and [Report a problem](/visualstudio/ide/report-a-problem) options.

- File an issue on [Developer Community](https://developercommunity.visualstudio.com/cpp).

## Related content

- [Install GitHub Copilot modernization for C++](./install.md)
- [Scenarios and skills reference](./scenarios-and-skills.md)
- [Walkthrough - Hilo](./walkthrough-hilo.md)
- [Troubleshoot GitHub Copilot modernization for C++](./troubleshooting.md)
- [FAQ](./faq.md)
