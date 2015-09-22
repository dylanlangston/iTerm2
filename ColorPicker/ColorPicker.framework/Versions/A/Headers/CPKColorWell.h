#import <Cocoa/Cocoa.h>
#import "CPKSwatchView.h"

/**
 * Shows a color well. When clicked, it opens a popover with a color picker attached to it.
 * TODO(georgen): Use an NSCell subclass. Currently this control doesn't do a lot of what you'd
 * expect a control to do because it doesn't have a cell.
 */
@interface CPKColorWell : NSControl

@property(nonatomic, retain) NSColor *color;
@property(nonatomic, assign) BOOL alphaAllowed;

@end
