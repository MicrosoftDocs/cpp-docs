---
title: Build reliable and secure C++ programs
description: "Learn more about: Building reliable and secure C++ programs by applying NISTIR 8397 guidelines."
ms.date: 04/25/2025
ms.topic: "concept-article"
---

# Build reliable and secure C++ programs

The United States government publication [NISTIR 8397: Guidelines on Minimum Standards for Developer Verification of Software](https://nvlpubs.nist.gov/nistpubs/ir/2021/NIST.IR.8397.pdf) contains excellent guidance on how to build reliable and secure software in any programming language.

This document follows the same structure as NISTIR 8397. Each section:
- summarizes how to use Microsoft developer products for C++ and other languages to meet that section's security needs, and
- provides guidance to get the most value in each area.

## 2.1 Threat modeling

**Summary**

Threat modeling is a valuable process, especially when applied in a way that scales to meet your development needs and that reduces noise.

**Recommendations**

Threat modeling should be one part of your dynamic Security Development Lifecycle (SDL). We suggest that for your product as a whole, for a specific feature, or for a major design or implementation change:

- Have a solid, dynamic SDL that allows for early engagement with developer teams and rightsizing of approach.
- Apply threat modeling in a targeted way. Apply threat modeling to all features, but tactically start with exposed, complex or critical features. Do apply it regularly instead as part of a top-down product review.
- Apply threat modeling early (as with all security requirements), when there's still opportunity to change the design. Also, threat models serve as an input to other processes, such as attack surface reduction or designing for security. Threat models that are created later are at best "surveys" for pen test (penetration testing) or areas that need security testing such as fuzzing. After you create a baseline threat model, plan to continue iterating on it as the attack surface changes.
- Use asset inventory and compliance to appropriately track what makes up a product, and track security artifacts (including threat models) along with the assets they apply to. This approach enables better automated risk assessment and focusing of security efforts on the specific components or features that change.
- **In Azure**, the Microsoft Threat Modeling Tool was updated in 2022 for Azure development. For more information, see [Microsoft Threat Modeling Tool overview - Azure](/azure/security/develop/threat-modeling-tool)

**Supporting factors and practices**

To properly apply threat modeling and avoid underuse/overuse, we have found that the following core concepts need to be addressed first.

*Development approach*

First, understand the team's development approach. For teams with agile development workflows that push dozens of changes to production daily, it's not practical or reasonable to require a threat model update for every functional change. Instead, from the start when writing a feature's functional requirements, consider including a security requirements questionnaire. The questionnaire should focus on specific questions about the feature to determine what future aspects of your SDL apply. For example:
- Does the feature make a major change in design of how we provide customer isolation in a multitenant environment? If so, consider performing a full threat model.
- Does a new feature allow file uploads? If so, perhaps what's more appropriate is a web application security assessment.
- Is this change primarily just a functional UI change? If so, perhaps nothing is needed beyond your traditional automated tooling.

The security questionnaire results inform which SDL techniques to tie to which unit of development. It also informs development partners of the feature's SDL timelines, so they can collaborate at the right times.

*Product inventory*

Second, maintain a strong asset inventory of the products you're tasked with assessing. Products are growing in complexity. It's common to write software for connected devices that have:
- sensors (such as passenger rail and vehicles),
- bus-based networks that talk to other components in the vehicle (such as CANBUS or PROFIBUS),
- wireless/cellular/Bluetooth for communication with customer devices and cloud back ends,
- machine learning in the cloud feeding back into the device or a fleet management application,
- and more.

In such complex products, threat modeling is critical. Having a strong asset inventory lets you view the entire product stack to see the complete picture, and to see the key places that need to be evaluated for how a new or changed feature impacts product security.

*Granularity and integration*

Establish systems to measure compliance using clear metrics.
- Regularly measure compliance for feature level development. Feature compliance generally should be measured with higher frequency and smaller granularity, sometimes even on the developer's system or at code commit/merge time.
- Periodically evaluate security for the broader product in which a feature or component is being consumed. Broader evaluations typically are done with lower frequency and broader granularity, such as at module or system testing time.

*Scale*

Keep a proper asset inventory system that captures and preserves security artifacts and the output of threat model reviews. Having a clear inventory lets you evaluate review outputs for patterns, and make intelligent decisions on how to refine the product security program regularly.

Try to combine requirements-phase security questionnaires, threat modeling results, security assessment results, and results from automated tools. Combining them enables you to automate a viewpoint of relative risk of a given product, ideally as a "dashboard," to inform your security teams what to focus on to get the best value out of the threat modeling.

## 2.2 Automated testing

**Summary**

Automated tests are an important way to ensure the quality and safety of your code. They're an integral piece in supporting other areas mentioned in this document, such as Threat Modeling. When paired with other secure coding practices, they help to protect against bugs and vulnerabilities being introduced into the codebase.

**Key attributes**

Tests should be reliable, consistent, and isolated. These tests should cover as much of the code as possible. All new features and bug fixes should have corresponding tests to ensure the long-term security and reliability of the code when possible. Run automated tests regularly and in as many environments as possible, to ensure they get run and that they cover all areas:

- The first place they should run is on the machine that is making the changes. Running tests is most easily done within the IDE that is being used for editing, or as a script on the command line as the developer makes the changes.
- The next place they should run is as part of the pull request commit/merge process.
- The last place to run tests is as part of a Continuous Integration and Continuous Deployment (CI/CD) pipeline, or on your release candidate builds.

The scope of the tests should increase at each step, with the last step providing full coverage for anything the other steps might miss.

**Continuous use and maintenance**

Test reliability is an important part of maintaining the effectiveness of the testing suite. Test failures should be assigned and investigated, with potential security issues getting high priority and getting updated within a prompt and predetermined timeframe. Ignoring test failures shouldn't be a common practice, but should require strong justification and approval. Test failures due to issues within the test suite itself should be treated the same as other failures, to prevent a lapse in coverage in which product issues could be missed.

**Kinds of tests, especially unit tests**

There are several types of automated tests, and while not all are applicable to all applications, a good test suite contains a selection of several different types. Code Based Test Cases such as unit tests are the most common and most integral, being applicable to all applications and intentionally covering as many code paths as possible for correctness. These tests should be small, quick, and not affect the state of the machine, so that the full suite of tests can be run quickly and often. If possible, run tests on many machines that have different hardware setups to catch problems that aren't reproducible on a single type of machine.

**Visual Studio**

Visual Studio Test Explorer natively supports many of the most popular C++ testing frameworks, and has options to install extensions for more frameworks. This flexibility is helpful for running a subset of tests covering the code you're working on, and makes it easy to debug test failures as they arise. Visual Studio also makes it easy to set up new test suites for existing projects, and provides helpful tools such as CodeLens to make it easier to manage these tests. For more information about writing, running, and managing C/C++ tests with Visual Studio, see [Write unit tests for C/C++ - Visual Studio (Windows)](/visualstudio/test/writing-unit-tests-for-c-cpp).

**In Azure and GitHub CI/CD**

Tests that do deeper verification and take longer to run, such as static analysis, component detection, and so on, are good candidates for pull request testing or continuous integration testing. Azure DevOps and GitHub [Actions](https://docs.github.com/en/actions) make it easy to run validations automatically and block code checkins if a validation fails. Automated enforcement helps ensure that all code being checked in is secure based on these more rigorous checks being run. Azure Pipelines and Azure DevOps Build Validation are described here:

- [Git branch policies and settings - Azure Repos](/azure/devops/repos/git/branch-policies#build-validation)
- [Defining the mergeability of pull requests | GitHub Docs](https://docs.github.com/repositories/configuring-branches-and-merges-in-your-repository/defining-the-mergeability-of-pull-requests)

## 2.3 Code-based, or static, analysis

**Summary** Static code/binary analysis should be enabled by default, to be secure by default. Static analysis analyzes a program for required safety and security policies at the time it's being built, not at execution time when an exploit can occur on the customer's machine. Static analysis can analyze the program in source code form or in compiled executable form.

**Recommendations** Microsoft recommends that you:

- Enable static analysis for all C++ programs, for both the input source code (before compilation) and the executable binaries (after compilation). "Enable" might mean to run analysis during each build on the developer's machine, or as a separate build to inspect the code later or as a checkin requirement.
- Incorporate static analysis into CI pipelines as a form of testing.
- Static analysis by definition comes with false positives, and be prepared to incorporate that fact into your quality feedback loop. Be  quick to enable all low-false-positive warnings up front. Then be proactive to gradually increase the number of rules for which your code base compiles warning-clean as you regularly add more rules that flag important bugs at the expense of gradually higher false positives (initially, before the code base has been cleaned for those rules too).
- Always use the latest supported versions of Visual Studio, and set up your engineering environment to quickly consume the latest patch releases as soon as they become available, without delaying to the next development stage/cycle.

**Key tools** Be aware of and use the following:

- [Code analysis documentation - C++ and .NET](/visualstudio/code-quality/)
- [`/analyze` - Microsoft C++ compiler](../build/reference/analyze-code-analysis.md)
- [`/W4` and `/WX` - Microsoft C++ compiler](../build/reference/compiler-option-warning-level.md)
- [Use the C++ Core Guidelines Checkers](using-the-cpp-core-guidelines-checkers.md)
- [CodeQL | GitHub](https://codeql.github.com/)
- [Binskim user guide | GitHub](https://github.com/microsoft/binskim/blob/main/docs/UserGuide.md)
- See also (Windows only): [SAL annotations](../c-runtime-library/sal-annotations.md)

Notes:

- `/analyze` enables static analysis of C++ code at compile time to identify critical security and reliability code vulnerabilities. It should be enabled throughout a C++ program's entire development timeline. Start by enabling at least the "Microsoft Native Recommended" by default as a minimum baseline. Then consult the documentation for how to specify more rules, especially the C++ Core Guidelines rules, as required by your engineering policies. The source code Static Analysis capability is available in both the Visual Studio IDE and in the command-line Build Tools.
- `/W4` and `/WX` should be enabled wherever possible, to ensure you compile your code cleanly at high warning levels (`W4`) and treat warnings as errors that must be fixed (`WX`). These options enable finding uninitialized data errors that other static analysis tools can't check, because the errors only become visible after the compiler back-end performs interprocedural analysis and inlining.
- BinSkim binary analysis ensures that projects enable a broad range of security features. BinSkim generates PDBs and other outputs that make it easier to verify chain-of-custody and to respond efficiently to security issues. Microsoft recommends running the BinSkim tool to analyze all executable binaries (`.sys`, `.dll` or `.exe`) produced for or consumed by your programs.  The BinSkim User Guide includes a list of supported security standards. Microsoft recommends that you fix all issues reported as "errors" by the BinSkim tool. Issues reported as "warnings" should be evaluated selectively, because resolving them can have performance implications or might not be necessary.

**In Azure and GitHub CI/CD** Microsoft recommends always enabling source code and binary static analysis in release CI/CD scenarios. Run source analysis immediately on the local developer's machine, or at least for every commit or pull request, to catch source bugs as early as possible and minimize overall costs. Binary level bugs tend to be introduced more slowly, so it might be sufficient to run binary analysis in less frequent prerelease CI/CD scenarios (such as nightly or weekly builds).

## 2.4 Review for hardcoded secrets

**Summary**

Don't hardcode secrets within software. You can find and remove secrets from the source code efficiently by using reliable tools that can scan your entire source code base. Once you find secrets, move them to a safe place following the guideline for secure storage and use of secrets.

**Problem**

"Secrets" means entities that establish identity and provide access to resources, or that are used to sign or encrypt sensitive data. Examples include passwords, storage keys, connection strings, and private keys. It's tempting to keep secrets in the software product so they can be readily obtained when needed by the software. However, these hardcoded secrets can lead to severe or catastrophic security incidents as they're easily discovered and can be used to compromise your service and data.

**Prevention**

Secrets hardcoded in source code (as plain text or encrypted blob) are a security vulnerability. Here are general guidelines on how to avoid secrets in the source code:

- Use a precheckin tool to scan and catch potential hardcoded secrets in code prior submitting to source control.
- Don't put clear text credentials in source code or configuration files.
- Don't store clear text credentials in SharePoint, OneNote, file shares, and so on. Or share them via email, IM, and so on.
- Don't encrypt a secret with an easily discoverable decryption key. For example, don't store a PFX file along with a file that contains its password.
- Don't encrypt a secret with a weak decryption. For example, don't encrypt a PFX file with a weak or common password.
- Avoid putting encrypted credentials in source code. Instead, use placeholders in your source, and let your deployment system replace them with secrets from approved stores.
- Apply the same principles to secrets in environments such as testing, staging, and so on, as you do in production deployments. Adversaries often target nonproduction systems as they're less well managed, then use them to pivot into production.
- Don't share secrets between deployments (for example, testing, staging, production).

While not directly related to hardcoded secrets, also remember securing secrets for your test, development, and production:

- Rotate your secrets periodically and whenever they might have been exposed. Having a demonstrated ability to rotate/redeploy secrets is evidence of a secure system. More notably, the absence of this capability is even stronger evidence of an inevitable vulnerability.
- Don't give in to the common developer rationale that "my test credentials don't create risk." In practice, they nearly always do.
- Consider moving away from secrets (for example, passwords, bearer keys) entirely in preference of RBAC/identity-driven solutions as a good engineering solution that can sidestep secret mismanagement entirely.

**Detection**

Legacy components of your product might contain hidden hardcoded secrets in their source code. Sometimes secrets from developers' desktop machines can creep into remote branch and merge into the release branch, leaking secrets unintentionally. To discover secrets that might be hiding in your source code, you can use tools that can scan your code for hardcoded secrets:

- [Microsoft sarif-pattern-matcher tool](https://github.com/microsoft/sarif-pattern-matcher)

**Remediation**

When credentials are found in your source code, the immediate urgent need is to invalidate the exposed key and perform a risk analysis based on exposure. Even if your system needs to stay running, you can enable a secret manager for remediation using these steps:

1. If remediation allows switching over to managed identities, or requires dropping in a secret manager such as Azure Key Vault (AKV), do that first. Then redeploy with the updated identity or key.
1. Invalidate the exposed secret.
1. Perform auditing/risk assessment of potential damage due to compromise.

To safeguard cryptographic keys and other secrets used by cloud apps and services, use [Azure Key Vault](https://azure.microsoft.com/products/key-vault) with an appropriate access policy.

If an exposure compromises certain customer data/PII, it might require other compliance/reporting requirements.

Remove the now-invalidated secrets from your source code, and replace them with alternative methods that don't expose the secrets directly in your source code. Look for opportunities to eliminate secrets where possible by using tools like Azure AD. You can update your authentication methods to take advantage of managed identities via Azure Active Directory). Only use approved stores to store and manage secrets such as Azure Key Vault (AKV). For more information, see:

- [Azure AD: Implementing autorotation using Azure Active Directory](https://eng.ms/docs/products/onecert-certificates-key-vault-and-dsms/key-vault-dsms/autorotationandecr/scenarios/aad)

**Azure DevOps (AzDO)**

AzDO users can scan their code through GitHub Advanced Security for Azure DevOps (GHAzDO). GHAzDO also allows users to prevent secret exposures by enabling Push Protection on their repositories, catching potential exposures before they're ever leaked. For more information on how to detect hardcoded secrets in code in Azure DevOps, see *Secret Scanning for GitHub Advanced Security for Azure DevOps* in each of the following links:

- [GitHub advanced security for Azure DevOps](https://azure.microsoft.com/products/devops/github-advanced-security)
- [Secret Scanning for GitHub Advanced Security for Azure DevOps](/azure/devops/repos/security/github-advanced-security-secret-scanning)
- [Microsoft Defender for DevOps Preview](https://www.microsoft.com/security/business/cloud-security/microsoft-defender-devops)

**In GitHub**

Secret scanning is available on GitHub.com in two forms:

- *Secret scanning alerts for partners.* Runs automatically on all public repositories. Any strings that match patterns that were provided by secret scanning partners are reported directly to the relevant partner.
- *Secret scanning alerts for users.* You can enable and configure extra scanning for repositories owned by organizations that use GitHub Enterprise Cloud and have a license for GitHub Advanced Security. These tools also support private and internal repositories.

GitHub provides known patterns of secrets for partners and users that can be configured to meet your needs. For more information, please see:

- [Secret scanning patterns](https://docs.github.com/en/code-security/secret-scanning/secret-scanning-patterns#supported-secrets-for-user-alerts)
- [About secret scanning in GitHub](https://docs.github.com/en/enterprise-cloud@latest/code-security/secret-scanning/about-secret-scanning)

> [!NOTE]
> GitHub Advanced Security for Azure DevOps brings the same secret scanning, dependency scanning and CodeQL code scanning solutions already available for GitHub users and natively integrates them into Azure DevOps to protect your Azure Repos and Pipelines.

**Additional resources**

- [Credential Scanning | Microsoft Code With Engineering Playbook](https://microsoft.github.io/code-with-engineering-playbook/CI-CD/dev-sec-ops/secrets-management/credential_scanning/).
- [detect-secrets: Credential scanning tool | GitHub](https://microsoft.github.io/code-with-engineering-playbook/CI-CD/dev-sec-ops/secrets-management/recipes/detect-secrets/) - an aptly named module for detecting secrets within a code base.
- [Running detect-secrets in Azure Pipelines](https://microsoft.github.io/code-with-engineering-playbook/CI-CD/dev-sec-ops/secrets-management/recipes/detect-secrets-ado/).
- [Git-secrets | GitHub awslabs](https://github.com/awslabs/git-secrets) - prevents you from committing passwords and other sensitive information to a git repository.
- [Secrets Management | Microsoft Code with Engineering Playbook](https://microsoft.github.io/code-with-engineering-playbook/CI-CD/dev-sec-ops/secrets-management/) - provides general guidelines on how secrets should be managed.

## 2.5 Run with language- and OS-provided checks and protection

**Summary**

Binary hardening is done by applying compile-time security controls. These include mitigations that:
- prevent exploitable vulnerabilities in code,
- enable runtime detections that trigger security defenses on exploitation, and
- enable data production and archiving to help limit the damage caused by security incidents.

Binary consumers must opt into Windows security features to gain the full benefit of hardening.

Microsoft provides a set of facilities specific to C++ projects to help developers write and ship safer and more secure code. C++ developers should also adhere to security standards common to languages that generate executable code. Microsoft maintains BinSkim, a public OSS binary checker that helps enforce use of many protections described in this section. For more information about BinSkim, see [Binskim user guide | GitHub](https://github.com/microsoft/binskim/blob/main/docs/UserGuide.md)

Binary-level controls differ according to where they're applied in the engineering process. You should distinguish among compiler and linker options that: are strictly compile time, alter code generation with run-time overhead, and alter code generation to achieve compatibility with OS protections.

Developer settings should prefer to enable as much static analysis as possible, enable production of private data to accelerate debugging, and so on. Release builds should be tuned to an appropriate combination of security, performance, and other code generation concerns. Release processes must be configured to properly generate and manage public vs. privately consumed build data (for example, public vs. private symbols).

**Stay current: Always use up-to-date compilers and tools**

Compile all code with current toolsets to benefit from up-to-date language support, static analysis, code generation and security controls. Because compilers impact every generated component, the potential for regression on tool update is relatively high. Using outdated compilers creates a particular risk for corrective action while responding to a security incident, because teams might not have enough time to upgrade compilers. Microsoft recommends that teams develop the facility to regularly refresh and test compiler updates.

**Use secure development methods, language versions, frameworks/APIs**

Code should utilize development methodologies, language versions, framework, APIs, and so on, that minimize risk by fostering safety and simplicity in C++, including:

- See [C++ Core Guidelines' Guideline Support Library (GSL)](https://github.com/isocpp/CppCoreGuidelines) for guidance to write modern, safe, and consistent C++ code that follows best practices and avoids common pitfalls.
- See [Microsoft GSL implementation](https://github.com/microsoft/GSL) for functions and types that the C++ Core Guidelines suggest you use.
- Resource-safe C++ containers, C runtime library (CRT) memory overflow protections: Prefer [`std::vector`](../standard-library/vector-class.md) and [`std::string`](../standard-library/string.md), which are resource-safe. If you must use C data, use the [secure versions of CRT functions](../c-runtime-library/security-features-in-the-crt.md), which are designed to help prevent memory corruption due to buffer misuse and undefined language behaviors.
- The [SafeInt library](../safeint/safeint-library.md) protects against integer overflow in mathematical and comparison operations.

**Consume secure dependencies**

Binaries shouldn't link to insecure libraries and dependencies. Development teams should track all external dependencies and resolve CVEs/identified security vulnerabilities in these components by updating to more secure versions when subject to those vulnerabilities.

**Maximize code provenance guarantees and efficiency of security response**

Compilation should enable strong code provenance guarantees to help detect and prevent introduction of backdoors and other malicious code. The resulting data, also critical to debugging and investigation, should be archived for all software releases to drive efficient security response if they're compromised. The following compiler switches generate information that is critical to a security response:

- [`/ZH:SHA_SHA256` in Microsoft C++](../build/reference/zh.md) - Ensures that a cryptographically secure algorithm is used to generate all PDB source file hashes.
- [`/Zi`, `/ZI` (Debug Information Format) in Microsoft C++](../build/reference/z7-zi-zi-debug-information-format.md) - In addition to publishing stripped symbols for collecting crash data and other public use scenarios, ensure that builds produce and archive private PDBs for all released binaries. Binary analysis tools require full symbols to verify whether many security mitigations were enabled at compile-time. Private symbols are critical in security response, and lower debugging and investigation costs when engineers are racing to assess and limit damage when an exploit happens.
- [`/SOURCELINK` in Microsoft C++ Linker - Include Sourcelink file in PDB](../build/reference/sourcelink.md): Source link is a language- and source-control agnostic system providing source debugging for binaries. Source debugging greatly increases the efficiency the range of prerelease security validations and post-release incident response.

**Enable compiler errors to prevent issues at code authoring time**

Compilation should enable security-relevant compiler checks as breaking errors, for example:
- [`/sdl` in Microsoft C++ - Enable additional security checks](https://aka.ms/AdditionalSecurityChecks) elevates many security-relevant warnings into errors and enables advanced secure code-generation features.
- [BinSkim BA2007.EnableCriticalCompilerWarnings | GitHub](https://github.com/microsoft/binskim/blob/main/src/BinSkim.Rules/PERules/BA2007.EnableCriticalCompilerWarnings.cs) maintains a list of Microsoft-recommended C/C++ compiler warnings that should always be enabled and elevated to errors.

**Mark binaries as compatible with OS runtime security mitigations**

Compiler and linker settings should opt into code generation features that detect and mitigate malicious code execution, including:
- Stack corruption prevention
    - [`/SAFESEH` - Image has safe exception handlers](https://aka.ms/SafeExceptionHandlers) - Produces a table of the image's safe exception handlers for x86 binaries.
    - [`/GS` - Buffer Security Check](https://aka.ms/BufferSecurityCheck) - Detects some buffer overruns that overwrite return addresses, exception handler addresses or certain types of parameters.
- Position independent code execution
    - [`/DYNAMICBASE` - Use Address Space Layout Randomization](https://aka.ms/ASLR) - Generates executable images that can be randomly rebased at load time.
    - [`/HIGHENTROPVA` and `/LARGEADDRESSAWARE` - Support 64-bit ASLR, and Handle large addresses](https://aka.ms/HEVA) - Enables use of entire 64-bit address space for image rebasing.
- Code flow integrity
    - [`/guard:cf` - Enable Control Flow Guard](https://aka.ms/ControlFlowGuard) - Inserts runtime verifications for indirect call targets.
    - [`/CETCOMPAT` - CET shadow stack compatible](https://aka.ms/CETShadowStack) - Marks an executable image as compatible with Microsoft's implementation of Intel's [Control-flow Enforcement Technology (CET)](https://www.intel.com/content/www/us/en/developer/articles/technical/technical-look-control-flow-enforcement-technology.html) Shadow Stack feature.
    - [`/guard:ehcont` - Enable EH continuation metadata](../build/reference/guard-enable-eh-continuation-metadata.md) - Generates a list of safe relative virtual addresses (RVA) of all exception handling continuation targets.
- Data execution prevention
    - [`/NXCOMPAT` - Compatible with Data Execution Prevention](https://aka.ms/DataExecutionPrevention) - Marks a 32-bit executable image as compatible with the [Windows Data Execution Prevention (DEP)](https://support.microsoft.com/topic/what-is-data-execution-prevention-dep-60dabc2b-90db-45fc-9b18-512419135817) feature. 64-bit builds are compatible with DEP by default.)

**Prevent sensitive information disclosure**

Compiler settings should opt into sensitive information discovery prevention. In recent years, researchers have uncovered unintended information leakage that originates with hardware features such as speculative execution.

At the software level, confidential data might be transmitted to attackers if unexpectedly leaked. Failure to zero-initialize buffers and other buffer misuse might leak private confidential data to attackers that call trusted API. This class of problem best handled by enabling extra static analysis and using secure resource containers as described previously.

- [`/Qspectre` - Mitigate speculative execution side-channel attacks](https://aka.ms/SpectreMitigations) - Inserts barrier instructions that help prevent the disclosure of sensitive data produced by speculative execution. These mitigations should be enabled for code that stores sensitive data in memory and operates across a trust boundary. Microsoft always recommends measuring performance impact against appropriate benchmarks when enabling Spectre-mitigations due to the possibility of introducing runtime checks in performance-critical blocks or loops. These code paths can disable mitigations via the [`spectre(nomitigation)`](../cpp/spectre.md) `declspec` modifier. Projects that enable `/Qspectre` should also link to libraries that are also compiled with these mitigations, including the Microsoft runtime libraries.

## 2.6 Black box test cases

**Summary**

Black box tests don't rely on knowing the tested component's inner workings. Black box tests are designed to test the end-to-end functionality of the features in the product at any layer or level. Black box tests can be functional tests, UI tests, performance tests, and integration tests. Black box tests are valuable for measuring general reliability and functional correctness, and ensuring that the product behaves as expected.

**Relation to other sections** 

These types of requirement-based tests are useful for validating the assumptions made in the Threat Model and covering potential threats as brought up in that section. These tests are useful for testing the integration between separate components of the product, especially ones that are across trust boundaries as described in the threat model. Black box test cases are also useful for testing all kinds of edge cases for user input validation. Testing known edge cases and error cases are both useful. Fuzzing is also useful to test less obvious cases.

**Automation and regression**

Run these tests regularly, and compare the results to previous runs to catch breaking changes or performance regressions. Also, running these tests on many different machines and installation setups can help cover any issues that might arise from different architectures or setup changes.

**Crash dumps**

These tests help find issues with reliability, being able to test many different scenarios that might run into crashes, hangs, deadlocks, and so on. By collecting crash dumps as part of test failures, you can import the dumps directly into Visual Studio to further investigate what parts of the code are hitting these issues. If you run functional tests from within Visual Studio, you can easily replicate and debug failures by seeing exactly where inside the black box the test fails, and you can test fixes quickly.

To get started with debugging tests, see [Debug unit tests with Test Explorer - Visual Studio (Windows)](/visualstudio/test/debug-unit-tests-with-test-explorer)

**In Azure**

Azure DevOps can also help manage and validate these tests with the use of Test Plans. These tests can be used to ensure approval with manual validation, and to run automated tests associated with product requirements. More information on Azure Test Plans and using them to run automated testing can be found here:
- [What is Azure Test Plans? Manual, exploratory, and automated test tools. - Azure Test Plans](/azure/devops/test/overview)
- [Run automated tests from test plans - Azure Test Plans](/azure/devops/test/run-automated-tests-from-test-hub)

## 2.7 Code-based test cases

**Summary**

Code-based test cases are an integral part of maintaining the security and reliability of your product. These tests should be small and fast and shouldn't have an impact on each other so they can be run in parallel. Code-based tests are easy for developers to run locally on their development machine anytime they make changes to the code without worrying about slowing down their development cycle.

**Types, and relation to other sections**

Common types of code-based test cases include:
- unit tests,
- parameterized tests to cover functions with multiple input types,
- component tests to keep each test component separate, and
- mock testing to validate parts of the code that communicate with other services, without expanding the scope of the test to include those services themselves.

These tests are based on the internal code that is written, whereas black box tests are based on the external functional requirements of the product.

**Goal**

Through these tests, the goal is to achieve a high level of test coverage over your code. You should actively track this coverage and where gaps exist. As you add more tests that exercise more code paths, the overall confidence in your code's security and reliability increases.

**Visual Studio**

The test explorer tools in Visual Studio make it easy to run these tests frequently and get feedback on pass/fail rates and failure locations quickly. Many of the test frameworks also support CodeLens features to see the test status at the location of the test itself, making adding and maintaining the suite of tests easier. The Test Explorer also makes managing these tests easy, allowing for test groups, custom test playlists, filtering, sorting, searching, and more.

For more information, see:

- [Unit testing fundamentals - Visual Studio (Windows)](/visualstudio/test/unit-test-basics) - an introduction and overview
- [Run unit tests with Test Explorer - Visual Studio (Windows)](/visualstudio/test/run-unit-tests-with-test-explorer#group-and-filter-the-test-list) - a deeper look at what's available to help manage the potentially large set of unit tests with the Test Explorer

Visual Studio also comes with tools for tracking the code coverage. These tools enable you to ensure that code changes you make are covered by existing tests, or to add new tests to cover new and untested code paths. The tools also show the code coverage percentage to ensure it's maintained above a target level for confidence in overall code quality.

For information about these tools, see [Code coverage testing - Visual Studio (Windows)](/visualstudio/test/using-code-coverage-to-determine-how-much-code-is-being-tested)

**In Azure**

Azure DevOps can also help in tracking code coverage results for the whole product as part of the build pipeline process. For more information, see [Review code coverage - Azure Pipelines](/azure/devops/pipelines/test/review-code-coverage-results).

## 2.8 Historical test cases

**Summary**

Historical test cases, also known as regression test cases, prevent old issues from resurfacing again and increase the overall test coverage of the product. You should ensure that when a bug is fixed the project also adds a corresponding test case. Over time, as fixes are made, the overall robustness of the testing suite will keep improving, giving better assurances of reliability and security.

**Key qualities, and relation to other sections**

Since they test for bug regressions, these tests should be quick and easy to run, so they can run alongside the [Code Based Test Cases](#27-code-based-test-cases) and contribute to the overall code coverage of the product. Along with this, using real examples from customers to inspire new test cases is a great way to improve coverage and quality of tests.

**Visual Studio**

Visual Studio lets you easily add tests to the suite while making the changes to fix the bug, and quickly run the tests and code coverage to ensure all new cases get considered. Referencing the bug ID from your issue tracking system in your code where you write the test is a good way to connect regression tests to the corresponding issues. Prefer to use Azure Boards and test plans together with Visual Studio:
- to associate tests, test cases, and issues; and
- to track of all aspects of an issue and its corresponding tests.

For more information, see:
- [Associate automated tests with test cases - Azure Test Plans](/azure/devops/test/associate-automated-test-with-test-case)
- [Link work items to other objects - Azure DevOps](/azure/devops/organizations/notifications/add-links-to-work-items)

Eventually, integrating these tests into the unit testing area that is supposed to cover the code section helps keep the test suite organized and easier to manage. You can use the Test Explorer's test grouping to effectively track the tests that belong together. For more information, see [Run unit tests with Test Explorer - Visual Studio (Windows)](/visualstudio/test/run-unit-tests-with-test-explorer#group-and-filter-the-test-list)

## 2.9 Fuzzing

**Summary**
Fuzzing (also known as fuzz testing) is an automated software testing technique that involves providing invalid, unexpected, or random data as input to a program. The program is then monitored for exceptions such as crashes, failing built-in or compiler injected code assertions and potential memory leaks.

**Guidance**

Use fuzzing on all software that might process untrusted inputs that an attacker could control. If you're building a new application and its associated test suite, include fuzzing for key modules as early as possible. Running fuzzing for the first time on a piece of software nearly always uncovers actual vulnerabilities that were previously unknown. Once you start fuzzing, never stop.

**Relation to other sections**

When fuzzing reports a failure, it always naturally provides a reproducible test case that demonstrates the bug. This test case can be reproduced, resolved, and then added to the Historical Test Cases.

When using both sanitizers such as [Address Sanitizer (ASan)](../sanitizers/asan.md) and fuzzing:
- First run your normal tests with sanitizers enabled to see if there are issues, then once the code is sanitizer-clean start fuzzing.
- For C or C++, there are compilers that automate injection of runtime assertions and meta-data that enable ASan. When compiled for ASan, the resulting binaries link with a runtime library that can precisely diagnose [15+ categories of memory safety errors](../sanitizers/asan.md#error-types) with zero false positives. For C or C++ when you have source, use [LibFuzzer](https://www.llvm.org/docs/LibFuzzer.html), which requires ASan to be enabled first.
- For libraries written in Java, C#, Python, Rust, and so on, use the [AFL++ framework](https://aflplus.plus/).

**Key qualities**

- Fuzzing finds vulnerabilities often missed by static program analysis, exhaustive feature testing and manual code inspection.
- Fuzzing is an effective way to find security and reliability bugs in software, so much so that the [Microsoft Security Development Lifecycle](https://www.microsoft.com/securityengineering/sdl/) requires fuzzing at every untrusted interface of every product (see also Threat Modeling).
- Always use fuzzing for software that might process untrusted inputs.
- Fuzzing is effective for standalone applications with large data parsers.

**Azure and GitHub CI/CD**

Modify your build(s) to support continuous creation of executables that use LibFuzzer or AFL++. You can add extra computing resources required for fuzzing at services like  OSS-Fuzz.

## 2.10 Web Application Scanning

**Summary**

Within the scope of Microsoft C++ on Windows, Microsoft recommends:

- Prefer TypeScript, JavaScript, and ASP.NET for web applications.
- Don't write web extensions in C++. Microsoft has deprecated ActiveX.
- When code is compiled to Emscripten/WASM, it's no longer C++ and other tools apply.
- Microsoft provides [RESTler, a stateful REST API fuzzer](https://github.com/microsoft/restler-fuzzer).

**Overview and key qualities**

A web application scanner explores a web application by crawling through its web pages and examines it for security vulnerabilities. This crawl involves the automatic generation of malicious inputs and evaluation of the application's responses. Critically, web application scanning must cover/support:

- Catalogs all web apps in your network, including new and unknown ones, and scales from a handful of apps to thousands.
- Deep scanning for software versions, SOAP and REST API services and APIs used by mobile devices.
- Insertion of security primitives into application development and deployment in DevOps environments. These primitives work with the crawler.
- Malware detection.

## 2.11 Check Included Software Components

**Summary**

Handle your C++ code the same as code written in other programming languages, and apply any Software Composition Analysis (SCA) and Origin Analysis (OA) tooling adopted by your company to your C++ code. Workflows and security scanning should be designed as part of CI/CD (continuous integration and continuous delivery) systems.

**Upstream defense**

To mitigate the risk of attacks on upstream dependencies, third party sources/components should be stored on an enterprise-controlled asset, against which SCA and OA tools are run.
- Tools should scan and alert when vulnerabilities are identified (including public databases) such as: [Home | CVE](https://www.cve.org/)
- Run static analysis on all software components included in your application/repo to identify vulnerable code patterns.

**Dependency defense**

Perform and maintain an audit of dependencies to validate that all such occurrences are accounted for and covered by your SCA and OA tools.
- Components should be regularly audited and updated to the latest verified versions.
- Package feed dependencies.
- SCA/OA tools cover and audit all package dependencies that come from a single feed.

**SBOM**

Produce an SBOM (software bill of materials) with your product listing all dependencies such as:
- origin (for example, URL (Uniform Resource Locator))
- version
- consistency (for example, SHA-256 source hash), and other means for validating consistency such as deterministic builds.
- Require and audit SBOM files in software dependencies or produced as part of a build including OSS (open-source software).
- Microsoft is standardizing on and recommends [SPDX (Software Package Data Exchange) version 2.2 or later | Linux Foundation](https://spdx.dev/specifications/) as the SBOM document format.
- Build determinism can be used to independently produce bit-wise identical binaries and provide independent verifications of integrity:
    - First-party or third-party attestation of reproducibility
    - Other techniques such as binary signing via a trusted certificate source can also provide some assurances of binary integrity.

**Additional resources**

Microsoft solutions include the following guidance and products:
- [Microsoft Supply Chain Platform | Microsoft](https://www.microsoft.com/microsoft-cloud/solutions/microsoft-supply-chain-platform)
- [Secure your software supply chain | GitHub Security](https://github.com/features/security/software-supply-chain)
- [vcpkg](/vcpkg/) - vcpkg private registries allow redirection of OSS acquisition to Enterprise-controlled resources for acquiring sources for a dependency, to minimize risk of upstream or over-the-wire attacks.
