//
//  CameraView.h
//  cameraCustomView
//
//  Created by Arpad Larrinaga on 5/1/15.
//  Copyright (c) 2015 ALA. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AVCaptureSession;

@interface CameraView : UIView

@property (nonatomic) AVCaptureSession *session;

@end
