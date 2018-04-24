// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.VSSDKFeedbackStatusBar
{
    static class GuidList
    {
        public const string guidVSSDKFeedbackStatusBarPkgString = "4f64e8cf-28df-4e62-9d19-000cd681b284";
        public const string guidVSSDKFeedbackStatusBarCmdSetString = "1278739c-b7c2-4b02-89ac-b664d5a5b1be";

        public static readonly Guid guidVSSDKFeedbackStatusBarCmdSet = new Guid(guidVSSDKFeedbackStatusBarCmdSetString);
    };
}