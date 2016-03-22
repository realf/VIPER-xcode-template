//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  ___COPYRIGHT___
//

#import <UIKit/UIKit.h>

#import "___FILEBASENAME___ViewProtocol.h"

//--

@protocol ___FILEBASENAMEASIDENTIFIER___UserEventHandlerProtocol;

//--

@interface ___FILEBASENAMEASIDENTIFIER___ViewController : UIViewController <___FILEBASENAMEASIDENTIFIER___ViewProtocol>

@property (nonatomic) id<___FILEBASENAMEASIDENTIFIER___UserEventHandlerProtocol> eventHandler;

@end
