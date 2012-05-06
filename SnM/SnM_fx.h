/******************************************************************************
/ SnM_FX.h
/
/ Copyright (c) 2012 Jeffos
/ http://www.standingwaterstudios.com/reaper
/
/ Permission is hereby granted, free of charge, to any person obtaining a copy
/ of this software and associated documentation files (the "Software"), to deal
/ in the Software without restriction, including without limitation the rights to
/ use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
/ of the Software, and to permit persons to whom the Software is furnished to
/ do so, subject to the following conditions:
/ 
/ The above copyright notice and this permission notice shall be included in all
/ copies or substantial portions of the Software.
/ 
/ THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
/ EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
/ OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
/ NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
/ HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
/ WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
/ FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
/ OTHER DEALINGS IN THE SOFTWARE.
/
******************************************************************************/

//#pragma once

#ifndef _SNM_FX_H_
#define _SNM_FX_H_

extern int g_buggyPlugSupport;

int GetFXByGUID(MediaTrack* _tr, GUID* _g);
bool IsFXBypassedSelTracks(COMMAND_T*);
void ToggleExceptFXBypassSelTracks(COMMAND_T*);
void ToggleAllFXsBypassSelTracks(COMMAND_T*);
void ToggleFXBypassSelTracks(COMMAND_T*);
void SetFXBypassSelTracks(COMMAND_T*);
void SetFXUnbypassSelTracks(COMMAND_T*);
void SetAllFXsBypassSelTracks(COMMAND_T*);

bool IsFXOfflineSelTracks(COMMAND_T*);
void ToggleFXOfflineSelTracks(COMMAND_T*);
void ToggleExceptFXOfflineSelTracks(COMMAND_T*);
void ToggleAllFXsOfflineSelTracks(COMMAND_T*);
void SetFXOfflineSelTracks(COMMAND_T*); 
void SetFXOnlineSelTracks(COMMAND_T*);

void ToggleAllFXsOfflineSelItems(COMMAND_T*);
void SetAllFXsOfflineSelItems(COMMAND_T*);
void ToggleAllFXsBypassSelItems(COMMAND_T*);
void SetAllFXsBypassSelItems(COMMAND_T*);

void SelectTrackFX(COMMAND_T*);
int GetSelectedTrackFX(MediaTrack* _tr);

#ifdef _WIN32
int GetUserPresetNames(const char* _fxType, const char* _fxName, WDL_PtrList<WDL_FastString>* _presetNames);
#endif
bool TriggerFXPreset(MediaTrack* _tr, int _fxId, int _presetId, int _dir);
void NextPresetSelTracks(COMMAND_T*);
void PrevPresetSelTracks(COMMAND_T*);
void NextPrevPresetLastTouchedFX(COMMAND_T*);
void TriggerFXPreset(MIDI_COMMAND_T* _ct, int _val, int _valhw, int _relmode, HWND _hwnd);
void MoveFX(COMMAND_T*);

#endif