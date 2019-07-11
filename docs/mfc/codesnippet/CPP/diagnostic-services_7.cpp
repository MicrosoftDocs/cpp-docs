// VERIFY can be used for things that should never fail, though
// you may want to make sure you can provide better error recovery
// if the error can actually cause a crash in a production system.

// It _is_ possible that GetDC() may fail, but the out-of-memory
// condition that causes it isn't likely. For a test application,
// this use of VERIFY() is fine. For any production code, this
// usage is dubious.

// get the display device context
HDC hdc;
VERIFY((hdc = ::GetDC(hwnd)) != NULL);

// give the display context back
::ReleaseDC(hwnd, hdc);