#NoEnv ; Recommended for performance and compatibility with future AutoHotkey releases.
#Persistent ; script will stay running after the auto-execute section (top part of the script) completes
#SingleInstance Force ; Replaces the old instance of this script automatically
SendMode Input ; Recommended for new scripts due to its superior speed and reliability

return ; nothing to do in the main part of the script

; === Use the zoom button to scroll ===
DoScroll:
    if (ScrollDir = 1)
        SendInput, {WheelUp}
    else
        SendInput, {WheelDown}
    return

MsNatural4000_ZoomDown:
    ScrollDir := 2
    GoSub, DoScroll
    SetTimer, DoScroll, 80
    return

MsNatural4000_ZoomUp:
    ScrollDir := 1
    GoSub, DoScroll
    SetTimer, DoScroll, 80
    return

MsNatural4000_KeyUp:
    ScrollDir := 0
    SetTimer, DoScroll, Off
    return
; ======

; === Example of using modifiers while pressing a button ===
MsNatural4000_MyFavorites:
    if MsNatural4000.keyModifiers.Shift {
        MsgBox Shift and MyFavorites button
        return
    }

    if MsNatural4000_keyModifiers.LCtrl and MsNatural4000.keyModifiers.RCtrl {
        MsgBox LeftCtrl+RightCtrl and MyFavorites button
        return
    }

    if MsNatural4000.keyModifiers.Fn {
        MsgBox "My Favorites Button while Fn-lock is Enabled"
    }

    return
; ======

; === Map extra numpad's keys to their ordinary functionality ===
; numpad "="
MsNatural4000_NumpadEqual:
    Send {=}
    return

; numpad "("
MsNatural4000_NumpadLeftBracket:
    Send, #^{Left}
    return

; numpad ")"
MsNatural4000_NumpadRightBracket:
    Send, #^{Right}
    return
; ======

; === Use favorites buttons ===
MsNatural4000_Favorites1:
	Send, #^{Left}
	return

MsNatural4000_Favorites2:
    Send, #^2
    return

MsNatural4000_Favorites3:
    Send, #^3
    return

MsNatural4000_Favorites4:
    Send, #^4
    return

MsNatural4000_Favorites5:
    Send, #^5
    return
; ======
