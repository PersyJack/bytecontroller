/*
 
 PreferenceWindow.h		Copyright � 2004 Audun Wilhelmsen
 ---------------------------------------------------------------
 Window subclass for our preferences window. Among other things
 it gives us control over key equivalents. Also a delegate
 for the tab view, to enable animated window resize.
 NOTE: Should we handle tab view delegation to 
 PreferencesDelegate.h?
 ---------------------------------------------------------------
 
 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA
 
 */

#import <Cocoa/Cocoa.h>

// +22
#define GENERAL_HEIGHT  265
#define HOTKEYS_HEIGHT  417
#define APPEARANCE_HEIGHT 510

@interface PreferenceWindow : NSWindow
{
}

//- (BOOL)performKeyEquivalent:(NSEvent *)event;
- (void)tabView:(NSTabView *)tabView willSelectTabViewItem:(NSTabViewItem *)tabViewItem;

@end
