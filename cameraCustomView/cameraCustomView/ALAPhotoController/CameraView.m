//
//  CameraView.m
//  cameraCustomView
//
//  Created by Arpad Larrinaga on 5/1/15.
//  Copyright (c) 2015 ALA. All rights reserved.
//

#import "CameraView.h"
#import <AVFoundation/AVFoundation.h>

@implementation CameraView

+ (Class)layerClass
{
    return [AVCaptureVideoPreviewLayer class];
}

- (AVCaptureSession *)session
{
    return [(AVCaptureVideoPreviewLayer *)[self layer] session];
}

- (void)setSession:(AVCaptureSession *)session
{
    [(AVCaptureVideoPreviewLayer *)[self layer] setSession:session];
}

@end
