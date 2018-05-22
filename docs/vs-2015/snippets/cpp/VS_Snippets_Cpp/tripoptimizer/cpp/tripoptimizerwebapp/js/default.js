//// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//// PARTICULAR PURPOSE.
////
//// Copyright (c) Microsoft Corporation. All rights reserved

// For an introduction to the Blank template, see the following documentation:
// http://go.microsoft.com/fwlink/?LinkId=232509
(function () {
    "use strict";

    var app = WinJS.Application;
    var activation = Windows.ApplicationModel.Activation;

    app.onactivated = function (args) {
        if (args.detail.kind === activation.ActivationKind.launch) {
            if (args.detail.previousExecutionState !== activation.ApplicationExecutionState.terminated) {
                // TODO: This application has been newly launched. Initialize
                // your application here.
            } else {
                // TODO: This application has been reactivated from suspension.
                // Restore application state here.
            }
            args.setPromise(WinJS.UI.processAll());
        }
    };

    app.oncheckpoint = function (args) {
        // TODO: This application is about to be suspended. Save any state
        // that needs to persist across suspensions here. You might use the
        // WinJS.Application.sessionState object, which is automatically
        // saved and restored across suspension. If you need to complete an
        // asynchronous operation before your application is suspended, call
        // args.setPromise().
    };

    app.start();
})();

// Use the revealing module pattern to encapsulate implementation details.
var localContext = function () {

    // The C++ component.
    var tripOptimizer = null;

    // The current asynchronous trip optimization.
    var asyncOperation = null;

    function onLoad() {
        "use strict";
        window.addEventListener("message", receiveMessage, false);
    }

    function receiveMessage(message) {
        "use strict";
        // Verify event origin.
        if (message.origin !== "ms-appx-web://microsoft.sdksamples.tripoptimizer") {
            return;
        }

        var data = JSON.parse(message.data);
        if (data.invoke === "load") {
            optimizerLoad();
        } else if (data.invoke === "optimizeTrip") {
            optimizerOptimizeTrip(
                data.locations,
                data.travelMode,
                data.optimize,
                data.bingMapsKey,
                data.alpha,
                data.beta,
                data.rho,
                data.iterations,
                data.parallel);
        } else if (data.invoke === "cancel") {
            optimizerCancel();
        } else if (data.invoke === "alert") {
            // Show message dialog.
            new Windows.UI.Popups.MessageDialog(data.message).showAsync().then();
        }
    }

    function optimizerLoad() {
        "use strict";
        tripOptimizer = new TripOptimizerComponent.TripOptimizer();
    }

    function optimizerOptimizeTrip(locations, travelMode, optimize, bingMapsKey, alpha, beta, rho, iterations, parallel) {
        "use strict";
        asyncOperation = tripOptimizer.optimizeTripAsync(locations, travelMode, optimize, bingMapsKey,
            alpha, beta, rho, iterations, parallel);

        asyncOperation.then(
            function (result) {
                if (result !== null) {
                    // If the result contains certain keys, then we know that the results contain
                    // the optimize route.
                    if (result.size === 2 && result.hasKey("locations") && result.hasKey("displayNames")) {
                        routeCallback(result);
                    }
                        // Otherwise, we know that the component is asking us to resolve ambiguous locations.
                    else {
                        locationsCallback(result);
                    }
                }
                asyncOperation = null;
            },
            function (error) {
                if (error.description === "Canceled") {
                    canceledCallback();
                }
                else {
                    errorCallback("Error: " + error.message);
                }
                asyncOperation = null;
            },
            function (progress) {
                progressCallback(progress);
            }
            );
    }

    function optimizerCancel() {
        "use strict";
        if (asyncOperation !== null) {
            asyncOperation.cancel();
        }
    }

    // Event handler for progress notifications from the Windows Runtime component.
    function progressCallback(info) {
        "use strict";
        var message = { "invoke": "progressCallback", "message": info };
        window.parent.frames.mapFrame.postMessage(JSON.stringify(message), "*");
    }

    // Event handler for ambiguous locations from the Windows Runtime component.
    function locationsCallback(info) {
        "use strict";
        var message = { "invoke": "locationsCallback", "locationOptions": JSON.stringify(mapToJSMap(info)) };
        window.parent.frames.mapFrame.postMessage(JSON.stringify(message), "*");
    }

    // Event handler for the optimized route as determined by the Windows Runtime component.
    function routeCallback(info) {
        "use strict";
        var message = { "invoke": "routeCallback", "locations": info.lookup("locations"), "displayNames": info.lookup("displayNames") };
        window.parent.frames.mapFrame.postMessage(JSON.stringify(message), "*");
    }

    // Event handler for when the Windows Runtime component has finished a cancelation operation.
    function canceledCallback() {
        "use strict";
        var message = { "invoke": "canceledCallback" };
        window.parent.frames.mapFrame.postMessage(JSON.stringify(message), "*");
    }

    // Event handler for when the Windows Runtime component has encountered an unrecoverable error.
    function errorCallback(info) {
        "use strict";
        var message = { "invoke": "errorCallback", "message": info };
        window.parent.frames.mapFrame.postMessage(JSON.stringify(message), "*");
    }

    function mapToJSMap(winMap) {
        "use strict";
        var jsMap = {};

        for (var it = winMap.first() ; it.hasCurrent; it.moveNext()) {
            jsMap[it.current.key] = it.current.value;
        }

        return jsMap;
    }

    // Return the public functionality.
    return {
        onLoad: onLoad
    };
}();