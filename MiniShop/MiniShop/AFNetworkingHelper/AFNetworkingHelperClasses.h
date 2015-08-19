//
//  AFNetworkingHelperClasses.h
//  MiniShop
//
//  Created by Yifang Zhang on 8/19/15.
//  Copyright (c) 2015 Yifang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

@interface AFNetworkingHelperClasses : NSObject

@property AFHTTPRequestOperationManager * AFNManager;

-(void) initWithManager;

-(void) AFNGETRequest;
-(void) AFNPOSTURLFormEncodedRequest;
-(void) AFNMutiPartRequest;
-(void) AFNDownloadTask;
-(void) AFNUploadTask;
-(void) AFNUploadWithMutiPartAndProgress;
-(void) AFNDataTask;

@end
