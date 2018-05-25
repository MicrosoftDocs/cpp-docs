// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.VSModalDialog
{
    static class GuidList
    {
        public const string guidVSModalDialogPkgString = "0cc8d8af-7a38-445e-811b-eaed316f1d5f";
        public const string guidVSModalDialogCmdSetString = "4192a793-d0d0-4f3b-8234-2da373863c60";

        public static readonly Guid guidVSModalDialogCmdSet = new Guid(guidVSModalDialogCmdSetString);
    };
}