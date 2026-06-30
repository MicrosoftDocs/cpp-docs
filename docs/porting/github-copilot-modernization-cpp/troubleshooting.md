---
title: "Troubleshoot GitHub Copilot modernization for C++"
description: "Solutions to common problems when using GitHub Copilot modernization to upgrade C++ projects."
ms.date: 05/27/2026
ms.topic: troubleshooting
author: michaelbprice
ms.author: miprice
ai-usage: ai-assisted
---

# Troubleshoot GitHub Copilot modernization for C++

This article helps you resolve common issues when you use GitHub Copilot modernization to upgrade your C++ projects. If you run into a problem that isn't covered here, use **Help** > **Send Feedback** > **Report a problem** in Visual Studio.

## Before you start

### Verify that your solution or project builds

For MSVC upgrade scenarios, the agent validates changes by building your solution or project. If your solution or project is already broken before you start, the agent will have greater difficulty distinguishing pre-existing issues from problems introduced by the upgrade.

If you have known build issues, document them in [custom instructions](https://docs.github.com/copilot/concepts/prompting/response-customization?tool=visualstudio), provide them in your response when the agent asks for context during the assessment stage, or add them to `scenario-instructions.md` so the agent knows to ignore them.

### Commit or stash uncommitted work

Start with a clean working directory. The agent makes commits as it works, and mixing uncommitted changes with the agent's modifications makes it harder to review or revert changes.

```git
git stash
git status
```

### Back up non-Git repositories

The agent can also work with folders that aren't under source control. If your project isn't in a Git repository, the agent skips branching and commit operations. Back up your project folder before you start so you can restore it if needed.

> [!TIP]
> Consider initializing a local Git repository before you start, even if you don't push to a remote. This gives you a way to roll back individual changes and track progress step by step.
>
> Example:
> ```git
> git init
> git add
> git commit -m "Initial Commit"
> ```
>
> When you and the agent are done, if you don't want to continue using git, just make sure the code currently in your working tree is what you want, and delete the `.git` directory in the directory where you ran `git init`.

## Common problems

### Agent doesn't appear in Copilot Chat

**Symptoms**: Typing @Modernize in the GitHub Copilot chat window doesn't activate the agent, or **Modernize** doesn't appear in the **Solution Explorer** context menu.

**Solutions**:

1. Verify that Visual Studio is version 18.7 or later in **Help** > **About Microsoft Visual Studio**.
1. Verify that GitHub Copilot is active by checking for the Copilot icon in the status bar.
1. Check that the feature is enabled in **Tools** > **Options** > **GitHub** > **Copilot** > **C/C++**. Then select **Enable GitHub Copilot modernization for C++**.
1. Restart Visual Studio after you change settings.


### Agent gets stuck in a loop

**Symptoms**: The agent repeatedly tries the same fix without making progress.

**Solutions**:

- Stop the agent with the cancel button in the Copilot Chat prompt window, describe what you're observing in the prompt, and send the prompt to resume the agent.
- Provide a manual fix, and tell the agent what you changed. The agent learns from your correction.
- Ask the agent to try a different approach. For example, type in the GitHub Copilot chat window: _"That fix isn't working. Try a different strategy."_
- If needed, revert or undo the last changes, and restart the task.

### Large solutions take too long

**Symptoms**: The upgrade of a large solution with many projects takes a very long time or seems to stall.

**Solutions**:

- Start with one representative project as a pilot. This surfaces systemic issues early.
- Monitor progress by reviewing `tasks.md` in `.github/upgrades/{SCENARIO ID}`.
- If a session times out, start a new session. The agent picks up where it left off.

## Recovery strategies

### Undo all changes

If you used a Git branch for the upgrade, undo everything:

```git
git checkout your-original-branch
git branch -D upgrade-branch
```

Your original code is untouched.

### Undo the last change

Revert the most recent commit:

```git
git revert HEAD
```

Or tell the agent, `Revert the last change.`

### Restart from a specific stage

If the agent's plan isn't working, restart from an earlier stage by sending a prompt similar to:

- `Let's redo the plan. I want a different approach to the conformance issues.`
- `Go back to the assessment and reconsider the upgrade strategy.`

### Start fresh

Delete the `.github/upgrades/{SCENARIO ID}` folder, and start a new conversation with the agent. It begins from scratch.

## Get help

If you can't resolve an issue:

1. Use **Help** > **Send Feedback** > **Report a problem** in Visual Studio.
1. Include the contents of `execution-log.md` from `.github/upgrades/{SCENARIO ID}` if possible.

## Related content

- [Install GitHub Copilot modernization for C++](./install.md)
- [GitHub Copilot modernization for C++ overview](./overview.md)
- [Walkthrough - Hilo](./walkthrough-hilo.md)
- [FAQ](./faq.md)
