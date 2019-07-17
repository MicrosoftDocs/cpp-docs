// Set the event mask so that the parent gets notified when the text
// of the rich edit control changes.
m_myRichEditCtrl.SetEventMask(m_myRichEditCtrl.GetEventMask() |
                              ENM_CHANGE);