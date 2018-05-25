// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.MenuCommandTest
{
    static class GuidList
    {
        public const string guidMenuCommandTestPkgString = "011a011c-8f87-4a5c-83f8-d8656b2cc472";
        public const string guidMenuCommandTestCmdSetString = "a5757164-42c0-4855-8d96-c89b6c8baf74";

        public static readonly Guid guidMenuCommandTestCmdSet = new Guid(guidMenuCommandTestCmdSetString);
    };
}