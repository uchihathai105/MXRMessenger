//
//  MXRMessenger.h
//  Pods
//
//  Created by Scott Kensell on 8/28/17.
//
//

#ifndef MXRMessenger_h
#define MXRMessenger_h

#ifndef MXR_MESSAGE_CELL
#define MXR_MESSAGE_CELL __has_include(<MXRMessenger/MXRMessageCell.h>)
#endif

#ifndef MXR_MESSENGER_VC
#define MXR_MESSENGER_VC __has_include(<MXRMessenger/MXRMessengerViewController.h>)
#endif

// core
#import "MXRGrowingEditableTextNode.h"
#import "MXRMessengerMedium.h"
#import "UIBezierPath+MXRMessenger.h"
#import "UIColor+MXRMessenger.h"
#import "UIImage+MXRMessenger.h"


// message cell
#if MXR_MESSAGE_CELL
#import "MXRMessageCell.h"
#endif


// view controller
#if MXR_MESSENGER_VC
#import "MXRMessengerViewController.h"
#import "MXRMessengerNode.h"
#import "MXRMessengerInputToolbar.h"
#endif

#endif /* MXRMessenger_h */
