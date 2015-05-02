//
//  CameraViewController.h
//  cameraCustomView
//
//  Created by Arpad Larrinaga on 5/1/15.
//  Copyright (c) 2015 ALA. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^AuthorizedBlock)(BOOL isAuthorized);
typedef void(^PhotoAuthorized)(BOOL isAuthorized);

@protocol CameraDelegate <NSObject>

- (void)placePhoto:(UIImage *)photo;

@end

@interface CameraViewController : UIViewController

@property (nonatomic, assign) id<CameraDelegate> delegate;
@property (nonatomic, assign) CGRect selectedFrame;

- (void)changeCamera:(id)sender;
- (void)snapStillImage:(id)sender;
- (void)isDeviceAuthorized:(PhotoAuthorized)photoAuthorized;
- (void)startCapture;
- (void)isAuthorized:(AuthorizedBlock)authorizedBlock;

@end
