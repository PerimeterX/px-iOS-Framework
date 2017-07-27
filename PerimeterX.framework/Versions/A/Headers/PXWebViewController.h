//
//  PXWebViewController.h
//  PerimeterX
//
//  Created by Oded Regev on 6/11/17.
//  Copyright © 2017 PerimeterX. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PXBlockResponse.h"

@protocol PXWebViewDelegate <NSObject>

-(void) captchaSuccess;

-(void) captchaFailure;

@end

@interface PXWebViewController : UIViewController <UIWebViewDelegate>

@property (nonatomic, weak) id<PXWebViewDelegate> delegate;
@property (nonatomic, strong) PXBlockResponse *blockResponse;

@end
