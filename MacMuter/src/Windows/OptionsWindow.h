//////////////////////////////////////////////////////////////////////

#pragma once

#import <Cocoa/Cocoa.h>

//////////////////////////////////////////////////////////////////////

@interface ClickableTextField : NSTextField

- (void)mouseDown:(NSEvent *)event;

@end

//////////////////////////////////////////////////////////////////////

@interface LinkButton : NSButton

- (void)resetCursorRects;

- (void)set_text_color_with_red:(float)red green:(float)green blue:(float)blue;

@property(strong) NSCursor *cursor;

@end

//////////////////////////////////////////////////////////////////////

@interface OptionsWindow : NSWindowController <NSTabViewDelegate, NSWindowDelegate>

@property(weak) IBOutlet NSButton *enable_hotkey_button;
@property(weak) IBOutlet NSButton *button_run_at_login;
@property(weak) IBOutlet ClickableTextField *hotkey_textfield;
@property(weak) IBOutlet LinkButton *github_button;
@property(weak) IBOutlet NSButtonCell *github_button_cell;
@property(weak) IBOutlet NSButton *show_overlay_button;

- (IBAction)enable_hotkey_changed:(NSButton *)sender;
- (IBAction)ok_pressed:(id)sender;
- (IBAction)run_after_login_changed:(NSButton *)sender;
- (IBAction)github_link_clicked:(LinkButton *)sender;
- (IBAction)show_overlay_button_changed:(NSButton *)sender;

- (void)on_deactivate;

- (void)on_hotkey_scanned;
- (void)set_hotkey;

- (void)update_controls;

@end
