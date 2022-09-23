# Contributing

Thank you for your interest in contributing to the Visual C++ documentation!

In this topic, you'll see the basic process for adding or updating content in the [Visual C++ documentation site](https://learn.microsoft.com/cpp/).

In this topic, we'll cover:

- [Process for contributing](#process-for-contributing)
- [DOs and DON'Ts](#dos-and-donts)
- [Building the documentation](#building-the-documentation)
- [Contributing to samples](#contributing-to-samples)
- [Contributor license agreement](#contributor-license-agreement)

## Process for contributing

**Step 1:** Open an issue describing the article you wish to write and how it relates to existing content.
The content inside the **docs** folder is organized into sections that are organized by content area (e.g., debugger). Try to determine the correct folder for your new content. Get feedback on your proposal.

You can skip this first step for small changes.

**Step 2:** Fork the `MicrosoftDocs/cpp-docs` repository.

**Step 3:** Create a `branch` for your article.

**Step 4:** Write your article.

If it's a new topic, you can use this [template file](./styleguide/template.md) as your starting point. It contains the writing guidelines and also explains the metadata required for each article, such as author information.

Navigate to the folder that corresponds to the TOC location determined for your article in step 1.
That folder contains the Markdown files for all articles in that section. If necessary, create a new folder to place the files for your content.

For images and other static resources, add them to the subfolder called `media`. If you are creating a new folder for content, add a media folder to the new folder.

Be sure to follow the proper Markdown syntax. See the [style guide](./styleguide/template.md) for more information.

### Example structure

```
docs
    /standard-library
        wstring-convert-class.md
        /media
            wstring-conversion.png
```

**Step 5:** Submit a Pull Request (PR) from your branch to `MicrosoftDocs/cpp-docs/main`.

If your PR is addressing an existing issue, add the `Fixes #Issue_Number` keyword to the commit message or PR description, so the issue can be automatically closed when the PR is merged. For more information, see [Closing issues via commit messages](https://help.github.com/articles/closing-issues-via-commit-messages/).

The Visual Studio team will review your PR and let you know if the change looks good or if there are any other updates/changes necessary in order to approve it.

**Step 6:** Make any necessary updates to your branch as discussed with the team.

The maintainers will merge your PR into the main branch once feedback has been applied and your change looks good.

On a certain cadence, we push all commits from main branch into the live branch and then you'll be able to see your contribution on [Microsoft Learn](https://learn.microsoft.com/cpp/).

## DOs and DON'Ts

Below is a short list of guiding rules that you should keep in mind when you are contributing to the .NET documentation.

- **DON'T** surprise us with big pull requests. Instead, file an issue and start a discussion so we can agree on a direction before you invest a large amount of time.
- **DO** read the [style guide](./styleguide/template.md) and [voice and tone](./styleguide/voice-tone.md) guidelines.
- **DO** use the [template](./styleguide/template.md) file as the starting point of your work.
- **DO** create a separate branch on your fork before working on the articles.
- **DO** follow the [GitHub Flow workflow](https://guides.github.com/introduction/flow/).
- **DO** blog and tweet (or whatever) about your contributions, frequently!

> [!NOTE]
> You might notice that some of the topics are not currently following all the guidelines specified here and on the [style guide](./styleguide/template.md) as well. We're working towards achieving consistency throughout the site. Check the list of [open issues](https://github.com/MicrosoftDocs/cpp-docs/issues?q=is%3Aissue+is%3Aopen+label%3Aguidelines-adherence) we're currently tracking for that specific goal.

## Building the documentation

The documentation is written in [GitHub-Flavored Markdown](https://help.github.com/categories/writing-on-github/) and built using [DocFX](https://dotnet.github.io/docfx/) and other internal publishing and build tools. It's published to [Microsoft Learn](https://learn.microsoft.com/).

If you want to build the documentation locally, you need to install the latest version of [DocFX](https://dotnet.github.io/docfx/).

There are several ways to use DocFX, and most of them are covered in the [DocFX getting started guide](https://dotnet.github.io/docfx/tutorial/docfx_getting_started.html). The following instructions use the [command-line based](https://dotnet.github.io/docfx/tutorial/docfx_getting_started.html#2-use-docfx-as-a-command-line-tool) version of the tool. If you are comfortable with other ways listed on the link above, feel free to use those.

**Note:** Currently DocFX requires the .NET Framework on Windows or Mono (for Linux or macOS). We hope to port it to .NET Core in the future.

You can build and preview the resulting site locally using a built-in web server. Navigate to the `cpp-docs\docs` folder on your machine and type the following command:

> docfx -t default --serve

This starts the local preview on [localhost:8080](http://localhost:8080). You can then view the changes by going to `http://localhost:8080/[path]`, such as `http://localhost:8080/cpp/visual-cpp-in-visual-studio.html`.

**Note:** the local preview currently doesn't contain any themes at the moment so the look and feel won't be the same as in the documentation site. We're working towards fixing that experience. We also use some custom extensions for embedded video, notes, and included documents, that won't be visible in the preview.

## Contributing to samples

For now, include required sample code as inline code blocks in your article. The repository has a `codesnippets` folder, but this is not ready for public contributions.

## Contributor license agreement

You must sign the [Contribution License Agreement (CLA)](LICENSE) before your PR is merged. This is a one-time requirement for projects on Microsoft Learn. You can read more about [Contribution License Agreements (CLA)](https://en.wikipedia.org/wiki/Contributor_License_Agreement) on Wikipedia.

You don't have to sign the agreement up-front. You can clone, fork, and submit your PR as usual. When your PR is created, it is classified by a CLA bot. If the change is trivial (for example, you fixed a typo), then the PR is labeled with CLA-not-required. Otherwise, it's classified as CLA-required. Once you signed the CLA, the current and all future pull requests are labeled as CLA-signed.
