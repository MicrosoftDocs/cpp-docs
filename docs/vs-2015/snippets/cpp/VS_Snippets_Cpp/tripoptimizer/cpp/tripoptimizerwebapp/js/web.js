//// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//// PARTICULAR PURPOSE.
////
//// Copyright (c) Microsoft Corporation. All rights reserved

// Use the revealing module pattern to encapsulate implementation details.
var webContext = function () {

    // Map control.
    var map = null;
    // Pushpin infobox
    var pinInfobox = null;

    //
    // Used to manage waypoints.
    //
    var waypoints = [];
    var nextWaypointId = 0;
    var maxWaypoints = 25;
    var alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    //
    // Misc
    //
    var progressIntervalId = 0;   // Timer ID for progress messages.
    var ellipsis = "";            // Helps with the progress message animation.
    var bingMapsKey = "";         // The user's Bing Maps developer key.
    var disambiguateId = 0;       // Helps uniquely identify div elements for disambiguating locations.

    var optimizedRouteArray;      // The resulting optimized route as an array.
    // Each member is a string in the following format:
    // "latitude,longitude"
    // For example, "47.620056,-122.349261".
    var optimizedRouteNamesArray; // The display name for each member of optimizedRouteArray.
    // For example, "47.620056,-122.349261" might correspond to "Space Needle, WA".
    var defaultZoom = 12;         // Initial zoom level.

    function optimizerLoad() {
        "use strict";
        var message = { "invoke": "load" };
        window.parent.postMessage(JSON.stringify(message), "*");
    }

    function optimizerCancel() {
        "use strict";
        var message = { "invoke": "cancel" };
        window.parent.postMessage(JSON.stringify(message), "*");
    }

    function optimizerOptimizeTrip(locations, travelMode, optimize, key, alpha, beta, rho, iterations, parallel) {
        "use strict";
        var message = {
            "invoke": "optimizeTrip",
            "locations": locations,
            "travelMode": travelMode,
            "optimize": optimize,
            "bingMapsKey": key,
            "alpha": alpha,
            "beta": beta,
            "rho": rho,
            "iterations": iterations,
            "parallel": parallel
        };

        window.parent.postMessage(JSON.stringify(message), "*");
    }

    // Called when the page loads.
    function onLoad() {
        "use strict";
        // Hook to main frame for incoming messages.
        window.addEventListener("message", receiveMessage, false);

        // Disable input.
        disableElement(inputArea, true);

        // Load the C++ component.
        optimizerLoad();

        // Load a default map.
        map = new Microsoft.Maps.Map(document.getElementById("mapDiv"),
            {
                center: new Microsoft.Maps.Location(45.5, -80.5),
                mapTypeId: Microsoft.Maps.MapTypeId.auto,
                zoom: 4
            });

        // Reset waypoints.
        resetWaypoints();
    }

    // Receives a message from the local context.
    function receiveMessage(message) {
        "use strict";
        // Verify event origin.
        if (message.origin !== "ms-appx-web://microsoft.sdksamples.tripoptimizer") {
            return;
        }

        var data = JSON.parse(message.data);
        if (data.invoke === "progressCallback") {
            progressCallback(data.message);
        } else if (data.invoke === "locationsCallback") {
            locationsCallback(JSON.parse(data.locationOptions));
        } else if (data.invoke === "routeCallback") {
            routeCallback(data.locations, data.displayNames);
        } else if (data.invoke === "canceledCallback") {
            canceledCallback();
        } else if (data.invoke === "errorCallback") {
            errorCallback(data.message);
        }
    }

    // Adds a waypoint to the input area with the given initial text in
    // the input box.
    function addWaypoint(inputText) {
        "use strict";

        var div,
            div2,
            span,
            input,
            msg,
            message;

        // Check for max inputs.
        if (waypoints.length === maxWaypoints) {
            // Send a message to inform the app container to show an alert box.
            msg = "Cannot specify more than " + maxWaypoints + " waypoints.";
            message = {
                "invoke": "alert", "message": msg
            };
            window.parent.postMessage(JSON.stringify(message), "*");
            return;
        }

        div = document.createElement("div");
        div.setAttribute("id", "waypointContainer" + nextWaypointId);
        div.setAttribute("class", "elementContainer");
        div.setAttribute("data-waypoint-id", nextWaypointId);

        span = document.createElement("span");
        span.setAttribute("id", "stepLetter" + nextWaypointId);
        span.setAttribute("class", "directionStepLetter");
        span.innerHTML = alphabet[waypoints.length];
        div.appendChild(span);

        div2 = document.createElement("div");
        div2.setAttribute("id", "waypointInputWrapper" + nextWaypointId);
        div2.setAttribute("class", "inputArea");
        input = document.createElement("input");
        input.setAttribute("id", "waypointInput" + nextWaypointId);
        input.setAttribute("type", "text");
        input.setAttribute("maxlength", "256");
        input.value = inputText;
        div2.appendChild(input);
        div.appendChild(div2);

        // Add to document.
        waypointsArea.appendChild(div);

        // Add to our collection.
        waypoints.push(div);

        nextWaypointId++;
        updateRemoveLinks();
    }

    // Removes the waypoint with the provided ID from the input area.
    function removeWaypoint(waypointId) {
        "use strict";
        var waypoint;
        // Remove from our collection.
        for (waypoint in waypoints) {
            if (waypoints[waypoint].id === waypointId) {
                waypoints.splice(waypoint, 1);
                break;
            }
        }

        // Remove from document.
        waypointsArea.removeChild(document.getElementById(waypointId));

        renumberWaypoints();
        updateRemoveLinks();
    }

    // Removes all waypoints from the input area.
    function resetWaypoints() {
        "use strict";
        while (waypoints.length > 0) {
            removeWaypoint(waypoints[0].id);
        }
        addWaypoint("");
        addWaypoint("");
    }

    // Renumbers the flags that appear next to the waypoint inputs.
    function renumberWaypoints() {
        "use strict";
        var waypoint;
        for (waypoint in waypoints) {
            if (waypoints.hasOwnProperty(waypoint)) {
                waypoints[waypoint].getElementsByTagName("span")[0].innerHTML = alphabet[waypoint];
            }
        }
    }

    // Ensures that the 'remove' link correctly appears next to each waypoint.
    function updateRemoveLinks() {
        "use strict";
        var action;

        // If there are fewer than three waypoints, disable the 'remove' link.
        // Otherwise, enable the 'remove' link for each waypoint.

        function addRemoveLink(waypoint) {
            var link,
                id,
                div,
                a;

            link = waypoint.querySelectorAll("a");
            // Check whether link is already present.
            if (link.length > 0) { return; }

            // Get id from parent container.
            id = waypoint.getAttribute("data-waypoint-id");

            // Create div and hyperlink.

            div = document.createElement("div");
            div.setAttribute("class", "elementContainer commandLink");

            a = document.createElement("a");
            a.setAttribute("href", "#");
            a.onclick = function () { removeWaypoint('waypointContainer' + id); };
            a.innerHTML = "remove";

            div.appendChild(a);
            waypoint.appendChild(div);
        }

        function removeRemoveLink(waypoint) {
            var link = waypoint.querySelectorAll("elementContainer");
            if (link.length > 0) {
                waypoint.removeChild(link[0]);
            }
        }

        action = (waypoints.length > 2) ? addRemoveLink : removeRemoveLink;
        waypoints.forEach(function (waypoint) {
            action(waypoint);
        });
    }

    // Populates the input area with parks in the Pacific Northwest.
    function addParkWaypoints() {
        "use strict";
        // Clear the previous input.
        while (waypoints.length > 0) {
            removeWaypoint(waypoints[0].id);
        }

        // Start and end in Seattle.
        addWaypoint("Space Needle");

        // Add parks in no particular order.
        addWaypoint("Coulee Dam, WA");
        addWaypoint("Crater Lake National Park, OR");
        addWaypoint("Glacier National Park, MT");
        addWaypoint("Lassen Volcanic National Park, CA");
        addWaypoint("Mount Rainier National Park, Ashford WA");
        addWaypoint("North Cascades National Park, WA");
        addWaypoint("Olympic National Park, WA");
        addWaypoint("Redwood National Park, CA");
        addWaypoint("Yellowstone National Park, WY");
    }

    // Populates the input area with a fictitious delivery route.
    function addDeliveryWaypoints() {
        "use strict";
        // Clear the previous input.
        while (waypoints.length > 0) {
            removeWaypoint(waypoints[0].id);
        }

        // Begin and end at our company in Seattle.
        addWaypoint("James St, Seattle WA 98104");

        // Deliver to a number of local gas stations.
        addWaypoint("11001 Roosevelt Way NE, Seattle WA"); // 76
        addWaypoint("2801 Martin Luther King Jr Way S, Seattle WA"); // 76
        addWaypoint("101 NE 50th St, Seattle WA"); // 7-Eleven
        addWaypoint("103 15th Ave E, Seattle WA"); // 7-Eleven
        addWaypoint("11065 8th Ave S, Seattle WA"); // 7-Eleven
        addWaypoint("11657 Des Moines Memorial Dr, Seattle WA"); // 7-Eleven
        addWaypoint("1518 W Dravus St, Seattle WA"); // 7-Eleven
        addWaypoint("1652 SW Lander St, Seattle WA"); // ARCO
        addWaypoint("2347 California Ave SW, Seattle WA"); // Chevron
        addWaypoint("3317 W Government Way, Seattle WA"); // Shell
        addWaypoint("3201 20th Ave W, Seattle WA"); // AM/PM
        addWaypoint("427 12th Ave, Seattle WA"); // AM/PM
        addWaypoint("12903 20th Ave NE, Seattle WA"); // AM/PM
        addWaypoint("10822 Roosevelt Way NE, Seattle WA"); // ARCO
        addWaypoint("10504 Aurora Ave N, Seattle WA"); // AM/PM
        addWaypoint("2424 Beacon Ave S, Seattle WA"); // Shell
        addWaypoint("2415 Beacon Ave S, Seattle WA"); // 76
        addWaypoint("600 S Michigan St, Seattle WA"); // Shell
        addWaypoint("13001 Lk City Way NE, Seattle WA"); // Chevron
        addWaypoint("1520 SW 100th St, Seattle WA"); // Chevron
    }

    // Collects the waypoints and other options from user input and sends
    // them to the control.
    function getDirections() {
        "use strict";
        var msg,
            message,
            locations,
            alpha,
            beta,
            rho,
            iterations,
            parallel;

        // Ensure that the user provided a non-negative, numeric iterations value.
        iterations = parseInt(iterationsText.value, 10);
        if (isNaN(iterations) || iterations < 1) {
            // Send a message to inform the app container to show an alert box.
            msg = "'Iterations' must be greater than 0";
            message = {
                "invoke": "alert", "message": msg
            };
            window.parent.postMessage(JSON.stringify(message), "*");
            return;
        }

        // Read each waypoint from the user input and add it to an array.
        locations = [];
        waypoints.forEach(function (waypoint) {
            var loc;
            loc = waypoint.getElementsByTagName("div")[0].getElementsByTagName("input")[0].value;
            if (loc.length > 0) {
                locations.push(location);
            }
        });
        // Ensure that the user provided at least two locations.
        if (locations.length < 2) {
            // Send a message to inform the app container to show an alert box.
            msg = "Enter at least two locations for your trip.";
            message = {
                "invoke": "alert", "message": msg
            };
            window.parent.postMessage(JSON.stringify(message), "*");
            return;
        }

        // Read additional user options from the page.
        alpha = parseFloat(alphaSelect.value);
        beta = parseFloat(betaSelect.value);
        rho = parseFloat(rhoSelect.value);
        parallel = parallelProcessingCheckbox.checked;

        // Prepare the UI for the operation.
        showElement("progressDiv", true);
        startProgressTimer();
        disableElement(inputArea, true);

        // Clear any previous error message.
        errorMessageText.innerHTML = "";

        // Begin the trip optimization. The control will call us back when the
        // operation is finished or when there is an unrecoverable error.
        optimizerOptimizeTrip(locations,
            travelModeSelect.value,
            optimizeSelect.value,
            bingMapsKey,
            alpha, beta, rho,
            iterations, parallel);

        // Enable the Cancel button.
        cancelButton.disabled = false;
    }

    // Called when the user presses the 'Edit Route' button.
    function onEditRoute() {
        "use strict";
        // Update the UI.
        showElement("taskHostTurns", false);
        showElement("taskHostWelcomeTask", true);
        // Show scrollbar of outer frame.
        leftFrame.style.overflowY = "scroll";
    }

    // Called when the user presses the 'Cancel' button.
    function onCancel() {
        "use strict";
        // Prevent multiple cancel operations.
        cancelButton.disabled = true;

        // Inform the control to cancel the operation.
        optimizerCancel();
    }

    // Called when the user presses the 'OK' button from the Bing Maps
    // developer key input area.
    function onBingMapsKey() {
        "use strict";

        var msg,
            message;

        bingMapsKey = bingMapsKeyInput.value;

        // Ensure that the user entered a Bing Maps developer key.
        if (bingMapsKey.length === 0) {
            // Send a message to inform the app container to show an alert box.
            msg = "You must enter a Bing Maps developer key before you can optimize your trip.";
            message = {
                "invoke": "alert", "message": msg
            };
            window.parent.postMessage(JSON.stringify(message), "*");
        }
        else {
            // Hide the dev key input area.
            showElement("bingDevKey", false);

            // Set the map credentials.
            map = new Microsoft.Maps.Map(document.getElementById("mapDiv"),
                    {
                        credentials: bingMapsKey,
                        center: new Microsoft.Maps.Location(45.5, -80.5),
                        mapTypeId: Microsoft.Maps.MapTypeId.auto,
                        zoom: 4
                    });

            // Enable the input UI.
            disableElement(inputArea, false);
        }
    }

    // Enables the input area.
    function enableInput() {
        "use strict";
        // Stop the progress timer and hide the progress message
        // (including the Cancel button).
        stopProgressTimer();
        showElement("progressDiv", false);

        // Enable the input UI.
        disableElement(inputArea, false);
    }

    // Starts the progress animation that appears above the input UI.
    // This animation runs when the control is optimizing the trip.
    function startProgressTimer() {
        "use strict";
        ellipsis = "";
        progressIntervalId = setInterval(onProgressTimer, 500);
    }

    // Animates the progress timer.
    function onProgressTimer() {
        "use strict";
        if (ellipsis === "...") { ellipsis = ""; }
        else { ellipsis = ellipsis + "."; }
        progressLabel.innerHTML = ellipsis;
    }

    // Stops the progress animation that appears above the input UI.
    function stopProgressTimer() {
        "use strict";
        clearInterval(progressIntervalId);
    }

    // Disables or enables the given element and all its child elements.
    function disableElement(element, disabled) {
        "use strict";
        var n;
        try {
            element.disabled = disabled;
        }
        catch (e) {
        }
        if (element.childNodes && element.childNodes.length > 0) {
            for (n = 0; n < element.childNodes.length; n++) {
                disableElement(element.childNodes[n], disabled);
            }
        }
    }

    // Shows or hides the given element.
    function showElement(elementName, show) {
        "use strict";
        if (show) {
            document.getElementById(elementName).style.visibility = "visible";
        }
        else {
            document.getElementById(elementName).style.visibility = "hidden";
        }
    }

    // Removes a div element that displays disambiguation information for a single location.
    function resolveDisambiguation(locationDivId, text, disambiguateDiv) {
        "use strict";
        var locationDiv = document.getElementById(locationDivId);
        if (text.length > 0) {
            locationDiv
                .getElementsByTagName("div")[0]
                .getElementsByTagName("input")[0].value = text;
        }
        locationDiv.removeChild(document.getElementById(disambiguateDiv));
    }

    // Creates a div element that displays disambiguation information for a single location.
    function showDisambiguation(inputLocation, options) {
        "use strict";
        // Search for the div that corresponds to the input location.
        waypoints.forEach(function (waypoint) {
            var n,
                index,
                loc,
                child,
                children,
                a,
                closeDiv,
                closeA,
                disambiguateDiv,
                divId;

            loc = waypoint.getElementsByTagName("div")[0].getElementsByTagName("input")[0].value;

            if (loc === inputLocation) {
                // If there is an existing disambiguation box, remove it.
                children = waypoint.getElementsByTagName("div");
                for (n = 0; n < children.length; n++) {
                    child = children[n];
                    if (child.getAttribute("class") === "disambiguateBox") {
                        waypoint.removeChild(child);
                        break;
                    }
                }

                // Create the div.
                disambiguateDiv = document.createElement("div");
                divId = "disambiguate" + disambiguateId;
                disambiguateDiv.setAttribute("id", divId);
                disambiguateId++;
                disambiguateDiv.setAttribute("class", "disambiguateBox");

                // Create header text.
                a = document.createElement("div");
                a.setAttribute("class", "disambiguateHeader");
                disambiguateDiv.appendChild(a);
                if (options.length === 0) {
                    a.innerHTML = "There were no results for this location.";
                }
                else {
                    a.innerHTML = "Do you mean:";

                    // Fill in the options.
                    options.forEach(function (option) {
                        var optionDiv,
                            resolve;

                        optionDiv = document.createElement("div");
                        optionDiv.setAttribute("class", "disambiguateItem");
                        // Create a link that selects the option and closes the div.
                        resolve = document.createElement("a");
                        resolve.setAttribute("href", "#");
                        resolve.onclick = function () { resolveDisambiguation(waypoint.id, option, divId); };

                        resolve.innerHTML = option;
                        optionDiv.appendChild(resolve);
                        disambiguateDiv.appendChild(optionDiv);
                    });
                }

                // Create a button that closes the options box without selecting an option.
                closeDiv = document.createElement("div");
                closeDiv.setAttribute("id", "close" + nextWaypointId);
                closeDiv.setAttribute("class", "elementContainer commandLink");

                closeA = document.createElement("a");
                closeA.setAttribute("href", "#");
                closeA.onclick = function () { resolveDisambiguation(waypoint.id, "", divId); };
                closeA.innerHTML = "close";
                closeDiv.appendChild(closeA);

                disambiguateDiv.appendChild(closeDiv);

                waypoint.appendChild(disambiguateDiv);
            }
        });
    }

    // Gets the route map for the provided locations from the Bing Maps control.
    function getRouteMap(routeRequest) {
        "use strict";
        // It's too late to cancel.
        cancelButton.disabled = true;

        // Show a wait cursor.
        document.body.style.cursor = "wait";

        // Reset map.
        map.entities.clear();

        // Get the map for the route.
        callRestService(routeRequest);
    }

    function callRestService(request) {
        "use strict";
        var script = document.createElement("script");
        script.setAttribute("type", "text/javascript");
        script.setAttribute("src", request);
        document.body.appendChild(script);
    }

    // Pans to the given latitude and longitude and then zooms to the provided
    // zoom level.
    function panToLatLongAndZoom(lat, lon, zoom) {
        "use strict";
        // Get the existing options.
        var options = map.getOptions();

        // Set location.
        options.center = new Microsoft.Maps.Location(lat, lon);
        // Set the zoom level of the map.
        options.zoom = zoom;
        map.setView(options);
    }

    // Pans to the given latitude and longitude and then zooms to the provided
    // zoom level and adds a pushpin with the provided step text.
    function panToLatLongAndZoomPushpin(lat, lon, zoom, step) {
        "use strict";
        var options,
            pin;

        // Get the existing options.
        options = map.getOptions();

        // Set location.
        options.center = new Microsoft.Maps.Location(lat, lon);
        // Set the zoom level of the map.
        options.zoom = zoom;
        map.setView(options);

        // Add a pin to the location.
        pin = new Microsoft.Maps.Pushpin(options.center,
                {
                    icon: "../images/BluePushpin.png",
                    width: 50, height: 50,
                    text: step
                });
        map.entities.push(pin);
    }

    // Helper function for the ShowTurns function. Creates a hyperlink to a call to
    // the PanToLatLongAndZoom function.
    function linkToPanAndZoom(latlonString, linkText, zoom) {
        "use strict";
        var latlong = latlonString.split(",");
        return "<a href='javascript:panToLatLongAndZoom(" +
             latlong[0] + "," + latlong[1] +
             "," + zoom + ")'>" + linkText + "</a>";
    }

    // Populates the turn-by-turn directions area with information about each
    // leg.
    function showTurns(route) {
        "use strict";
        var unitLong,
            unitShort,
            turns,
            legs,
            leg,
            turnNum,
            i,
            legNum,
            turn,
            legDistance,
            turnText,
            k,
            hint;

        // Move the outer frame to the top and hide its scrollbar.
        leftFrame.scrollTop = 0;
        leftFrame.style.overflowY = 'hidden';

        // Establish unit of measure.
        unitLong = (travelUnit.value === "Miles") ? "miles" : "kilometers";
        unitShort = (travelUnit.value === "Miles") ? "mi" : "km";

        turns =
             "<div class='routeSummary'>" +
                "<span class='routeSummaryInterior'><span style='color: #10ae20; font-size: 115%'>Route:&nbsp;</span><span>" +
                route.resourceSets[0].resources[0].travelDistance.toFixed(1) + " " + unitLong + ", " +
                formatTime(route.resourceSets[0].resources[0].travelDuration) + "</span></span>" +
             "</div>";

        legs = route.resourceSets[0].resources[0].routeLegs;
        leg = null;
        turnNum = -1;  // The turn number.

        turns += "<div id='routeLegs'>";

        // Get intermediate legs.
        for (i = 0; i < legs.length; i++) {

            leg = legs[i];
            legNum = i + 1;

            turns += "<div class='routeLegSummary'>" +
                         "<span class='directionStepLetter'>" + alphabet[i] + "</span>" +
                         "<div style='margin-left:40px;'>" +
                            linkToPanAndZoom(optimizedRouteArray[i],
                               optimizedRouteNamesArray[i],
                               defaultZoom) + " to " +
                            linkToPanAndZoom(optimizedRouteArray[i + 1],
                               optimizedRouteNamesArray[i + 1],
                               defaultZoom) +
                            "<p>" + leg.travelDistance.toFixed(1) + " " +
                               unitLong + ", " + formatTime(leg.travelDuration) +
                            "</p>" +
                         "</div>" +
                      "</div><hr />";

            turns += "<div>";

            // Unroll each intermediate leg.
            turn = null;         // itinerary leg
            legDistance = null;  // distance for this leg

            for (var j = 0; j < leg.itineraryItems.length; j++) {
                turnNum++;

                turn = leg.itineraryItems[j];

                turns += "<div class='routeLeg'>";

                // Display 'S' (for 'Start') for the first turn (instead of '0').
                turnText = (turnNum === 0) ? "S" : turnNum;

                turns += "<div class='routeLegLeft'>" +
                            "<a href='javascript:panToLatLongAndZoomPushpin(" +
                            turn.maneuverPoint.coordinates[0] + "," + turn.maneuverPoint.coordinates[1] + "," + defaultZoom + ",\"" + turnText + "\")'>" +
                            turnText + "</a>" +
                         "</div>";

                turns += "<div class='routeLegCenter'>" + turn.instruction.text;
                // Show hints if available.
                if (turn.hints !== null) {
                    for (k in turn.hints) {
                        if (turn.hints.hasOwnProperty(k)) {
                            hint = turn.hints[k];
                            turns += "<p style='color:#888888'><i>" + hint.text + "</i></p>";
                        }
                    }
                }
                turns += "</div>";

                legDistance = turn.travelDistance;

                // Don't show 0.0 for the arrival.
                if (legDistance < 0.1) {
                    turns += "<div class='routeLegRight'>" + "< 0.1 " + unitShort + "</div>";
                }
                else {
                    turns += "<div class='routeLegRight'>" + legDistance.toFixed(1) + " " + unitShort + "</div>";
                }
                turns += "</div><hr />";
            }
            turns += "</div>";
        }

        turns += "</div>";

        // Set HTML.
        document.getElementById("directions").innerHTML = turns;
    }

    // Converts the provided time (in seconds) to a string.
    function formatTime(time) {
        "use strict";
        var seconds,
            minutes,
            hours,
            minLeft;

        if (time === null) {
            return "";
        }

        if (time > 60) {
            seconds = time % 60;
            minutes = time - seconds;
            minutes = minutes / 60;

            if (minutes > 60) {
                minLeft = minutes % 60;
                hours = minutes - minLeft;
                hours = hours / 60;

                return (hours + " hr " + minLeft + " min");
            }
            else {
                return (minutes + " min");
            }
        }
        else {
            return "< 1 min";
        }
    }

    // Callback function for the route.
    function mapRouteCallback(result) {
        "use strict";
        var bbox,
            viewBoundaries,
            routeline,
            routepoints,
            i,
            routeshape,
            leg,
            latlong,
            pin;


        // If no results came back, display the error description in
        // the results area.
        if (!result.resourceSets ||
            result.resourceSets.length === 0 ||
            !result.resourceSets[0].resources ||
            result.resourceSets[0].resources.length === 0) {
            // Set HTML.
            document.getElementById("directions").innerHTML = "<p>" + result.errorDetails + "</p>";
        }
        else {

            // Populate the turn-by-turn directions area.
            showTurns(result);

            // Set the map view.
            bbox = result.resourceSets[0].resources[0].bbox;
            viewBoundaries = Microsoft.Maps.LocationRect.fromLocations(
                new Microsoft.Maps.Location(bbox[0], bbox[1]),
                new Microsoft.Maps.Location(bbox[2], bbox[3]));
            map.setView({ bounds: viewBoundaries });

            // Draw the route.
            routeline = result.resourceSets[0].resources[0].routePath.line;
            routepoints = [];

            for (i = 0; i < routeline.coordinates.length; i++) {

                routepoints[i] = new Microsoft.Maps.Location(
                    routeline.coordinates[i][0],
                    routeline.coordinates[i][1]);
            }

            // Draw the route on the map.
            routeshape = new Microsoft.Maps.Polyline(routepoints, { strokeThickness: 4, strokeColor: new Microsoft.Maps.Color(200, 64, 0, 128) });
            map.entities.push(routeshape);
        }

        // Add a pushpin to each location.
        for (leg = 0; leg < optimizedRouteArray.length - 1; leg++) {

            latlong = optimizedRouteArray[leg].split(",");
            pin = new Microsoft.Maps.Pushpin(new Microsoft.Maps.Location(latlong[0], latlong[1]),
                    {
                        text: alphabet[leg]
                    });
            pin.Title = optimizedRouteNamesArray[leg];

            // Add handler for the pushpin click event.
            Microsoft.Maps.Events.addHandler(pin, "mouseover", displayInfobox);

            // Add the pushpin to the map.
            map.entities.push(pin);
        }

        // Create an infobox for the pushpins.
        pinInfobox = new Microsoft.Maps.Infobox(new Microsoft.Maps.Location(0, 0),
                {
                    visible: false,
                    height: 50,
                    offset: new Microsoft.Maps.Point(0, 15)
                });
        map.entities.push(pinInfobox);

        // Hide the infobox when the map is moved.
        Microsoft.Maps.Events.addHandler(map, "viewchange", hideInfobox);

        // Enable the user to create another trip.
        enableInput();

        showElement("taskHostWelcomeTask", false);
        showElement("taskHostTurns", true);

        // Restore cursor.
        document.body.style.cursor = "default";
    }

    function displayInfobox(e) {
        "use strict";
        if (e.targetType === "pushpin") {
            pinInfobox.setLocation(e.target.getLocation());
            pinInfobox.setOptions({ visible: true, title: e.target.Title });
        }
    }

    function hideInfobox(e) {
        "use strict";
        pinInfobox.setOptions({ visible: false });
    }

    // Event handler for progress notifications from the control.
    function progressCallback(message) {
        "use strict";
        // Set message.
        progressMessageText.innerHTML = message;
    }

    // Event handler for ambiguous locations from the control.
    function locationsCallback(locationOptions) {
        "use strict";
        var k;
        // Enable the user to edit trip details.
        enableInput();

        // Display disambiguation information for each location.
        for (k in locationOptions) {
            if (locationOptions.hasOwnProperty(k)) {
                showDisambiguation(k, vecToArray(locationOptions[k]));
            }
        }
    }

    // Event handler for the optimized route as determined by the control.
    function routeCallback(locations, displayNames) {
        "use strict";
        var leg,
            wp = 0,
            routeRequest;

        // Set global references.
        optimizedRouteArray = vecToArray(locations);
        optimizedRouteNamesArray = vecToArray(displayNames);
        routeRequest = "http://dev.virtualearth.net/REST/v1/Routes/" +
                travelModeSelect.value + "/" +
                "?optmz=" + optimizeSelect.value +
                "&distanceUnit=" + (travelUnit.value === "Miles" ? "mi" : "km") +
                "&routePathOutput=Points" +
                "&output=json" +
                "&jsonp=mapRouteCallback";

        // Append each string in the locations array (each element has the format
        // "47.620056,-122.349261") to the request string.
        for (leg in optimizedRouteArray) {
            if (optimizedRouteArray.hasOwnProperty(leg)) {
                routeRequest += "&wp." + wp + "=" + optimizedRouteArray[leg];
                wp++;
            }
        }

        map.getCredentials(function (credentials) {
            // Append credentials.
            routeRequest += "&key=" + credentials;

            // Get the route from the map control.
            getRouteMap(routeRequest);
        });
    }

    // Event handler for when the control has finished a cancelation operation.
    function canceledCallback() {
        "use strict";
        errorCallback("Operation canceled");
    }

    // Event handler for when the control has encountered an unrecoverable error.
    function errorCallback(message) {
        "use strict";
        // Set message.
        errorMessageText.innerHTML = message;

        // Enable the user to create another trip.
        enableInput();

        showElement("taskHostTurns", false);
        showElement("taskHostWelcomeTask", true);
    }

    function vecToArray(vec) {
        "use strict";
        var i,
            arr = [];
        for (i in vec) {
            if (vec.hasOwnProperty(i)) {
                arr.push(vec[i]);
            }
        }
        return arr;
    }

    // Return the public functionality.
    return {
        onLoad: onLoad,
        onEditRoute: onEditRoute,
        onCancel: onCancel,
        addWaypoint: addWaypoint,
        getDirections: getDirections,
        resetWaypoints: resetWaypoints,
        addDeliveryWaypoints: addDeliveryWaypoints,
        addParkWaypoints: addParkWaypoints,
        onBingMapsKey: onBingMapsKey
    };
}();