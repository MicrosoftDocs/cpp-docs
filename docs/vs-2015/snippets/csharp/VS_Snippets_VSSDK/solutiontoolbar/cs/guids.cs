// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.SolutionToolbar
{
    static class GuidList
    {
        public const string guidSolutionToolbarPkgString = "400c36a6-c0a9-41dc-9dac-62a237bde6c8";
        public const string guidSolutionToolbarCmdSetString = "fb8bdc2d-a767-4494-817e-06bb8f1e7c92";

        public static readonly Guid guidSolutionToolbarCmdSet = new Guid(guidSolutionToolbarCmdSetString);
    };
}