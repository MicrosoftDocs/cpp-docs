// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.VSSDKEditorFactories
{
    static class GuidList
    {
        public const string guidVSSDKEditorFactoriesPkgString = "89e84826-1aa8-49bd-b9c4-38b484f3e103";
        public const string guidVSSDKEditorFactoriesCmdSetString = "578f4547-f206-4a44-b5fa-1f19be633707";
        public const string guidEditorFactory = "68905658-0317-5b55-c60b-202acf744818";

        public static readonly Guid guidVSSDKEditorFactoriesCmdSet = new Guid(guidVSSDKEditorFactoriesCmdSetString);
    };
}