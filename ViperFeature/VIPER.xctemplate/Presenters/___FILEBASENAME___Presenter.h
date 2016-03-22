//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  ___COPYRIGHT___
//

#import "___FILEBASENAME___PresenterProtocol.h"
#import "___FILEBASENAME___UserEventHandlerProtocol.h"

//--

@protocol ___FILEBASENAMEASIDENTIFIER___ViewProtocol;
@protocol ___FILEBASENAMEASIDENTIFIER___InteractorProtocol;

@class ___FILEBASENAMEASIDENTIFIER___Wireframe;

//--

@interface ___FILEBASENAMEASIDENTIFIER___Presenter : NSObject <___FILEBASENAMEASIDENTIFIER___PresenterProtocol, ___FILEBASENAMEASIDENTIFIER___UserEventHandlerProtocol>

@property (nonatomic, weak) ___FILEBASENAMEASIDENTIFIER___Wireframe* wireframe;
@property (nonatomic, weak) id<___FILEBASENAMEASIDENTIFIER___ViewProtocol> view;
@property (nonatomic) id<___FILEBASENAMEASIDENTIFIER___InteractorProtocol> interactor;

@end
