/*
	NSDraggingSession.h
	Application Kit
	Copyright (c) 2010-2011, Apple Inc.
	All rights reserved.
*/

#import <Foundation/NSObject.h>
#import <Foundation/NSGeometry.h>
#import <AppKit/NSDragging.h>

@class NSPasteboard, NSImage, NSDraggingItem;
@protocol NSDraggingSource, NSPasteboardWriting;

NS_CLASS_AVAILABLE(10_7, NA)
@interface NSDraggingSession : NSObject {
@private
    void *_private;
    NSPoint _dragLocation;
    NSPoint _offset;
    id<NSDraggingSource> _source;
    id _alternateDragSource;
    id<NSDraggingSource> _filePromiseDragSource;
    NSPasteboard *_pboard;
    NSImage *_compositeImageCache;
    NSInteger _leaderIndex;
    BOOL _animatesOnCancelOrFail;
    BOOL _reservedBOOL1;
    BOOL _reservedBOOL2;
    BOOL _reservedBOOL3;
    BOOL _reservedBOOL4;
    BOOL _reservedBOOL5;
    BOOL _reservedBOOL6;
    BOOL _reservedBOOL7;
    NSInteger _reservedInteger1;
    NSInteger _reservedInteger2;
}

/* Controls the dragging formation when the drag is over the source. The default value is NSDraggingFormationNone. */
@property NSDraggingFormation draggingFormation;

/* Controls whether the dragging image animates back to its starting point on a cancelled or failed drag. -draggingSession:endedAtPoint:operation: is a good time to change this value depending on the result of the drag operation. The default value is YES.
 */
@property BOOL animatesToStartingPositionsOnCancelOrFail;

/* The index of the draggingItem under the cursor. The default is the NSDraggingItem closest to the location in the event that was passed to -beginDraggingSessionWithItems:event:source:
 */
@property NSInteger draggingLeaderIndex;

/* Returns the pasteboard object that holds the data being dragged. */
@property(readonly) NSPasteboard *draggingPasteboard;

/* Returns a number that uniquely identifies the dragging session. */
@property(readonly) NSInteger draggingSequenceNumber;

/* The current location (cursor) of the drag in screen coordinates. */
@property(readonly) NSPoint draggingLocation;

/* Use the following enumerate methods to modify the properties of each dragging item. For example, change the drag image and size.
   Note: All changes made here are only in effect while destination is not overriding them. When the drag exits the destination, all properties return to the last values set here.
*/

#if NS_BLOCKS_AVAILABLE
/* Enumerate through each dragging item. Any changes made to the properties of the draggingItem are reflected in the drag when the destination is not overriding them. Classes in the provided array must implement the NSPasteboardReading protocol. Cocoa classes that implement this protocol include NSImage, NSString, NSURL, NSColor, NSAttributedString, and NSPasteboardItem. For every item on the pasteboard, each class in the provided array will be queried for the types it can read using -readableTypesForPasteboard:. An instance will be created of the first class found in the provided array whose readable types match a conforming type contained in that pasteboard item. If an Instance is created from the pasteboard item data, it is placed into an NSDraggingItem along with the dragging properties of that item such as the drag image. The NSDraggingItem is then passed as a parameter to the provided block. Additional search options, such as restricting the search to file URLs with particular content types, can be specified with a search options dictionary.  See the comments for the Pasteboard Reading Options keys in NSPasteboard.h for a full description. Note: all coordinate properties in the NSDraggingItem are in the coordinate system of view. If view is nil, the screen coordinate space is used.
*/
- (void)enumerateDraggingItemsWithOptions:(NSDraggingItemEnumerationOptions)enumOpts forView:(NSView *)view classes:(NSArray *)classArray searchOptions:(NSDictionary *)searchOptions usingBlock:(void (^)(NSDraggingItem *draggingItem, NSInteger idx, BOOL *stop))block;
#endif
@end


